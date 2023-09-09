#include<iostream>
#include<fstream>

using namespace std;

int main(){
    string filename;
    cout<<"Enter Your File Name: ";
    cin>>filename;

    ifstream file(filename);
    if(!file.is_open()){
        cout<<"Error! file format not supported "<<endl;
        return 1;
    }

    string word;
    int wordcount;
    while(file >> word){
       wordcount++;
    }

    file.close();

    cout << "Total Word Count in the file "<< filename <<": " << wordcount <<endl;
    return 0;
}