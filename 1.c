#include <stdio.h>
#include <stdlib.h>
int f(int a,int b){
    int small,g=a,times,temp;
    if(a<b){
        temp=a;
        a=b;
        b=temp;
    }
    while(g<=a*b){
        if(g%a==0&&g%b==0){
            small=g;
            break;
            }
        else
            g++;
        
    }
    times=(365/small)+1;
    return times; 
}
int main(){
    int x,y;
    while(scanf("%d%d",&x,&y)&&x!=EOF)
    printf("%d\n",f(x,y));
}