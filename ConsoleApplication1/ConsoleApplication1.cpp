#include <iostream>
#include "Sort.h"

using namespace std;


int main()
{

    int n; // Size of the array
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << endl;



    int* arr = new int[n];

    cout << "Enter " << n << " elements of the array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i + 1 << " element of the array:";
        cin >> arr[i];
        cout << endl;
        cout << "";
    }

    cout << "You entered the following array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int choise;
    cout << "If you want to sort only part of your array enter 1, if not press any key ";
    cin >> choise;
    cout << endl;

    int from;
    int to;

    if (choise == 1) {
        cout << "Sort from element ";
        cin >> from;
        cout << "to ";
        cin >> to;
        from = from - 1;
        to = to - 1;
        cout << endl;
        if (from < 0 || from >= n || to < 0 || to >= n) {
            cout << "ERROR!!! Invalid input range";
            return 0;
        }
        else {
            cout << "Enter method" << endl;
            cout << "1 - bubble sort" << endl;
            cout << "2 - insertion sort" << endl;
            cout << "3 - selection sort" << endl;
            cin >> choise;
            switch (choise)
            {
            case 1:
                cout << "You chose bubble sort" << endl;
                bubble_sort(arr, n, from, to);
                break;
            case 2:
                cout << "You chose insertion sort" << endl;
                insertion_sort(arr, n, from, to);
                break;
            case 3:
                cout << "You chose selection sort" << endl;
                selection_sort(arr, n, from, to);
                break;
            default:
                cout << "You didn`t enter a method" << endl;
                break;
            }

            cout << "Your sorted array from " << from << " to " << to << ":" << endl;
            show(arr, n);

            return 0;
        }
    }
    else {
        cout << "Enter method" << endl;
        cout << "1 - bubble sort" << endl;
        cout << "2 - insertion sort" << endl;
        cout << "3 - selection sort" << endl;
        cin >> choise;
        switch (choise)
        {
        case 1:
            cout << "You chose bubble sort" << endl;
            bubble_sort(arr, n, 0, n);
            break;
        case 2:
            cout << "You chose insertion sort" << endl;
            insertion_sort(arr, n, 0, n);
            break;
        case 3:
            cout << "You chose selection sort" << endl;
            selection_sort(arr, n, 0, n);
            break;
        default:
            cout << "You didn`t enter a method" << endl;
            break;
        }

        cout << "Your sorted array:" << endl;
        show(arr, n);

        return 0;
    }
}