class LockingTree {
    vector<vector<int>> v;
    vector<int> vm;
    unordered_map<int,int> m;
    int n;
public:
    LockingTree(vector<int>& parent) {
        n=parent.size();
        vm=parent;
        v.resize(n);
        for(int i=1;i<n;i++){
            v[parent[i]].push_back(i);
        }
    }

    bool lock(int num, int user) {
        if(m[num]) return false;
        m[num]=user;
        return true;
    }
    
    bool unlock(int num, int user) {
        if(m[num] && m[num]==user) m[num]=0;
        else return false;
        return true;
    }
    
    bool upgrade(int num, int user) {
        int k=num;
        while(k!=-1){
            if(m[k]) return false;
            k=vm[k];    
        }
        queue<int> q;
        q.push(num);
        bool t=false;
        while(!q.empty()){
            int tem=q.front();
            q.pop();
            for(int i:v[tem]){
                if(m[i]) t=true;
                m[i]=0;
                q.push(i);
            }
        }
        if(t==true){
            m[num]=user;
            return true;
        }
        return false;
    }
};

/**
 * Your LockingTree object will be instantiated and called as such:
 * LockingTree* obj = new LockingTree(parent);
 * bool param_1 = obj->lock(num,user);
 * bool param_2 = obj->unlock(num,user);
 * bool param_3 = obj->upgrade(num,user);
 */