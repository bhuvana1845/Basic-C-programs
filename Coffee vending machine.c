#include<stdio.h>
int main(){
    int cost=0,coffe_choice,sugsach;
    char cold;
    int fiverup,tenrup,hundredrup,fivehundrup,payableamt;
    printf("Star Cafe\n");
    printf("Select your coffe:\n1.Cappuccino\n2.Espresso\n3.Latte\n4.Americano\n5.Mocha\n6.Cold Brew\n7.Doppio\n");
    scanf("%d",&coffe_choice);
    printf("do you want cooffee to be cold? Y/N:");
    scanf("%s",&cold);
    if(cold =='Y'||cold =='y'){
        cost += 49;
    }
    printf("packets of sugar sachet:");
    scanf("%d",&sugsach);
    cost+=(sugsach*5);
    switch(coffe_choice){
        case 1:
            cost+=375;
            break;
        case 2:
            cost+=215;
            break;
        case 3:
            cost+=230;
            break;
        case 4:
            cost+=235;
            break;
        case 5:
            cost+=330;
            break;
        case 6:
            cost+=271;
            break;
        case 7:
            cost+=189;
            break;                   
    }
    printf("Your total bill:%d\n",cost);
    printf("proceed to pay\n");
    printf("coins of 5:");
    scanf("%d",&fiverup);
    printf("notes of 10:");
    scanf("%d",&tenrup);
    printf("notes of 100:");
    scanf("%d",&hundredrup);
    printf("notes of 500:");
    scanf("%d",&fivehundrup);
    payableamt+=(5*fiverup + 10*tenrup + 100*hundredrup + 500*fivehundrup);
    if(payableamt < cost){
        printf("Sorry! you don't have enough of money for a coffee(:\n");
    }
    else if(payableamt == cost){
        printf("Here is your coffee:)\n");
    }else{
        int change;
        change=payableamt-cost;
        printf("Here is your coffee and a change of %d rupees\n",change);
    }
    printf("Thank you for visiting...");
}
