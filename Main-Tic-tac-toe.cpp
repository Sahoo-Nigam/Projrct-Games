//                                      This is TIC TAC TOE Game

#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;
char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int checkarr[9],top=-1,playerid=0;
int Toss(string ,string );
bool Check(int );
void Display();
void Player_X(int);
void Player_O(int);
bool Check_Win_Time();
int Autofill();
bool Valid_Data(int);
void Rule_Regulation();
void Win_Reward();

int main()
{
    cout<<endl<<"                              ************************* WELCOME TO NIGAM GANE *************************"<<endl;
    string name1,name2;
    int choice,Times=0;
    bool check_win;
   
    cout<<"Enter The Name Of Player1: ";
    getline(cin,name1);
    cout<<"Enter The Name Of Player2: ";
    getline(cin,name2);
    Rule_Regulation();
    int coin=Toss(name1,name2);
    Display();

    int i=0;
    for( i=0;i<9;i++)
    {
        if(i%2==0)
        {
            cout<<name1<<", your turn: ";
            cin>>choice;
            if(Valid_Data(choice))
             {
                cout<<endl<<"                              *************************** Game Terminated ***************************";
                break;
             }

            if(Check(choice))
             {
                top++;
                checkarr[top]=choice;
                Times=0;
             }
            else
             {
                Times++;
                if(coin==1)
                (playerid%2==0)?cout<<choice<<" is already filled by "<<name1<<" with X."<<endl:cout<<choice<<" is already filled by "<<name2<<" with O."<<endl;
                else
                (playerid%2==0)?cout<<choice<<" is already filled by "<<name1<<" with O."<<endl:cout<<choice<<" is already filled by "<<name2<<" with X."<<endl;

                i--;

                if(Times==5)
                {
                    int autoval=Autofill();
                    (coin==1)?Player_X(autoval):Player_O(autoval);
                    cout<<endl<<"Automatically filled "<<autoval<<" ,due to you have attempt 5 times."<<endl;
                    i++;
                }
                continue;
             }
            //ternary operator we used here
            (coin==1)?Player_X(choice):Player_O(choice);

            check_win =Check_Win_Time();
            if(check_win==true)
             {
                cout<<"Congratulation "<<name1<<",You Won This Match."<<endl<<"Rewards: \n";
                Win_Reward();
                break;
             }
        } 
        else
        {
            cout<<name2<<", your turn: ";
            cin>>choice;
            
            if(Valid_Data(choice))
            {
                cout<<endl<<"                              *************************** Game Terminated ***************************";
                break;
            }
            if(Check(choice))
             {
                Times=0;
                top++;
                checkarr[top]=choice;
             }
            else
             {
                Times++;
                if(coin==1)
                (playerid%2==0)?cout<<choice<<" is already filled by "<<name1<<" with X."<<endl:cout<<choice<<" is already filled by "<<name2<<" with O."<<endl;
                else
                (playerid%2==0)?cout<<choice<<" is already filled by "<<name1<<" with O."<<endl:cout<<choice<<" is already filled by "<<name2<<" with X."<<endl;

                // (playerid%2==0 )?cout<<choice<<" is already filled by "<<name1<<" with X."<<endl:cout<<choice<<" is already filled by "<<name2<<" with O."<<endl;
                i--;
                if(Times==5)
                {
                    int autoval=Autofill();
                    (coin==2)?Player_X(autoval):Player_O(autoval);
                    cout<<endl<<"Automatically filled "<<autoval<<" ,due to  you have attempt 5 times."<<endl;
                    i++;
                }
                continue;
             }
            //ternary operator we used here
            (coin==2)?Player_X(choice):Player_O(choice);
            check_win =Check_Win_Time();
            if(check_win==true)
             {
                cout<<"Congratulation "<<name2<<",You Won This Match."<<endl<<"Rewards: \n";
                Win_Reward();
                break;
             }
        }
    }
    if(i==9)
    {
        cout<<"Game tied.";
    }
    cout<<"\n                                                -----------------------------------";
    cout<<"\n                                                | Thank You For Palying This Game |"<<endl;
    cout<<"                                                | Developed By: NIGAM SAHOO       |"<<endl;
    cout<<"                                                -----------------------------------"<<endl<<endl;

    return 0;
}
bool Valid_Data(int choice)
{
    if(choice==1||choice==2||choice==3||choice==4||choice==5||choice==6||choice==7||choice==8||choice==9)
    return false;

    return true;
}
void Display()
{
     cout<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<a[i][0]<<" | "<<a[i][1]<<" | "<<a[i][2]<<endl;
        cout<<"---------"<<endl;
    }
}
int Toss(string player1,string player2)////////
{
    int coin;
    srand(time(NULL));
    coin= (rand()%2)+1;
    if(coin==1)
    {
        cout<<endl<<player1<<" ,your symbol is: X"<<endl;
        cout<<player2<<" ,your symbol is : O"<<endl<<endl;
    }
    else
    {
        cout<<endl<<player1<<" ,your symbol is: O"<<endl;
        cout<<player2<<" ,your symbol is : X"<<endl<<endl;       
    }
    return coin;
}
void Player_X(int choice){
   switch(choice)
    {
        case 1: a[0][0]='X';
        Display();
        break;
        case 2:a[0][1]='X';
        Display();
        break;
        case 3:a[0][2]='X';
        Display();
        break;
        case 4:a[1][0]='X';
        Display();
        break;
        case 5:a[1][1]='X';
        Display();
        break;
        case 6:a[1][2]='X';
        Display();
        break;
        case 7:a[2][0]='X';
        Display();
        break;
        case 8:a[2][1]='X';
        Display();
        break;
        case 9:a[2][2]='X';
        Display();
        break;
    }
}
void Player_O(int choice){
    switch(choice)
     {
        case 1: a[0][0]='O';
        Display();
        break;
        case 2:a[0][1]='O';
        Display();
        break;
        case 3:a[0][2]='O';
        Display();
        break;
        case 4:a[1][0]='O';
        Display();
        break;
        case 5:a[1][1]='O';
        Display();
        break;
        case 6:a[1][2]='O';
        Display();
        break;
        case 7:a[2][0]='O';
        Display();
        break;
        case 8:a[2][1]='O';
        Display();
        break;
        case 9:a[2][2]='O';
        Display();
        break;
   }

}
bool Check_Win_Time(){
    if((a[0][0]=='X' && a[0][1]=='X' && a[0][2]=='X')||(a[0][0]=='O' && a[0][1]=='O' && a[0][2]=='O'))
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
//this fuction is used to check wheather the user choice is already filled or not
bool Check(int command)
{
    for(int i=0;i<=top;i++)
    {
        if(command==checkarr[i])
        {
            playerid=i;
            return false;
        }
    }
    return true; 
}
//this function is used to fill the space ,when the user attend morethan 5times to choice their space
int Autofill()
{
    int num;
    srand(time(NULL));
    for(int i=0;;i++)
    {
     num=(rand()%9)+1;
     if(Check(num))
     {
        return num;
     }
    }
}
void Rule_Regulation()
{
    char option;
    cout<<"Would You Like To Look At The Rules Of Game(Y/N): ";
    cin>>option;
    if (option=='Y'||option=='y')
    {
    cout<<endl<<"   Rule's Of Game :-"<<endl;
    cout<<endl<<"-> 1.Choice must be from 1 to 9,otherwisse the game will be treminate.";
    cout<<endl<<"-> 2.One player can attempt at a time atleast 5 attempts ,otherwise that space will be automatically fill by game. "<<endl;
    cout<<endl<<"                              ******************************* THANK YOU! *******************************"<<endl<<endl;;
}
}
//This function is uesd to show the rewards of the winner
void Win_Reward()
{
  srand(time(NULL));
  int reward=rand()%6+1;
  switch (reward)
  {
    case 1:cout<<"        You won a Tshirt!";
    break;
    case 2:cout<<"        You won a bumper ticket!";
    break;
    case 3:cout<<"        You won a TV!";
    break;
    case 4:cout<<"        You won a Smart phone!";
    break;
    case 5:cout<<"        You won  Rs.1000!";
    break;
    case 6:cout<<"        You won Thar car!";
    break;
  }
}