#include<stdio.h>
int main(){
     long long int sum=0;
     int i,n;
    

    scanf("%d",&n);

  
    for(i=1;i<=n;i=i+1){

          sum = sum+i;
        //printf("%d \n",sum);
            
    }
    printf("%lld \n",sum); //purpose of testing ,if i give printf outside the block
    return 0;
}