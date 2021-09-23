#include<stdio.h>

void main() {
    char ch[100];
    int i;
    int counter=0;
    printf("Name:Sachin Tiwari \n");
    printf("Roll No.:1901330100236 \n");
    printf("Branch/Section: C.S.E. ,5 C \n");
    printf("Enter string-");
    scanf("%s", &ch);
    for(i=0; ch[i]!='\0' ; i++){
        counter++;
    }
    if (ch[0] == 'a' && ch[counter-1] == 'b') {
        printf("TRUE");
    } else {
        printf("FALSE");
    }

}
