#include<iostream>

using namespace std;


int main(){

cout << " Enter Number of boys, number of girls and number of teachers : ";
int nb, ng, nt;
cin >> nb >> ng >> nt;

bool b1 = (nb > 25) ; cout << b1 << "\n";//nb greater than 25

bool b2 = (ng <= 30) ; cout << b2 << "\n";//ng less than or equal to 30

bool b3 = (nb > 20 && nt > 2 || ng > 30 && nt > 4);cout << b3 << "\n";//nb > 20 and nt > 2, or ng > 30 and nt > 4

bool b4 = (nb < 60 || ng < 70);cout << b4 << "\n";//Either nb < 60 or ng < 70

bool b5 = (  !(nb >= 60) && !(ng >= 70) ); cout << b5 << "\n";//Neither nb >= 60 nor ng >= 70

bool b6 = (nb == ng + 10); cout << b6 << "\n";//nb is 10 more than ng

bool b7 = (nb - ng > 10 || nt > 5); cout << b7 << "\n";//The difference between nb and ng is more than 10 or nt > 5

bool b8 = (nb == ng + 10 || ng == nb + 15);cout << b8 << "\n";// Either nb is 10 more than ng, or ng is 15 more than nb
}




