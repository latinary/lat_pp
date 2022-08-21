#pragma once

#include "latpp.h"

int partition(int arr[], int start, int end)
{
 
    int pivot = arr[start];
 
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
 
    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
 
    // Sorting left and right parts of the pivot element
    int i = start, j = end;
 
    while (i < pivotIndex && j > pivotIndex) {
 
        while (arr[i] <= pivot) {
            i++;
        }
 
        while (arr[j] > pivot) {
            j--;
        }
 
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
 
    return pivotIndex;
}

namespace vexillum
{
    inanis velox_ordino(numerus album[], numerus satus, numerus finis) // quicksort
    {
        if (satus >= finis)
            reditus;
    
        // partitioning the array
        numerus p = partition(album, satus, finis);
    
        // Sorting the left part
        velox_ordino(album, satus, p - 1);
    
        // Sorting the right part
        velox_ordino(album, p + 1, finis);
    }
}