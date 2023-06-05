#include <iostream>
#include <initializer_list>

using namespace std;

void printNumbers(initializer_list<initializer_list<int>> numbers) {
    cout << "Numbers: ";
    for(auto num : numbers)
    {
        // cout << num <<endl;
        for(auto number : num) 
        {
            // ostream << initializer_list<int>;
            cout << number << " ";
        }
    }
        cout << endl;
}

int main() {
    printNumbers({{1, 2, 3, 4, 5}});
    // printNumbers({10, 20, 30});

    return 0;
}
