// #include <iostream>
// #include <initializer_list>

// using namespace std;

// int main() {
//     initializer_list<initializer_list<double>> il = {
//         {1.1, 2.2, 3.3},
//         {4.4, 5.5, 6.6},
//         {7.7, 8.8, 9.9}
//     };

//     for (const auto& innerList : il) {
//         for (const auto& value : innerList) {
//             cout << value << ' ';
//         }
//         cout << '\n';
//     }

//     return 0;
// }


#include <iostream>
#include <initializer_list>

using namespace std;

void printNumbers(initializer_list<int> numbers) {
    cout << "Numbers: ";
    for(auto number : numbers) 
    {
        cout << number << " ";
    }
    cout << endl;
}

int main() {
    printNumbers({1, 2, 3, 4, 5});
    printNumbers({10, 20, 30});

    return 0;
}
