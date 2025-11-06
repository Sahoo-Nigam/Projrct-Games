#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
int Time=rand()%10+1;
char duplicate_data[100];
class s1
{
    string name;
    public :
    s1(string data)
    {
       name=data;
    }
    void encrypt()
    {
        srand(time(NULL));
        for(int i=0;i<=Time;i++)
        {
            int num=rand()%122+1;
            char data=num;
            duplicate_data[i]=data;
        }
        cout<<endl<<"The encrypted data is: "<<duplicate_data<<endl;

    }
    
    void decrypt(string data)
    {
        if(duplicate_data==data)
        cout<<name<<endl;
        else
         cout<<"wrong data"<<endl;
        
    }
};
int main()
{
    bool result=true;
    string name;
    cout<<"Enter your name: ";
    getline(cin,name);
   s1 Nigam(name);
   do{
    char choice;
    cout<<"Do you want to encrypt or decrypt(E/D): ";
    cin>>choice;
    if (choice=='E'||choice=='e')
    {
        Nigam.encrypt();
    }
    else{
        if (choice=='d'||choice=='D')
        {
            cout<<"Enter the data: ";
            getline(cin,name);
           Nigam.decrypt(name);
        } 
        else
        {
            cout<<endl<<"Invalid input.";
            result=false;
        }
    }
   }
   while(result);

    return 0;
}