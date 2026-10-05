# 11 constructor overloading
#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Default Constructor\n";
    }

    A(int x) {
        cout << "Parameterized Constructor: " << x;
    }
};

int main() {
    A a;
    A b(10);

    return 0;
}


# 12 copy constructor
#include <iostream>
using namespace std;

class A {
    int x;

public:
    A(int a) {
        x = a;
    }

    A(A &obj) {
        x = obj.x;
    }

    void show() {
        cout << x;
    }
};

int main() {
    A a(10);
    A b(a);

    b.show();

    return 0;
}


# 13 Unary Operator Overloading Using Member Function
#include <iostream>
using namespace std;

class A {
    int x;

public:
    A(int a) {
        x = a;
    }

    void operator-() {
        x = -x;
    }

    void show() {
        cout << x;
    }
};

int main() {
    A a(10);

    -a;
    a.show();

    return 0;
}


#14 Binary Operator Using Member Function
#include <iostream>
using namespace std;

class A {
    int x;

public:
    A(int a) {
        x = a;
    }

    A operator+(A obj) {
        return A(x + obj.x);
    }

    void show() {
        cout << x;
    }
};

int main() {
    A a(10), b(20);
    A c = a + b;

    c.show();

    return 0;
}



# 15  Binary Operator Using Friend Function
#include <iostream>
using namespace std;

class A {
    int x;

public:
    A(int a) {
        x = a;
    }

    friend A operator+(A, A);

    void show() {
        cout << x;
    }
};

A operator+(A a, A b) {
    return A(a.x + b.x);
}

int main() {
    A a(10), b(20);
    A c = a + b;

    c.show();

    return 0;
}


# 16 Single Inheritance
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "Base class\n";
    }
};

class B : public A {
public:
    void showB() {
        cout << "Derived class";
    }
};

int main() {
    B obj;
    obj.showA();
    obj.showB();

    return 0;
}




# 17 Multiple Inheritance
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "A\n";
    }
};

class B {
public:
    void showB() {
        cout << "B\n";
    }
};

class C : public A, public B {
};

int main() {
    C obj;
    obj.showA();
    obj.showB();

    return 0;
}



# 18 Multilevel Inheritance
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "A\n";
    }
};

class B : public A {
public:
    void showB() {
        cout << "B\n";
    }
};

class C : public B {
public:
    void showC() {
        cout << "C";
    }
};

int main() {
    C obj;

    obj.showA();
    obj.showB();
    obj.showC();

    return 0;
}


# 19 Hierarchical Inheritance
#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Base class\n";
    }
};

class B : public A {
public:
    void showB() {
        cout << "Child B\n";
    }
};

class C : public A {
public:
    void showC() {
        cout << "Child C";
    }
};

int main() {
    B b;
    C c;

    b.show();
    b.showB();

    c.show();
    c.showC();

    return 0;
}


#20 Hybrid Inheritance
#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "A\n";
    }
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C {
};

int main() {
    D obj;
    obj.showA();

    return 0;
}
