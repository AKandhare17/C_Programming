#include<stdio.h>
//String reading with spaces
int main()
{
    char Name[30];
    printf("please Enter full name:");
    scanf("%[^\n]",Name);//To read String until new line comes
    printf("Your name is %s\n",Name);

    return 0;
}