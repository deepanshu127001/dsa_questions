#include <iostream>
#include <vector>
#include <list>
class MyHashSet {
public:
    std::vector<std::list<int>> vec;
    MyHashSet() {
        int size=100;
        vec.resize(size);
    }
    int hashFunction(int key){
        return key%vec.size();
    }
    std::list<int>::iterator search(int key){
        int pos=hashFunction(key);
        return find(vec[pos].begin(),vec[pos].end(),key);
    }
    void add(int key) {
        if(contains(key))
            return ;
        int i=hashFunction(key);
        vec[i].push_back(key);
    }
    
    void remove(int key) {
        if(!contains(key)) return ;
        int idx=hashFunction(key);
        vec[idx].erase(search(key));
    }
    
    bool contains(int key) {
        int idx=hashFunction(key);
        if(search(key)!=vec[idx].end())
            return true;
        else
            return false;
        

    }
};
// class MyHashSet {
// public:
//     std::vector<int> map;
//     MyHashSet() {
//     map.resize(1e6+1);//10^6+1
//     }
    
//     void add(int key) {
//         if(map[key]==0)
//             map[key]=1;
//     }
    
//     void remove(int key) {
//         if(map[key]==1){
//             map[key]=0;
//         }
//     }
    
//     bool contains(int key) {
//         if(map[key]==1){
//             return true;
//         }
//         else{
//             return false;
//         }
//     }
// };

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */