//: C10:NamespaceMath.h
#ifndef NAMESPACEMATH_H
#define MAMESPACEMATH_H
namespace Math {
    enum sign { positive, negative };
    class Integer {
        int i;
        sign s;
    public:
        Integer(int ii = 0): i(ii), s(i >= 0 ? positive : negative) {}
        sign getSign() const { return s; }
        void setSign(sign sgn) { s = sgn; }
        // ...
    };
    Integer a, b, c;
    Integer divide(Integer, Integer);
    // ...
}
#endif // NAMESPACEMAT_H
