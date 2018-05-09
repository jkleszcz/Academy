//
// Created by usuryjskij on 02.05.18.
//


#include <iostream>

void printArray(int array[], int size){
    std::cout << "Array: ";
    for(int i=0 ; i<size ; ++i)
        std::cout << array[i] << ", ";
}

void bubbleSort(int unsortedArray[], int size) {
    for(int i=0 ; i<size ; ++i){
        bool isSorted = true;
        for(int j=0 ; j<size-i-1 ; ++j){
            if(unsortedArray[j] > unsortedArray[j+1]){
                int temp = unsortedArray[j];
                unsortedArray[j] = unsortedArray[j+1];
                unsortedArray[j+1] = temp;
                isSorted = false;
            }
        }
        if(isSorted)
            break;
    }
}

void merge(int unsortedArray[], int firstElement, int middle, int lastElement){
    int leftSize = middle-firstElement+1;
    int rightSize = lastElement-middle;
    int leftArray[leftSize];
    int rightArray[rightSize];

    for(int i=0 ; i<leftSize ; ++i)
        leftArray[i] = unsortedArray[firstElement+i];
    for(int i=0 ; i<rightSize ; ++i)
        rightArray[i] = unsortedArray[middle+1+i];

    int i = 0;
    int j = 0;
    int sortedIndex = firstElement;

    while(i<leftSize && j<rightSize){
        if(leftArray[i] <= rightArray[j]){
            unsortedArray[sortedIndex] = leftArray[i];
            ++i;
        }else{
            unsortedArray[sortedIndex] = rightArray[j];
            ++j;
        }
        ++sortedIndex;
    }

    while(i<leftSize){
        unsortedArray[sortedIndex] = leftArray[i];
        ++i;
        ++sortedIndex;
    }

    while(j<rightSize){
        unsortedArray[sortedIndex] = rightArray[j];
        ++j;
        ++sortedIndex;
    }
}

void mergeSort(int unsortedArray[], int firstElement, int lastElement){
    if(firstElement<lastElement){
        int middle = firstElement + (lastElement - firstElement)/2;
        mergeSort(unsortedArray,firstElement,middle);
        mergeSort(unsortedArray,middle+1,lastElement);
        merge(unsortedArray,firstElement,middle,lastElement);
    }
}

void insertSort(int *unsortedArray, int size) {
    for(int i=0 ; i<size ; ++i){
        int insertedElement = unsortedArray[i];
        int place = i;
        while(place > 0 && unsortedArray[place-1] > insertedElement){
            unsortedArray[place] = unsortedArray[place-1];
            unsortedArray[place-1] = insertedElement;
            --place;
        }
    }
}

void selectionSort(int *unsortedArray, int size) {
    int minValue, minIndex;
    for(int i=0 ; i<size ; ++i){
        minValue = unsortedArray[i];
        minIndex = i;
        for(int j=i+1 ; j<size ; ++j){
            if(unsortedArray[j] < minValue) {
                minValue = unsortedArray[j];
                minIndex = j;
            }
        }
        unsortedArray[minIndex] = unsortedArray[i];
        unsortedArray[i] = minValue;
    }

}
int mergeQuick(int *unsortedArray, int firstElement, int lastElement){
    int i = firstElement;
    int j = lastElement;
    int pivot = unsortedArray[(firstElement+lastElement)/2];

    while(1){
        while(unsortedArray[i] < pivot)
            ++i;
        while(unsortedArray[j] > pivot)
            --j;

        if(i < j){
            int temp = unsortedArray[i];
            unsortedArray[i] = unsortedArray[j];
            unsortedArray[j] = temp;
            ++i;
            --j;
        }else
            return j;
    }
}
void quickSort(int *unsortedArray, int firstElement, int lastElement) {
    if(firstElement < lastElement){
        int pivot = mergeQuick(unsortedArray, firstElement, lastElement);
        quickSort(unsortedArray, firstElement, pivot-1);
        quickSort(unsortedArray, pivot+1, lastElement);
    }
}

void redoHeap(int *heap, int size, int element){
    int largestIndex = element;
    int leftChildIndex = 2*element+1;
    int rightChildIndex = 2*element+2;

    if(leftChildIndex < size && heap[largestIndex] < heap[leftChildIndex])
        largestIndex = leftChildIndex;
    if(rightChildIndex < size && heap[largestIndex] < heap[rightChildIndex])
        largestIndex = rightChildIndex;

    if(largestIndex != element){
        int temp = heap[element];
        heap[element] = heap[largestIndex];
        heap[largestIndex] = temp;

        redoHeap(heap,size,largestIndex);
    }
}

void heapSort(int *unsortedArray, int size){
    for(int i=(size/2)-1 ; i>=0 ; --i){
        redoHeap(unsortedArray, size, i);
    }

    for(int i = size-1 ; i>=0 ; --i){
        int temp = unsortedArray[0];
        unsortedArray[0] = unsortedArray[i];
        unsortedArray[i] = temp;

        redoHeap(unsortedArray, i, 0);
    }
}

