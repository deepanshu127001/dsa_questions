#include <iostream>
#include <vector>
class MyHashSet {
public:
    std::vector<int> map;
    MyHashSet() {
    map.resize(1e6+1);//10^6+1
    }
    
    void add(int key) {
        if(map[key]==0)
            map[key]=1;
    }
    
    void remove(int key) {
        if(map[key]==1){
            map[key]=0;
        }
    }
    
    bool contains(int key) {
        if(map[key]==1){
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */