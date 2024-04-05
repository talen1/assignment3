# Assignment 3

This project implements a Queue data structure using a linked list, performs a recursive linear search for the last occurrence of an element in a vector, and sorts integers in a linked list using insertion sort.

# Files

* main.cpp: Demonstrates the functionality of the implemented features.
* Queue.h: Header file for the Queue class.
* Queue.cpp: Implementation of the Queue class.
* LinkedList.h: Header file for the LinkedList class.
* LinkedList.cpp: Implementation of the LinkedList class.

# Compilation

To compile the project, navigate to the project directory in your terminal or command prompt and run the following command:

g++ -std=c++11 -o assignment3 main.cpp Queue.cpp LinkedList.cpp

This command compiles the code with C++11 standard support and outputs an executable named assignment3.

# Running the Program

After compilation, you can run the program by executing the following command in the terminal or command prompt:

# On Windows:

./assignment3.exe

# On Linux or macOS:

./assignment3

This will execute the compiled program and display the results of the queue demonstration, the recursive search, and the linked list insertion sort.

# Expected Output

The program will display:

* The contents of the queue before and after moving the front element to the rear.
* The index of the last occurrence of the searched element in the provided vector.
* The sorted elements of the linked list after inserting integers in an unsorted order.
