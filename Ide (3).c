#include<stdio.h>
int main()
{
    int type,input,min,max,i,test;
    printf("Enter: \n1 for prime number checking.\n2 for printing of prime numbers.");
    printf("\nEnter the type of function you'd like to execute: ");
    scanf("%d",&type);
    switch(type)
    {
        case 1:
            printf("\nEnter the number to be checked: ");
            scanf("%d",&input);
            if(input==1)
            {
                printf("\nThe number you've entered is neither prime nor composite.");
                break;
            }
            else
            {
                for(i=2;i<input;++i)
                {
                    if(input%i==0)
                    {
                        test=1;
                    }
                }
                if(test==0)
                {
                    printf("\nThe number is prime.");
                }
                else
                {
                    printf("\nThe number is composite.");
                }
            }
        break;    
        case 2:
                printf("\nEnter lower limit of interval: ");
                scanf("%d",&min);
                printf("\nEnter higher limit of interval: ");
                scanf("%d",&max);
                printf("\nPrime numbers between %d and %d are: ",min,max);
                while(min<max) 
                {
                    test=0;
                    for (i=2;i<min;++i) 
                    {
                        if (min%i==0)
                        {
                            test=1;
                            break;
                        }
                    }
                    if(test==0)
                    printf("\n%d",min);
                    ++min;
                }
        break;
    }
    return 0;
}