#include <iostream>
#include <cstdlib>
#include "ctime"
#include <vector>
struct Student
{
    std::string Name;
    int Ratings[2];
    std::string Subjects[2];
};
std::vector<Student> sort_by_middle(std::vector<Student> students){
    std::vector<double> middleMarks(students.size());
    for (unsigned long i =0; i < students.size(); i++){
        for (unsigned long j =0; j < 2; j++){
            middleMarks[i] += students[i].Ratings[j];
        }
        middleMarks[i] = middleMarks[i]/2;
    }
    Student count;
    for(unsigned long i = students.size() - 1; i >= 1; i--) {
        for (unsigned long j = 0; j < i; j++) {
            if (middleMarks[j] < middleMarks[j + 1]) {
                double foo = middleMarks[j];
                middleMarks[j] = middleMarks[j + 1];
                middleMarks[j+1] = foo;
                count = students[j];
                students[j] = students[j+1];
                students[j+1] = count;
            }
        }
}
    return students;
}

int main() {
    int k;
    std::vector<Student> stud(3);
    for (int i =0; i< stud.size(); i++){
        std::cout << "enter the name of the student"<< std::endl;
        std::cin>> stud[i].Name;
        for (int j =0; j<2; j++){
            std::cout << "enter the Subject"<< std::endl;
            std::cin>> stud[i].Subjects[j];
            std::cout << "enter the Rating" << std::endl;
            std::cin>> stud[i].Ratings[j];
        }

    }
   std::vector<Student>sort_students =  sort_by_middle(stud);
    for (int i =0; i < sort_students.size(); i++){
        std::cout << sort_students[i].Name << std::endl;
    }
}
