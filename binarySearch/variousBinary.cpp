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

void binarySearch(int num, vector<int> v){
    int l = 0, 
        r = v.size() - 1, 
        mid = 0;
    
    while(l + 1 < r){
        mid = (l + r) / 2;

        if(num > v[mid]){
            r = mid;
        }
        else{
            l = mid + 1;
        }
        
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