#include <iostream>
using namespace std;

void printNnumbers(int n){
    //f(n) = f(n-1)
    if(n == 0){
        return;
    }
    printNnumbers(n - 1);
    cout<<n<<" ";

}

int main(){
    int n;
    cout<<"Enter the N -: " << endl;
    cin>>n;
    cout<<endl;
    printNnumbers(n);
    return 0;
}