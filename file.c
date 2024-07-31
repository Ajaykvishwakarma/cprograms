// Open a File (fopen)

FILE *file = fopen("exampe.txt", "r");
if(file === NULL) {
    printf("File is not present");
}




//Close a File (fclose)

FILE *files = fopen("example.txt", "r");
if(files != NULL) {
    fclose(files);
}



// Charecter input and output in file
 

FILE *file1 = fopen("example.txt", "r");
if (file1 != NULL) {
    char ch;
    while ((ch = fgetc(file1)) != EOF) {
        putchar(ch); // Print each character to console
    }
    fclose(file1);
}
