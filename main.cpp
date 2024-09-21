#include <iostream> 

using namespace std; 

int main() {

    int arr [5] = {1,2,1,1,2};

    int votes = 0, candidate = 0;

    for (int i = 0; i < 5; i++) {
        if (votes == 0) candidate = arr[i];

        if (candidate == arr[i]) votes++;
        else votes--;
    } 
    int count = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == candidate) count++;
    }
    if (count > (5/2)) {
        cout << candidate << " is the majority element." << endl;
    }
    else {
       cout << "No majority element found in the given data set." << endl;
    }

    return 0;
}