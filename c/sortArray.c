#include <stdio.h>

// bubble sort
void sort(char array[], int size){
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            
        }
        
    }
    
}

void printArray(char array[], int size){
    for (int i = 0; i < size; i++)
    {
        printf("%c", array[i]);
    }
    
}

int main(){
    // int array[] = {2, 4, 7, 8, 3, 1, 2, 6, 9};
    char array[] = {'F', 'a', 'Y', 'Z', 'p', 'l', 'L'};
    int size = sizeof(array)/sizeof(array[0]);
    sort(array, size);
    printArray(array, size);

    return 0;
}