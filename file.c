#include <stdio.h>

int main() {
    FILE *file;
    int i, num_items;

    
    file = fopen("data.bin", "rb");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    
    fread(&num_items, sizeof(int), 1, file);
    printf("Number of items in file: %d\n", num_items);

    
    for (i = 0; i < num_items; i++) {
        int id, age;
        char name[20];

        
        fread(&id, sizeof(int), 1, file);
        fread(name, sizeof(char), 20, file);
        fread(&age, sizeof(int), 1, file);

        
        printf("Item %d: ID=%d, Name=%s, Age=%d\n", i+1, id, name, age);
    }

    
    fclose(file); 
return 0;
}
