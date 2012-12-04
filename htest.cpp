#include "Hash.h"
#include <string>
#include <iostream>

using namespace std;

int main() {
  Hash<string>* h = new Hash<string>("");
  
  h->insert("a", "2");
  h->insert("b","8");
  h->insert("c", "7");
  h->insert("d", "6");
  h->insert("e", "5");
  h->insert("a", "3");
  
  h->remove("c");
  cout << h->find("d") << endl;

  return 0;
}
