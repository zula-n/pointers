//
// Created by zula nyamtur on 2/26/21.
//
#include <stdbool.h>
#include "ps2.h"

void large_and_small(const int* array, int length, int* largest, int* smallest) {
    for (int counter = 0; counter < length; counter++) {
        if (*(array + counter) > *largest) {
            *largest = *(array + counter);
        }
    }
    printf("\nLargest element: %d", *largest);

    for (int counter = 0; counter < length; counter++) {
        if (*(array + counter) < *smallest) {
            *smallest = *(array + counter);
            }
        }
    printf("\nSmallest element: %d", *smallest);


}

double inner_product(const double* leftArray, const double* right_array, int length) {
        double result;
        for (int counter = 0; counter < length; counter++) {
            result += (*(leftArray + counter)) * (*(right_array + counter));
        }
        return result;
    }

bool compareArrays(int* left, int left_length, int* right, int right_length){
    if(left_length != right_length){
        printf("\nfalse");
        return false;
    }
    for(int counter = 0; counter < left_length; counter++){
        if((*(left + counter)) != (*(right + counter))){
            printf("\nfalse");
            return false;
        }
    }
    printf("\ntrue");
    return true;
}








