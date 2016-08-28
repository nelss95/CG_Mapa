int matrixF [1000][1000];
void getMatrixFromFile(char *fileN, int whichMatrix, int matrixSize) {
    /*It gets the matrix from the file, depending of 
    the wichMatrix will get D(0), D(1), etc*/
    char line[1000];
    
    FILE *fr = fopen (fileN, "rt");  /* open the file for reading */
    int counter = 0;
    while(counter < whichMatrix && fgets(line, 1000, fr) != NULL) {
        printf("sssssssssssssssssssssss: %s\n", line);
        if(strcmp(line, "\n")) {
            printf("aaaaaaaaaaaaaaa: %s\n\n", line);
            counter = counter + 1;
        }
    }
    
    int i;
    for (i=0; i < matrixSize; i++) {
        fgets(line, 1000, fr);
        //char *p = malloc(1000 * sizeof(char));
        int counter = 0;
        int j = 0;
        printf("%s\n", line);
        while(j < matrixSize) {
            if(line[counter] == ' ') {
                //printf("blanco hijueputa\n");
            } else if(line[counter]  == '-'){
                //printf("puta madre");
                counter += 1;
                matrixF[i][j] = -1; //aqui************************************************
                //printf("%c ", (line[counter]));
                j += 1;
            } else {
                matrixF[i][j] = atoi(line[counter]);
                //printf("%c ", line[counter]);
                j += 1;
            }
            
            counter += 1;
                
        }printf("\n");
    }
    
    fclose(fr);  /* close the file prior to exiting the routine */
}
