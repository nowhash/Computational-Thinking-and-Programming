#include <stdio.h>
int main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);

    if(num%5==0)
    {
        printf("%d is yes",num);
    }

    else if((num %5!=0) && (num %2  ==0))
    {
        printf("%d is wow\n",num);
    }

    else if(num>10)
    {
        printf("%d is ok",num);
    }

    return 0;
}





