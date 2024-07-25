// Create a C program that reads an array of integers from the user, calculates the average of the integers, and prints
// the result. Initialize a new Git repository for this project, commit the code, and upload it to your GitHub account.
// Provide the URL of the repository.

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int arr[n];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s += arr[i];
    }

    cout << (s / n) << endl;
}
