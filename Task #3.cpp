//Task #3 (Private Members, Getter and Setter)

#include <iostream>
using namespace std;

class Student{
    
    
    private:
        int marks;


    public:
        string name;
    
    void setMarks(int m){
        if(m>=0 && m<=100){
            marks = m;
        } else {
            cout << "Invalid marks." << endl;
        }
    }


    int getMarks(){
        return marks;
    }

    char getGrade(){
        if(marks >= 80){
            return 'A';
        } else if(marks >= 60){
            return 'B';
        } else if(marks >= 50){
            return 'C';
        } else {
            return 'F';
        }
    }

    
};

int main(){
    Student student1;
        student1.name = "Ayesha";
        student1.setMarks(85);
        cout << "Student Name: " << student1.name << endl;
        cout << "Student Marks: " << student1.getMarks() << endl;
        cout << "Student Grade: " << student1.getGrade() << endl;

    
        return 0;

}

// What happens if you write s.marks = 90; in main()? Write your answer as a comment in your code.

// If you write s.marks = 90; in main(), it will result in a compilation error because 'marks' is a private member of the Student class 
// and cannot be accessed directly from outside the class. You must use the public setter method setMarks() to modify the value of 'marks'.