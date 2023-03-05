#pragma once 

#include <vector>
#include <algorithm>

#include "utility.h"

using std::vector;

template<Comparable T>
void bubble_sort(std::vector<T>& arr) {
    bool was_swap = false;
    for (int i = arr.size(); i > 0; i--) {
        for (int j = 1; j < i; j++) {
            if (arr[j] < arr[j - 1]) {
                std::swap(arr[j], arr[j - 1]);
                was_swap = true;
            }
        }
        if (!was_swap) {
            return;
        }
    }
}

template<Comparable T>
void insertion_sort(std::vector<T>& arr, int l, int r) {
    for (int i = l; i <= r; i++) {
        for (int j = i; j > l; j--) {
            if (arr[j] < arr[j - 1]) {
                std::swap(arr[j], arr[j - 1]);
            }
        }
    }
}

template<Comparable T>
void insertion_sort(std::vector<T>& arr) {
    insertion_sort(arr, 0, arr.size() - 1);
}