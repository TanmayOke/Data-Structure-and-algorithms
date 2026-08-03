#include <iostream>
using namespace std;

void hello(){
    cout <<"Hello world\n";
}

int sum(int a, int b){
    return a + b;
}
int min(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}

int sumOfNnumbers(int n){
    int sum=0;
    for(int i =0;i<n;i++){
        sum+=i;

    }
    return sum;
}
int factorial(int n){
    int fact = 1;
    for(int i =1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    hello();
    int summation=sum(556,798789);
    cout<<"Summation is: "<<summation<<endl;
    cout<<"Minimum is: "<<min(444,7)<<endl;
    cout<<"Sum of first 10 numbers is: "<<sumOfNnumbers(10)<<endl;
    cout<<"Factorial of 5 is: "<<factorial(5)<<endl;
    return 0;
}