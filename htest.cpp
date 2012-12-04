#include "Hash.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
  Hash<int>* h = new Hash<int>(0);
  
  h->insert("a", 2);
  h->insert("b", 8);
  h->insert("c", 7);
  h->insert("d", 6);
  h->insert("e", 5);
  h->insert("a", 3);
  
  h->remove("c");
  cout << h->find("c") << endl;

  return 0;
}
