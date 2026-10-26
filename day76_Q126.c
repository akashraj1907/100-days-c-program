//Q126: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
#include <stdlib.h>

int main() {
    char source_file[100], dest_file[100];
    FILE *fp_src, *fp_dest;
    int ch;

    printf("Enter source filename: ");
    scanf("%s", source_file);

    printf("Enter destination filename: ");
    scanf("%s", dest_file);

    fp_src = fopen(source_file, "r");
    if (fp_src == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    fp_dest = fopen(dest_file, "w");
    if (fp_dest == NULL) {
        printf("Error opening destination file.\n");
        fclose(fp_src);
        return 1;
    }

    while ((ch = fgetc(fp_src)) != EOF) {
        fputc(ch, fp_dest);
    }

    printf("File copied successfully to %s\n", dest_file);

    fclose(fp_src);
    fclose(fp_dest);

    return 0;
}