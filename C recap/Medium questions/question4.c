#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int handshakes = ((n)*(n-1))/2;
    printf("The number of handshakes are %d", handshakes);

    return 0;
}