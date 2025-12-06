#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    int findNum = 0;
    cin >> n;
    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    cin >> findNum;

    //Starting Binary Search
    /*
    int mid = 0;
    while (numbers.begin() < numbers.end()) {
        mid = (numbers.size() - 1) / 2;
        if(numbers[mid] == findNum) {
            cout <<mid + 1<< endl;
            break;
        }
        else if (numbers[mid] < findNum) {
            numbers.erase(numbers.begin(), numbers.begin() + mid + 1);
        }
        else {
            numbers.erase(numbers.begin() + mid, numbers.end());
        }
        if(numbers.size() == 0) {
            cout <<-1<< endl;
            break;
        }
    }
    */

    //using number list instead of erase
    int left = 0, right = n, mid = 0;
    
    while (left < right) {
        mid = left + (right - left) / 2;
        if (numbers[mid] < findNum) {
            left = mid + 1;
        }
        else {
            right = mid;
        }
        if (numbers[mid] == findNum) {
            cout << mid + 1 << endl;
            break;
        }
    }
}