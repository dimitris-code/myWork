#include <iostream>
#define PI 3.14
#define COST 3.5
#define WALLDIMENS 10
#define RADIUS 4

using namespace std;

/*
    ****************** WORDING *****************

    4 walls with 10m2 each
    1 Circle area with 4m radius
    color cost: Euro: 3.5/m2
    Calculate the total cost for all walls and the circle area
    
    ****************END OF WORDING**************
*/

class RectWall{
    public:
        float findWallCost(float a, float b, float c){
	    float result = 0.0;
	    result = (c*b)/ a;
	    return result;
        }
};

class CircleWall{
    public:
        float getArea(int radius){
        return PI * (RADIUS * RADIUS);
        }
};

int main() {
    RectWall RectW1;
    RectWall RectW2;
    RectWall RectW3;
    RectWall RectW4;
    
    CircleWall C1;

    float w1 = RectW1.findWallCost(1.0, COST, WALLDIMENS);
    float w2 = RectW1.findWallCost(1.0, COST, WALLDIMENS);
    float w3 = RectW1.findWallCost(1.0, COST, WALLDIMENS);
    float w4 = RectW1.findWallCost(1.0, COST, WALLDIMENS);

    cout << "4 walls total cost: €" << w1 + w2 + w3 + w4 << endl;

    float y = C1.getArea(RADIUS);
    cout << "Circle area costs: €" << y << endl;

    float result = 0.0;
    result = w1 + w2 + w3 + w4 + y;
    cout << "4 walls and 1 circle area total paint cost: €" << result << endl;

    return 0;
}