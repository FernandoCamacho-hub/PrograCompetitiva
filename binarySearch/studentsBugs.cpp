#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

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
}

bool passeExceded(int currPasses, int plusPasses, int maxPasses){
    if(currPasses + plusPasses > maxPasses){
        return false;
    }
    return true;
}

void binarySearch(int num, vector<int> v){
    int l = 0, 
        r = v.size() - 1,
        mid = 0;

    while(l + 1 < r){
        mid = (l + r) / 2;

        if(num < v[mid]){
            r = mid;
        }
        else{
            l = mid + 1;
        }
    }
}

int main(){
    // n = number of students
    int n = 0;
    cin >> n;
    // m = number of bugs
    int m = 0;
    cin >> m;
    // s = total number of passes to give the students
    int s = 0;
    cin >> s;
    //vector for the bugs' complexities
    vector<int> mComplexity(m);
    for(int i = 0; i < m; i++) cin >> mComplexity[i];
    //vector for the student's abilities
    vector<int> nAbility(n);   
    for(int i = 0; i < n; i++) cin >> nAbility[i];
    //vector for student's passes for help
    vector<int> nPasses(n);
    for(int i = 0; i < n; i++) cin >> nAbility[i];

    return 0;
}