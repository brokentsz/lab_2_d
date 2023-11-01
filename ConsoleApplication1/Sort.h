#pragma once
void show(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void insertion_sort(int arr[], int n, int from, int to) {
    for (int i = from + 1; i < to; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= from && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        std::cout << "Step " << i+1 << ", Moving elements: ";
        show(arr, n);
        arr[j + 1] = key;
    }
}

void bubble_sort(int arr[], int n, int from, int to) {
    for (int i = from; i < to - 1; i++) {
        bool swapped = false;
        for (int j = from; j < to - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }

        std::cout << "Step " << i+1 << ", Swapping elements: ";
        show(arr, n);
    }
}

void selection_sort(int arr[], int n, int from, int to) {
    for (int i = from; i < to - 1; i++) {
        int min_index = i;
        for (int j = i + 1; j < to; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        if (min_index != i) {
            int temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }

        std::cout << "Step " << i+1 << ", Swapping elements: ";
        show(arr, n);
    }
}
