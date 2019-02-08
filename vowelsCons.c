#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
    {
        printf("Vowels%c\n",n);
    }
    else{
    printf("Consonants%c",n);
    }
    return 0;
}
