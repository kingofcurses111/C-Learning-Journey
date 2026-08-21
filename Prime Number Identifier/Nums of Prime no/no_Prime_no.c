#include <stdio.h>

void Prime(int num){
    int isPrime = 1;
    if(num <= 1){
        printf("Enter a num greater than 1\n");
    }
    for (int num_1 = 2; num_1 <= num; num_1++)
    {
        isPrime = 1;
        for (int i = 2; i * i <= num_1 ; i++)
        {
            if(num_1 % i == 0){
                isPrime = 0;
            }
        }
         if(isPrime == 1){
            printf("%d\n", num_1);
         }
    }
    
}
int main(){
    int num;
    printf("Enter a num: ");
    if(scanf("%d", &num) != 1){
        printf("Invalid input\n");
        return 0;
    }

    Prime(num);
    return 0;
}