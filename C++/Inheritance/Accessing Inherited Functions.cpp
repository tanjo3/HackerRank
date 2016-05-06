class DummyA : public A {
public:
    void funcA(int &a) {
        func(a);
    }
};

class DummyB : public B {
public:
    void funcB(int &a) {
        func(a);
    }
};

class DummyC : public C {
public:
    void funcC(int &a) {
        func(a);
    }
};

class D {
public:
    //Initially val is 1
    D() {
        val = 1;
    }

    //Implement this function
    void update_val(int new_val) {
        DummyA a;
        DummyB b;
        DummyC c;

        while (new_val % 5 == 0) {
            new_val /= 5;
            c.funcC(val);
        }

        while (new_val % 3 == 0) {
            new_val /= 3;
            b.funcB(val);
        }

        while (new_val != 1) {
            new_val /= 2;
            a.funcA(val);
        }
    }

    //For Checking Purpose
    void check(int); //Do not delete this line.
private:
    int val;
};
