#pragma once

#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

#include "utility.h"

using std::cout, std::cin, std::endl, std::string, std::vector;

template<Comparable T>
void merge(vector<T>& arr, int l, int m, int r) {
    int i{0}, j{0}, k{l};
    int length_l = m - l + 1;
    int length_r = r - m;
    vector<T> left(length_l), right(length_r);

    for (int i = 0; i < length_l; i++) {
        left[i] = arr[l + i];
    }
    for (int i = 0; i < length_r; i++) {
        right[i] = arr[m + i + 1];
    }

    while (i < length_l && j < length_r) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < length_l) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < length_r) {
        arr[k] = right[j];
        j++;
        k++;
    }
}   

template<Comparable T>
void merge_sort(vector<T>& arr, int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;

        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

template<Comparable T>
void merge_sort(vector<T>& arr) {
    merge_sort(arr, 0, arr.size() - 1);
}

template<Comparable T>
int partition(vector<T>& a, int l, int r) {
    int pi = l; // unsorted pivot index
    T pivot = a[pi];
    int count = l;
    int i = l, j = r;

    for (int i = l; i <= r; i++) {
        if (a[i] <= pivot) {
            count++; // finding sorted index for pivot
        }
    }

    std::swap(a[count - 1], a[pi]); // swapping pivot and element on its sorted position
    pi = count - 1;

    while (i < pi && j > pi) {
        while (a[i] <= pivot) {
            i++;
        }
        while (a[j] > pivot) {
            j--;
        }
        if (i < pi && j > pi) {
            std::swap(a[i], a[j]);
        }
    }

    return pi;
}

template<Comparable T>
void quick_sort(vector<T>& a, int l, int r) {
    if (l >= r) {
        return;
    }

    if (l >= r - 1) {
        if (a[l] > a[r]) {
            std::swap(a[l], a[r]);
        }
        return;
    }
    
    int mid = partition(a, l, r);
    quick_sort(a, l, mid - 1);
    quick_sort(a, mid + 1, r);
}

template<Comparable T>
void quick_sort(vector<T>& a) {
    quick_sort(a, 0, a.size() - 1);
}