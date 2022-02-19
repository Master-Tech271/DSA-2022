#include <iostream>
using namespace std;

int main() {
    int a = 5;

    int *ptr = &a; //pointer to int and & -> address operator
    cout<<"value of a is : " << *ptr << endl;
    cout<<"address of a is : " << ptr <<endl;
}