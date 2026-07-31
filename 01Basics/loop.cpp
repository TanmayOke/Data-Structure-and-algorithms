#include <iostream>
using namespace std;
int main(){

        int n;
        cout<<"Enter the number:-";
        cin>>n;

        // int count=1;
        // while(count<=n){
        //     cout<< count << " ";
        //     count++;
        // }

        for(int i=1;i<=n;i++){
            cout<<i <<" ";
        }

        cout<<" \n";
        int sum =0;
         for(int i=1;i<=n;i++){
           sum=sum+i;
        }

        cout<< "Sum is " << sum;

        cout<<" \n";
       int oddSum=0;
       int evenSum=0;
         for(int i=1;i<=n;i++){
            if(i%2!=0){
           oddSum=oddSum+i;
            }else{
                evenSum+=i;
            }
        }
        cout<< "The sum of positive integer is :-"<< oddSum << "\n";
        cout<< "The sum of negative integer is :-"<< evenSum;

         cout<< "\n";


        bool isPrime=true;
        
        // for(int i=2;i<=n-2;i++){
        //     if(n%i==0){
        //         isPrime=false;
        //         break;
        //     }
        // }


        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime){
            cout<< "It is a prime number";
        }else{
            cout <<"Not an prime number";
        }


        int a=5;
        for(int i =1;i<=a;i++){
            int m =10;
            for(int i=0;i<m;i++){
                cout<< "*";
            }
            cout<<endl;
        }
    return 0;
}