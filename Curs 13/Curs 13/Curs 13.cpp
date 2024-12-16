#include <iostream>

using namespace std;

class delegating {
public:
    int max;
    int min;
    int middle;

    int my_max() { return max; }
    int my_min() { return min; }
    int my_middle() { return middle; }

    delegating() {}
    delegating(int my_max) {
        max = my_max > 0 ? my_max : 10;
    }
    delegating(int my_max, int my_min) : delegating(my_max) {
        max = my_max > 0 ? my_max : 10;
        min = my_min > 0 && my_min < max ? my_min : 1;
    }
    delegating(int my_max, int my_min, int my_middle) : delegating(my_max, my_min) {
        max = my_max > 0 ? my_max : 10;
        min = my_min > 0 && my_min < max ? my_min : 1;
        middle = my_middle < max && my_middle > min ? my_middle : 5;
    }
};

void display_player(delegating p) {
    cout << "max:" << p.my_max() << endl;
    cout << "min:" << p.my_min() << endl;
    cout << "middle:" << p.my_middle() << endl;
}

int main()
{

    /*delegating obj(5);
    display_player(obj);*/

    /*delegating obj1(7, 2);
    display_player(obj1);*/

    delegating obj2(7, 2, 6);
    display_player(obj2);

    return 0;
}
