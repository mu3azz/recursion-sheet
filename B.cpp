#include <iostream>
using namespace std;

void print(int x, int counter) {

if (counter>x){
    return;
}
cout<<counter<<endl;

print(x,++counter);
}
void printInt(int x){
    print(x,1);
}

int main() {
    int x;
    cin >> x;   
    printInt(x);
    return 0;
} 