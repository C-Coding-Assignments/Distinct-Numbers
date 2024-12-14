#include <stdio.h>
#include <stdbool.h>

//function prototype for find_distinct which finds the number of distinct elements within the array
int find_distinct(int[], int, int[]);
//function prototype for selection_sort which sorts the elements of the array that are distinct
void selection_sort(int[], int);

int main()
{
    //variable declarations
    int size, sizeDistinct;

    //getting size of sequence from the user
    printf("Enter the size of sequence: ");
    scanf("%d", &size);
    printf("Enter numbers: ");

    //variable declarations
    int array[size], distinct[size];    

    //for loop which iterates through each index of the sequence and assigns each array index with an int entered by the user
    for (int i = 0; i < size; i++)
        scanf("%d", &array[i]);

    //calling find_distinct function to find the number of distinct elements within the array and storing that into the variable sizeDistinct
    sizeDistinct = find_distinct(array, size, distinct);

    //calling selection_sort function to sort the distinct elements of the array in increasing order
    selection_sort(distinct, sizeDistinct);

    //printing the distinct elements of the array in increasing order
    printf("Output: ");
    for (int i = 0; i < sizeDistinct; i++)
        printf("%d ", distinct[i]);

    return 0;
}

//function definition for find_distinct which finds the number of distinct elements within the array and returning that value
int find_distinct(int numbers[], int n, int result[])
{
    //variable declarations and initializations
    int distinct = 0;
    bool found = false;

    //initializing the first element of the result array to numbers[0]
    result[distinct++] = numbers[0];

    //nested for loop which iterates through each element of the array and checks if it's distinct from the elements already stored in the result array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < distinct; j++)
            if (numbers[i] == result[j])
                found = true;

        // if the number is distinct, it's added to the result array and found flag is reset to false
        (!found) ? (result[distinct++] = numbers[i]) : (found = false);
    }

        return distinct;
}

//function definition for selection_sort which sorts the elements of the array in increasing order
void selection_sort(int array[], int n)
{
    //nested for loop which iterates through each index of the array and finds the smallest element in the remaining unsorted portion of the array
    for (int i = 0, min = array[0], temp; i < n; i++, min = array[i])
        for (int j = i; j < n; j++)
            if (array[j] < min)
            {
                //swapping array elements at indices i and j
                temp = array[i];
                min = array[i] = array[j];
                array[j] = temp;
            }    
}
