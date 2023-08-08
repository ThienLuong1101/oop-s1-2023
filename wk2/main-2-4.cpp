#include <iostream>
using namespace std;

extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length);

int main() {
    int array[5] = {3,2,9,7,0};
    cout << "smallest number in list: " << array_min(array,5) << endl;
    cout <<"biggest number in list: " << array_max(array,5) << endl;
    cout <<"sum: " << sum_min_max(array,5) <<endl;
    return 0;
}
