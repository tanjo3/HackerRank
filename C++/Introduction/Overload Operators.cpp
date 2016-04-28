//Overload operators + and << for the class complex
//+ should add two complex numbers as (a+ib) + (c+id) = (a+c) + i(b+d)
//<< should print a complex number in the format "a+ib"
Complex operator+(Complex &m, const Complex &n) {
    m.a += n.a;
    m.b +=  n.b;

    return m;
}

ostream& operator<<(ostream& os, const Complex &n) {
    os << n.a;

    if (n.b > 0) {
        os << "+i";
    } else {
        os << "-i";
    }

    os << n.b;

    return os;
}