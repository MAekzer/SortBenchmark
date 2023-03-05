#pragma once

#include <chrono>

#include "utility.h"

using std::cout, std::vector;
using namespace std::chrono;

long long benchmark_sort(int el_count, void (*func)(vector<int>&)) {
    long long time = 0;
    time_point<high_resolution_clock> start_point, end_point;

    for (int i = 0; i < 1000; i++) {
        vector<int> arr = generate(el_count);
        start_point = high_resolution_clock::now();
        func(arr);
        end_point = high_resolution_clock::now();
        auto start = time_point_cast<microseconds>(start_point).time_since_epoch().count();
        auto end = time_point_cast<microseconds>(end_point).time_since_epoch().count();
        time += end - start;
    }
    return time / 1000;
}

/*
long long benchmark_sort(int el_count, vector<int> (*func)(const vector<int>&)) {
    long long time = 0;
    time_point<high_resolution_clock> start_point, end_point;

    for (int i = 0; i < 1000; i++) {
        vector<int> arr = generate(el_count);
        start_point = high_resolution_clock::now();
        func(arr);
        end_point = high_resolution_clock::now();
        auto start = time_point_cast<microseconds>(start_point).time_since_epoch().count();
        auto end = time_point_cast<microseconds>(end_point).time_since_epoch().count();
        time += end - start;
    }
    return time / 1000;
}
*/


long long benchmark_special_sort(int el_count, int modulo, vector<int> (*func)(const vector<int>&)) {
    long long time = 0;
    time_point<high_resolution_clock> start_point, end_point;

    for (int i = 0; i < 1000; i++) {
        vector<int> arr = generate_special(el_count, modulo);
        start_point = high_resolution_clock::now();
        func(arr);
        end_point = high_resolution_clock::now();
        auto start = time_point_cast<microseconds>(start_point).time_since_epoch().count();
        auto end = time_point_cast<microseconds>(end_point).time_since_epoch().count();
        time += end - start;
    }
    return time / 1000;
}

long long benchmark_special_sort(int el_count, int modulo, void (*func)(vector<int>&)) {
    long long time = 0;
    time_point<high_resolution_clock> start_point, end_point;

    for (int i = 0; i < 1000; i++) {
        vector<int> arr = generate_special(el_count, modulo);
        start_point = high_resolution_clock::now();
        func(arr);
        end_point = high_resolution_clock::now();
        auto start = time_point_cast<microseconds>(start_point).time_since_epoch().count();
        auto end = time_point_cast<microseconds>(end_point).time_since_epoch().count();
        time += end - start;
    }
    return time / 1000;
}