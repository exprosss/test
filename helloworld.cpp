#include <iostream>
using namespace std;
void fib(int n) {
  int fb1=0;
  int fb2=1; 
  int fb3;
  for (int i=0; i<n; i++) {
    cout<<fb1<<endl;
    fb3=fb1+fb2;
    fb1=fb2;
    fb2=fb3;
  }
}
int main() {
    cout<<"Hello world"<<endl;
    int n; cout<<"Введите n: "; cin>>n;
    fib(n);
}
