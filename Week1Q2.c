#include <stdio.h>

struct Box {
    double length;
    double breadth;
    double height;
};
void swapBoxes(struct Box *b1, struct Box *b2) {
    struct Box temp;
    
    temp.length = (*b1).length;
    (*b1).length = (*b2).length;
    (*b2).length = temp.length;

    temp.breadth = (*b1).breadth;
    (*b1).breadth = (*b2).breadth;
    (*b2).breadth = temp.breadth;

    temp.height = (*b1).height;
    (*b1).height = (*b2).height;
    (*b2).height = temp.height;
}

void printBox(const char *name, struct Box *box) {
    printf("%s: Length = %.2f, Breadth = %.2f, Height = %.2f\n",
           name, (*box).length, (*box).breadth, (*box).height);
}

int main() {
    struct Box box1;
    struct Box box2;

    printf("Enter dimensions for Box 1:\n");
    printf("Length: ");
    scanf("%lf", &box1.length); 
    printf("Breadth: ");
    scanf("%lf", &box1.breadth);
    printf("Height: ");
    scanf("%lf", &box1.height);

    printf("\nEnter dimensions for Box 2:\n");
    printf("Length: ");
    scanf("%lf", &box2.length);
    printf("Breadth: ");
    scanf("%lf", &box2.breadth);
    printf("Height: ");
    scanf("%lf", &box2.height);

    printf("\nBefore swapping:\n");
    printBox("Box 1", &box1);
    printBox("Box 2", &box2);

    swapBoxes(&box1, &box2);
    printf("\nAfter swapping:\n");
    printBox("Box 1", &box1);
    printBox("Box 2", &box2);

    return 0;
}