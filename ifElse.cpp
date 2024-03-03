#include<iostream>

using namespace std;


int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;

    if (age < 18)
    
        cout<<"OOPS, you're not eligible!";
    else if(age<=57){
        cout<<"Congratulations, you're elibible for job!";
        if (age>=55){
            cout<<"Eligible ,but retirement soon!";
        }
    }
    else
        cout<<"Retirement Time! bye bye take care!";
    return 0;
}