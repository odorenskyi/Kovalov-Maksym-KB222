#ifndef KOVALOV_LIB_H_INCLUDED
#define KOVALOV_LIB_H_INCLUDED

class ConeRoof {
private:
    double radius;
    double height;

public:
    ConeRoof(double r, double h);

    double getRadius() const;
    double getHeight() const;

    void setRadius(double r);
    void setHeight(double h);

    double calculateVolume() const;
};

#endif // KOVALOV_LIB_H_INCLUDED
