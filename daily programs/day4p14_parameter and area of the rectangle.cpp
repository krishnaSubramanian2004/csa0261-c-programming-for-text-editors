#include <stdio.h>

struct rectangle {
    int length;
    int width;
};

int area(struct rectangle r) {
    int area = r.length * r.width;
    return area;
}

int main() {
    struct rectangle r = {5, 10};
    int a = area(r);
    printf("Area of the rectangle is %d", a);
    return 0;
}
