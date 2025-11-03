#include<stdio.h>
void DisplayConvert(char cValue)
{
    if(cValue>='a'&& cValue<='z')
    {
        printf("%c\n",cValue-32);//converting to uppercase
    }
    else if(cValue>='A'&& cValue<='Z')
    {
      printf("%c\n",cValue+32);//converting to lowercase
    }
}
int main()
{
    char cValue='\0';
    printf("Enter charecter:");
    scanf("%c",&cValue);
    DisplayConvert(cValue);

    return 0;
}