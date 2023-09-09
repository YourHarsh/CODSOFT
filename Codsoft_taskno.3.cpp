#include<iostream>
#include<vector>;
using namespace std;
int main(){
    vector<string> arr;
    vector<string> arr1;
 string name;
 string grade;



    while(true){
        cout<<"if you have done with student and grade then please type exit"<<" ";
        cout<<"Enter Student Name"<<" ";
        cin>>name;
        cout<<"Please Choose your grade from: A+, A, B+, B, C+, C "<<" ";
        cin>>grade;
        if(grade=="A+" || grade=="A" || grade=="B+" || grade=="B" || grade=="C+" || grade=="C"){
            arr.push_back(name);
            arr1.push_back(grade);
        }
        else if(name=="exit" || grade=="exit"){
            break;
        }
        else{
            cout<<"you choose wrong grade, then your previous data is not save"<<" ";
        }
    }

    for(int i=0; i<arr1.size(); i++){

    }
}