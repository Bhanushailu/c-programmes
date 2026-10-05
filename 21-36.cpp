# 21 Order of Constructors and Destructors in Inheritance
#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "A Constructor\n";
    }

    ~A() {
        cout << "A Destructor\n";
    }
};

class B : public A {
public:
    B() {
        cout << "B Constructor\n";
    }

    ~B() {
        cout << "B Destructor\n";
    }
};

int main() {
    B obj;

    return 0;
}


#22 Object as Class Member
#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A";
    }
};

class B {
    A obj;

public:
    void display() {
        obj.show();
    }
};

int main() {
    B b;
    b.display();

    return 0;
}


#23 Pointer to a Class
#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Hello";
    }
};

int main() {
    A obj;
    A *p = &obj;

    p->show();

    return 0;
}


# 24 this Pointer
#include <iostream>
using namespace std;

class A {
    int x;

public:
    void set(int x) {
        this->x = x;
    }

    void show() {
        cout << x;
    }
};

int main() {
    A obj;
    obj.set(10);
    obj.show();

    return 0;
}



#25 Virtual Base Class
#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "A";
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
    obj.show();

    return 0;
}



# 26 Virtual Function
#include <iostream>
using namespace std;

class A {
public:
    virtual void show() {
        cout << "Base";
    }
};

class B : public A {
public:
    void show() {
        cout << "Derived";
    }
};

int main() {
    A *p;
    B obj;

    p = &obj;
    p->show();

    return 0;
}



# 27Pure Virtual Function / Abstract Class
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
};

class Circle : public Shape {
public:
    void area() {
        cout << "Area of Circle = 78.5";
    }
};

class Rectangle : public Shape {
public:
    void area() {
        cout << "Area of Rectangle = 20";
    }
};

int main() {
    Circle c;
    Rectangle r;

    c.area();
    cout << endl;
    r.area();

    return 0;
}



# 28 Function Template
 #include <iostream>
using namespace std;

template <class T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(10, 20) << endl;
    cout << add(2.5, 3.5);

    return 0;
}



#29 Class Template
#include <iostream>
using namespace std;

template <class T>
class A {
    T x;

public:
    A(T a) {
        x = a;
    }

    void show() {
        cout << x;
    }
};

int main() {
    A<int> a(10);
    a.show();

    return 0;
}



#30 Class Template with Multiple Parameters
#include <iostream>
using namespace std;

template <class T, class U>
class A {
    T x;
    U y;

public:
    A(T a, U b) {
        x = a;
        y = b;
    }

    void show() {
        cout << x << " " << y;
    }
};

int main() {
    A<int, float> obj(10, 2.5);
    obj.show();

    return 0;
}



# 31Exception Handling
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 0;

    try {
        if(b == 0)
            throw b;

        cout << a / b;
    }
    catch(int x) {
        cout << "Cannot divide by zero";
    }

    return 0;
}



#32 Multiple Catch Statements
#include <iostream>
using namespace std;

int main() {
    try {
        throw 10;
    }

    catch(int x) {
        cout << "Integer exception";
    }

    catch(double x) {
        cout << "Double exception";
    }

    catch(char x) {
        cout << "Character exception";
    }

    return 0;
}




# 33 . List and Its Operations
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    l.push_back(10);
    l.push_back(20);
    l.push_front(5);

    cout << "List: ";

    for(int x : l)
        cout << x << " ";

    l.pop_front();

    cout << "\nAfter deletion: ";
    for(int x : l)
        cout << x << " ";

    return 0;
}




# 34 Vector and Its Operations
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "Vector: ";

    for(int x : v)
        cout << x << " ";

    v.pop_back();

    cout << "\nAfter deletion: ";

    for(int x : v)
        cout << x << " ";

    return 0;
}



#35 Deque and Its Operations
#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> d;

    d.push_back(20);
    d.push_front(10);
    d.push_back(30);

    cout << "Deque: ";

    for(int x : d)
        cout << x << " ";

    d.pop_front();

    cout << "\nAfter deletion: ";

    for(int x : d)
        cout << x << " ";

    return 0;
}



#36  Map and Its Operations
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> m;

    m[1] = "Apple";
    m[2] = "Banana";
    m[3] = "Mango";

    cout << "Map:\n";

    for(auto x : m)
        cout << x.first << " " << x.second << endl;

    m.erase(2);

    cout << "After deletion:\n";

    for(auto x : m)
        cout << x.first << " " << x.second << endl;

    return 0;
}
