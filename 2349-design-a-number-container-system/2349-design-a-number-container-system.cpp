class NumberContainers {
public:
unordered_map<int,int>indxToNum;
unordered_map<int,set<int>>numToIndx;
    NumberContainers() {
        //this is the constructor so we dont have to do here anyhting
    }
    
    void change(int index, int number) {
        if(indxToNum.count(index)){
            int prevNum=indxToNum[index];
            numToIndx[prevNum].erase(index);
            if(numToIndx[prevNum].empty()){
                numToIndx.erase(prevNum);
            }
        }
        indxToNum[index]=number;
        numToIndx[number].insert(index);
    }

    
    int find(int number) {
        if(numToIndx.count(number)){
            return *numToIndx[number].begin();
        }
        return -1;
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */