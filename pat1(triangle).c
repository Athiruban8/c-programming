#include<stdio.h>
int main(){
    int a=0,r=0,o=0,w=0,x,y,z,sum=0,i=5;
    while(i!=0){
        scanf("%d",&x);
        scanf("%d",&y);
        scanf("%d",&z);
        sum = x+y+z;
        if(sum!=180){
            printf("Wrong Entry try again\n");
            w++;
            continue;
        }
        else{
            if(x==90||y==90||z==90){
                r++;
            }    
            else if(x>90||y>90||z>90){
                o++;
            }
            else{
                a++;
            }
            i--;
        }
    }
    printf("Acute Angled Triangle: %d\n",a);
    printf("Right Angled Triangle: %d\n",r);
    printf("Obtuse Angled Triangle: %d\n",o);
    printf("Wrong Entries: %d",w);
    return 0;
}
