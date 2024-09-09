// William Held 5563010
// 9/5/2024
// COP 3223 Assignment 1
// Juan Parra

#include <math.h>
#include <stdio.h>

// Collects x1 coordinate from user
double x1_function() {
    double x1 = 0;
    printf("x1=");
    scanf(" %lf",&x1);
    return x1;
}

// Collects x2 coordinate from user
double x2_function() {
    double x2 = 0;
    printf("x2=");
    scanf(" %lf",&x2);
    return x2;
}

// Collects y1 coordinate from user
double y1_function() {
    double y1 = 0;
    printf("y1=");
    scanf(" %lf",&y1);
    return y1;
}

// Collects y2 coordinate from user
double y2_function() {
    double y2 = 0;
    printf("y2=");
    scanf(" %lf",&y2);
    return y2;
}

// Calculates distance between two points
double calculateDistance(double x1, double y1, double x2, double y2) {
    double deltaX = x1 - x2;
    double deltaY = y1 - y2;
    double deltaXsquared = pow(deltaX, 2);
    double deltaYsquared = pow(deltaY, 2);
    double sum = deltaXsquared + deltaYsquared;
    double distance = sqrt(sum);
    printf("\nPoint #1 entered: x1 = %.3lf; y1 = %.3lf \n", x1, y1);
    printf("Point #2 entered: x2 = %.3lf; y2 = %.3lf \n", x2, y2);
    printf("The distance between the two points is %.3lf \n", distance);
    return distance;
}

// Calculates perimeter of circle defined by two points
double calculatePerimeter(double x1, double y1, double x2, double y2, double distance) {
    #define PI 3.14159
    double perimeter = distance * PI;
    printf("\nPoint #1 entered: x1 = %.3lf; y1 = %.3lf \n", x1, y1);
    printf("Point #2 entered: x2 = %.3lf; y2 = %.3lf \n", x2, y2);
    printf("The perimeter of the city encompassed by your request is %.3lf \n", perimeter);
    return 5;
}

// Calculates area of circle defined by two points
double calculateArea(double x1, double y1, double x2, double y2, double distance) {
    #define PI 3.14159
    double area = PI * pow((distance/2), 2);
    printf("\nPoint #1 entered: x1 = %.3lf; y1 = %.3lf \n", x1, y1);
    printf("Point #2 entered: x2 = %.3lf; y2 = %.3lf \n", x2, y2);
    printf("The area of the city encompassed by your request is %.3lf \n", area);
    return 5;
}

// Calculates width of circle defined by two points
double calculateWidth(double x1, double y1, double x2, double y2, double distance){
    double width = distance;
    printf("\nPoint #1 entered: x1 = %.3lf; y1 = %.3lf \n", x1, y1);
    printf("Point #2 entered: x2 = %.3lf; y2 = %.3lf \n", x2, y2);
    printf("The width of the city encompassed by your request is %.3lf \n", width);
    return 3;
}

// Calculates height of circle defined by two points
double calculateHeight(double x1, double y1, double x2, double y2, double distance){
    double height = distance;
    printf("\nPoint #1 entered: x1 = %.3lf; y1 = %.3lf \n", x1, y1);
    printf("Point #2 entered: x2 = %.3lf; y2 = %.3lf \n", x2, y2);
    printf("The height of the city encompassed by your request is %.3lf \n", height);
    return 3;
}

// Calls on functions to output "city" parameters to console based on user input
int main(int argc, char **argv) {
    double x1 = x1_function();
    double x2 = x2_function();
    double y1 = y1_function();
    double y2 = y2_function();
    double distance = calculateDistance(x1,y1,x2,y2);
    calculatePerimeter(x1,y1,x2,y2,distance);
    calculateArea(x1,y1,x2,y2,distance);
    calculateWidth(x1,y1,x2,y2,distance);
    calculateHeight(x1,y1,x2,y2,distance);
    return 0;
}