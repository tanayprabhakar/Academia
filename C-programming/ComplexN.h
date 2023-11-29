void Conjugate(int a, int b, int c, int d)
{
    int mulreal, mulimg;
    mulreal=(a*c)-(b*d);
    mulimg=(a*d)+(b*c);
    printf("Multiplication: %d+(%d)i\n",mulreal,mulimg);
    printf("Conjugate of the multiplication: %d+(%d)i\n",mulreal,-1*mulimg);
}