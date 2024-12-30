#include <iostream>
using namespace std;
int main(){
    cout<<"******** Lab Excercise 2 ********";
    char xyz ,loopchar='y';
    float num1,num2,ans;
    do{
        cout<<"Enter Operation that you want to performe :";
        cin>>xyz;
        cout<<"Enter Two Number :";
        cin>>num1>>num2;

        switch (xyz)
        {
        case '+' : ans=num1+num2;
            break;
        case '-' : ans=num1-num2;
            break;
        case '*' : ans=num1*num2;
            break;
        case '/' : ans=num1/num2;
            break;
        
        default: cout<<"Error";
            break;
        }
        cout<< "first Number: "<<num1<<endl;
        cout<< "Second Number: "<<num2<<endl;
        cout<<"Operator :" <<xyz<<endl;
        cout<<"Ans: "<< ans<<endl;


        cout<<"\n\n Do you want continue the program(enter Yes for Y and No for N) :";
        cin>>loopchar;
    
    }while (loopchar=='y');
    
    
}