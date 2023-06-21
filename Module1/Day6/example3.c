#include <stdio.h>

struct Complex_number {
    float real;
    float imaginary;
};

void Read_Complex_num(struct Complex_number *c)
{
    printf("->Enter real part: ");
    scanf("%f", &(c->real));
    printf("->Enter imaginary part: ");
    scanf("%f", &(c->imaginary));
}

void Write_Complex_num(struct Complex_number c) {
    printf(" %.2f + %.2fi\n", c.real, c.imaginary);
}

struct Complex_number Addition_Complex(struct Complex_number c1, struct Complex_number c2) 
{
    struct Complex_number result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;
    return result;
}

struct Complex_number Multiply_Complex(struct Complex_number c1, struct Complex_number c2) {
    struct Complex_number result;
    result.real = c1.real * c2.real - c1.imaginary * c2.imaginary;
    result.imaginary = c1.real * c2.imaginary + c1.imaginary * c2.real;
    return result;
}

int main() {
    struct Complex_number c1, c2, sum, product;

    
    printf("*Enter first complex number*\n");
    Read_Complex_num(&c1);
    printf("*Enter second complex number*\n");
    Read_Complex_num(&c2);

    printf("First complex number:\n");
    Write_Complex_num(c1);
    printf("Second complex number:\n");
    Write_Complex_num(c2);


    sum = Addition_Complex(c1, c2);
    printf("Sum of the two complex numbers:\n");
    Write_Complex_num(sum);


    product = Multiply_Complex(c1, c2);
    printf("Product of the two complex numbers:\n");
    Write_Complex_num(product);

    return 0;
}