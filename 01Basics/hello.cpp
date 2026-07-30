#include <iostream>
using namespace std;

int main(){


    int age = 21;
    char name = 'T';
    float PI =3.14f;

    bool isDanger = true;
    double salary = 5000000.112;
    // cout << age << name << PI << isDanger << salary ;

    cout << " apna college1\n";
        //TYPE CASTING IMPLICIT (AUTOMATIC CONVERSION HOTA HAI)

            char a = 'A';
            int AA = a;
            cout << AA;

            cout<< "\n";

    //TYPE CASTING EXPLICIT(BDE SE CHOTA)

    double price = 100.32;
    int newPrice=(int)price;
    cout << newPrice;
 
        //INPUT AND OUTPUT

        int age1;
        cout << "Enter your age : ";
        cin>>age;
        cout <<"Your age is " << age <<endl;
    return 0;
}