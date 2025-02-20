#include <iostream>
using namespace std;

int main(){
    string name;
    string id;
    int var1;
    int var2;
    int sum;
    int diff;
    int prod;
    int labGrade;
    int midTerm;
    int finalgrade;
    cout<<"What is your name? "<<endl;
    cin>>name;
    cout<<"Hello "<<name<<endl;
    cout<<"What is your Student ID? "<<endl;
    cin>>id;
    cout<<"Your ID is "<<id<<endl;
    cout<<"Enter first number "<<endl;
    cin>>var1;
    cout<<"Enter second number "<<endl;
    cin>>var2;
    sum = var1 + var2;
    diff = var1 - var2;
    prod = var1 * var2;
    cout<<sum<<endl<<diff<<endl<<prod<<endl;
    cout<<"What is your name? "<<endl;
    cin>>name;
    cout<<"What is your lab grade? "<<endl;
    cin>>labGrade;
    cout<<"What is your midterm grade? "<<endl;
    cin>>midTerm;
    cout<<"What is your final grade? "<<endl;
    cin>>finalgrade;

    return 0;
}
