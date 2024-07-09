# Event Management System

## Overview
The Event Management System is a simple C++ console application that allows users to manage events. It supports two types of users: managers and regular users. Managers can add, delete events, and change the manager password. Regular users can view all events, search for specific events, and display events by category.

## Features
- **Manager Login**:
  - Add new events.
  - Delete events.
  - Change manager password.
- **User Login**:
  - Display all events.
  - Display events by category.
  - Search for specific events by name.

## Requirements
- C++ Compiler (GCC, Clang, MSVC, etc.)

## How to Run
1. Compile the code using a C++ compiler:
   ```bash
   g++ -o event_manager event_manager.cpp

   ./event_manager


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

Includes necessary libraries and uses the std namespace.

##Event Class
Defines the Event class with attributes: name, date, location, and category. Includes a constructor to initialize these attributes and a display method to print event details.

##EventManager Class
Manages a collection of events using a vector. Provides methods to add, delete, display all events, display events by category, and search for specific events.

##Global Variables and Functions
Defines global variables for managing events and passwords, and functions for manager and user login.

##Manager Login
Handles manager-specific operations like adding, deleting events, and changing the password.

##User Login
Handles user-specific operations like displaying all events, displaying events by category, and searching for specific events.

##Main Function
Provides the main menu for the Event Management System and handles user input for manager and user logins.

##Usage
Manager Operations
Manager Login:

Enter password (default: 1234).
Choose an operation:
Add new event
Delete event
Change password
Go back to the main menu
Adding an Event:

Enter event details: name, date (YYYY-MM-DD), location, and category.
Deleting an Event:

Enter the name of the event to delete.
Changing Password:

Enter a new password.
User Operations
User Login:

Choose an operation:
Display all events
Display events by category
Search for specific event by name
Go back to the main menu
Displaying All Events:

Shows details of all events.
Displaying Events by Category:

Enter the category to display events.
Searching for an Event:

Enter the name of the event to search.
Sample Usage
Event Management System
1. Manager login
2. User login
3. Exit
Enter your choice: 1
Enter your password: 1234

1. Add new event
2. Delete event
3. Change password
4. Go back
Enter your choice: 1
Enter event name: Conference
Enter event date (YYYY-MM-DD): 2024-08-15
Enter event location: New York
Enter event category: Business
Event added successfully!

Event Management System
1. Manager login
2. User login
3. Exit
Enter your choice: 2

1. Display events
2. Display events by category
3. Search event
4. Go back
Enter your choice: 1

Event Name: Conference
Date: 2024-08-15
Location: New York
Category: Business
---------------------------------------------

##License
This project is licensed under the MIT License. See the LICENSE file for more details.


Copy and save this content into a file named `README.md`. This file will provide clear documentation for users who want to understand and use your Event Management System.
