#include <iostream>
using namespace std;

int main(){
    int  num1, num2;
    cout<<"Enter First Number"<<" ";
    cin>>num1;
    cout<<"Enter Second Number"<<" ";
    cin>>num2;

    char opr;
    cout<<"Enter the operator you want to perform: + , - , * , /: "<< " ";
    cin>>opr;

    switch(opr){
      case '+':
      cout<< num1 <<" + "<< num2 <<" = "<< num1+num2 <<endl;
      break;

      case '-':
      cout<< num1 <<" - " << num2 <<" = "<< num1-num2 <<endl;
      break;

      case '*':
       cout<< num1 <<" * " << num2 <<" = "<< num1*num2 <<endl;
       break;

       case '/':
        cout<< num1 <<" / " << num2 <<" = "<< num1/num2 <<endl;
        break;

        default:
        cout<< " Please Enter a Valid Operator "<<endl;

    }
    return 0;
}