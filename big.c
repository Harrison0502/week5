#include <stdio.h>
#include <stdlib.h>

int f(int a,int b){
    int t=1;
    while(t){
        t=a%b;
        a=b;
        b=t;
    }
    return a; 
}
int main(){
    int x,y;
    while(scanf("%d%d",&x,&y)&&x!=EOF){
        int times,small,ret;
        ret=f(x,y);
        small=(x*y)/ret;
        times=(365/small)+1;
        printf("%d\n",times);
    }
    return 0;    
}