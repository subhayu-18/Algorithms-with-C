/*Name: Subhayu Sengupta
Dept.:CSE   Year:2nd    Sem:4th 
Class Roll: 7
Paper Name: Design & Analysis of Algorithms Lab
Paper Code: PCC-CS-494*/

//sort the given sequence of numbers using heap sort algorihtm

#include <stdio.h>

void heapSort(int [], int);
void heapify(int [], int, int);
void swap(int *,int *);
void printArray(int [],int);

int main()
{
    int n,arr[20],i;
    printf("enter array length: ");
    scanf("%d",&n);
    printf("enter array elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    heapSort(arr, n);
    printf("Sorted array is \n");
    printArray(arr, n);
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
}
