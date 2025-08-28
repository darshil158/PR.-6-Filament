#include <stdio.h>
#include <conio.h>
int main()
{
    char str[100];
    int l=0,Palindrome; // l :- length
    printf("\n\nEnter The String Name :- ");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++) {
        l++;
    }
    for(int i=0,j=l-1;i<j;i++,j--) {
        if (str[i]!=str[j]) {
            Palindrome=0;
            break;
        }
    }
    if(Palindrome) {
        printf("\n%s is Palindrome\n\n",str);
    }
    else {
        printf("\n%s is not a Palindrome\n\n",str);
    }
    return 0;
}
