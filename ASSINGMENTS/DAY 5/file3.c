//print Sum of Even and  sum of odd values between 1 to 50?
#include <stdio.h>

int main() {
    int i, sum_even = 0, sum_odd = 0;

    for(i=1; i<=50; i++) {
        if(i % 2 == 0) {
            sum_even += i;
        } else {
            sum_odd += i;
        }
    }

    printf("The sum of even numbers between 1 and 50 is: %d\n", sum_even);
    printf("The sum of odd numbers between 1 and 50 is: %d\n", sum_odd);

    return 0;
}
