#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

extern int yyparse(void);
extern FILE *yyin;
extern ASTNode *ast_root;

// Forward declaration from codegen
void codegen(ASTNode *root, FILE *output);

void print_usage(const char *prog) {
    fprintf(stderr, "Usage: %s [options] <input.ds>\n", prog);
    fprintf(stderr, "Options:\n");
    fprintf(stderr, "  -o <file>    Output file (default: stdout)\n");
    fprintf(stderr, "  --ast        Print AST instead of generating code\n");
    fprintf(stderr, "  -h, --help   Show this help\n");
}

int main(int argc, char **argv) {
    const char *input_file = NULL;
    const char *output_file = NULL;
    int print_ast = 0;
    
    // Parse command line arguments
    for (int i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-o") == 0 && i + 1 < argc) {
            output_file = argv[++i];
        } else if (strcmp(argv[i], "--ast") == 0) {
            print_ast = 1;
        } else if (strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--help") == 0) {
            print_usage(argv[0]);
            return 0;
        } else if (argv[i][0] != '-') {
            input_file = argv[i];
        } else {
            fprintf(stderr, "Unknown option: %s\n", argv[i]);
            print_usage(argv[0]);
            return 1;
        }
    }
    
    if (!input_file) {
        fprintf(stderr, "Error: No input file specified\n");
        print_usage(argv[0]);
        return 1;
    }
    
    // Open input file
    yyin = fopen(input_file, "r");
    if (!yyin) {
        fprintf(stderr, "Error: Cannot open input file: %s\n", input_file);
        return 1;
    }
    
    // Parse
    int parse_result = yyparse();
    fclose(yyin);
    
    if (parse_result != 0) {
        fprintf(stderr, "Parsing failed\n");
        return 1;
    }
    
    if (!ast_root) {
        fprintf(stderr, "No AST generated\n");
        return 1;
    }
    
    if (print_ast) {
        // Just print the AST
        ast_print(ast_root, 0);
    } else {
        // Generate C code
        FILE *out = stdout;
        if (output_file) {
            out = fopen(output_file, "w");
            if (!out) {
                fprintf(stderr, "Error: Cannot open output file: %s\n", output_file);
                return 1;
            }
        }
        
        codegen(ast_root, out);
        
        if (output_file) {
            fclose(out);
        }
    }
    
    return 0;
}

