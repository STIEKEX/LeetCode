class LRUCache {
public:
    class Node{
        public : 
        int key , val ; 
        Node* next ;
        Node* prev ; 

        Node(int k , int v){
            key = k ; 
            val = v ; 
            prev = next = NULL ; 
        }
    };
    Node* head = new Node(-1 , -1) ; 
    Node* tail = new Node(-1 , -1) ; 

    int limit ;
    unordered_map<int , Node*>m ; 

    void insertNode(Node* newNode){
       Node* nextNode= head->next ; 

       head->next = newNode ; 
       newNode->prev = head ; 

       newNode->next = nextNode ; 
       nextNode->prev = newNode ; 
    }

    void deleteNode(Node* delNode){
        Node* prevNode = delNode->prev ; 

        Node* nextNode = delNode->next ; 

        prevNode->next = nextNode ; 
        nextNode->prev = prevNode ; 

    }
    LRUCache(int capacity) {
        limit = capacity ; 
        head->next = tail ; 
        tail->prev = head ;
        
    }
    
    int get(int key) {
        if(m.find(key) == m.end()) return -1 ; 

        Node* ans = m[key] ; 


        m.erase(key) ; 
        deleteNode(ans)  ;
        insertNode(ans) ; 
        m[key] = ans ; 

        return ans->val ; 
        
    }
    
    void put(int key, int value) {
        
        if(m.find(key) != m.end()){
            Node* oldNode = m[key] ; 
            m.erase(key) ; 
            deleteNode(oldNode) ; 
        }

        if(m.size() == limit){
            
            m.erase(tail->prev->key) ; 
            deleteNode(tail->prev) ; 
            
        }

        Node* newNode = new Node(key , value) ; 
        insertNode(newNode) ;
        m[key] = newNode ; 
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */