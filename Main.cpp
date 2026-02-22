#include "Student.h"
#include "AttendanceSession.h"
#include <iostream>
#include <vector>

void registerStudent(std::vector<Student>& students);
void viewStudents(const std::vector<Student>& students);
void searchStudent(const std::vector<Student>& students);
void createAttendanceSession(std::vector<AttendanceSession>& sessions);

int main() {
    std::vector<Student> students;
    std::vector<AttendanceSession> sessions;
    int choice;

    do {
        std::cout << "1. Register Student\n";
        std::cout << "2. View Students\n";
        std::cout << "3. Search Student\n";
        std::cout << "4. Create Attendance Session\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                registerStudent(students);
                break;
            case 2:
                viewStudents(students);
                break;
            case 3:
                searchStudent(students);
                break;
            case 4:
                createAttendanceSession(sessions);
                break;
            case 5:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}

// implement registerStudent, viewStudents, searchStudent, and createAttendanceSession functions
