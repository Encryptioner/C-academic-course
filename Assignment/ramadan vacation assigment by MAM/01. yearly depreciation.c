/*1.The straight line method of computing the yearly depreciation of the value of an item is given by,
Depreciation = (Purchase price – salvage value) / Years of service.
Write a program to determine the salvage value of an item when the purchase price, year of service and the annual depreciation are given by user.*/


#include <stdio.h>
int main()
{
    float Depreciation, Purchase_price, salvage_value, Year_service;
    printf("\nEnter annual Depreciation = ");
    scanf("%f",&Depreciation);
    printf("\nEnter Purchase_price = ");
    scanf("%f",&Purchase_price);
    printf("\nEnter years of service = ");
    scanf("%f",&Year_service);
    salvage_value= Purchase_price-(Depreciation*Year_service);
    printf("\nSo, Salvage value is %f\n",salvage_value);
    return 0;
}
