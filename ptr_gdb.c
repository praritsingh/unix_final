#include <stdio.h>

int main() {
    int num, reversedNum = 0, originalNum, remainder;

    // Input a number from the user
    //printf("Enter a number: ");
    //scanf("%d", &num);
    num=101;
    originalNum = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

  
    int *ptr = NULL;
    *ptr = 10; 

    
    if (originalNum == reversedNum)
        printf("%d is a palindrome.\n", originalNum);
    else
        printf("%d is not a palindrome.\n", originalNum);

    return 0;
}

