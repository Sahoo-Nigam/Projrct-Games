#Banking Management System
Ac_Balance=0

#This function is defined for showing the account balannce to the user
def ShowBalance():
    print(f"Total Balance : {Ac_Balance:.2f}")

#This function is defined for the user to add or deposite their money 
def Deposit():
    Amout=float(input("Enter Your Deposite Amount: "))
    if Amout<0:
        return -1
    else:
        return Amout

#This function is defined for the user to withdraw thier required amount from their bank account
def Withdraw():
    withdrawval=float(input("Enter The Amount To Withdraw: "))
    return withdrawval

while (True):
     
    print("\nBANKING PROGRAM")
    print("\nPress-1,For Show Balance.")
    print("press-2,For Deposit.")
    print("Press-3,For Withdraw.")
    print("Press-4,For Exit.\n")
    choice=int(input("--> Enter your choice: "))

    if(choice<1 and choice >4):
        print("Soorry,You ave hoosed a wrong choice, plese entered again.")
        continue

    elif(choice==1):
         ShowBalance()

    elif (choice==2):
         depamount=Deposit()
         if(depamount==-1):
             print("Invalid Amout")
         else:
            Ac_Balance+=depamount
            print("Congratulation!,Your Amount Successfully Added.")

    elif (choice==3):
          withdrawval=Withdraw()
          if(Ac_Balance==0 or Ac_Balance<withdrawval):
           print("Transaction Failed Due To Insufficient balance, Thankyou!")
          else:
           Ac_Balance-=withdrawval
           print("Transcation successfull,Thankyou!")
    else:
        print(" \n Program Terminated, Thank you! \n")
        break
    