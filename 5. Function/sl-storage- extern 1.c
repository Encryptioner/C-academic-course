#include <stdio.h>
//int count;
//extern void write_extern()/*The extern storage class is used to give a reference of a global variable that is visible to ALL the program files. When you use 'extern', the variable cannot be initialized as all it does is point the variable name at a storage location that has been previously defined. */


extern int count;
void write_extern(void)/* 1st 2 line er khetre program run kore */
{
count = 5;
printf("count is %d\n", count);
}

main()
{
    write_extern();
}
