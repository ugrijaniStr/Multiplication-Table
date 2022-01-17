#include <iostream>
using namespace std;

void multiplicationTable() {
    for(int i = 0; i < 11; i++) {
        cout << i*0;
        cout << " ";
    }
    cout << "\n";
    for(int j = 0; j < 11; j++) {
        int x = j += 0;
        cout << x;
        cout << " ";
    }
    cout << "\n";
    for(int y = -1; y += 1, y <= 20; y++) {
        cout << y;
        cout << " ";
    }
    cout << "\n";
    for(int k = -2; k +=2, k < 33; k++) {
        cout << k;
        cout << " ";
    }
    cout << "\n";
    for(int p = -3; p += 3, p <= 40; p++) {
        cout << p;
        cout << " ";
    }
    cout << "\n";
    for(int h = -4; h <= 50; h++) {
        int r = h += 4;
        cout << r;
        cout << " ";
    }
    cout << "\n";
    int u = -5;
    do {
        int f = u += 5;
        cout << f;
        u++;
        cout << " ";
    }
    while(u < 60);
    cout << "\n";
    int v = -7;
    while(v < 70) {
     int b = v += 7;
     cout << b;
     cout << " ";
    }
    v++;
    cout << "\n";
    for(int d = 0; d < 11; d++) {
        int r = d * 8;
        cout << r;
        cout << " ";
    }
    cout << "\n";
    int c = -8;
    do {
        int n = c += 8;
        cout << n;
        cout << " ";
        c++;
    }
    while(c <= 90);
    cout << "\n";
    for(int w = 0; w < 11; w++) {
        int g = w * 10;
        cout << g;
        cout << " ";
    }
}

int main() {
    int j = 10;
    while(j -= 1) {
        cout << "[+] Preostalo ---> ";
        cout << j << " sekundi! \n";
    }
    j++;
    cout << " \n";
    multiplicationTable();
}
