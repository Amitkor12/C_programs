#include <iostream>
#include <initializer_list>

using namespace std;

void printNumbers(initializer_list<initializer_list<int>> numbers) {
    cout << "Numbers: ";
    for(auto num : numbers)
    {
        // cout << numbres <<endl;
        for(auto number : num) 
        {
            // ostream << initializer_list<int>;
            cout << number << " ";
        }
    }
        cout << endl;
}

// matrix(std::initializer_list<std::initializer_list<double>> il)
// {
//   z = il.size();
//   s = il.begin()->size();
//   daten = alloc_matrix(z, s);          // daten 
//   int i = 0;
//   for (std::initializer_list<double> row : il)
//   {
//     int j = 0;
//     for (double el : row)
//     {
//       daten[i][j++] = el;
//     }
//     i++;
//   }
// }

int main() {
    printNumbers({{1, 2, 3, 4, 5},{1,4,7,8}});
    // printNumbers({10, 20, 30});

    return 0;
}
