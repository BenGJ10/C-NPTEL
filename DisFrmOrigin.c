// Calculating the distance of a point from origin using structures
#include <stdio.h>
#include <math.h>
struct point {  // Define a struct named "point" with two integer fields: x and y
    int x;
    int y;
};

    // This function creates a point given x and y coordinates
struct point make_point(int x, int y){
    // Create a temporary point variable
    struct point temp;
    // Assign the x and y coordinates to the fields of the point
    temp.x = x;
    temp.y = y;
    // Return the created point
    return temp;
}

// This function calculates the Euclidean distance from the origin to a given point
double norm2(struct point p){
    // Calculate the distance using the Pythagorean theorem
    return sqrt((p.x * p.x) + (p.y * p.y));
}

int main() {
    int x, y;
    struct point pt; // Declare a variable of type "point" named "pt"
    printf("Enter two points to measure: ");
    scanf("%d %d", &x, &y); // Read input x and y coordinates
    pt = make_point(x, y); // Create a point using the input coordinates
    printf("The distance from origin is %.2f\n", norm2(pt)); // Calculate and print the distance
    return 0;
}
