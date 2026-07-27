class LRUCache {
public:

    int cap;
    list<pair<int, int>> dll;
    unordered_map<int, list<pair<int,int>>::iterator> map;

    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        if(!map.count(key)) return -1;
        moveToFront(key, map[key]->second);
        return map[key]->second;
    }
    
    void put(int key, int value) {
        if(map.count(key)){
            moveToFront(key,value);
            return;
        }

        if(dll.size() == cap){
            map.erase(dll.back().first);
            dll.pop_back();
        }

        dll.push_front({key, value});
        map[key] = dll.begin();
    }

private:

    void moveToFront(int key, int value){
        dll.erase(map[key]);
        dll.push_front({key,value});
        map[key] =dll.begin();
    }
};
