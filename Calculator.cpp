#include<iostream>
#include<math.h>
using namespace std;
int fact(int n){
    if(n==0|| n==1){
        return 1;
    }
    else{
        return (n*fact(n-1));
    }
}
float angle_to_radian(float angle){
    float radians= angle*M_PI/180;
   
}
int main(){
    char operators;
    float num1, num2;
    cout<<"enter the operator :(like +, -, *, / ,^)"<<endl;
    cin>>operators;
   
    switch(operators){
        case '+':
         cout<<endl<<"enter the two number: ";
        cin>>num1 >> num2;
        cout<<num1 <<" + "<<num2 <<" = "<<num1 + num2;
        break;
        case '-':
         cout<<endl<<"enter the two number: ";
        cin>>num1 >> num2;
        cout<<num1 <<" - "<<num2 <<" = "<<num1 - num2;
        break;
        case '*':
         cout<<endl<<"enter the two number: ";
        cin>>num1 >> num2;
        cout<<num1 <<" * "<<num2 <<" = "<<num1 * num2;
        break;
        case '/':
         cout<<endl<<"enter the two number: ";
        cin>>num1 >> num2;
        cout<<num1 <<" / "<<num2 <<" = "<<num1 / num2;
        break;
        case '^':
         cout<<endl<<"enter the two number: ";
        cin>>num1 >> num2;
        cout<<pow(num1, num2);
        break;
        case '!':
         cout<<endl<<"enter the  number: ";
        cin>>num1 ;
        cout<<num1<<"! = "<<fact(static_cast<int>(num1))<<endl;
        break;
    
        default:
        cout<<"enter the correct operator";
        break;
    }
    return 0;
}