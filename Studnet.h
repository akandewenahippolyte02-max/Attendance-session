#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string indexNumber;
    std::string name;

public:
    Student(std::string idx, std::string n);
    std::string getIndexNumber() const;
    std::string getName() const;
    void setIndexNumber(std::string idx);
    void setName(std::string n);
    void displayStudent() const;
};

#endif // STUDENT_H
