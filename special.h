#pragma once

#include <vector>
#include <algorithm>
#include <limits>

#include "utility.h"

using std::vector;


std::pair<int64_t, int64_t> vec_limits(const vector<int>& a) {
    int64_t min = INT_MAX;
    int64_t max = INT_MIN;
    for (auto el : a) {
        if (el < min) {
            min = el;
        } else if (el > max) {
            max = el;
        }
    }
    return std::pair<int64_t, int64_t>(min, max);
}

vector<int> CountSort(const vector<int>& a, int min, int max) {
    size_t MAX_VAL = max - min;
    vector<int> C(MAX_VAL + 1); // MAX_VAL - максимально возможное число в массиве

    for (int i = 0; i < a.size(); ++i) {
        ++C[a[i] - min]; // посчитали количество вхождений каждого элемента
    }

    vector<int> result;

    for (int val = 0; val < MAX_VAL; ++val) {
        for (int i = 0; i < C[val]; ++i) { // кладём val в результат сколько раз,
            result.push_back(val + min);      // сколько он встречался в исходном массиве
        }
    }

    return result;
}

vector<int> CountSort(const vector<int>& a) {

    std::pair<int64_t, int64_t> limits = vec_limits(a);
    
    return CountSort(a, limits.first, limits.second);
}