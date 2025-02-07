#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Type-2: Initialize vector with a specific size (N)
    // vector<type> name(N);  // O(N)
    // Example:
    // vector<int> v(10);

    // Type-3: Initialize vector with a specific size (N) and default value (V)
    // vector<type> name(N, V);  // O(N)
    // Example:
    // vector<string> v(5, "hello");

    // Type-4: Initialize vector by copying another vector
    // vector<type> new_vector(vector_to_copy);  // O(N)
    // Example:
    // vector<string> v2(v);

    // Type-5: Initialize vector from an array
    int a[5] = {1, 2, 3, 4, 5};
    // vector<type> name(array, array + size);  // O(N)
    vector<int> v(a, a + 5);

    // Print the elements of the vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}