
#include <iostream>

// Function to perform bubble sort

void bubbleSort(long arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {

            if (arr[j] > arr[j + 1])
            {

                // Swap arr[j] and arr[j+1]

                long temp = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform binary search

bool binarySearch(long arr[], int n, long x)
{

    int left = 0, right = n - 1;

    while (left <= right)
    {

        int mid = left + (right - left) / 2;

        // Check if x is present at mid

        if (arr[mid] == x)
        {

            return true;
        }

        // If x greater, ignore left half

        if (arr[mid] < x)
        {

            left = mid + 1;
        }

        // If x is smaller, ignore right half

        else
        {

            right = mid - 1;
        }
    }

    // If we reach here, then the element was not present

    return false;
}

int main()
{

    // List of charge account numbers

    long accountNumbers[] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,

                             8080152, 4562555, 5552012, 5050552, 7825877, 1250255,

                             1005231, 6545231, 3852085, 7576651, 7881200, 4581002};

    int n = sizeof(accountNumbers) / sizeof(accountNumbers[0]);

    // Sort the array using bubble sort

    bubbleSort(accountNumbers, n);

    // Prompt user for input

    std::cout << "Enter a charge account number: ";

    long userNumber;

    std::cin >> userNumber;

    // Check if the number is valid using binary search

    if (binarySearch(accountNumbers, n, userNumber))
    {

        std::cout << "The number is valid." << std::endl;
    }
    else
    {

        std::cout << "The number is invalid." << std::endl;
    }

    return 0;
}
