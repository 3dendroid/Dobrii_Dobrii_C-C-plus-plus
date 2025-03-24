#include <iostream>
#include <bitset>

using namespace std;

int main() {
    char x = -3;
    bitset<8> y(x);
    cout << y << '\n';
}
//11111101 - answer