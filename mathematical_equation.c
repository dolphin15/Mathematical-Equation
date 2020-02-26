//NIHAN AKINCI
//160316006

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int k,r,j,s,n,i;
    double y,x,sum1=1,sum2=0,sum=0;

    printf("Please enter positive n, r and s numbers.\n");
    scanf("%d%d%d",&n,&r,&s);

    if(n<=0 || s<=0 || r<=0)
       {
           while (n<=0)
           {
               printf("Please enter a positive n value again.\a");
                scanf("%d", &n);
           }
            while (s<=0)
           {
               printf("Please enter a positive s value again.\a");
               scanf("%d", &s);
           }
            while (r<=0)
           {
                printf("Please enter a positive r value again.\a");
                scanf("%d", &r);
           }
       }

    for(k=1;k<=r; k++)
        {
            x=((3*pow(k,3))+5)/pow(k,2);
            sum1=sum1*x;
        }


    for(j=1;j<=s;j++)
        {
            y=(sqrt(3*pow(j,3)+j+2))/(2*j);
            sum2=sum2+y;
        }


    for(i=1;i<=n;i++)
        {
            sum=sum+(sum1/sum2);
        }

    printf("Sum is %f",sum);

    return 0;
}
