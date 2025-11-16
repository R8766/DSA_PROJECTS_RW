# 📘 **Minor & Major Projects (August 2025 Batch)**  
Name: Renu Rajendra Wakode  
### 🎓 Roll No: 25/DSA-A3/July-6266  
### 🏫 Internship: Internselite  
### 📅 Submission Date: 16 Nov 2025  


# 🔵 **MINOR PROJECT – Customer Service Simulation (customer\_service.cpp)**

## **Project Title**

Customer Service Center Simulation Using Queue

## **Objective**

To simulate a customer service center using the FIFO queue data structure, demonstrating how customers wait in line and are served by a limited number of representatives.

## **Project Description**

This project models a real-world customer service queue in discrete time steps.
At every time step:

* New customers may arrive randomly
* Representatives serve customers for randomly assigned service durations
* When a representative becomes free, the next customer is dequeued
* Current status of the simulation is displayed (queue length, busy reps, remaining time, total served)

This demonstrates how queues operate under different loads and how FIFO order affects processing.

## **DSA Concepts Used**

* Queue (FIFO implementation)
* Structs for customer representation
* Random time simulation
* Arrays for representatives
* Basic state machine simulation

## **Technologies Used**

* C++
* Console-based program

## **How to Run**

In VS Code terminal, compile:

```
g++ customer_service.cpp -o customer_service
```

Run:

```
./customer_service
```

## **Input Format**

No manual input required — the simulation is automatic.

## **Sample Output**

```
Customer 1 arrived at time 0
Representative 0 is now serving customer 1 for 3 minutes.

--- Time Step 0 ---
Queue size: 0
Customers served: 0
Rep 0: Serving 1 (3 min left)
Rep 1: Free
Rep 2: Free
---------------------
```


## **Challenges Faced**

* Tuning arrival probability to avoid infinite queue buildup
* Keeping representative timers in sync
* Preventing overlap while assigning new customers

---

# 🟢 **MAJOR PROJECT – Library Management System (Library.cpp)**

## **Project Title**

Library Management System Using Singly Linked List

## **Objective**

To implement a dynamic library database using a manually created singly linked list and perform operations like add, remove, search, display, save, and load.

## **Project Description**

This program provides a menu-driven library system that allows the librarian to:

* Add new books
* Remove books using Book ID
* Search books by title or author
* Display all books
* Save the library data to a file (`library.txt`)
* Load data when the program starts

Books are stored as nodes in a **singly linked list**, allowing efficient insertions and deletions.

## **DSA Concepts Used**

* Singly linked list (custom implementation)
* Node creation & deletion
* Pointer traversal
* File handling (persistent data storage)
* Menu-driven programming

## **Technologies Used**

* C++
* File I/O
* Linked list implementation

## **How to Run**

Compile:

```
g++ Library.cpp -o Library
```

Run:

```
./Library
```

## **Input Format Example**

**Add Book**

```
Enter Book ID: 101
Title: Data Structures
Author: Mark Lewis
ISBN: 978-1234567890
Year: 2015
```

**Search**

```
Enter title keyword: Data
```

**Remove**

```
Enter Book ID: 101
```

## **Sample Output**

```
Book added successfully!

----- Book List -----
ID: 101
Title: Data Structures
Author: Mark Lewis
ISBN: 978-1234567890
Year: 2015
```

## **Challenges Faced**

* Handling deletion of head, middle, and last node without segmentation faults
* Ensuring file save/load remains consistent
* Implementing flexible search using substring matching

---

# **GitHub Repository Link**
https://github.com/R8766/DSA_PROJECTS_RW


