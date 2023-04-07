#include<stdio.h>
int main() {

    int a,b,sub;
    scanf("%d %d",&a,&b);
    sub=b-a;
    if( b > a && sub>= 0){
        printf("%d",sub);
    }
  
    else{
          sub=a-b;
        printf("%d - %d = %d",a,b,sub);
    }
   
    return 0;
}
