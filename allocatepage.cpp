#include<iostream>
using namespace std;

bool isPossible(int books[], int size, int students, int mid){
    int studentCount = 1;
     int pageSum = 0;
    for(int i = 0; i < size; i++){
        if(pageSum + books[i] <= mid){
            pageSum += books[i];
        }
        else{
            studentCount++;
            if(studentCount <= students && books[i] <= mid){
                pageSum = books[i];
            } else{
                return false;
            }
        }
    }
    return true;
}

int main(){
    // int books[] = {10, 20, 30, 40};
    // int books[] = {5, 17, 100, 11};
    // int books[] = {25, 46, 28, 49, 24};
    int books[] = {3};
    // int size = 4;
    // int size = 5;
    int size = 1;
    //books -> 4
    // int students = 2;
    // int students = 4;
    int students = 1;
    
    //start
    int start = 0;
    int end = -1;
    int pageSum = 0;
    for(int i=0; i < size; i++){
        pageSum += books[i];
    }
    end = pageSum;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end){
        if(isPossible(books, size, students, mid)){
            ans = mid;
            end = mid - 1;
        } else{
            //no solution
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    cout<<"answer -: " << ans << endl;

}