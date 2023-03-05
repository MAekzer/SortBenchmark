#include <iostream>
#include <string>
#include <cstring>

#include "special.h"
#include "utility.h"
#include "log_sort.h"
#include "square_sort.h"
#include "benchmarck.h"
#include "hybrid.h"

using std::cout, std::cin, std::endl, std::string, std::vector, std::setw;

int main()
{
    int w = 60;
    int el_count;
    int modulo;
    cout << std::right;
    int64_t quick, own, count;

    cout << endl;
    el_count = 100;
    modulo = 200;

    quick = benchmark_sort(el_count, &QuickInsertion);
    count = benchmark_special_sort(el_count, modulo, &CountSort);
    own = benchmark_special_sort(el_count, modulo, &Sort);

    cout << "Results for different sorting algorithms performed on a vector of size " << el_count << " with difference between min and max being " << modulo << " : " << '\n';
    cout << setw(w) << "Quicksort hybrid (on data with small standard error) : " << quick << " microseconds." << '\n';
    cout << setw(w) << "Count sort (on data with small standard error) : " << count << " microseconds." << '\n';
    cout << setw(w) << "Sort (on data with small standard error) : " << own << " microseconds." << '\n';

    cout << endl;
    el_count = 1000;
    modulo = 200;

    quick = benchmark_sort(el_count, &QuickInsertion);
    count = benchmark_special_sort(el_count, modulo, &CountSort);
    own = benchmark_special_sort(el_count, modulo, &Sort);

    cout << "Results for different sorting algorithms performed on a vector of size " << el_count << " with difference between min and max being " << modulo << " : " << '\n';
    cout << setw(w) << "Quicksort hybrid (on data with small standard error) : " << quick << " microseconds." << '\n';
    cout << setw(w) << "Count sort (on data with small standard error) : " << count << " microseconds." << '\n';
    cout << setw(w) << "Sort (on data with small standard error) : " << own << " microseconds." << '\n';

    cout << endl;
    el_count = 10000;
    modulo = 200;

    quick = benchmark_sort(el_count, &QuickInsertion);
    count = benchmark_special_sort(el_count, modulo, &CountSort);
    own = benchmark_special_sort(el_count, modulo, &Sort);

    cout << "Results for different sorting algorithms performed on a vector of size " << el_count << " with difference between min and max being " << modulo << " : " << '\n';
    cout << setw(w) << "Quicksort hybrid (on data with small standard error) : " << quick << " microseconds." << '\n';
    cout << setw(w) << "Count sort (on data with small standard error) : " << count << " microseconds." << '\n';
    cout << setw(w) << "Sort (on data with small standard error) : " << own << " microseconds." << '\n';

    cout << endl;
    el_count = 1000;
    modulo = 2000;

    quick = benchmark_sort(el_count, &QuickInsertion);
    count = benchmark_special_sort(el_count, modulo, &CountSort);
    own = benchmark_special_sort(el_count, modulo, &Sort);

    cout << "Results for different sorting algorithms performed on a vector of size " << el_count << " with difference between min and max being " << modulo << " : " << '\n';
    cout << setw(w) << "Quicksort hybrid (on data with small standard error) : " << quick << " microseconds." << '\n';
    cout << setw(w) << "Count sort (on data with small standard error) : " << count << " microseconds." << '\n';
    cout << setw(w) << "Sort (on data with small standard error) : " << own << " microseconds." << '\n';

    cout << endl;
    el_count = 10000;
    modulo = 2000;

    quick = benchmark_sort(el_count, &QuickInsertion);
    count = benchmark_special_sort(el_count, modulo, &CountSort);
    own = benchmark_special_sort(el_count, modulo, &Sort);

    cout << "Results for different sorting algorithms performed on a vector of size " << el_count << " with difference between min and max being " << modulo << " : " << '\n';
    cout << setw(w) << "Quicksort hybrid (on data with small standard error) : " << quick << " microseconds." << '\n';
    cout << setw(w) << "Count sort (on data with small standard error) : " << count << " microseconds." << '\n';
    cout << setw(w) << "Sort (on data with small standard error) : " << own << " microseconds." << '\n';

    cout << endl;
    el_count = 10000;
    modulo = 5000;

    quick = benchmark_sort(el_count, &QuickInsertion);
    count = benchmark_special_sort(el_count, modulo, &CountSort);
    own = benchmark_special_sort(el_count, modulo, &Sort);

    cout << "Results for different sorting algorithms performed on a vector of size " << el_count << " with difference between min and max being " << modulo << " : " << '\n';
    cout << setw(w) << "Quicksort hybrid (on data with small standard error) : " << quick << " microseconds." << '\n';
    cout << setw(w) << "Count sort (on data with small standard error) : " << count << " microseconds." << '\n';
    cout << setw(w) << "Sort (on data with small standard error) : " << own << " microseconds." << '\n';

    cout << endl;
    el_count = 10000;
    modulo = 10000;

    quick = benchmark_sort(el_count, &QuickInsertion);
    count = benchmark_special_sort(el_count, modulo, &CountSort);
    own = benchmark_special_sort(el_count, modulo, &Sort);

    cout << "Results for different sorting algorithms performed on a vector of size " << el_count << " with difference between min and max being " << modulo << " : " << '\n';
    cout << setw(w) << "Quicksort hybrid (on data with small standard error) : " << quick << " microseconds." << '\n';
    cout << setw(w) << "Count sort (on data with small standard error) : " << count << " microseconds." << '\n';
    cout << setw(w) << "Sort (on data with small standard error) : " << own << " microseconds." << '\n';

    cout << endl;
    el_count = 10000;
    modulo = 50000;

    quick = benchmark_sort(el_count, &QuickInsertion);
    count = benchmark_special_sort(el_count, modulo, &CountSort);
    own = benchmark_special_sort(el_count, modulo, &Sort);

    cout << "Results for different sorting algorithms performed on a vector of size " << el_count << " with difference between min and max being " << modulo << " : " << '\n';
    cout << setw(w) << "Quicksort hybrid (on data with small standard error) : " << quick << " microseconds." << '\n';
    cout << setw(w) << "Count sort (on data with small standard error) : " << count << " microseconds." << '\n';
    cout << setw(w) << "Sort (on data with small standard error) : " << own << " microseconds." << '\n';
    

    return 0;
    
}