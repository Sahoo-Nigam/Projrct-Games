#include<iostream>
#include<string>
using namespace std;
char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int checkarr[20],top=-1;

void display();
void player1(int);
void player2(int);
bool check();

int main()
{
    cout<<"                  ********************WELCOME TO NIGAM GANE********************"<<endl;
    string name1,name2;
    int choice;
    bool checkr;
    cout<<"Enter the name of player1: ";
    getline(cin,name1);
    cout<<"Enter the name of player2: ";
    getline(cin,name2);
    cout<<endl<<name1<<",your symbol is: X"<<endl<<name2<<",your symbol is : O"<<endl<<endl;
    display();
    int i=0;
    for( i=0;i<9;i++){
        if(i==0||i==2||i==4||i==6||i==8)
        {
            cout<<name1<<", your turn: ";
            cin>>choice;
            player1(choice); 
            checkr =check();
            if(checkr==true){
                cout<<"Congratulation "<<name1<<",you won";
                break;
            }
        } 
        else
        {
            cout<<name2<<", your turn: ";
            cin>>choice;
            player2(choice); 
            checkr =check();
            if(checkr==true){
                cout<<"Congratulation "<<name2<<",you won";
                break;
            }
        }
    }
    if(i==9)
    {
        cout<<"Game terminated.";
    }
   
    return 0;
}
void display()
{
     cout<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<a[i][0]<<" | "<<a[i][1]<<" | "<<a[i][2]<<endl;
        cout<<"---------"<<endl;
    }
}
void player1(int choice){
   switch(choice)
    {
        case 1: a[0][0]='X';
        display();
        break;
        case 2:a[0][1]='X';
        display();
        break;
        case 3:a[0][2]='X';
        display();
        break;
        case 4:a[1][0]='X';
        display();
        break;
        case 5:a[1][1]='X';
        display();
        break;
        case 6:a[1][2]='X';
        display();
        break;
        case 7:a[2][0]='X';
        display();
        break;
        case 8:a[2][1]='X';
        display();
        break;
        case 9:a[2][2]='X';
        display();
        break;
    }
}
void player2(int choice){
    switch(choice)
     {
        case 1: a[0][0]='O';
        display();
        break;
        case 2:a[0][1]='O';
        display();
        break;
        case 3:a[0][2]='O';
        display();
        break;
        case 4:a[1][0]='O';
        display();
        break;
        case 5:a[1][1]='O';
        display();
        break;
        case 6:a[1][2]='O';
        display();
        break;
        case 7:a[2][0]='O';
        display();
        break;
        case 8:a[2][1]='O';
        display();
        break;
        case 9:a[2][2]='O';
        display();
        break;
   }

}
bool check(){
    if((a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X')||(a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='0'))
    {
        return true;
    }
    else if((a[1][0]=='X' && a[1][1]=='X' && a[1][2]=='X')||(a[1][0]=='O' && a[1][1]=='O' && a[1][2]=='O'))
    {
        return true;
    }
     else if((a[2][0]=='X' && a[2][1]=='X' && a[2][2]=='X')||(a[2][0]=='O' && a[2][1]=='O' && a[2][2]=='O'))
    {
        return true;
    } 

    else if((a[0][0]=='X' && a[1][0]=='X' && a[2][0]=='X')||(a[0][0]=='O' && a[1][0]=='O' && a[2][0]=='O'))
    {
        return true;
    }
    else if((a[0][1]=='X' && a[1][1]=='X' && a[2][1]=='X')||(a[0][01]=='O' && a[1][1]=='O' && a[2][1]=='O'))
    {
        return true;
    }
     else if((a[0][2]=='X' && a[1][2]=='X' && a[2][2]=='X')||(a[0][2]=='O' && a[1][2]=='O' && a[2][2]=='O'))
    {
        return true;
    }

     else if((a[0][0]=='X' && a[1][1]=='X' && a[2][2]=='X')||(a[0][0]=='O' && a[1][1]=='O' && a[2][2]=='O'))
    {
        return true;
    }
     else if((a[2][0]=='X' && a[1][1]=='X' && a[0][2]=='X')||(a[2][0]=='O' && a[1][1]=='O' && a[0][2]=='O'))
    {
        return true;
    }
    else
    {
        return false;
    }
}