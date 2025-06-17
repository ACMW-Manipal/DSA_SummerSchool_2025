#include <stdio.h>


struct Box {
    float length;
    float breadth;
    float height;
};


void swapBoxes(struct Box *b1, struct Box *b2) {
    struct Box temp;
    temp = *b1;
    *b1 = *b2;
    *b2 = temp;
}

int main() {
    struct Box box1 = {10.5, 7.2, 4.0};
    struct Box box2 = {6.0, 5.5, 9.1};

    printf("Before swapping:\n");
    printf("Box1 - Length: %.1f, Breadth: %.1f, Height: %.1f\n", box1.length, box1.breadth, box1.height);
    printf("Box2 - Length: %.1f, Breadth: %.1f, Height: %.1f\n", box2.length, box2.breadth, box2.height);


    swapBoxes(&box1, &box2);

    printf("After swapping:\n");
    printf("Box1 - Length: %.1f, Breadth: %.1f, Height: %.1f\n", box1.length, box1.breadth, box1.height);
    printf("Box2 - Length: %.1f, Breadth: %.1f, Height: %.1f\n", box2.length, box2.breadth, box2.height);

    return 0;
}
