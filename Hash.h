#ifndef __HASH_H__
#define __HASH_H__

#include <string>
#include "Entry.h"
#include <vector>

using namespace std;

template <typename T>
class Hash {
  private:
    vector< Entry<T>* >* hash;
    int size;
    T def;
    int hashFunction(string k);

  public:
    Hash(T d);
    ~Hash();
    void insert(string k, T v);
    void remove(string k);
    T find(string k);
};

#endif
