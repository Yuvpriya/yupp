#include <stdio.h>

int main()
{
    int n1,n2,n3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(n1>=n2&&n1>=n3){
        printf("Greatest: %d\n",n1);
    }
    else if(n2>=n1&&n2>=n3){
        printf("Greatest: %d\n",n2);
    }
    else{
        printf("Greatest: %d\n",n3);
    }
    return 0;
