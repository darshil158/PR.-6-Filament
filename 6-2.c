#include <stdio.h>
#include <conio.h>
int main() {
    char str[100];
    int freq[256] = {0};
    int i;
    printf("\n\nEnter a String :- ");
    scanf("%s", str);
    for (i=0;str[i]!='\0';i++) {
        freq[str[i]]++;
    }
    printf("\nCharacter Frequencies:\n\n");
    for (i=0;i<256;i++) {
        if (freq[i] > 0) {
            printf("Letter '%c' : %d time\n\n",i,freq[i]);
        }
    }
    return 0;
}
