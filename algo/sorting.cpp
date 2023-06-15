#include <chrono>
#include <cstdlib>
#include <iostream>

int partition(int *arr, int start, int end) {
    int pivot = arr[start];
    int count = 0;

    for (int i = start + 1; i <= end; ++i) {
        if (arr[i] <= pivot) {
            count++;
        }
    }

    int pivotIndex = start + count;
    std::swap(arr[pivotIndex], arr[start]);

    int i = start;
    int j = end;

    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }

        while (arr[j] > pivot) {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex) {
            std::swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return pivotIndex;
}

void quickSort(int *arr, int start, int end) {
    if (start >= end) {
        return;
    }

    int p = partition(arr, start, end);

    quickSort(arr, start, p - 1);
    quickSort(arr, p + 1, end);
}

void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = i; j < size; ++j) {
            if (arr[i] > arr[j]) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}

auto testingQuickSort(int n) {
    auto start_time = std::chrono::high_resolution_clock::now();
    for (int j = 0; j < 50; ++j) {
        int *array = new int[n];

        for (int i = 0; i < n; ++i) {
            array[i] = 1 + rand() % 101;
        }

        quickSort(array, 0, n - 1);

        int a = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (array[i + 1] < array[i]) {
                a = 1;
            }
        }

        if (a == 0) {
            std::cout << "True: Test #" << j + 1 << std::endl;
        } else {
            std::cout << "False: Test #" << j + 1 << std::endl;
        }
        delete[] array;
    }

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;
    return time;
}

auto testingBubbleSort(int n) {
    auto start_time = std::chrono::high_resolution_clock::now();
    for (int j = 0; j < 50; ++j) {
        int *array = new int[n];

        for (int i = 0; i < n; ++i) {
            array[i] = 1 + rand() % 101;
        }

        bubbleSort(array, n);

        int a = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (array[i + 1] < array[i]) {
                a = 1;
            }
        }

        if (a == 0) {
            std::cout << "True: Test #" << j + 1 << std::endl;
        } else {
            std::cout << "False: Test #" << j + 1 << std::endl;
        }

        delete[] array;
    }

    auto end_time = std::chrono::high_resolution_clock::now();
    auto time = end_time - start_time;
    return time;
}

int main() {
    for (int n = 50; n <= 50000; n *= 10) {
        std::cout << "----------------------Size of array: " << n
                            << "----------------------" << std::endl;
        std::cout << testingQuickSort(n) / std::chrono::milliseconds(1)
                            << " time (ms) for QuickSort" << std::endl;
        std::cout << testingBubbleSort(n) / std::chrono::milliseconds(1)
                            << " time (ms) for BubbleSort" << std::endl;
        std::cout
                << "------------------------------------------------------------------"
                << std::endl;
    }
    return 0;
}