class Figure {
public:
    virtual int Perimeter() const = 0;
 
    virtual ~Figure() {
    }
};
 
 
class Triangle: public Figure {
    int A, B, C;
 
public:
    Triangle(int x, int y, int z): A(x), B(y), C(z) {
    }
 
    int Perimeter() const override {
        return A + B + C;
    }
};
 
 
class Rectangle: public Figure {
    int A, B;
 
public:
    Rectangle(int a, int b): A(a), B(b) {
    }
 
    int Perimeter() const override {
        return 2 * (A + B);
    }
};
