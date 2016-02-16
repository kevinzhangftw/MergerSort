//
//  main.cpp
//  mergeSort
//
//  Created by Kevin Zhang on 2016-02-09.
//  Copyright © 2016 Kevin Zhang. All rights reserved.
//

#include <iostream>
using namespace std;

int Mergesort(int arr[], int arr_size);
void printArray(int arr[], int arr_size);
int doMergeSort(int arr[], int arr_size, int low, int high);
int merge(int arr[], int arr_size, int low, int mid, int high);

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr_size = 5;
    int arr[5] = {3,1,2,5,4};
    Mergesort(arr, arr_size);
    printArray(arr, arr_size);
    return 0;
}

int Mergesort(int arr[], int arr_size){
    int low = 0;
    int high = arr_size-1;
    int barOps = doMergeSort(arr, arr_size, low, high);
    return barOps;
}

int doMergeSort(int arr[], int arr_size, int low, int high){
    int barOps=0;
    if (low < high) {
        int mid= low + (high-low)/2;
        //sort left
        doMergeSort(arr, arr_size, low, mid);
        //sort right
        doMergeSort(arr, arr_size, mid+1, high);
        //merge
        merge(arr, arr_size, low, mid, high);
    }
    return barOps;
}

int merge(int arr[], int arr_size, int low, int mid, int high){
    int barOps = 0;
    int temp[arr_size];
    for (int i=low; i<=high; ++i) {
        temp[i] = arr[i];
    }

    int i = low;
    int j = mid+1;
    int k = low;
    
    while (i<= mid && j<=high) {
        if (temp[i]<=temp[j]) {
            arr[k] =temp[i];
            ++i;
        }else{
            arr[k] =temp[j];
            ++j;
        }
        ++k;
    }
    
    while (i<=mid) {
        arr[k] = temp[i];
        ++k;
        ++i;
    }
    return barOps;
}


void printArray(int arr[], int arr_size){
    //read every element of the array
    for (int i = 0; i<arr_size; ++i) {
        cout<< " " <<arr[i];
    }
    //print out that element
}