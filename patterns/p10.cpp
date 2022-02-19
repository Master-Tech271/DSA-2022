#include <iostream>
using namespace std;

int main() {
    int n;
    cin>> n;
    int row = 1;

    while(row <= n){
        int space = n - row; //row (1) -> 3
        int j = space;
        while(j){
            cout<< " ";
            j--;
        }
        //
        int num = 1;
        bool flag = true;
        int num_count = (n - space) + (row - 1);
        while(num_count){
            cout<< num;
            if(num >= row){ //decrement when num > row
                flag = false;
            }
            if(flag) {
                num++;
            } else{
                num--;
            }
            num_count--;
        }
        cout<<endl;
        row++;
    }
}