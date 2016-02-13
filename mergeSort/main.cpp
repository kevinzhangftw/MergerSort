//
//  main.cpp
//  mergeSort
//
//  Created by Kevin Zhang on 2016-02-09.
//  Copyright © 2016 Kevin Zhang. All rights reserved.
//

#include <iostream>
using namespace std;

void Mergesort(int arr[], int low, int high);

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[5] = {3,1,2,5,4};
    int low = 0;
    int high = 4;
    Mergesort(arr, low, high);
    
    return 0;
}

void Mergesort(int arr[], int low, int high){
    if (low < high) {
        int mid= low + (high-low)/2;
        Mergesort(arr, low, high);
        Mergesort(arr, mid+1, high);
        //Mergesort(arr, mid, high);
    }
}

void printArray(int arr[], int arr_size){
    //read every element of the array
    for (int i = 0; i<arr_size; ++i) {
        cout<< " " <<arr[i];
    }
    //print out that element
}