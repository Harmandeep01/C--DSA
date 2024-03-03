#include<iostream>
#include<string>
using namespace std;
int main()
{   
   

    //dataTypes int, long , float, double
    cout<<"Enter any number";
    double n;
    cin>>n;
    cout<<n;
    //strirng, multiline string getline()//
    string x, str;
    cout<<"\nEnter your name :";
    cin >>x;
    cin.ignore();
    cout<<"\nEnter message :";
    getline(cin,str);
    cout<<"\nHey\t"<<str<<"\t"<<x;

    return 0;
}
