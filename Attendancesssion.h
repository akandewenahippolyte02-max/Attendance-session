#ifndef ATTENDANCESESSION_H
#define ATTENDANCESESSION_H

#include <string>
#include <vector>
#include "Student.h"

class AttendanceSession {
private:
    std::string courseCode;
    std::string date;
    std::string startTime;
    int duration;
    std::vector<Student> students;

public:
    AttendanceSession(std::string cc, std::string d, std::string st, int dur);
    void addStudent(const Student& s);
    void markAttendance();
    void displayAttendance() const;
};

#endif // ATTENDANCESESSION_H
