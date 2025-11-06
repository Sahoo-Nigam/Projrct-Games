//This is a random number guessing game
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(void)
{
    srand(time(NULL));
    string Name_Of_Player;
    int guessing_number=rand()%100+1;
    int num=0;
    int count_attempt=0;
    cout<<"Enter the player name: ";
    getline(cin,Name_Of_Player);

    do{
        count_attempt++;
        cout<<"plese Guess a number between (1 to 100): ";
        cin>>num;
        if(num<=0)
        {
            cout<<Name_Of_Player<<" ,you guessed a invalid number ."<<endl;
        }
        else if(guessing_number < num)
        {
            cout<<"\nThe number is larger ,so guess a smaller number."<<endl;
        }
        else if(guessing_number > num)
        {
            cout<<"\nThe number is smaller,so guess a larger number."<<endl;
        }
        else if(guessing_number==num){
            cout<<"\nCongratulations "<<Name_Of_Player<<", you have sucessfully guessed the number in "<<count_attempt<<" attempts."<<endl;
            break;
        }
       
    }while(num!=0);
    cout<<"\nThank you for playing ."<<endl;
    cout<<"Developed By: Nigam Sahoo"<<endl;
    
    return 0;
}
