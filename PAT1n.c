#include <stdio.h>

int isPrime(int num);
int isArmstrong(int num);
int isPerfect(int num);

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }
    
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    
    if (isPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }
    
    return 0;
}

int isPrime(int n) {
    if(n == 1){
        printf("1 is neither a prime nor a composite number");
    }
    else if(n==2){
        printf("2 is a prime number");
    }
    else{
        for(int i = 2; i < n;++i){
            if(n%i == 0){
                return 0;
            }
        }
        return 1;}
}

int isArmstrong(int num) {
    int originalNum, remainder, n = 0, result = 0, i;
    int numArray[10];
    originalNum = num;
    while (originalNum != 0) {
        numArray[n] = originalNum % 10;
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    for (i = 0; i < n; i++) {
        remainder = numArray[i];
        int j;
        int power = 1;
        for (j = 1; j <= n; j++) {
            power *= remainder;
        }
        result += power;
    }
    if (result == num) {
        return 1; 
    }
    else {
        return 0; 
    }
}

int isPerfect(int num) {
    int i, sum = 0;
    for (i = 1; i <= num/2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    if (sum == num) {
        return 1;
    } 
    else {
        return 0; 
    }
}
