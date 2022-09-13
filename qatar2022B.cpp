#include <iostream>
#include <math.h>

using namespace std;

int main(){
    // a = data needed to watch one second of video, a >= 1 and a > b
    double a = 0;
    cin >> a;
    // b = data that can be downloaded per second
    double b = 0;
    cin >> b;
    // c = video's length in seconds
    double c = 0;
    cin >> c;

    double res = (a * c - c * b) / b;
    cout << ceil(res) << endl;

    return 0;
}