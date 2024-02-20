#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define IS_PRIME(n) (is_prime(n))

int is_prime(int n){
    if(n<=1){
        return 0;
    }
    for(int i = 2; i*i<=n; i++){
        if(n % i == 0)
        {return 0;}
    }
    return 1;
}

int main(int argc, char *argv[]){
    if(argc != 3){
        printf("Usage: %s <number>\\n", argv[0]);
        return 1;
    }

    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    if(a<1 || b<a){
        printf("INVALID");
        return 1;
    }

    printf("Prime numbers in the range from %d to %d:\n",a,b);

    for(int i = a; i <=b; i++){
        if(IS_PRIME(i)){
            printf("%d ",i);
        }
    }
    return 0;
}