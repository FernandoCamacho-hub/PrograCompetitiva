#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int sumVector(vector<int> v){
    return accumulate(v.begin(), v.end(), 0);
}

vector<int> createVector(int n, int k){
    
    vector<int> v(n, 1);
    int pos = 0;
    int num = 2;
    
    while(sumVector(v) % k != 0){
        if(pos < n){
            if(v[pos] == num){
                pos++;
            }
            v[pos] = num;
        }
        else{
            pos = 0;
            num++;
        }
    }
    return v;
}

void printVector(vector<int> v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << endl;
    }
    // cout << endl;
}

int main(){
    //number of cases
    int cases = 0;
    cin >> cases;

    vector<int> output(cases, 0);

    for(int i = 0; i < cases; i++){
        // n = length of array
        int n = 0;
        cin >> n;
        // the sum of array[n] must be divisible by k
        int k = 0;
        cin >> k;
        vector<int> arr = createVector(n, k);
        // printVector(arr);
        output[i] = arr.front();
    }

    printVector(output);

    return 0;
}