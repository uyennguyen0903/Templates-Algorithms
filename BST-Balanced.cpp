
class Indexer {         //Balanced BST (roi rac hoa cac dinh)
private :
    map<int,int> id;
    vector<int> num;

    
public :
    int getId(int x) {              //return new ID of vertex
        if (!id.count(x)) {
            id[x] = num.size();
            num.pb(x);
        }
        return id[x];
    }

    int getNum(int id) {            //return ancient ID of vertex
        return num[id];
    }

    int size() {
        return id.size();
    }
};
