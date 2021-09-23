
#include<stdio.h>

void main() {
    char ch[100];
    printf("Name:Rahul Maurya \n");
    printf("Roll No.:1901330100210 \n");
    printf("Branch/Section: C.S.E. ,5 C \n");
    printf("Enter string-");
    scanf("%s", &ch);
    if (ch[0] == 'a' && ch[1] == 'b') {
        printf("TRUE");
    } else {
        printf("FALSE");
    }

}


