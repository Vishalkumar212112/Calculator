#include<iostream>
using namespace std;
int main(){

cout<<" Add + "<<endl;
cout<<" Subtract -  "<<endl;
cout<<" Multiply *  "<<endl;
cout<<" Divide /  "<<endl;

int num1,num2;
char opr;
cout<<" Enter the first value"<<endl;
cin>>num1;

cout<<"Enter the operator: "<<endl;
cin>>opr;

cout << "Enter the second value: "<<endl;
cin>>num2;


//opr=num1+num2;
cout<<"Enter the opr.."<<endl;
if (opr == '+')
{
 cout<<num1+num2<<endl;
}
else if(opr == '-')
{
    cout<<num1-num2<<endl;
}
else if(opr == '*')
{
    cout<<num1*num2<<endl;
}
else if(opr == '/')
{
    cout<< (float)num1/num2<<endl;
}
// if (num2!=0)
// else
// {
//     cout<<"Error: DIvision by zaro"<<endl;
// }
else
{
 cout<<"Invalid"<<endl;
}
}