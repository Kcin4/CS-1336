#include <iostream>
#include <iomanip>
#include <cmath> //math
using namespace std;

//returns the index of minimum value in array[startIndex .. stopIndex]
int findMinIndex(int *array, int startIndex, int stopIndex) {
    int smallestValueIndex = startIndex;
    for(int i=startIndex; i<=stopIndex; i++){
        if(array[i] < array[smallestValueIndex])
            smallestValueIndex = i;
    }
    return smallestValueIndex;
}

//SWAPs contents of 2 variables.
void exchange(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
	int numbers[100], arraySize;

	cin >> arraySize;
	for(int i=0; i<arraySize; i++)
        cin >> numbers[i];

    //UPDATE THIS CODE - Step 2
    for(int i=0; i<arraySize; i++){
        int smallestValueIndex = findMinIndex(numbers, i, arraySize-1);
        exchange(numbers[i], numbers[smallestValueIndex]);
    }
	for(int i=0; i<arraySize; i++)
        cout << numbers[i] << " ";
}
