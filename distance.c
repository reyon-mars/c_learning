#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Token types
enum {
    TOKEN_INT,
    TOKEN_ADD,
    TOKEN_SUB,
    TOKEN_MUL,
    TOKEN_DIV,
    TOKEN_LPAREN,
    TOKEN_RPAREN,
    TOKEN_EOF
};

// Token structure
typedef struct {
    int type;
    int value;  // For TOKEN_INT
} Token;

// Lexer
typedef struct {
    const char* input;
    int position;
} Lexer;

void lexer_init(Lexer* lexer, const char* input) {
    lexer->input = input;
    lexer->position = 0;
}

int lexer_next_token(Lexer* lexer, Token* token) {
    while (lexer->input[lexer->position] != '\0') {
        char current_char = lexer->input[lexer->position];

        if (current_char >= '0' && current_char <= '9') {
            int value = current_char - '0';
            lexer->position++;

            while (lexer->input[lexer->position] >= '0' && lexer->input[lexer->position] <= '9') {
                value = value * 10 + (lexer->input[lexer->position] - '0');
                lexer->position++;
            }

            token->type = TOKEN_INT;
            token->value = value;
            return 1;
        } else if (current_char == '+') {
            token->type = TOKEN_ADD;
            lexer->position++;
            return 1;
        } else if (current_char == '-') {
            token->type = TOKEN_SUB;
            lexer->position++;
            return 1;
        } else if (current_char == '*') {
            token->type = TOKEN_MUL;
            lexer->position++;
            return 1;
        } else if (current_char == '/') {
            token->type = TOKEN_DIV;
            lexer->position++;
            return 1;
        } else if (current_char == '(') {
            token->type = TOKEN_LPAREN;
            lexer->position++;
            return 1;
        } else if (current_char == ')') {
            token->type = TOKEN_RPAREN;
            lexer->position++;
            return 1;
        } else {
            lexer->position++;
        }
    }

    token->type = TOKEN_EOF;
    return 0;
}

// Parser
int parse_expression(Lexer* lexer);

int parse_factor(Lexer* lexer) {
    Token token;
    if (lexer_next_token(lexer, &token)) {
        if (token.type == TOKEN_INT) {
            return token.value;
        } else if (token.type == TOKEN_LPAREN) {
            int result = parse_expression(lexer);
            if (lexer_next_token(lexer, &token) && token.type == TOKEN_RPAREN) {
                return result;
            } else {
                fprintf(stderr, "Error: Expected closing parenthesis.\n");
                exit(1);
            }
        } else {
            fprintf(stderr, "Error: Expected an integer or an opening parenthesis.\n");
            exit(1);
        }
    } else {
        fprintf(stderr, "Error: Unexpected end of input.\n");
        exit(1);
    }
}

int parse_term(Lexer* lexer) {
    int result = parse_factor(lexer);

    Token token;
    while (lexer_next_token(lexer, &token)) {
        if (token.type == TOKEN_MUL) {
            result *= parse_factor(lexer);
        } else if (token.type == TOKEN_DIV) {
            int divisor = parse_factor(lexer);
            if (divisor == 0) {
                fprintf(stderr, "Error: Division by zero.\n");
                exit(1);
            }
            result /= divisor;
        } else {
            lexer->position--;  // Put back the last token if it's not * or /
            break;
        }
    }

    return result;
}

int parse_expression(Lexer* lexer) {
    int result = parse_term(lexer);

    Token token;
    while (lexer_next_token(lexer, &token)) {
        if (token.type == TOKEN_ADD) {
            result += parse_term(lexer);
        } else if (token.type == TOKEN_SUB) {
            result -= parse_term(lexer);
        } else {
            lexer->position--;  // Put back the last token if it's not + or -
            break;
        }
    }

    return result;
}

int main() {
    const char* input = "2 + (3 * 4) - 6 / 2";
    Lexer lexer;
    lexer_init(&lexer, input);

    int result = parse_expression(&lexer);
    printf("Result: %d\n", result);

    return 0;
}

