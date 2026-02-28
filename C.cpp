#include <iostream>
using namespace std;
void printInt(int x) {
if (x<1){
    return;
}
else if(x==1){
    cout << x;
    return;
}
else{
cout << x<<" ";
printInt(x-1);
}
}
int main() {
    int x;
    cin >> x;   
    printInt(x);
    return 0;
}