#include <stdio.h>
#include <limits.h>/*necessary function. math conio or nothing can applicable without making error*/
int main()
{
    printf("Storage size of short int: %d \n", sizeof(int));
    printf("Storage size of float: %d \n", sizeof(float));
    printf("Storage size of void: %d \n", sizeof(void));
    printf("Storage size of long long: %d \n", sizeof(long long));
    printf("Storage size of double: %d \n", sizeof(double));
    return 0;
}
