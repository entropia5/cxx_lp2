#pragma once

class Cube {
public:
    double getVolume();
    double GetSurfaceArea();
    void SetLength (double length);

private:
    double length_;

};