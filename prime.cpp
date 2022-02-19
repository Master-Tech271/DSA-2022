#include <iostream>
using namespace std;


int main() {
	int n;
	cin>>n;
	int i = 2;
	bool status = true;
	while(i<n){
		if(n%i == 0){
			status = false;
		}
	}
	if(status){
		cout<< "Prime Number";
	} else{
		cout<< "Not Prime";
	}
}