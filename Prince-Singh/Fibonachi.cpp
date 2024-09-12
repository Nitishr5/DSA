#include <iostream>
using namespace std;
int main() {

  int i, n;

  // initialize first and second terms
  int t1 = 0, t2 = 1;

  // initialize the next term (3rd term)
  int nextTerm = t1 + t2;

  // get no. of terms from user
  cout<<"Enter the number of terms: ";
  cin>>n;

  // print the first two terms t1 and t2
  cout<<"Fibonacci Series: "<<t1<<t2;

  // print 3rd to nth terms
  for (i = 3; i <= n; ++i) {
    cout<<nextTerm<<" ";
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}

