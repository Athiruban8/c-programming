#include <stdio.h>
int main(){
    char str[50];
    char chr;
    int w = 0,v = 0,c = 0,s = 0,sc = 0;
    fgets(str,sizeof(str),stdin);
    for(int i = 0; i < 50;i++){
        chr = str[i];
        if(chr != '\0'){
            if (chr == 'a' || chr == 'e' || chr == 'i' || chr == 'o' || chr == 'u' || chr == 'A' || chr == 'E' || chr == 'I' || chr == 'O' || chr == 'U') {
                v++;
            }
            else if((chr > 'a' && chr <= 'z') || (chr > 'A' && chr <= 'Z')){
                c++;
            }
            else if(chr == ' '){
                s++;
            }
            else{
                sc++;
            }
        }
        else{
            break;
        }
    }
    w = s + 1;
    printf("Words = %d\n",w);
    printf("Vowels = %d\n",v);
    printf("Consonants = %d\n",c);
    printf("Spaces = %d\n",s);
    printf("Special Characters = %d\n",--sc);
    return 0;
}