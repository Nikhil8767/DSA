class ProductOfNumbers {
public:
    vector<int> lists;
    ProductOfNumbers() {
    }
    
    void add(int num) {
        lists.push_back(num);
    }
    
    int getProduct(int k) {
        int prod = 1;
        int i = lists.size()-1;
        while(k--){
            prod*= lists[i--];
        }
        return prod;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */