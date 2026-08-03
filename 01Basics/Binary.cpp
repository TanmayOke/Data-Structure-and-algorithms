#include <iostream>
using namespace std;

int DecimalToBinary(int n){
    int ans=0,pow=1;

    while(n>0){
        int rem = n%2;
       
        ans+=rem*pow;
        n/=2;
        pow*=10;
    }
    return ans;
}

int binToDec(int BinNum){
    int ans=0,pow=1;
    while(BinNum>0){
        int rem = BinNum%10;
      
        ans+=rem*pow;
          BinNum/=10;
        pow*=2;
    }
    return ans;
}

int main(){

    cout<<"Enter the number:-";
    int n;  
    cin>>n;
    cout<<"Binary of "<<n<<" is "<<DecimalToBinary(n)<<endl;
    cout<<"Enter the number:-";
    int b;
    cin>>b;
    cout<<"Decimal of "<<b<<" is "<<binToDec(b)<<endl;

    return 0;
}