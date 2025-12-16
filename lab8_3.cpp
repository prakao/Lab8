#include <iostream>
#include <string>
using namespace std;

int age,height,bounty;
string Name_char;

int main(){

    cout<<"Enter your age: ";
    cin>>age;

    if(age<=25){
        cout<<"Enter your height: ";
        cin>>height;

        if(height<100){
            Name_char = "Chopper";
        }else if(height<180){
            Name_char = "Usopp";
        }else{
            cout<<"Enter your bounty: ";
            cin>>bounty;

            if(bounty>1100000000){
                Name_char = "Zoro";
            }else{
                Name_char = "Sanji";
            }
        }
    }
    else if(age<=60){
        cout<<"Enter your bounty: ";
        cin>>bounty;

        if(bounty>500000000){
            Name_char = "Jinbe";
        }else{
            Name_char = "Franky";
        }
    }
    else{
        Name_char = "Brook";
    }

    cout<<"Your character = "<<Name_char;
    return 0;
}

/*
"Enter your age: "
"Enter your height: "
"Enter your bounty: "
"Your character = "
"Zoro"
"Sanji"
"Usopp"
"Chopper"
"Franky"
"Brook"
"Jinbe"
*/

