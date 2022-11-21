// macros
#define rep(n) for(int i = 0; i < n; i++)
#define in_range(x, n) for(int i = x; x < n; x++)
#define nl "\n"

// dynamic array - array as abstract data structure
template<typename T>
class Array {
private:
    T* arr;
    int N;
    int _i;
public:
    Array() {
        this->N = 1;
        arr = new T[N];
        _i = -1;
    }
    Array(int _size) {
        this->N = _size;
        arr = new T[N];
        _i = -1;
    }

    void setSize(int _size) {
        this->N = _size;
        arr = new T[N];
        _i = -1;
    }

    int getSize() {return N;}

    int getCount() {return _i;}

    void resize() {
        int n = N; N *= 2;
        T* temp = new T[N];
        for(int i = 0; i < n; i++)
            temp[i] = arr[i];
        arr = temp; _i = n-1;
    }

    void insert(T n) {
        if(_i == N-1) resize();
        arr[++_i] = n;
    }

    void insert(T n, int __i) {
        if(_i == N-1) resize();
        for(int i = _i; i >= __i-1; --i)
            arr[i+1] = arr[i];
        arr[__i-1] = n; ++_i;
    }

    void remove() {
        if(_i < 0) return;
        --_i;
    }

    void remove(int __i) {
        if(__i > _i) return;
        for(int i = __i-1; i < _i; ++i)
            arr[i] = arr[i+1];
        --_i;
    }

    void print() {
        for(int i = 0; i <= _i; ++i) 
            std::cout << arr[i] << " ";
        std::cout << nl;
    }
};

// linked list data structure
class List {
private:
    
};