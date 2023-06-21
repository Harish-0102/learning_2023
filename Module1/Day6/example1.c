//find the area and volume of the box using arrow operator

#include <stdio.h>

struct vol_box {
    double length;
    double width;
    double height;
};

void box_parameters(struct vol_box *Box) {
    double volume = Box->length * Box->width * Box->height;
    double surface_area = 2 * (Box->length * Box->width + Box->length * Box->height + Box->width * Box->height);
    
    printf("Box Volume is: %.2f\n", volume);
    printf("Box Surface Area is: %.2f\n", surface_area);
}

int main() {
    struct vol_box box;
    struct vol_box *BoxPtr = &box;

    printf("Enter the length of the box: ");
    scanf("%lf", &BoxPtr->length);
    
    printf("Enter the width of the box: ");
    scanf("%lf", &BoxPtr->width);
    
    printf("Enter the height of the box: ");
    scanf("%lf", &BoxPtr->height);

    box_parameters(BoxPtr);

    return 0;
}