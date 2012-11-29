#ifndef __ENTRY_H__
#define __ENTRY_H__

#include <string>
using namespace std;

template <typename T>
class Entry {
  private:
    T value;
    string key;

  public:
    Entry(string k, T v);
    T getValue();
    void setValue(T v);
    string getKey();
};

#endif
