#include <stdio.h>
#include <math.h>

// Define a structure for 2-D coordinates
struct Point {
    double x;
    double y;
};

// Function to calculate the Euclidean distance between two points
double euclideanDistance(struct Point p1, struct Point p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

// Function to calculate the angle between two lines
double calculateAngle(struct Point p1, struct Point p2, struct Point p3, struct Point p4) {
    double m1 = (p2.y - p1.y) / (p2.x - p1.x);
    double m2 = (p4.y - p3.y) / (p4.x - p3.x);
    return atan(fabs((m2 - m1) / (1 + m1 * m2)));
}

// Function to determine if a square is a rectangle and calculate its area
void checkRectangle(struct Point p1, struct Point p2, struct Point p3, struct Point p4) {
    double length1 = euclideanDistance(p1, p2);
    double length2 = euclideanDistance(p2, p3);
    double diagonal = euclideanDistance(p1, p3);
    
    if (length1 == length2 && diagonal * diagonal == 2 * (length1 * length1)) {
        printf("It's a rectangle with area: %lf\n", length1 * length2);
    } else {
        printf("It's not a rectangle.\n");
    }
}

int main() {
    struct Point point1 = {1, 2};
    struct Point point2 = {3, 4};
    struct Point point3 = {5, 6};
    struct Point point4 = {7, 8};

    double distance1 = euclideanDistance(point1, point2);
    double distance2 = euclideanDistance(point3, point4);
    double angle = calculateAngle(point1, point2, point3, point4);

    printf("Distance between points 1 and 2: %lf\n", distance1);
    printf("Distance between points 3 and 4: %lf\n", distance2);
    printf("Angle between the lines: %lf radians\n", angle);

    checkRectangle(point1, point2, point3, point4);

    return 0;
}