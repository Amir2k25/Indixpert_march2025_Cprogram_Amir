#include<stdio.h>

int main()

{
int num[5];
printf("please enter any 5 number: \n");

for(int i=0; i<5; i++)
{

    scanf("%d",&num[i]);

}
printf(" \n output \n");

for (int i=0; i<5; i++)

{

    printf("%d\t", num[i]);

}



    return 0;
}