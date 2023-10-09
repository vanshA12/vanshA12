#include <stdio.h>

int main()
{
    float length, width, perimeter, side, radius, area;
//rectangle
    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);

    perimeter = 2 * (length + width);
    area = length * width;
   
    printf("\nPerimeter of rectangle = %f units ", perimeter);
    printf("\nArea of rectangle = %f units ", area);
//square
    printf("\nEnter side of the square: ");
    scanf("%f", &side);

    area = side*side;
    perimeter = 4 * side;

    printf("\nPerimeter of square = %f units ", perimeter);
    printf("\nArea of square = %f units ", area);
//circle
    printf("\nEnter radius of the circle: ");
    scanf("%f", &radius);

    perimeter = 6.28 * radius;
    area = 3.14 * radius * radius;

    printf("\nPerimeter of circle = %f units ", perimeter);
    printf("\nArea of circle = %f units ", area);
    return 0;
}