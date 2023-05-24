#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],ch;
    int i,vol,con,word,digit,other;

    printf("Enter a string: ");
    gets(str);

    i=vol=con=word=digit=other=0;

    while((ch=str[i])!='\0')
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')

            vol++;
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))

            con++;
        else if((ch>='0' && ch<='9'))

            digit++;
        else if(ch==' ')
            word++;
        else
            other++;

        i++;

    }
    word++;

    printf("Number of vowels: %d\n",vol);
    printf("Number of consonant: %d\n",con);
    printf("Number of digits: %d\n",digit);
    printf("Number of words: %d\n",word);
    printf("Number of others: %d\n",other);
}
