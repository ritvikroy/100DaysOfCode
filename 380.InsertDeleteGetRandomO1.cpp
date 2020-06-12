class RandomizedSet {
private:
    unordered_map<int, int> indices; // the value is the index of the key
    vector<int> vals;
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        srand((int)time(0));
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        unordered_map<int, int>::iterator it = indices.find(val);
        if (it == indices.end())   {
            // add the new value's index
            indices.insert(pair<int, int>(val, vals.size()));
            vals.push_back(val);
            
            return true;
        }
        
        return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        unordered_map<int, int>::iterator it = indices.find(val);
        if (it == indices.end())   {
            return false;
        }
        
        // remove val
        int index = it->second;
        vals[index] = vals[vals.size() - 1];
        indices.find(vals[index])->second = index;
        vals.pop_back();
        indices.erase(it);

        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        int pick = rand() % vals.size();

        return vals[pick];
    }
};
