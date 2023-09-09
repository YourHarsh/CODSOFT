#include <iostream>
using namespace std;
int main()
{
    srand(time(NULL));
    int randNumGenerate = 1 + rand()%100;
    int input;
    cout<<"Please guess a number"<<endl;
    cin>>input;
    int count=1;
    while(input!=randNumGenerate){

        if(randNumGenerate > input){
            cout<<"Your Number is smaller than random number"<<endl;
        }
        else if(randNumGenerate < input){
            cout<<"Your number is greater than random number"<<endl;
        }
        else{
            return 0;
        }
         cout<<"Please guess a number"<<endl;
          cin>>input;
          count++;
    }
    cout<<"You guessed it right"<<" "<<input<<endl;
    cout<<"your Attempt is"<<" "<<count<<endl;
    return 0;
}