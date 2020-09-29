#include<stdio.h>

int DisplayFactor(int iNo)
{
    int iCnt=0;
    
    for(iCnt=1; iCnt<iNo;iCnt++)               //TIME COMPEXITY IS O(N)..
    {

       if((iNo%iCnt)==0)
        {
          printf(" %d\n",iCnt);
        }
    }
}
int main()
{
    int iVal=0,p=0;

    printf("enetr number : ");
    scanf("%d",&iVal);

    p=DisplayFactor(iVal);

    if(p==1)
    {
        printf("%d",p);
    }
    return 0;
}
