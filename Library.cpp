#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Structure to represent a Book
struct Book {
    int id;
    string title;
    string author;
    string isbn;
    int year;
    Book* next;
};

// Head pointer for the linked list
Book* head = nullptr;

// Function to add a new book
void addBook() {
    Book* newBook = new Book();
    cout << "Enter Book ID: "; cin >> newBook->id; cin.ignore();
    cout << "Enter Title: "; getline(cin, newBook->title);
    cout << "Enter Author: "; getline(cin, newBook->author);
    cout << "Enter ISBN: "; getline(cin, newBook->isbn);
    cout << "Enter Publication Year: "; cin >> newBook->year; cin.ignore();
    newBook->next = nullptr;

    if (!head) {
        head = newBook;
    } else {
        Book* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newBook;
    }
    cout << "Book added successfully!\n";
}

// Function to display all books
void displayBooks() {
    if (!head) {
        cout << "No books in the library.\n";
        return;
    }
    Book* temp = head;
    while (temp) {
        cout << "\nBook ID: " << temp->id
             << "\nTitle: " << temp->title
             << "\nAuthor: " << temp->author
             << "\nISBN: " << temp->isbn
             << "\nYear: " << temp->year << "\n";
        temp = temp->next;
    }
}

// Function to search for books by title or author
void searchBook() {
    if (!head) {
        cout << "No books in the library.\n";
        return;
    }
    string key;
    cout << "Enter Title or Author to search: "; getline(cin, key);
    Book* temp = head;
    bool found = false;
    while (temp) {
        if (temp->title == key || temp->author == key) {
            cout << "\nBook ID: " << temp->id
                 << "\nTitle: " << temp->title
                 << "\nAuthor: " << temp->author
                 << "\nISBN: " << temp->isbn
                 << "\nYear: " << temp->year << "\n";
            found = true;
        }
        temp = temp->next;
    }
    if (!found) cout << "No matching books found.\n";
}

// Function to remove a book by ID
void removeBook() {
    if (!head) {
        cout << "No books in the library.\n";
        return;
    }
    int id;
    cout << "Enter Book ID to remove: "; cin >> id; cin.ignore();
    Book *temp = head, *prev = nullptr;
    while (temp && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }
    if (!temp) {
        cout << "Book not found.\n";
        return;
    }
    if (!prev) head = temp->next;
    else prev->next = temp->next;
    delete temp;
    cout << "Book removed successfully!\n";
}

// Function to save books to file
void saveToFile() {
    ofstream out("books.txt");
    Book* temp = head;
    while (temp) {
        out << temp->id << '\n' << temp->title << '\n' << temp->author << '\n'
            << temp->isbn << '\n' << temp->year << '\n';
        temp = temp->next;
    }
    out.close();
}

// Function to load books from file
void loadFromFile() {
    ifstream in("books.txt");
    if (!in) return;
    while (!in.eof()) {
        Book* newBook = new Book();
        in >> newBook->id; in.ignore();
        getline(in, newBook->title);
        getline(in, newBook->author);
        getline(in, newBook->isbn);
        in >> newBook->year; in.ignore();
        newBook->next = nullptr;
        if (!head) head = newBook;
        else {
            Book* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newBook;
        }
    }
    in.close();
}

// Main function with menu
int main() {
    loadFromFile();
    int choice;
    do {
        cout << "\n===== Library Management System =====\n";
        cout << "1. Add Book\n2. Remove Book\n3. Search Book\n4. Display All Books\n5. Save & Exit\n";
        cout << "Enter choice: "; cin >> choice; cin.ignore();
        switch (choice) {
            case 1: addBook(); break;
            case 2: removeBook(); break;
            case 3: searchBook(); break;
            case 4: displayBooks(); break;
            case 5: saveToFile(); cout << "Data saved. Exiting...\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 5);
    return 0;
}
