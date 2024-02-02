#include<iostream>

using namespace std;


int main(){


cout << " Enter 5 numbers : ";
double n1,n2,n3,n4,n5;
cin >> n1>>n2>>n3>>n4>>n5;

cout<< "The average = "<<(n1+n2+n3+n4+n5)/5 << endl;

cout<< "The sum of the first 3 numbers divided by the sum of the last 2 numbers = "
    << (n1+n2+n3)/(n4+n5) << endl;

cout<< "The average of the first 3 numbers divided by the average of the last 2 numbers = "
    << ((n1+n2+n3)/3)/((n4+n5)/2) ;
}




