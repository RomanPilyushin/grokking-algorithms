#include "iostream"
using namespace std;

void binarySearch(int data_array[], int element)
{
    int length = sizeof(data_array);

    int low = 0;
    int high = length;
    while (low <= high)
    {
        int mid = (low + high)/2; 
        int guess = data_array[mid];

        if (guess == element)
        {
            cout<<"Element found at "<<mid<<" th index"<<endl ;
            return ;
        }
        else if (guess > element)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout<<"Element Not Found"<<endl ;
    return ; //number not found
}
int main()
{
    int data_array[] = {2,10,23,44,100,121};


    binarySearch(data_array, 3) ;  // not found case
    binarySearch(data_array, 2) ; // found at corner case
    binarySearch(data_array, 44) ; //found at middle case
    return 0;
}

