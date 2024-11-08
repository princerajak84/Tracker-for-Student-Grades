# Tracker-for-Student-Grades
The Tracker-for-Student-Grades is a simple C program designed to help manage student records, including storing student IDs, names, grades, and calculating their average scores. This console-based application is suitable for small-scale usage in educational environments where student data needs to be entered and viewed.

Features
Add Student Records: Enter student ID, name, and grades.
Calculate Averages: Automatically calculates and stores the average grade for each student.
Display Student Information: View all stored students with their ID, name, and average grade.
User-Friendly Menu: Interactive menu for adding and viewing students.
Getting Started
Prerequisites
C Compiler (e.g., GCC)
Basic knowledge of compiling and running C programs in the terminal or a suitable IDE.
Compilation
To compile the program, open your terminal and navigate to the program's directory. Use the following command:


gcc student_management.c -o student_management
This will create an executable named student_management.

Running the Program
After compiling, you can run the program with the following command:


./student_management
Usage
Upon running, the program presents a menu with options:

Add Student: Enter student information, including their ID, name, and 5 grades.
Display Students: Shows a list of all added students along with their average grade.
Exit: Exits the program.
Example Run

Student Management System
1. Add Student
2. Display Students
3. Exit
Enter your choice: 1

Enter Student ID: 101
Enter Student Name: John Doe
Enter 5 grades:
Grade 1: 85.5
Grade 2: 90.0
Grade 3: 88.0
Grade 4: 92.5
Grade 5: 87.0

Student Management System
1. Add Student
2. Display Students
3. Exit
Enter your choice: 2

ID      Name        Average
------------------------------
101     John Doe    88.60
Code Structure
Student Struct: Holds individual student information.
Functions:
addStudent() – Adds a new student to the system.
displayStudents() – Displays all students with their details.
calculateAverage() – Calculates and returns the average of student grades.
Main Loop: Presents a menu for user interaction.
Contributing
Contributions are welcome! If you have ideas to enhance this program, feel free to fork the repository and create a pull request
