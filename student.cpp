#include<iostream>
using namespace std;
// Function to calculate total marks
int calculateTotal(int marks[], int size)
{
    int total = 0;

    for(int i = 0; i < size; i++)
    {
        total += marks[i];
    }

    return total;
}
int main()
{
    int studentMarks[5] = {10,20,30,40,50};

    int result = calculateTotal(studentMarks,5);

    cout << "Total Marks = " << result;

    return 0;
}
