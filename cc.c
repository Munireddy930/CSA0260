#include <stdio.h>
#include <string.h>

int main() {
    FILE *input_file, *error_log_file;
    char line[100];

    
    input_file = fopen("input.txt", "r");
    if (input_file == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }
    
    error_log_file = fopen("error_log.txt", "w");
    if (error_log_file == NULL) {
        printf("Error opening error log file.\n");
        fclose(input_file);
        return 1;
    }

    
    while (fgets(line, 100, input_file) != NULL) {

        if (strstr(line, "error") != NULL) {

            fputs(line, error_log_file);
        }
    }


    fclose(input_file);
    fclose(error_log_file);

    
    error_log_file = fopen("error_log.txt", "r");
    if (error_log_file == NULL) {
        printf("Error opening error log file.\n");
        return 1;
    }

    
    printf("Contents of error_log.txt:\n");
    while (fgets(line, 100, error_log_file) != NULL) {
        printf("%s", line);
    }


    fclose(error_log_file);

 return 0;
}
