#pragma once

#include <type_traits>

#include "square_sort.h"
#include "log_sort.h"
#include "utility.h"
#include "special.h"

using std::vector;

template<Comparable T>
void QuickInsertion(vector<T>& a, int l, int r) {
    if (l >= r) {
        return;
    }

    if (l >= r - 1) {
        if (a[l] > a[r]) {
            std::swap(a[l], a[r]);
        }
        return;
    }

    if (r - l < 10) {
        insertion_sort(a, l, r);
        return;
    }
    
    int mid = partition(a, l, r);
    QuickInsertion(a, l, mid - 1);
    QuickInsertion(a, mid + 1, r);
}

template<Comparable T>
void QuickInsertion(vector<T>& a) {
    QuickInsertion(a, 0, a.size() - 1);
}

template<Comparable T>
void MergeInsertion(vector<T>& a, int l, int r) {
    if (l < r) {
        if (r - l <= 43) {
            insertion_sort(a, l, r);
            return;
        }

        int m = (l + r) / 2;

        MergeInsertion(a, l, m);
        MergeInsertion(a, m + 1, r);

        merge(a, l, m, r);
    }
}

template<Comparable T>
void MergeInsertion(vector<T>& a) {
    MergeInsertion(a, 0, a.size() - 1);
}

// Final version for general sorting algorithm
template<Comparable T>
void Sort(vector<T>& a) {
    if (std::is_integral_v<T>) {
        std::pair<int64_t, int64_t> limits = vec_limits(a);
        size_t diff = limits.second - limits.first;
        if (diff <= a.size() && diff > 0) {
            a = CountSort(a);
            return;
        }
    }
    QuickInsertion(a);
}
