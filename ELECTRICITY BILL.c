//calculating the electric bill 
/*
Author: Nancy moraa Kebaso 
Reg no:CT101/G/23248/24
*/
#include<stdio.h>
int main()
{
   int customer_ID;
   char customer_name[30];
   int units_consumed;
   float charge;
   float total_bill;
   //function to get customer details 
   //prompt to enter customer_ID
   printf("enter customer_ID:");
   scanf("%d \n", &customer_ID);
   //prompt to enter customer_name
   printf("enter customer_name:");
   scanf("%c\n",&customer_name);
   //prompt to enter unit_consumer
   printf("enter the unit_consumer:");
   scanf ("%d\n", & units_consumed);
   //function to calculate change per unit based on unit consumerd
   //prompt to apply conditional statement 
   if(units_consumed<=199){
       return units_consumed=1.2;
   } else if(units_consumed>=200 && units_consumed<400){
      return units_consumed=1.5;
   } else if (units_consumed>=400 && units_consumed<600){
       return units_consumed=1.8;
   } else{
       return units_consumed=2.0;
        }   
        
        printf("charge: %.2f \n",charge);
        
        total_bill=charge*units_consumed;
        printf("total amount to pay: %.2f\n",total_bill);
        //function to calculate total_bill including unit, charge, surcharge_rate
        float minimum_unit, surcharge_rate;
        if(total_bill>400){
        total_bill=total_bill*surcharge_rate;
        }else if(minimum_unit<100){
        total_bill=minimum_unit;
        }
        return total_bill;
        //function to print bill details 
        printf("customer_ID: %d\n", & customer_ID);
        printf("customer_name: %c\n", &customer_name);
        printf("units_consumed: %d\n", &units_consumed);
        printf("charge: %f\n", &charge);
        printf("total_bill %f\n", &total_bill);
   
   
   return 0;
   }
   
