#include <iostream>
using namespace std;
void interchange_Sort(int a[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(a[i], a[j]);
            }
        }
    }
}

int main()
{
    int a[5] = { 8, 4, 1, 6, 5 };
    interchange_Sort(a, 5);
    cout << "Mang sau khi sap xep:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    system("pause");
}
