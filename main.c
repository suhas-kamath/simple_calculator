#include <stdio.h>
#include <stdlib.h>

void main()
{    while(1){
     float a,b,res;
     int x=0;
     char oper;


    printf("enter the number a:" ) ;
     scanf("%f",&a);
    printf ("enter the number b:");
    scanf("%f",&b);
     printf("enter the operator:");
     scanf(" %c",&oper);
     switch(oper)
     {
         case '+' :
            res=a+b;
            break;

         case '-' :
            res=a-b;
            break;

         case '/' :
             if(b==0)
            {
            printf("error\n");
            x=1;
            }
             else
                res=a/b;
                break;

         case '*' :

             res=a*b;
             break;
         case '1' :
            return;
        default:
            printf("invalid operator\n");
            x=1;

     }
   if (x=0){
     printf ( "the result is:%f\n",res);
   }
}
}

