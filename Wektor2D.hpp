class Wektor2D
{
public:
    Wektor2D()
    {
        x = 0.0;
        y = 0.0;
    }
    Wektor2D(double x_in, double y_in)
    {
        x = x_in;
        y = y_in;
    }
    void   setX(double x_in) { x = x_in; }
    void   setY(double y_in) { y = y_in; }
    double getX() { return x; }
    double getY() { return y; }

private:
    double x;
    double y;
};

Wektor2D operator+(Wektor2D v1, Wektor2D v2)
{
    double x_val = v1.getX() + v2.getX();
    double y_val = v1.getY() + v2.getY();
    return Wektor2D{x_val, y_val};
}

double operator*(Wektor2D v1, Wektor2D v2)
{
    double x_val  = v1.getX() * v2.getX();
    double y_val  = v1.getY() * v2.getY();
    double result = x_val + y_val;
    return result;
}
