#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int type,input,i,a[10];
    printf("Binary=1,Hexa=2,Octal=3");
    printf("\nEnter the type conversion: ");
    scanf("%d",&type);
    switch(type)
    {
        case 1:
            printf("\nBinary conversion.");
            printf("\nEnter the decimal number to be converted: ");
            scanf("%d",&input);
            for(i=0;input>0;i++)
                {
                    a[i]=input%2;
                    input/=2;
                }
            printf("\nThe binary conversion of the entered decimal value is: ");
            for(i=i-1;i>=0;i--)
                {
                    printf("%d",a[i]);
                }
                break;
        case 2:
            printf("\nBinary conversion.");
            printf("\nEnter the number to be converted: ");
            scanf("%d",&input);
            printf("\nThe hexadecimal conversion of the entered decimal value is: %x",input);
            break;
        case 3:
            printf("\nEnter the number to be converted: ");
            scanf("%d",&input);
            for(i=0;input>0;i++)
            {
                a[i]=input%8;
                input/=8;
            }
            printf("The octal conversion of the entered decimal value is: ");
            for(i=i-1;i>=0;i--)
            {
                printf("%d",a[i]);
            }
            break;
    default:printf("\nThe type conversion is not accepted.");
    }
   
}