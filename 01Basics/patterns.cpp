#include <iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the Number:-";
    cin>>n;


       // problem 1
     cout<<"Number \n";
     cout<<(" \n");
    for(int i =1;i<=n;i++){
        for(int i=1;i<=n;i++){
            cout<< i<< " ";
        }
        cout<< endl;
    }


       // problem 2
    cout<<"Star \n";
    cout<<(" \n");

      for(int i =1;i<=n;i++){
        for(int i=1;i<=n;i++){
            cout<< "*"<< " ";
        }
        cout<< endl;
    }


       // problem 3
    cout<<"Alphabet \n";
    cout<<(" \n");
      for(int i =1;i<=n;i++){
        char ch='A';
        for(int i=1;i<=n;i++){
            cout<< ch<< " ";
            ch=ch+1;
        }
        cout<< endl;
    }


       // problem 4
    int num=1;

    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< num << " ";
            num++;
        }
        cout << endl;
    }




    // problem 5
    char ch='A';

    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< ch << " ";
            ch++;
        }
        cout << endl;
    }

    //=======  PROBLEM 6 ================//

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<< "* ";
        }
        cout<< endl;
    }

    //=======  PROBLEM 7 ================//

    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1<<" ";
        }
        cout<< endl;
    }

//=======  PROBLEM 8 ================//
    char character='A';
     for(int i=0;i<n;i++){
    
        for(int j=0;j<i+1;j++){
            cout<<character<<" ";
           
        }
          character++;
        cout<< endl;
    }

//====Problem 9 ===========/
// for(int i=0;i<n;i++){
//     int num=1;
//     for(int j=0;j<i;j++){
//         cout<<num<<" ";
//         num++;
//     }
//     cout<<endl;
// }

for(int i=0;i<n;i++){
    
    for(int j=1;j<=i+1;j++){
        cout<<j<<" ";
      
    }
    cout<<endl;
}

//======Reverse pattern=====//
for(int i =0;i<n;i++){
    for(int j=i+1;j>0;j--){
        cout<<j<<" ";
    }   
    cout<<endl;
}



//=======  PROBLEM 10 ================//
  int num1=1;
for(int i=0;i<n;i++){
  
    for(int j=i+1;j>0;j--){
        cout<<num1<<" ";
        num1++;
    }
    cout<<endl;
}
return 0;
}