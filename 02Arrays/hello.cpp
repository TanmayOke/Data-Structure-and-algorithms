#include <iostream>
using namespace std;

int main(){

    
    int marks[]{22,55,44,66,88};
    cout<<"Marks of student 1 is "<<marks[0]<<endl;
    cout<<"Marks of student 2 is "<<marks[1]<<endl;
    marks[2]=99;
    cout<<"Marks of student 3 is "<<marks[2]<<endl;
    cout<<"Marks of student 4 is "<<marks[3]<<endl;
    cout<<"Marks of student 5 is "<<marks[4]<<endl;

    return 0;
}