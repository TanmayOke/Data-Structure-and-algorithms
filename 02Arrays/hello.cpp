#include <iostream>
using namespace std;

int main(){


    int marks[]{22,55,44,66,88};
    int siize1 = sizeof(marks)/sizeof(int);
    cout<<"Marks of student 1 is "<<marks[0]<<endl;
    cout<<"Marks of student 2 is "<<marks[1]<<endl;
    marks[2]=99;
    cout<<"Marks of student 3 is "<<marks[2]<<endl;
    cout<<"Marks of student 4 is "<<marks[3]<<endl;
    cout<<"Marks of student 5 is "<<marks[4]<<endl;

    int size = 5;
    double price[size];
    for(int i=0;i<size;i++){
        cin>>price[i];
    }
    for(int i=0;i<size;i++){
        cout<<"Price of item "<<i+1<<" is "<<price[i]<<endl;
    }

    return 0;
}