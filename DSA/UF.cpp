#include<bits/stdc++.h>

using namespace std;

class UF{
    private: 
        int size[200];  // 数组大小需要事先声明
        int parent[200];
        int count;

        int find(int p){
            while(parent[p] != p){
                parent[p] = parent[parent[p]];
                p = parent[p];
            }
            return parent[p];
        }

    public: 
        UF(int n){
            for(int i = 0; i < n; i++){
                parent[i] = i;
                size[i] = 1;
            }
            count = n;
        }

        void myunion(int p, int q){
            int parentp = find(p);
            int parentq = find(q);
            if(parentp == parentq) return;
            if(size[parentp] > size[parentq]){
                parent[parentq] = parentp;
                size[parentp] += size[parentq];
            }else{
                parent[parentp] = parentq;
                size[parentq] += size[parentp];
            }
            count--;
        }

        bool connected(int p, int q){
            int parentp = find(p);
            int parentq = find(q);
            return parentp == parentq;
        }
    
        int mycount(){
            return count;
        }
};