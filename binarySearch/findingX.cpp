#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

double equation(int a, int b, int x){
    return a * x + b * sin(x);
}

bool check(int a, int b, int c, double x){
    if(equation(a, b, x) == c){
        return true;
    }
    return false;
}

double binarySearch(int a, int b, int c){    
    double l = 0,
           r = c, 
           mid = 0;
    
    while(l + 1 < r){
        mid = (l + r) / 2;
        if(check(a, b, c, mid)){
            return mid;
        }
        else if(equation(a, b, mid) > c){
            r = mid; 
        }
        else{
            l = mid;
        }
    }
    return mid;
}

int main(){
    //equation 
    //Ax + Bsinx = C

    //number of tries
    int n = 0;
    cin >> n;
    // A, B, C
    int a, b, c;
    cin >> a >> b >> c;
    a = 1;
    b = 1;
    c = 20;

    cout << binarySearch(a, b, c) << endl;

    return 0;
}