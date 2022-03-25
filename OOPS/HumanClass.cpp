#include <iostream>
using namespace std;

class Human{
    private:
        int age;
        string name;
    public:
        //getter and setter
        void setAge(int age){
            this -> age = age;
        }
        void setName(string name){
            this -> name = name;
        }
        int getAge() { return this -> age;}
        string getName() { return this -> name;}

};

int main(){
    //creation of object of Human class
    //heap
    Human *obj = new Human();
    obj->setAge(10);
    obj->setName("Master-Tech");
    cout<< endl << "Age : " << obj->getAge() << endl << "Name : " << obj->getName() << endl << endl;
    //stack
    // Human obj;
    // obj.setAge(10);
    // obj.setName("Master-Tech");
    // cout<< endl << "Age : " << obj.getAge() << endl << "Name : " << obj.getName() << endl << endl;
    return 0;
}