/******************************************************************************
    Q.given a pattern is [1 1 2 3 4 9 8 27...........]
    write a program so that anyone can find up to the nth tearm.......
    
                    '''''WELCOME TO CODE WITH MIR'''''

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n,a,b,i;
    printf("\n                                   WELCOME TO CODE WITH MIR");
    printf("\n enter the number n :");
    scanf("%d",&n);
    n--;
        for(i=1;i<=n;i++)
        
            {
                if(i%2!=0)
                    {
                        if(i==1)
                            {
                                a=1;
                            }
                        else
                            {
                                a=a*2;
                            }
                             printf("\n the number is : %d",a);
                    }
                else
                    {
                        if(i==2)
                            {
                                b=1;
                            }
                        else
                            {
                                b=b*3;
                            }
                             printf("\n the number is : %d",b);
                    }
            }
             
            
}

