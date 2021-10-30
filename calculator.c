// Max Base
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float math_expression_eval(const char* input) {
    float result = 0;
    char op = '+';
    float num = 0;
    float num_tmp = 0;
    while (*input) {
        if (*input == ' ') {
            input++;
            continue;
        }
        if (*input == '+' || *input == '-' || *input == '*' || *input == '/') {
            op = *input;
            input++;
            continue;
        }
        if (*input >= '0' && *input <= '9') {
            num_tmp = *input - '0';
            input++;
            while (*input >= '0' && *input <= '9') {
                num_tmp = num_tmp * 10 + *input - '0';
                input++;
            }
            if (op == '+') {
                num += num_tmp;
            } else if (op == '-') {
                num -= num_tmp;
            } else if (op == '*') {
                num *= num_tmp;
            } else if (op == '/') {
                num /= num_tmp;
            }
            continue;
        }
        input++;
    }
    result = num;
    return result;
}

int main() {
    char input[100];
    while (1) {
        printf("input a math expression: ");
        scanf("%s", input);
        printf("result: %.0f\n", math_expression_eval(input));
    }
    return 0;
}
