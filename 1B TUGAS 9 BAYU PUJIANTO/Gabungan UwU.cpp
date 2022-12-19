#include <iostream>
using namespace std;
void bubbleSort(int array[], int size) {
 for (int step = 0; step < (size-1); ++step) {
 int swapped = 0;
 for (int i = 0; i < (size-step-1); ++i) {
 if (array[i] > array[i + 1]) {
 int temp = array[i];
 array[i] = array[i + 1];
 array[i + 1] = temp;
 swapped = 1;
 }
 }
 if (swapped == 0)
 break;
 }
}
int binarySearch(int array[], int x, int awal, int akhir) {
 while (awal <= akhir) {
int tengah = awal + (akhir - awal) / 2;
 if (array[tengah] == x)
 return tengah;
 if (array[tengah] < x)
 awal = tengah + 1;
 else
 akhir = tengah - 1;
 }
 return -1;
}
