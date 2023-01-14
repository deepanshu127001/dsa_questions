#include <vector>
#include <utility>
#include <list>
using namespace std;
//optimized (chaining)
class MyHashMap {
public:
vector<list<pair<int,int>>> vec;
int size;
    MyHashMap() {
         size=50;
        vec.resize(size);
    }
    int getHash(int key){
        return key%size;
    }
    list<pair<int,int>>::iterator search(int key){
        int idx = getHash(key);
        list<pair<int,int>>::iterator iter = vec[idx].begin();
        while(iter!=vec[idx].end()){
            if(iter->first==key){
                return iter;
            }
            iter++;
        }
        return vec[idx].end();
    }
    void put(int key, int value) {
        int idx = getHash(key);
        remove(key);
        vec[idx].push_back({key,value});
    }
    
    int get(int key) {
        int idx =  getHash(key);
        list<pair<int,int>>::iterator iter = search(key);
        
        if(iter==vec[idx].end()){
            return -1;
        }
        else{
            return iter->second;
        }

    }
    
    void remove(int key) {
        int idx =  getHash(key);
        list<pair<int,int>>::iterator iter=search(key);
        if(iter!=vec[idx].end())
        vec[idx].erase(search(key));

    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */

//bruteforce
// class MyHashMap {
// public:
// std::vector<int> vec;
//     MyHashMap() {
//         int size = 1e6+1;
//         vec.resize(size);
//         fill(vec.begin(),vec.end(),-1);
//     }
    
//     void put(int key, int value) {
//         vec[key]=value;
//     }
    
//     int get(int key) {
//         return vec[key];
//     }
    
//     void remove(int key) {
//         vec[key]=-1;
//     }
// };