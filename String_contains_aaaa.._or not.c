#include<stdio.h>

void main() {
    char ch[100];
    int i;
    int ans =0,counter=0;

    printf("Name:Sachin Tiwari \n");
    printf("Roll No.:1901330100236 \n");
    printf("Branch/Section: C.S.E. ,5 C \n");
    printf("Enter String : ");
    scanf("%s", &ch);
    for(i=0; ch[i]!='\0' ; i++){
        counter++;
        if(ch[i]=='a'){
            ans++;
        }
    }
    if(ans==counter){
        printf("TRUE");
    } else{
        printf("FALSE");
    }

}
