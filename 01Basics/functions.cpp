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

int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        int lastdigit=n%10;
        n=n/10;
        sum+=lastdigit;
    }
    return sum;
}

int binomailCoefficient(int n,int r){
    return factorial(n)/factorial(r)*factorial(n-r);
}

void chechPrime(int n){
    bool isPrime=true;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime){
            cout<<n<<" is a prime number."<<endl;
        }else{
            cout<<n<<" is not a prime number."<<endl;
        }
}
void totalNumbersOfPrimeNumbers(int n){
    
    int count=0;
    for(int i=2;i<=n;i++){
        bool isPrime=true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime){
            count++;
        }
    }
    cout<<"Total prime numbers between 1 to "<<n<<" are: "<<count<<endl;
    
}

int fibonacci(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
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
    cout<<"Sum of digits of 123 is: "<<sumOfDigits(123)<<endl;
    cout<<"Binomial Coefficient of 5C2 is: "<<binomailCoefficient(5,2)<<endl;
    cout<<"Check if 7 is prime or not: ";
    chechPrime(7);
    cout<<"Total prime numbers between 1 to 10 are: ";
    totalNumbersOfPrimeNumbers(10);
    cout<<"10th Fibonacci number is: "<<fibonacci(10)<<endl;
    return 0;
}