#include<stdio.h>
long long int fibo(long long int n){
    if(n==0)
        return 0;
    }else if (n==1){
        return 1;
    }
    long long int acum[61];
    acum[0]=0;
    acum[1]=1;
    int i;
    for(i=2;i<=n;i++){
        acum[i]=acum[i-1]+acum[i-2];
    }
    return acum[n];
}
int main(){
    int q,i;
    long long int n;

    scanf("%d",&n);

    for (i=0;i<q;i++){
        scanf("%lld",&n);
        printf("Fib(%lld) = %lld\n",n,fibo(n));
    }

    return 0;
}
