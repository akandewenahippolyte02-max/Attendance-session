#include "Student.h"
#include <iostream>

Student::Student(std::string idx, std::string n)
    : indexNumber(idx), name(n) {}

std::string Student::getIndexNumber() const {
    return indexNumber;
}

std::string Student::getName() const {
    return name;
}

void Student::setIndexNumber(std::string idx) {
    indexNumber = idx;
}

void Student::setName(std::string n) {
    name = n;
}

void Student::displayStudent() const {
    std::cout << "Index Number: " << indexNumber << std::endl;
    std::cout << "Name: " << name << std::endl;
}
