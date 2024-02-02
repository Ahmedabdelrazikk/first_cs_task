#include<iostream>

using namespace std;


int main(){

string student_1,student_2,id_1,id_2;
double grade_1 , grade_2 , sum , avg;


cout << " First student: please enter your name, ID and your grade in math :";
cin >> student_1>>id_1>>grade_1;
cout << " Second student: please enter your name, ID and your grade in math :";
cin >>student_2>>id_2>>grade_2;

cout<<"\n\n";

cout << " First student's name is : "<< student_1<<endl
     << " His ID : "<< id_1 <<endl
     << " His grade in math : "<< grade_1 << "\n\n" ;

cout << " Second student's name is : "<< student_2<<endl
     << " His ID : "<< id_2 <<endl
     << " His grade in math : "<< grade_2 ;

     sum = grade_1 + grade_2;
     avg = (grade_1 + grade_2)/2;

cout<<"\n\n";

cout << " The total math grades of two students = " << sum << endl
     << " The average grade = " << avg;

}




