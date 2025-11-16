# 📚 DSA Mini Projects (C++)  
### 👩‍💻 Name: Renu Rajendra Wakode  
### 🎓 Roll No: 25/DSA-A3/July-6266  
### 🏫 Internship: Internselite  
### 📅 Submission Date: 16 Oct 2025  

---

## 🏛 Project 1: Library Management System  

### 🔹 Objective  
To develop a console-based Library Management System in C++ using a **singly linked list** for managing dynamic book records.  

### 🔹 Features  
- Add new book (ID, Title, Author, ISBN, Year)  
- Remove a book by Book ID  
- Search for books by title or author  
- Display all stored books  
- Save & load data using file handling  

### 🔹 Key Concepts  
- **Linked List:** For dynamic book storage  
- **File Handling:** To make data persistent  
- **OOP in C++:** For modular structure  

### 🔹 Output File  
`books.txt` – stores all book details between program runs  

---

## 🧑‍💼 Project 2: Customer Service Simulation  

### 🔹 Objective  
To simulate a real-world **customer service center** using a **queue data structure** in C++.  
Demonstrates the FIFO (First In, First Out) principle.  

### 🔹 Features  
- Random customer arrivals  
- Queue-based waiting system  
- Multiple service representatives (e.g., 3)  
- Random service times for each customer  
- Displays current queue size, busy reps & customers served  

### 🔹 Key Concepts  
- **Queue:** To manage customer order  
- **Simulation Logic:** Time-step–based processing  
- **Randomization:** For realistic behavior  

---

## 🧰 Tools & Technologies  
- **Language:** C++  
- **IDE:** Visual Studio Code  
- **Compiler:** g++ / MinGW  

---

## ▶️ How to Run  

### For Library Project  
```bash
g++ library.cpp -o library
./library

## For Customer Service Project
```bash
g++ customer_service.cpp -o service
./service