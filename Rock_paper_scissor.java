//                                           This is Rock-paper-scissor game
import java.util.*;
class Rock_paper_scissor
{
    public static String name;
    public static Scanner input=new Scanner(System.in);
    public static void main(String []args)
    {
        System.out.println("\n                   --------------------------- + Welcome to Rock-paper-scissor Game + ---------------------------\n");
        System.out.print("Enter your name: ");
       name=input.nextLine();

        int choice;
        int computerChoice=computerTurn();
        display();
       do {
           System.out.print("Please,Enter your choice: ");
           choice= input.nextByte();
           if(choice !=1 && choice !=2 && choice !=3)
           {
               System.out.println("Invalid choice!\n");
           }

       }while(choice !=1 && choice !=2 && choice !=3);

       String comChoice=sourceDetect(computerChoice);
       String useChoice=sourceDetect(choice);

        System.out.println("\nComputer choice: "+comChoice+"\n"+name+"'s choice: "+useChoice);
        WinningStatus(computerChoice,choice);


       System.out.println("\nDeveloped By : Nigam Sahoo\n");


    }
    public static String sourceDetect(int id)
    {
        switch(id)
        {
            case 1:
                 return  "Rock";
            case 2:
                return  "Paper";
            case 3:
                return  "Scissor";
        }
        return "hello";
    }
    public static int computerTurn()
    {
        Random rum=new Random();
        return rum.nextInt(3)+1;
    }
    public static void WinningStatus( int computer,int user)
    {
        if(computer == user)
        {
            System.out.println("Game tied");
        }
        else if((computer==1 && user ==2) ||
                (computer==2 && user ==3) ||
                (computer==3 && user==1))
        {
            System.out.println("\ncongratulation! "+name +" ,you won! ");
        }
        else
        {
            System.out.println("\nBad luck "+name+", you lost!");
        }
    }
    public static void display()
    {
        System.out.println("Press-> 1 : For Rock");
        System.out.println("Press-> 2 : For Paper");
        System.out.println("Press-> 3 : For Scissor\n");
    }
}
