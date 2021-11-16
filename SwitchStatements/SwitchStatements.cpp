//Strathmore University Introduction to C++ Programming class
//Basic Switch Statements for multiple conditions.cpp 

#include <iostream>
//#include <string>
using namespace std;

int main()
{
    int opt;
    cout << "Hi. This is your DBIT Sem 1 Timetable (Sep - Dec 2021)";
    cout << "\n1.Monday\n2.Tuesday\n3.Wednesday\n4.Thursday\n5.Friday\n";
    cout << "Please input number of day of week (e.g. 1 is Monday, 2 is Tuesday, 3 is Wednesday, etc)\n\n";
    cin >> opt;

    switch (opt) {
    case 1:
        /* constant - expression*/
        /*code*/
        cout << "Monday Classes\n .........." << endl;
        cout << "\t1. DBIT 1106: Maththematics for Business" << endl;
        cout << "\t2. DBIT 1102: Intro to programming" << endl;
        break;
    case 2:
        /* constant - expression*/
        /*code*/
        cout << "Tuesday Classes\n .........." << endl;
        cout << "\t1. DBIT 1104: Fundamentals of IT" << endl;
        cout << "\t2. DBIT 1104: Ethics " << endl;
        cout << "\t3. DBIT 1106: Maththematics for Business" << endl;
        break;
    case 3:
        /* constant - expression*/
        /*code*/
        cout << "Wednesday Classes\n .........." << endl;
        cout << "\t1. DBIT 1101: Theology" << endl;
        cout << "\t2. DBIT 1103: Business Communication" << endl;
        break;
    case 4:
        /* constant - expression*/
        /*code*/
        cout << "Thursday Classes\n .........." << endl;
        cout << "\t1. DBIT 1105: Principles of Accounting" << endl;
        cout << "\t2. DBIT 1104: Fundamentals of IT" << endl;
        break;
    case 5:
        /* constant - expression*/
        /*code*/
        cout << "Friday Classes\n .........." << endl;
        cout << "\t1. DBIT 1105: Principles of Accounting" << endl;
        cout << "\t2. DBIT 1102: Intro to programming" << endl;
        break;
    default:
        cout << "Invalid choice";
        break;
   }
    return 0;
}
