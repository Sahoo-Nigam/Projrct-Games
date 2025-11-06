#include<iostream>
#include<cmath>
using namespace std;
void Menu();
float Add(float num1,float num2);
float Subtract(float num1,float num2);
float Multiply(float num1,float num2);
float Divide(float num1,float num2);

int main()
{
    int choice,num1,num2;
    float results;
    while(true){
        Menu();
        cout<<"Now, Enter your choice: ";
        cin>>choice;
        cout<<"Enter the first number: ";
        cin>>num1;
        cout<<"Now, Enter the another number: ";
        cin>>num2;
        switch (choice)
        {
            case 1:
                results=Add(num1,num2);
                break;
            case 2:
                results=Subtract(num1,num2);
                break;
            case 3:
                results=Multiply(num1,num2);
                break;
            case 4:
                results=Divide(num1,num2);
                break;
            case 5:
                results=fmod(num1,num2);
                break;
            case 6:
                results=pow(num1,num2);
                break;
        }
        
    }
    return 0;
}
void Menu()
{
    cout<<"---------------------------------------\nWelcome to Simple Calculator\n"<<endl;
    cout<<"Choose one of the following options:"<<endl;
    cout<<"1.Add"<<endl;
    cout<<"2.Subtract"<<endl;
    cout<<"3.Multiply"<<endl;
    cout<<"4.Divide"<<endl;
    cout<<"5.Modulus"<<endl;
    cout<<"6.Power"<<endl;
    cout<<"7.Exit"<<endl;
}
float Add(float num1,float num2){
    return (num1+num2);
}
float Subtract(float num1,float num2)
{
    return (num1-num2);
}
float Multiply(float num1,float num2)
{
    return (num1*num2);
}
float Divide(float num1,float num2)
{
    if(num2==0)
    {
        cout<<"The number can't divide by zero"<<endl;
        return 1;
    }
    else
    {
        return(num1/num2);
    }
}
