#pragma once

#include <iostream>
#include <algorithm>
#include <random>
#include <iomanip>
#include <concepts>
#include <type_traits>

using std::cout, std::vector;

template <typename T>
concept Comparable = requires (T a, T b) {
    a > b;
    a >= b;
    a == b;
    a != b;
};

std::vector<int> generate(int arr_size) {
    std::mt19937 rng(303);
    std::vector<int> result(arr_size);
    
    for (auto& element : result) {
        element = rng();
    }
    
    return result;
}

vector<int> generate_special(int arr_size, int modulo) {
    const int MODULO = modulo + 1;
    std::mt19937 rng(303);
    int min_value = rng();
    std::vector<int> result(arr_size);
    
    for (auto& element : result) {
        element = min_value + (rng() % MODULO + MODULO) % MODULO;
    }
    
    return result;
}

vector<int> generate_special(int arr_size) {
    return generate_special(arr_size, 100);
}

template <typename T>
void print_v(vector<T> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << ' ';
        if (i % 20 == 0 && i >= 20) {
            cout << '\n';
        }
    }
    cout << '\n';
}

template <Comparable T>
bool check_sorted(vector<T> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}