//project for quiz
#include<stdio.h>
int main()
{
   int press,point=0,count=0;
   char ans[30],name[30];
   printf("         ------------------------------------------------------------------------------------------------------------  ");
   printf("                                                              Welcome to the Game\n\n");
   printf("-> Press Key- 1 to start the quiz\n");
   printf("-> Press Key- 0 to quit the quiz\n\n");

   printf("Enter the key:");
   scanf("%d",&press);
   
   if(press==1)
   {
      printf("The game has started\n\n");

      printf("Enter your first Name:");
      scanf("%s",name);
      printf("\nQ1) Who is Known as the father of computer?\n");
      printf("    a.Geroge orewell\n");
      printf("    b.J.K Rowling\n");
      printf("    c.Charles Babbage\n");
      printf("    d.Dennis Ritchie\n");
      printf("Ans: ");
      scanf(" %c",&ans[0]);
       if(ans[0]=='c'||ans[0]=='C')
       {
         printf("Correct answer\n");
         point+=5;
         count++;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       }

      printf("\nQ2) What is the brain of computer system called?\n");
      printf("    a.RAM\n");
      printf("    b.CPU\n");
      printf("    c.GPU\n");
      printf("    d.None of the above\n");
      printf("Ans: ");
      scanf(" %c",&ans[1]);
       if(ans[1]=='b'||ans[1]=='B')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       }

      printf("\nQ3) What does CPU stand for?\n");
      printf("    a.Central Processing Unit\n");
      printf("    b.Contol Processing Unit\n");
      printf("    c.Computer Processing Unit\n");
      printf("    d.Computer programming Unit\n");
      printf("Ans: ");
      scanf(" %c",&ans[2]);
       if(ans[2]=='a'||ans[2]=='A')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       }
       
      printf("\nQ4) Which of the follwing is included in computer system?\n");
      printf("    a.Hardware\n");
      printf("    b.Peripheral Device\n");
      printf("    c.Software\n");
      printf("    d.All of thr above\n");
      printf("Ans: ");
      scanf(" %c",&ans[3]);
      if(ans[3]=='d'||ans[3]=='D')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       }
      printf("\nQ5) What is known as temporary memory or volatile memory?\n");
      printf("    a.SSD\n");
      printf("    b.HDD\n");
      printf("    c.RAM\n");
      printf("    d.ROM\n");
      printf("Ans: ");
      scanf(" %c",&ans[4]);
       if(ans[4]=='c'||ans[4]=='C')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       }

      printf("\nQ6) What does ALU stand for in the context of computer?\n");
      printf("    a.Array Logic Unit\n");
      printf("    b.Arithmetic Logic Unit\n");
      printf("    c.Application Logic Unit\n");
      printf("    d.Automatic Logic Unit\n");
      printf("Ans: ");
      scanf(" %c",&ans[5]);
       if(ans[5]=='b'||ans[2]=='B')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ7) What does RAM stand for?\n");
      printf("    a.Random Access Memory\n");
      printf("    b.Reallocate Automatic Memory\n");
      printf("    c.Remote Access Memory\n");
      printf("    d.None of the above\n");
      printf("Ans: ");
      scanf(" %c",&ans[6]);
       if(ans[6]=='a'||ans[6]=='A')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ8) Which of the following is the smallest unit of computer?\n");
      printf("    a.Byte\n");
      printf("    b.Bit\n");
      printf("    c.Nibble\n");
      printf("    d.Kb\n");
      printf("Ans: ");
      scanf(" %c",&ans[7]);
       if(ans[7]=='b'||ans[7]=='B')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       }       

      printf("\nQ9) What is Half Byte called?\n");
      printf("    a.KiloByte\n");
      printf("    b.Bit\n");
      printf("    c.Nibble\n");
      printf("    d.Word Size\n");
      printf("Ans: ");
      scanf(" %c",&ans[8]);
       if(ans[8]=='c'||ans[8]=='C')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       }  

      printf("\nQ10) Which of the following is not input device?\n");
      printf("     a.Microphone\n");
      printf("     b.Mouse\n");
      printf("     c.Keyboard\n");
      printf("     d.Speakers\n");
      printf("Ans: ");
      scanf(" %c",&ans[9]);
       if(ans[9]=='d'||ans[9]=='D')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ11) Which of following computer languages is written in binary from?\n");
      printf("     a.Java\n");
      printf("     b.C\n");
      printf("     c.Pascal\n");
      printf("     d.Machnie Language\n");
      printf("Ans: ");
      scanf(" %c",&ans[10]);
       if(ans[10]=='d'||ans[10]=='D')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 
      printf("\nQ12) which of the following is responsible for performing mathemeticall calculation?\n");
      printf("     a.Contrl Unit\n");
      printf("     b.Register Unit\n");
      printf("     c.Memory Unit\n");
      printf("     d.Arithmetic Logic Unit\n");
      printf("Ans: ");
      scanf(" %c",&ans[11]);
       if(ans[11]=='d'||ans[11]=='D')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 
      printf("\nQ13) Which of the following is not an output device?\n");
      printf("     a.Speakers\n");
      printf("     b.Monitor\n");
      printf("     c.Plotter\n");
      printf("     d.Scanner\n");
      printf("Ans: ");
      scanf(" %c",&ans[12]);
       if(ans[12]=='d'||ans[12]=='D')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       }
      printf("\nQ14) What does SSD stand for?\n");
      printf("     a.Solid state device\n");
      printf("     b.Solid state drive\n");
      printf("     c.Serial state Data\n");
      printf("     d.solid Stroage Drive\n");
      printf("Ans: ");
      scanf(" %c",&ans[13]);
       if(ans[13]=='b'||ans[13]=='B')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ15) Which of the following is not related to the computer?\n");
      printf("     a.Acccuracy\n");
      printf("     b.Speed\n");
      printf("     c.Thinking\n");
      printf("     d.Consistency\n");
      printf("Ans: ");
      scanf(" %c",&ans[14]);
       if(ans[14]=='c'||ans[14]=='C')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 
      printf("\nQ16) Which of the following options represents a non-volatile memory?\n");
      printf("     a.ROM\n");
      printf("     b.DRAM\n");
      printf("     c.SRAM\n");
      printf("     d.None of the above\n");
      printf("Ans: ");
      scanf(" %c",&ans[15]);
       if(ans[15]=='a'||ans[15]=='A')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ17) What is meant by GUI in computer?\n");
      printf("     a.Graphical Unique Interface\n");
      printf("     b.Graph User Interface\n");
      printf("     c.Graphical User Interface\n");
      printf("     d.Graphical Universal Interface\n");
      printf("Ans: ");
      scanf(" %c",&ans[16]);
       if(ans[16]=='c'||ans[16]=='C')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ18) The data or an instruction given to a computer system is particularly called: \n");
      printf("     a.Information\n");
      printf("     b.Input\n");
      printf("     c.Output\n");
      printf("     d.Entry\n");
      printf("Ans: ");
      scanf(" %c",&ans[17]);
       if(ans[17]=='b'||ans[17]=='B')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ19) The time taken by a computer to process a specific task is called: \n");
      printf("     a.Real Time\n");
      printf("     b.Response Time\n");
      printf("     c.Waiting Time\n");
      printf("     d.Execution Time\n");
      printf("Ans: ");
      scanf(" %c",&ans[18]);
       if(ans[18]=='d'||ans[18]=='D')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ20) Which of the following options does not respresent application software?\n");
      printf("     a.Open Office\n");
      printf("     b.Microsoft Toolkit\n");
      printf("     c.Ubuntu\n");
      printf("     d.Adobe Photoshop\n");
      printf("Ans: ");
      scanf(" %c",&ans[19]);
       if(ans[19]=='c'||ans[19]=='C')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ21) Which of following OS belongs to IBM?\n");
      printf("     a.UNIX\n");
      printf("     b.OS/2\n");
      printf("     c.DOS\n");
      printf("     d.Fedora\n");
      printf("Ans: ");
      scanf(" %c",&ans[20]);
       if(ans[20]=='b'||ans[20]=='B')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ22) What was the name of first microprocessor introduced by intel?\n");
      printf("     a.intel 4004\n");
      printf("     b.intel 8008\n");
      printf("     c.intel 8080\n");
      printf("     d.intel pentinum\n");
      printf("Ans: ");
      scanf(" %c",&ans[21]);
       if(ans[21]=='a'||ans[21]=='A')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ23) A megabyte ,also known as a MB,contains:\n");
      printf("     a.512 bytes\n");
      printf("     b.1024 bytes\n");
      printf("     c.1000 kilobytes\n");
      printf("     d.1024 kilobytes\n");
      printf("Ans: ");
      scanf(" %c",&ans[22]);
       if(ans[22]=='d'||ans[22]=='D')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ24) The collection of 8 bits makes:\n");
      printf("     a.Nibble\n");
      printf("     b.Byte\n");
      printf("     c.Word\n");
      printf("     d.None of the above\n");
      printf("Ans: ");
      scanf(" %c",&ans[23]);
       if(ans[23]=='B'||ans[23]=='b')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ25) which of the following  cannot be used as a part of secondary storage in a computer?\n");
      printf("     a.Magnetic Disks\n");
      printf("     b.Solid state Drive\n");
      printf("     c.Semicouductor Memory\n");
      printf("     d.Hard Disk\n");
      printf("Ans: ");
      scanf(" %c",&ans[24]);
       if(ans[24]=='c'||ans[24]=='C')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ26) what do you need to use to connect to the internet?\n");
      printf("     a.Mouse\n");
      printf("     b.Modem\n");
      printf("     c.CPU\n");
      printf("     d.Keyboaed\n");
      printf("Ans: ");
      scanf(" %c",&ans[25]);
       if(ans[25]=='b'||ans[25]=='B')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ27) what is also known as protable computer?\n");
      printf("     a.Laptop\n");
      printf("     b.CPU\n");
      printf("     c.Monitor\n");
      printf("     d.Desktop\n");
      printf("Ans: ");
      scanf(" %c",&ans[26]);
       if(ans[26]=='a'||ans[26]=='A')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ28) What is the full form of E-Mail?\n");
      printf("     a.Exchange Mail\n");
      printf("     b.Electronic Mail\n");
      printf("     c.Electric Mail\n");
      printf("     d.Engagement Mail\n");
      printf("Ans: ");
      scanf(" %c",&ans[27]);
       if(ans[27]=='B'||ans[27]=='b')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ29) Name the device that is used to take a printout of a document from a computer?\n");
      printf("     a.CPU\n");
      printf("     b.Mouse\n");
      printf("     c.Keyboard\n");
      printf("     d.Printer\n");
      printf("Ans: ");
      scanf(" %c",&ans[28]);
       if(ans[28]=='d'||ans[28]=='D')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 

      printf("\nQ30) In the virtual world ,WWW stands for?\n");
      printf("     a.World Without Windows\n");
      printf("     b.World Wise Web Application\n");
      printf("     c.World Wide Web\n");
      printf("     d.World Wide Warehouse\n");
      printf("Ans: ");
      scanf(" %c",&ans[29]);
       if(ans[29]=='c'||ans[29]=='C')
       {
         printf("Correct answer\n");
         count++;
         point+=5;
      printf("points: %d\n",point);
       }
       else{
       printf("wrong answer\n");
       printf("Points: %d",point);
       } 
       
     printf("\nYou have given %d outof 30 correct answers.",count);
     printf("\nCongratulation %s ,you have scored %d points.\n\n",name,point);
   }
   else if(press==0){
      printf("The game has ended\n");
   }
   else{
      printf("Invalid key\n");
   }
 

 
   return 0;
}
