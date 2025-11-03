#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char ch)
{
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    bool bRet=0;
    char cValue='\0';
     printf("Enter a Charecter:");
    scanf("%c",&cValue);
   
     bRet=CheckVowel(cValue);
     if(bRet==true)
     {
        printf("It is Vowel");
     }
     else
     {
      printf("It is not Vowel");
     }

    return 0;
}