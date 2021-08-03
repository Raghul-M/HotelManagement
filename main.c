#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val,quan,amt,i,net=0;
    ak:
     printf("\n\t\t\tMENU CARD:");
      printf("\n\t\t\t\t1.COFFEE         RS.10");
       printf("\n\t\t\t\t2.TEA            RS.8  "    );
    printf("\n\t\t\t\t3.COLD COFFEE    RS.25     ");
    printf("\n\t\t\t\t4.MILK SHAKE     RS.50 ");
    printf("\n\n\tENTER YOUR CHOICE :");
    scanf("%d",&val);//153
    switch(val){
    case(1):printf("\n\tYou have selected COFFEE");
    printf("\n\tEnter the quantity :");
    scanf("%d",&quan);
    amt=quan*10;
    net=amt+net;
    //printf("\nTotal Amount : %d",amt);
    break;
    case(2):printf("\tYou have selected TEA");
    printf("\n\tEnter the quantity :");
    scanf("%d",&quan);
    amt=quan*8;
    net=amt+net;
    //printf("\nTotal Amount : %d",amt);
    break;
    case(3):printf("\tYou have selected COLD COFFEE");
    printf("\n\tEnter the quantity :");
    scanf("%d",&quan);
    amt=quan*25;
    net=amt+net;
   // printf("\nTotal Amount : %d",amt);
   break;
    case(4):printf("\tYou have selected MILK SHAKE");
    printf("\n\tEnter the quantity :");
    scanf("%d",&quan);
    amt=quan*50;
    net=amt+net;
    //printf("\nTotal Amount : %d",amt);
    break;
    default:printf("\tYou Entered The Wrong Choice ");
    }
    printf("\n\tDo you want to continue press 1 or Exit Press 0 :");
    scanf("%d",&i);
    if(i==1){
        goto ak;
    }
    else{
            printf("\n\tTotal Amount : %d",net);
        printf("\n\tThank you Come again ");
    }



   return 0;
}
