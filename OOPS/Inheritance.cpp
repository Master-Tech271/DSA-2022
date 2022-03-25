#include <iostream>
using namespace std;

class Human{
    protected:
        int age;
        string name;
        string professional;
    //constructor
    public:
        Human(int age, string name, string professional){
            this -> age = age;
            this -> name = name;
            this -> professional = professional;
        }
    public:
        void setAge(int age){ this -> age = age;}
        void setName(string name) { this -> name = name;}
        void setProfessional(string professional) { this -> professional = professional;}

        int getAge() { return this -> age; }
        string getName() { return this -> name; }
        string getProfessional() { return this -> professional; }
        virtual void workingProfessional() = 0;
        void speaking(){
            cout<< "I speak about 5 minutes continously!";
        }
};

//child class
class Men: public Human{
    public:
    Men(int age, string name, string professional): Human(age, name, professional){
    }
    void workingProfessional(){
        cout<< "Working as " << this -> professional << endl;
    }
    ~Men(){
        cout<< endl  << "Men Destructor Called" << endl;
    }
} ;
class Women: public Human{
    public:
    Women(int age, string name, string professional): Human(age, name, professional){
        
    }
    void workingProfessional(){
        cout<< "Working as " << this -> professional  << endl;
    }
    //function overridding (RUNTIME OR DYNAMIC POLYMORPHISM)
    void speaking(){
        cout<< "I speak about 50 minutes continously!";
    }
    //function overloading
    void speaking(int min) {
        cout << "I speak about " << min << " minutes continouslly!";
    }
    ~Women(){
        cout<< endl  << "Women Destructor Called" << endl;
    }
} ;

int main() {
    //men obj in HEAP MEMORY
    cout<< endl << "\tMen" << endl;
    Men *men = new Men(10, "Alex", "Student");
    cout<< "Age : " << men -> getAge() << endl;
    cout<< "Name : " << men -> getName() << endl;
    cout<< "Professional : " << men -> getProfessional() << endl;
    //
    cout<< endl << "\tWomen" << endl;
    Women *women = new Women(21, "Hayley Mathews", "House Wife");
    cout<< "Age : " << women -> getAge() << endl;
    cout<< "Name : " << women -> getName() << endl;
    cout<< "Professional : " << women -> getProfessional() << endl;
    //
    delete men;
    delete women;

    return 0;
}