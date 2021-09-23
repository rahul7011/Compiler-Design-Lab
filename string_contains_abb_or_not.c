#include<stdio.h>

void main() {
    char ch[100];
    int i;
    int ans = 0, counter = 0;

    printf("Name:Sachin Tiwari \n");
    printf("Roll No.:1901330100236 \n");
    printf("Branch/Section: C.S.E. ,5 C \n");
    printf("Enter String : ");
    scanf("%s", &ch);
    for (i = 0; ch[i] != '\0'; i++) {
        if (ch[i] == 'a' && ch[i + 1] == 'b' && ch[i + 2] == 'b') {
            ans = 1;
        }
    }
    if (ans == 1) {
        printf("TRUE");
    } else {
        printf("FALSE");
    }
}
