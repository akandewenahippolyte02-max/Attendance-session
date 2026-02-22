#include "AttendanceSession.h"
#include <iostream>

AttendanceSession::AttendanceSession(std::string cc, std::string d, std::string st, int dur)
    : courseCode(cc), date(d), startTime(st), duration(dur) {}

void AttendanceSession::addStudent(const Student& s) {
    students.push_back(s);
}

void AttendanceSession::markAttendance() {
    // implement attendance marking logic
}

void AttendanceSession::displayAttendance() const {
    // implement attendance display logic
}
