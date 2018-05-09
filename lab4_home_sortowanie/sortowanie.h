//
// Created by usuryjskij on 02.05.18.
//

#ifndef LAB4_HOME_SORTOWANIE_SORTOWANIE_H
#define LAB4_HOME_SORTOWANIE_SORTOWANIE_H

void printArray(int array[], int size);
void bubbleSort(int unsortedArray[],int size);
void mergeSort(int unsortedArray[], int firtsElement, int lastElement);
void merge(int unsortedArray[], int firstElement, int middle, int lastElement);
void insertSort(int unsortedArray[], int size);
void selectionSort(int unsortedArray[], int size);
int mergeQuick(int unsortedArray[], int firstElement, int lastElement);
void redoHeap(int heap[], int size, int element);

void countSort(int unsortedArray[]);
void bucketSort(int unsortedArray[]);

void quickSort(int usortedArray[], int firstElement, int lastelement);
void heapSort(int unsortedArray[], int size);

#endif //LAB4_HOME_SORTOWANIE_SORTOWANIE_H
