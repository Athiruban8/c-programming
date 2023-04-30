#include<stdio.h>
#include <string.h>
int length(char s[]){
    return strlen(s) - 1;
}
int frequency(char s[]){
    char ori[30] = {0};
    int i = 0, j = 0;
    int l = length(s);
    int flag = 0;
    for (i; i < l; i++){
        flag = 0;
        for (int k = 0; k < j; k++){
            if (ori[k] == s[i]){
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            ori[j] = s[i];
            j++;
        }
    }
    ori[j] = '\0'; // add null terminator to end of string
    int lo = strlen(ori);
    printf("Word frequency is: %d\n",lo);
    char frc;
    flag = 0;
    for(int i = 0;i<l;i++){
        if(s[i] != ori[i]){
            printf("First repeated character is: %c\n",s[i]);
            frc = s[i];
            flag = 1;
            break;  
        }
    }
    if(flag == 0){
        printf("No repeated characters found in this string.\n");
    }
    for(int i = 0;i<lo;i++){
        if(ori[i]!=frc){
            printf("First non-repeated character is: %c",ori[i]);
            break;
        }
    }
    return 0;
}
int main(){
    char s[30];
    fgets(s,30,stdin);
    int l = length(s);
    printf("Length of the string is: %d\n",l);
    frequency(s);
}