#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) 
{
    int and_max = 0, or_max = 0, xor_max = 0;
    int temp = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            // and
            temp = (i) & (j);
            if ((and_max < temp) && (temp < k))
                and_max = temp;
            // or
            temp = (i) | (j);
            if ((or_max < temp) && (temp < k))
                or_max = temp;
            // xor
            temp = (i) ^ (j);
            if ((xor_max < temp) && (temp < k))
                xor_max = temp;
        }
    }
  
    printf("%d\n%d\n%d\n", and_max, or_max, xor_max);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}

