#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int temp = n;
    int sum = 0;
    while (temp)
    {
        sum += temp % 10;
        temp /= 10;
    }
    printf("%d\n", sum);
    return 0;
}
