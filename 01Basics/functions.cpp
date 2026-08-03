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

void changeValue(int a){
    a*=2;
    cout<<"Value of a inside function: "<<a<<endl;
}
int main(){
    hello();
    int summation=sum(556,798789);
    cout<<"Summation is: "<<summation<<endl;

    //PASS BY VALUE!
    int x=66,y=88;
    cout<<"Summation is: "<<sum(x,y)<<endl;

    int a=15;
    cout<<"Value of a before function call: "<<a<<endl;
    changeValue(a);
    cout<<"Value of a after function call: "<<a<<endl;
    //========COPY OF VARIABLES IS MADE AND PASSED TO FUNCTION========//

    cout<<"Minimum is: "<<min(444,7)<<endl;
    cout<<"Sum of first 10 numbers is: "<<sumOfNnumbers(10)<<endl;
    cout<<"Factorial of 5 is: "<<factorial(5)<<endl;
    return 0;
}