#include <iostream>
using namespace std;
void printInt(int x) {
if (x<1){
    return;
}
cout << "I love Recursion" << endl;
printInt(x-1);
}
int main() {
    int x;
    cin >> x;   
    printInt(x);
    return 0;
}