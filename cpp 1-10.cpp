#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c, d, r1, r2;

    cout << "Enter a b c: ";
    cin >> a >> b >> c;

    d = b*b - 4*a*c;

    if(d > 0) {
        r1 = (-b + sqrt(d))/(2*a);
        r2 = (-b - sqrt(d))/(2*a);
        cout << "Roots = " << r1 << " " << r2;
    }
    else if(d == 0) {
        r1 = -b/(2*a);
        cout << "Roots = " << r1;
    }
    else
        cout << "No real roots";

    return 0;
}




#2 factorial using recursion
#include <iostream>
using namespace std;

int fact(int n) {
    if(n == 0)
        return 1;
    return n * fact(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << "Factorial = " << fact(n);
    return 0;
}



#3 scope resolution operator
#include <iostream>
using namespace std;

int x = 10;

int main() {
    int x = 20;

    cout << "Local x = " << x << endl;
    cout << "Global x = " << ::x;

    return 0;
}


#4 namespaces
#include <iostream>
using namespace std;

namespace A {
    int x = 10;
}

namespace B {
    int x = 20;
}

int main() {
    cout << A::x << endl;
    cout << B::x;

    return 0;
}



#5 default arguments
#include <iostream>
using namespace std;

void add(int a, int b = 10) {
    cout << a + b;
}

int main() {
    add(5);
    return 0;
}



# 6 access specifiers
#include <iostream>
using namespace std;

class A {
private:
    int x = 10;

public:
    int y = 20;

    void show() {
        cout << x << " " << y;
    }
};

int main() {
    A obj;
    obj.show();
    cout << "\nPublic y = " << obj.y;

    return 0;
}



# 7 inline function
#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << square(5);
    return 0;
}


# 8  function overloading
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int main() {
    cout << add(2, 3) << endl;
    cout << add(2.5f, 3.5f);

    return 0;
}


# 9 friend function
#include <iostream>
using namespace std;

class A {
    int x = 10;

public:
    friend void show(A obj);
};

void show(A obj) {
    cout << obj.x;
}

int main() {
    A a;
    show(a);

    return 0;
}


# 10 constructor and destructor
#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "Constructor" << endl;
    }

    ~A() {
        cout << "Destructor";
    }
};

int main() {
    A obj;
    return 0;
}







