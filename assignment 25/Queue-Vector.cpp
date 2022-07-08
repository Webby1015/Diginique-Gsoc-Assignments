class MyCircularQueue {
    vector<int> q;
    int K;
    int currIndex;
public:
    MyCircularQueue(int k) {
        K=k;
    }
    
    bool enQueue(int value) {
        if(q.size()<K){
            q.push_back(value);
            return true;
        }
        return false;
    }
    
    bool deQueue() {
        if(q.size()!=0){
            q.erase(q.begin());
            return true;
        }
        return false;
    }
    
    int Front() {
        if(q.size()==0)
            return -1;
        return q[0];
    }
    
    int Rear() {
        if(q.size()==0)
            return -1;
        return q[q.size()-1];
    }
    
    bool isEmpty() {
        return q.size()==0;
    }
    
    bool isFull() {
        return q.size()==K;
    }
};
