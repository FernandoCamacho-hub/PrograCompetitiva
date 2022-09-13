#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

// int binarySearch(int num, vector<int> a){
//     int l = 0, r = a.size() - 1;
//     int mid = 0;

//     while(l <= r){
//         mid = (l + r) / 2;

//         if(num == a[mid]){
//             return 1;
//         }
//         else if(num > a[mid]){
//             l = mid;
//         }
//         else if(num < a[mid]){
//             r = mid - 1;
//         }
//         else{
//             return 0;
//         }
//     }
//     return 0;
// }

void binaryStride(int num, vector<int> a){
    int sz = a.size();
    
    int pow = log2(sz);
    int pos = 0;
    int paso = 0;

    for(int i = pow; i >= 0; i--){
        paso = 1 << i; //pow^i
        if(pos + paso <= sz){ // el paso es menor al largo del arreglo
            if(num > a[paso + pos - 1]){
                pos += paso;
            }
        }
    }

    if(a[pos] == num){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
}

int main(){
    int n = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    int q = 0;
    cin >> q;
    vector<int> queries(q, -1);
    for(int i = 0; i < q; i++){
        cin >> queries[i];
    }

    for(int i = 0; i < q; i++){
       binaryStride(queries[i], a);
    }
    
    return 0;
}