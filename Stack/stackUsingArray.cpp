#include <iostream>
using namespace std;

class Stack{
    private:
        int *arr;
        int size;
        int top;
    
    public:
        Stack(int size){
            this -> size = size;
            top = -1;
            arr = new int[size];
        }

        void push(int data){
            if(top < (size - 1)){
                //insert
                top++;
                arr[top] = data;
            }
            else{
                cout << endl << "Stack is Overflow!";
            }
        }

        void pop(){
            if(top == -1){
                cout << endl << "Stack is Underflow!";
            }
            else{
                top--;
            }
        }

        bool empty(){
            if(top == -1){
                return true;
            }
            return false;
        }

        int Size(){
            return top + 1;
        }

        int getTop(){
            if(top != -1){
                return arr[top];
            }
            return -1;
        }

        void print(){
            if(top >= 0){
                int temp = top;
                cout<<endl;  
                while(temp >= 0){
                    cout << arr[temp] << " ";
                    temp--;
                }
            }
        }

};

int main() {
    Stack stack(5);
    cout<< stack.Size() << endl;
    stack.push(5);
    if(stack.empty())
        cout << "Stack is Empty!";
    else
        cout << "Stack is not Empty!";
    cout << endl;
    stack.print();
    stack.pop();
    stack.print();
    cout<<endl;
    cout<< "Stack Top : " << stack.getTop();

    return 0;
}