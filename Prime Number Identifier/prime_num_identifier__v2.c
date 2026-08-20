#include <stdio.h>

int main(){
    int num, isPrime = 1;

    while (1)
    {
        isPrime = 1;
        printf("Enter a num to check wheather it is prime or not: ");

        if(scanf("%d", &num) != 1){
            printf("Invalid input!\n");
            while(getchar() != '\n');
            continue;
        }
        
        if(num == 0 || num == 1){
            isPrime = 0;
            printf("This is not a prime num, try greater than 1\n");
            continue;
        }
        
        for (int i = 2; i * i <= num; i++)
        {
            if(num % i == 0){
                isPrime = 0;
                break;
            }
        }
        
        if(isPrime){
            printf("This is a prime num\n");
        }
        else{
            printf("This is not prime num\n");
        }
    }
    
    return 0;
}