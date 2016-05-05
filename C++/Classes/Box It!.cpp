//Implement the class Box
class Box {
public:
    Box() {
        l = b = h = 0;
        BoxesCreated++;
    }

    Box(int length, int breadth, int height) {
        l = length;
        b = breadth;
        h = height;
        BoxesCreated++;
    }

    Box(Box &box) {
        l = box.getLength();
        b = box.getBreadth();
        h = box.getHeight();
        BoxesCreated++;
    }

    ~Box() {
        BoxesDestroyed++;
    }

    // Return box's length
    int getLength() {
        return l;
    }

    // Return box's breadth
    int getBreadth() {
        return b;
    }

    //Return box's height
    int getHeight() {
        return h;
    }

    // Return the volume of the box
    long long CalculateVolume() {
        return (long long) l * b * h;
    }
private:
    int l, b, h;
};

bool operator<(Box &a, Box &b) {
    int al = a.getLength();
    int ab = a.getBreadth();
    int ah = a.getHeight();

    int bl = b.getLength();
    int bb = b.getBreadth();
    int bh = b.getHeight();

    if (al < bl || al == bl && (ab < bb || ab == bb && ah < bh)) {
        return true;
    } else {
        return false;
    }
}

ostream& operator<<(ostream &out, Box B) {
    out << B.getLength() << ' ' << B.getBreadth() << ' ' << B.getHeight();
    return out;
}
