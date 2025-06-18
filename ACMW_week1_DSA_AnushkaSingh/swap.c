#include <stdio.h>

struct Box {
    int length;
    int breadth;
    int height;
};

void swapBoxes(struct Box *b1, struct Box *b2) {
    struct Box temp = *b1;
    *b1 = *b2;
    *b2 = temp;
}

int main() {
    struct Box box1, box2;

    printf("Enter dimensions of Box 1 (length breadth height): ");
    scanf("%d %d %d", &box1.length, &box1.breadth, &box1.height);

    printf("Enter dimensions of Box 2 (length breadth height): ");
    scanf("%d %d %d", &box2.length, &box2.breadth, &box2.height);

    swapBoxes(&box1, &box2);

    printf("\nAfter swapping:\n");
    printf("Box 1 -> %d %d %d\n", box1.length, box1.breadth, box1.height);
    printf("Box 2 -> %d %d %d\n", box2.length, box2.breadth, box2.height);

    return 0;
}

