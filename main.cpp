/* 
 * File:   main.cpp
 * Author: R135278L
 *
 * Created on October 22, 2014, 9:27 AM
 */
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */


class Ecommerce;

class Students{
    string name;
    int ecomA1, ecomA2, ecomT1, ecomT2,ecomExam;
    
    friend class Ecommerce;

public:
int getEcomA1(){return ecomA1;}
int getEcomA2(){return ecomA2;}
int getEcomT1(){return ecomT1;}
int getEcomT2(){return ecomT2;}
int getEcomExam(){return ecomExam;} 
    
};

class Ecommerce {
public:
    Students SetMarks(Students student) {
        cout << "E-Commerce Assignment 1 mark...";
        cin >> student.ecomA1;
        cout << "E-Commerce Assignment 2 mark...";
        cin >> student.ecomA2;
        cout << "E-Commerce Test 1 mark...";
        cin >> student.ecomT1;
        cout << "E-Commerce Test 2..";
        cin >> student.ecomT2;        
        cout << "E-Commerce Exam mark...";
        cin >> student.ecomExam;
        return student;

    }
};

int main() {
    Students std;
    Ecommerce ecommerce;
    std=ecommerce.SetMarks(std);// im experiencing an error here
    //I dont see any problem with this - S H Kembo
    
    cout<<"****************Student Ecommerce Marks****************"<<endl;
    cout << "E-Commerce Assignment 1..."<<std.getEcomA1()<<endl;
    cout << "E-Commerce Assignment 2..."<<std.getEcomA2()<<endl;
    cout << "E-Commerce Test 1..."<<std.getEcomT1()<<endl;
    cout << "E-Commerce Test 2..."<<std.getEcomT2()<<endl;
    cout << "E-Commerce Exam..."<<std.getEcomExam()<<endl;
    cout << "E-Commerce Exam..."<<std.getEcomExam()<<endl;
    return 0;
}

