#include <iostream>
int fib(int n) {
  if (n==0) {
    return 0;
  } else if (n==1) {
    return 1;
  } else {
    return fib(n-1)+fib(n-2);
  }
}
using namespace std;
int main() {
    cout<<"Hello world"<<endl;
    int n; cout<<"Введите n: "; cin>>n;
    cout<<fib(n-1);
}
