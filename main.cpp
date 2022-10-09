#include <iostream>
#include <cmath>

class Vector3
{
public:
    double x, y, z;

    Vector3(const double &x, const double &y, const double &z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    ~Vector3()
    {
    }

    friend std::ostream &operator<<(std::ostream &os, const Vector3 &vector)
    {
        os << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
        return os;
    }

    double norm() const
    {
        return sqrt(x * x + y * y + z * z);
    }

    // Сложение векторов
    Vector3 operator+(const Vector3 &vector)
    {
        return Vector3(this->x + vector.x, this->y + vector.y, this->z + vector.z);
    }

    Vector3 operator-(const Vector3 &vector)
    {
        return Vector3(this->x - vector.x, this->y - vector.y, this->z - vector.z);
    }

    // Умножение вектора на число
    Vector3 operator*(const double &scalar)
    {
        return Vector3(this->x * scalar, this->y * scalar, this->z * scalar);
    }

    Vector3 operator/(const double &scalar)
    {
        return Vector3(this->x / scalar, this->y / scalar, this->z / scalar);
    }

    // Умножение числа на вектор
    friend Vector3 operator*(const double &scalar, const Vector3 &vector)
    {
        return Vector3(vector.x * scalar, vector.y * scalar, vector.z * scalar);
    }

    // Скалярное произведение векторов
    friend double operator*(const Vector3 &v, const Vector3 &u)
    {
        return v.x * u.x + v.y * u.y + v.z + u.z;
    }
};

double cos(const Vector3 &v, const Vector3 &u)
{
    return (v * u) / (v.norm() * u.norm());
}

int main()
{
    Vector3 v(1, 0, 0);
    Vector3 u(0, 1, 0);
    std::cout << cos(v, u);
    return 0;
}