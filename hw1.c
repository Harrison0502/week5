#include <stdio.h>
#include <stdlib.h>

int f(int a,int b){
    int times,small;
    int t=0,i=0;
    for(i=1;i<=a*b;i++){
        if(a*i%b==0){
            small=a*i;
            break;
            }
    } 
    times=(365/small)+1;
    return times; 
}
int main(){
    int x,y;
    while(scanf("%d%d",&x,&y)&&x!=EOF){
        printf("%d\n",f(x,y));
    }
    
}