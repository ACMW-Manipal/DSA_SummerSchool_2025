#include <stdio.h>
struct Box{
int length;
int breadth;
int height;
};
void swapBoxes(struct Box *box1,struct Box *box2){
struct Box temp;
 temp = *box1;
*box1 =*box2;
*box2 = temp;
};
int main() {
    struct Box box1 = {10, 20, 30};
    struct Box box2 = {40, 50, 60};

    printf("Before swapping:\n");
    printf("Box 1 -> Length: %d, Breadth: %d, Height: %d\n", box1.length, box1.breadth, box1.height);
    printf("Box 2 -> Length: %d, Breadth: %d, Height: %d\n", box2.length, box2.breadth, box2.height);

    swapBoxes(&box1, &box2);

    printf("\nAfter swapping:\n");
    printf("Box 1 -> Length: %d, Breadth: %d, Height: %d\n", box1.length, box1.breadth, box1.height);
    printf("Box 2 -> Length: %d, Breadth: %d, Height: %d\n", box2.length, box2.breadth, box2.height);

    return 0;
}
