#include<stdio.h>
void veg();
void nonveg();
void dessert();
int main()
{  
    printf("------------------------------------------------------Welcome to Nigam Resturant-------------------------------------------------------\n\n");
    
    printf("-> Press 1 for Non-Veg Menu\n");
    printf("-> Press 2 for Veg Menu\n");
    printf("-> Press 3 for Dessert Menu\n");
    int choice;
    printf("Press a Menu number: ");
    scanf("%d",&choice);
    
    if(choice==1)
    nonveg();
    else if(choice==2)
    veg();
    else if(choice==3)
    dessert();
    else{

    printf("\nSorry sir/mam ,you have entered out of the menu number\n\n");
    printf("-> Press 1 for Non-Veg Menu\n");
    printf("-> Press 2 for Veg Menu\n");
    printf("-> Press 3 for Dessert Menu\n");
    int choice;
    printf("Press a Menu number: ");
    scanf("%d",&choice);
    if(choice==1)
    nonveg();
    else if(choice==2)
    veg();
    else if(choice==3)
    dessert();
    }

    return 0;

}
void veg()
{
    printf("\nVeg Startr :-                                          Veg Rice :-\n");
    printf("  Iteams Name          Half(Rs)      Full(Rs)               Iteams Name        Half(Rs)      Full(Rs) \n");
    printf("1.Panner Chilly         Rs.100       Rs.150              1.Veg Fried Rice       Rs.70        Rs.90\n");
    printf("2.Panner Chilly         Rs.100       Rs.160              2.Veg Manchurian Rice  Rs.90        Rs.120\n");
    printf("3.Crispy Chilly idli    Rs.100       Rs.120              3.Veg Paneer Biriyani  Rs.120       Rs.160 \n");
    printf("4.Soya Chilly           Rs.100       Rs.150              4.Tika paneer Biriyani Rs 150       Rs.200\n");
    printf("5.Panner Tika           Rs.120       Rs.180\n");
    
    printf("\nVeg Soup :-                                           Veg Noodles :-\n");
    printf("  Iteams Name          Half(Rs)      Full(Rs)               Iteams Name        Half(Rs)      Full(Rs) \n");
    printf("1.Panner Soup           Rs.50        Rs.70               1.Hakka Noodles        Rs.50        Rs.70\n");
    printf("2.Hot&Sour Soup         Rs.70        Rs.90               2.Manchurian Noodles   Rs.70        Rs.90\n");
    printf("3.Clear soup            Rs.40        Rs.60               3.Paneer Noodles       Rs.100       Rs.130 \n");
    printf("4.Sweet Corn soup       Rs.50        Rs.100 \n");
 
    printf("\nRoti & Naan :-                       Veg Curry :-\n");
    printf("  Iteams Name      Pic(Rs)                 Iteams Name            Full(Rs) \n");
    printf("1.Plain Roti       Rs.10                1.Panner Masala            Rs.150\n");
    printf("2.Butter Naan      Rs.20                2.Panner Butter Masala     Rs.250\n");
    printf("3.Plain Kulcha     Rs.25                3.Paneer Tika Masala       Rs.200 \n");
    printf("4.Masala Kulcha    Rs.30                4.Chole Masala             Rs.80\n");
    printf("5.Rumali Roti      Rs.20                5.Palang Panner            Rs.150\n");
    printf("6.Garlic Naan      Rs.25                6.Tadka                    Rs.80\n");
    printf("7.Alu parata       Rs.20                7.Kobi Masala              Rs.150 \n");
    printf("8.Plain Naan       Rs.15                8.Veg Hydrabadi            Rs.180\n");
   
}
void nonveg()
{

    printf("\nNon-Veg Startr :-                                       Non-Veg Rice :-\n");
    printf("  Iteams Name          Half(Rs)      Full(Rs)               Iteams Name        Half(Rs)      Full(Rs) \n");
    printf("1.Chiken Chilly Dry     Rs.80        Rs.120              1.Chiken Fried Rice     Rs.70        Rs.100\n");
    printf("2.Chiken Chilly Gravy   Rs.90        Rs.130              2.Egg Fried Rice        Rs.50        Rs.80\n");
    printf("3.Chiken Garlic         Rs.--        Rs.150              3.Chiken Biriyani       Rs.110       Rs.140 \n");
    printf("4.Chiken lolllypop      Rs.100       Rs.150              4.Chiken Tika Biriyani  Rs 150       Rs.200\n");
    printf("5.Chiken Crispy         Rs.--        Rs.150              5.Chiken Dum Biriyani   Rs 120       Rs.150\n");
    printf("6.Chiken 65             Rs.--        Rs.160              6.Mutton Biriyani       Rs 250       Rs.300\n");
    printf("7.Chiken Pokada         Rs.100       Rs.150              7.Prawn Biriyani        Rs 150       Rs.200\n");
    printf("8.Chiken Tika           Rs.120       Rs.180              8.Chilen 65 Biriyani    Rs 180       Rs.220\n");
    printf("9.Chiken Popcorn        Rs.80        Rs.120\n");
    printf("10.Prawn Chilly         Rs.100       Rs.150\n");
    printf("11.Chiken Tandoori      Rs.200       Rs.250\n");
    printf("12.Chiken Kabab         Rs.100       Rs.150\n");
 
    printf("\nNon-Veg Soup :-                                           Non-Veg Noodles :-\n");
    printf("  Iteams Name          Half(Rs)      Full(Rs)               Iteams Name        Half(Rs)      Full(Rs) \n");
    printf("1.Chiken Soup           Rs.50        Rs.70               1.Egg Noodles          Rs.50        Rs.70\n");
    printf("2.Hot&Sour Soup         Rs.70        Rs.90               2.Chiken Noodles       Rs.70        Rs.90\n");
    printf("3.Clear soup            Rs.40        Rs.60               3.Mutton Noodles       Rs.100       Rs.130 \n");
    printf("4.Parwn soup            Rs.50        Rs.80 \n");
    
    printf("\nRoti & Naan :-                       Non-Veg Curry :-\n");
    printf("  Iteams Name      Pic(Rs)                 Iteams Name          Full(Rs) \n");
    printf("1.Plain Roti       Rs.10                1.Chiken  Kasa           Rs.150\n");
    printf("2.Butter Naan      Rs.20                2.Chiken Butter Masala   Rs.200\n");
    printf("3.Plain Kulcha     Rs.25                3.Chiken Tika Masala     Rs.200 \n");
    printf("4.Masala Kulcha    Rs.30                4.Chikenn Methi          Rs.150\n");
    printf("5.Rumali Roti      Rs.20                5.Mutton                 Rs.200\n");
    printf("6.Garlic Naan      Rs.25                6.Prawn Masala           Rs.150\n");
    printf("7.Alu parata       Rs.20                7.Chiken Labdar          Rs.150 \n");
    printf("8.Plain Naan       Rs.15                8.Crabs Masala           Rs.200\n");

}
void dessert()
{
    printf("\nIce cream:-                           Sweets:-\n");
    printf(" Flavours Name      (Rs)                 Iteams Name       Full(Rs)\n");
    printf("1.Chocolate        Rs.20                1.Rasogala          Rs.20\n");
    printf("2.Mango            Rs.20                2.Gulapjamu         Rs.20\n");
    printf("3.Butter scotch    Rs.30                3.Jalepi            Rs.20 \n");
    printf("4.vanila Bean      Rs.30                4.Kaju Burfi        Rs.30\n");
    printf("5.Peanut Butter    Rs.30                5.Lodu              Rs.30\n");

}