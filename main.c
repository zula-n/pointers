#include <stdio.h>
#include "ps2.c"

int main() {
    int *largest;
    int *smallest;
    int arr1[] = {72,90,100,36,21,15,76,-6,63,41,99,27,3,66,19,16,27,47,0,23};
    int size1 = sizeof(arr1)/sizeof(int);
    large_and_small(arr1, size1, &largest, &smallest);

    int *big;
    int *small;
    int arr2[] = {-72,-90,-100,-36,-21,-15,-76,-6,63,41,99,27,3,66,19,16,27,47,0,23};
    int size2 = sizeof(arr2)/sizeof(int);
    large_and_small(arr2, size2, &big, &small);


    double left [] = {15.26, 28.20, 6.71, 72.22, 92.85, 15.50, 85.64, 57.41, 44.40, 72.91};
    double right [] = {9.17, 4.8, 10.9, 10.12, 17.18, 3.9, 6.19, 5.4, 3.13, 6.1};
    int lsize = sizeof(left)/sizeof(double);
    //size_t lsize = (&left)[1] - left;
    double answer = inner_product(&left, &right, lsize);
    printf("\n%.2f", answer);

    int left1 [] = {72, 90,100,36,21,15,76,-6,63,41,99,27,3,66,19,16,27,47,0,23};
    int right1 []  = {72, 90,100,36,21,15,76,-6,63,41,99,27,3,66,18,16,27,47,0,23};
    int left2 [] = {72, 90,100,36,21,15,76,-6,63,41,99,27,3,66,19,16,27,47,0,23};
    int right2 [] = {72, 90,100,36,21,15,76,-6,63,41,99,27,3,66,18,16,27,47,23};


    int l1size = sizeof(left1)/sizeof(int);
    int r1size = sizeof(right1)/sizeof(int);
    int l2size = sizeof(left2)/sizeof(int);
    int r2size = sizeof(right2)/sizeof(int);
    compareArrays(&left1, l1size, &right1, r1size);
    compareArrays(&left2, l2size, &right2, r2size);
}
