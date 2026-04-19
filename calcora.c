#include<stdio.h>
#include<math.h>

#define PI 3.1415926535
#define E 2.7182818284

// ===== BASIC =====
float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }

float divide(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero\n");
        return 0;
    }
    return a / b;
}

int mod(int a, int b) { return a % b; }

float power(float base, float exponent) { return pow(base, exponent); }

float square_root(float num) {
    if (num < 0) {
        printf("Error: Negative input\n");
        return 0;
    }
    return sqrt(num);
}

// ===== INTEREST =====
float simple_interest(float p, float r, float t) {
    return (p * r * t) / 100;
}

float compound_interest(float p, float r, float t) {
    return p * pow((1 + r / 100), t) - p;
}

// ===== NTH ROOT =====
float nth_root(float num, float n) {
    if (num < 0 && (int)n % 2 == 0) {
        printf("Error: Invalid root\n");
        return 0;
    }
    return pow(num, 1.0 / n);
}

// ===== LOG =====
float log_10(float num) {
    if (num <= 0) {
        printf("Error: Log undefined\n");
        return 0;
    }
    return log10(num);
}

float natural_log(float num) {
    if (num <= 0) {
        printf("Error: ln undefined\n");
        return 0;
    }
    return log(num);
}

// ===== TRIG =====
float to_radians(float deg) { return deg * (PI / 180.0); }
float to_degrees(float rad) { return rad * (180.0 / PI); }

float sine(float d) { return sin(d); }
float cosine(float d) { return cos(d); }
float tangent(float d) { return tan(d); }

// ===== FACTORIAL =====
int factorial(int n) {
    if (n < 0) return -1;
    int fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}

// ===== PERM & COMB =====
int permutation(int n, int r) {
    if (r > n || n < 0 || r < 0) return 0;
    return factorial(n) / factorial(n - r);
}

int combination(int n, int r) {
    if (r > n || n < 0 || r < 0) return 0;
    return factorial(n) / (factorial(r) * factorial(n - r));
}
// ===== EXPONENTIAL =====
float exponential(float x) {
    return exp(x);
}

// ===== HYPERBOLIC =====
float sinh_func(float x) { return sinh(x); }
float cosh_func(float x) { return cosh(x); }
float tanh_func(float x) { return tanh(x); }

// ===== MAIN =====
int main() {
    int choice;
    float a, b, c;

    while (1) {
        printf("\n");
printf("  ____      _               \n");
printf(" / ___|__ _| | ___ ___  _ __\n");
printf("| |   / _` | |/ __/ _ \\| '__|\n");
printf("| |__| (_| | | (_| (_) | |   \n");
printf(" \\____\\__,_|_|\\___\\___/|_|   \n");

printf("\n====================================\n");
printf("            CALCORA v1.0            \n");
printf("====================================\n");
printf("Hi, I am Calcora!\n");
printf("A genius scientific calculator,\n");
printf("made by Samprit Gayen.\n");
printf("====================================\n\n");

/* BASIC */
printf("--- BASIC OPERATIONS ---\n");
printf(" 1. Add        2. Subtract    3. Multiply    4. Divide\n\n");

/* MOD POWER ROOT */
printf("--- MOD, POWER & ROOT ---\n");
printf(" 5. Mod        6. Power       7. Square Root 8. Nth Root\n\n");

/* INTEREST + LOG */
printf("--- INTEREST & LOG FUNCTIONS ---\n");
printf(" 9. Simple Interest   10. Compound Interest\n");
printf("11. log10             12. ln\n\n");

/* TRIG */
printf("--- TRIGONOMETRY ---\n");
printf("13. sin   14. cos   15. tan\n");
printf("16. asin  17. acos  18. atan\n\n");

/* OTHER */
printf("--- OTHER ---\n");
printf("19. nPr   20. nCr   21. Factorial\n");
printf("22. Deg->Rad   23. Rad->Deg   24. e^x\n\n");

printf("25. Exit\n"); 

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 25) break;

        switch (choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f\n", add(a,b));
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f\n", subtract(a,b));
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f\n", multiply(a,b));
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f\n", divide(a,b));
            break;

        case 5: {
            int x, y;
            printf("Enter two integers: ");
            scanf("%d %d", &x, &y);
            printf("Result: %d\n", mod(x,y));
            break;
        }

        case 6:
            printf("Enter base and exponent: ");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f\n", power(a,b));
            break;

        case 7:
            printf("Enter number: ");
            scanf("%f", &a);
            printf("Result: %.2f\n", square_root(a));
            break;

        case 8:
            printf("Enter number and root: ");
            scanf("%f %f", &a, &b);
            printf("Result: %.2f\n", nth_root(a,b));
            break;

        case 9:
            printf("Enter P R T: ");
            scanf("%f %f %f", &a, &b, &c);
            printf("SI: %.2f\n", simple_interest(a,b,c));
            break;

        case 10:
            printf("Enter P R T: ");
            scanf("%f %f %f", &a, &b, &c);
            printf("CI: %.2f\n", compound_interest(a,b,c));
            break;

        case 11:
            printf("Enter number: ");
            scanf("%f", &a);
            printf("Result: %.4f\n", log_10(a));
            break;

        case 12:
            printf("Enter number: ");
            scanf("%f", &a);
            printf("Result: %.4f\n", natural_log(a));
            break;

        case 13:
            printf("Enter angle (radians): ");
            scanf("%f", &a);
            printf("Result: %.4f\n", sine(a));
            break;

        case 14:
            printf("Enter angle (radians): ");
            scanf("%f", &a);
            printf("Result: %.4f\n", cosine(a));
            break;

        case 15:
            printf("Enter angle (radians): ");
            scanf("%f", &a);
            printf("Result: %.4f\n", tangent(a));
            break;

        case 16: {
            printf("Enter x: ");
            scanf("%f", &a);
            printf("Result: %.4f\n", sinh_func(a));
            break;
        }

        case 17: {
            printf("Enter x: ");
            scanf("%f", &a);
            printf("Result: %.4f\n", cosh_func(a));
            break;
        }
        case 18: {
            printf("Enter x: ");
            scanf("%f", &a);
            printf("Result: %.4f\n", tanh_func(a));
            break;
        }

        case 19: {
            int n,r;
            printf("Enter n and r: ");
            scanf("%d %d",&n,&r);
            printf("Result: %d\n", permutation(n,r));
            break;
        }

        case 20:
            {
            int n,r;
            printf("Enter n and r: ");
            scanf("%d %d",&n,&r);
            printf("Result: %d\n", combination(n,r));
            break;
        }

        case 21:
           {
            int n;
            printf("Enter number: ");
            scanf("%d",&n);
            printf("Result: %d\n", factorial(n));
            break;
        } 

        case 22: 
           {
              printf("Enter degrees: ");
            scanf("%f",&a);
            printf("Radians: %.4f\n", to_radians(a));
            break;
        }
        case 23:
            {
            printf("Enter radians: ");
            scanf("%f",&a);
            printf("Degrees: %.4f\n", to_degrees(a));
            break;
            }
        case 24:
            {
            printf("Enter x: ");
            scanf("%f", &a);
            printf("Result: %.4f\n", exponential(a));
            break;
            }

        default:
            printf("Invalid choice\n");
        }
    
    }
    return 0;
}
