#include <vector>

class MyHashMap {
public:
std::vector<int> vec;
    MyHashMap() {
        int size = 1e6+1;
        vec.resize(size);
        fill(vec.begin(),vec.end(),-1);
    }
    
    void put(int key, int value) {
        vec[key]=value;
    }
    
    int get(int key) {
        return vec[key];
    }
    
    void remove(int key) {
        vec[key]=-1;
    }
};