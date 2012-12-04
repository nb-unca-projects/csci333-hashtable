#include "Hash.h"
#include <string>
#include <vector>

using namespace std;


template <typename T>
Hash<T>::Hash(T d) {
  def = d;
  size = 233;
  hash = new vector< Entry<T>* >[233];
}

template <typename T>
Hash<T>::~Hash() {
  delete[] hash;
}

template <typename T>
void Hash<T>::insert(string k, T v) {
  int key = hashFunction(k);
  Entry<T>* newEntry = new Entry<T>(k, v);
  vector< Entry<T>* >* temp = &(hash[key]);
  for(int i=0; i< (int) temp->size(); ++i) {
    if(temp->at(i)->getKey() == k) {
      temp->at(i)->setValue(v);
      return;
    }
  }
  temp->push_back(newEntry);
}

template <typename T>
void Hash<T>::remove(string k) {
  int key = hashFunction(k);
  vector< Entry<T>* >* temp = &(hash[key]);
  for(int i=0; i< (int) temp->size(); ++i) {
    if(temp->at(i)->getKey() == k) {
      delete temp->at(i);
    }
  }
}

template <typename T>
T Hash<T>::find(string k) {
  int key = hashFunction(k);
  vector< Entry<T>* >* temp = &(hash[key]);
  for(int i=0; i< (int) temp->size(); ++i) {
    if(temp->at(i)->getKey() == k)
      return temp->at(i)->getValue();
  }
  return def;
}

template <typename T>
int Hash<T>::hashFunction(string k) {
  int sum = 0;
  for (int i=0; i< (int) k.size(); ++i) {
    sum = sum + k[i];
  }
  return sum%size;
}
template class Hash<int>;
template class Hash<double>;
template class Hash<string>;
