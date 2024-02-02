#include<iostream>

using namespace std;


int main(){


    cout << " Enter number : ";

    int n1, mod;

    cin >> n1;

    mod = n1 % 10;
    n1 /= 10;

    mod += n1 % 10;
     n1 /= 10;

    mod += n1 % 10;



    cout<< mod ;

   }




