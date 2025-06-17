#include <stdio.h>

struct Box {
    float length;
    float breadth;
    float height;
};


void swapBoxes(struct Box *b1, struct Box *b2) {
    struct Box temp = *b1;
    *b1 = *b2;
    *b2 = temp;
}

int main() {
    struct Box box1, box2;

   
    printf("Enter length, breadth and height of Box 1: ");
    scanf("%f %f %f", &box1.length, &box1.breadth, &box1.height);

   
    printf("Enter length, breadth and height of Box 2: ");
    scanf("%f %f %f", &box2.length, &box2.breadth, &box2.height);

    printf("Before swapping:");
    printf("Box 1: Length=%.f, Breadth=%.f, Height=%.f\n", box1.length, box1.breadth, box1.height);
    printf("Box 2: Length=%.f, Breadth=%.f, Height=%.f\n", box2.length, box2.breadth, box2.height);

   
    swapBoxes(&box1, &box2);

    printf("After swapping:");
    printf("Box 1: Length=%.f, Breadth=%.f, Height=%.f\n", box1.length, box1.breadth, box1.height);
    printf("Box 2: Length=%.f, Breadth=%.f, Height=%.f\n", box2.length, box2.breadth, box2.height);

    return 0;
}
