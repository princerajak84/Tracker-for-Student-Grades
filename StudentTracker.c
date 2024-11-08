#include <stdio.h> 
#include <string.h>
#define MAX_STUDENTS 100  // Maximum number of students allowed
#define MAX_GRADES 5      // Maximum number of grades per student
// Structure to hold student information
struct Student {
    int id;                 // Student ID
    char name[50];          // Student Name
    float grades[MAX_GRADES]; // Array to store grades
    float average;           // Average of grades
};
// Function to calculate the average of a student's grades
float calculateAverage(float grades[], int gradeCount) {
    float sum = 0.0;  // Initialize sum to 0
    for (int i = 0; i < gradeCount; i++) {
        sum += grades[i];  // Add each grade to sum
    }
    return sum / gradeCount; // Return average
}
// Function to add a new student
void addStudent(struct Student students[], int *studentCount) {
    if (*studentCount >= MAX_STUDENTS) {  // Check if max limit reached
        printf("Cannot add more students.\n");
        return;
    }
    struct Student newStudent;  // Temporary variable to hold new student data
    // Input student details
    printf("Enter Student ID: ");
    scanf("%d", &newStudent.id);
    printf("Enter Student Name: ");
    scanf(" %[^\n]", newStudent.name);  // Input string with spaces
    printf("Enter %d grades:\n", MAX_GRADES);
    for (int i = 0; i < MAX_GRADES; i++) {
        printf("Grade %d: ", i + 1);
        scanf("%f", &newStudent.grades[i]);
    }
    // Calculate and store the average grade
    newStudent.average = calculateAverage(newStudent.grades, MAX_GRADES);
    students[*studentCount] = newStudent;  // Add to students array
    (*studentCount)++;  // Increment student count
}
// Function to display all students
void displayStudents(struct Student students[], int studentCount) {
    printf("\nID\tName\t\tAverage\n");
    printf("--------------------------------\n");
    for (int i = 0; i < studentCount; i++) {
        printf("%d\t%s\t\t%.2f\n", students[i].id, students[i].name, students[i].average);
    }
}
int main() {
    struct Student students[MAX_STUDENTS];  // Array to hold students
    int studentCount = 0;  // Counter for current number of students
    int choice;  // Variable for menu choice
    // Main program loop
    do {
        // Display menu
        printf("\nStudent Management System\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addStudent(students, &studentCount);  // Add a new student
                break;
            case 2:
                displayStudents(students, studentCount);  // Display all students
                break;
            case 3:
                printf("Exiting...\n");  // Exit the program
                break;
            default:
                printf("Invalid choice! Please try again.\n");  // Handle invalid input
        }
    } while (choice != 3);  // Loop until the user chooses to exit
    return 0;  // Exit program
}