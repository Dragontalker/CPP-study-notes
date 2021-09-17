//: C09:Rectangle.cpp
// Accessors & mutators

class Rectangle {
    int wid, ht;
public:
    Rectangle(int w = 0, int h = 0): wid(w), ht(h) {}
    int width() const { return wid; } // Read
    void width(int w) { wid = w; } // Set
    int height() const { return ht; } // Read
    void height(int h) { ht = h; } // Set
};

int main() {
    Rectangle r(19, 48);
    // Change width & height:
    r.height(2 * r.width());
    r.width(2 * r.height());
}
