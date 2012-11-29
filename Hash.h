#ifndef __HASH_H__
#define __HASH_H__

#include <string>
#include "Entry.h"

using namespace std;

template <typename T>
class Hash {
  private:
    int* hash;
    int size;
    void hashFunction(string k);

  public:
    Hash(int size = 20);
    ~Hash();
    void insert(string k, T v);
    void remove(string k, T v);
    T find(string k);
};

#endif
