void createMatrix(int sizeMatrix, int type) {
    /* The functions creates the matrix in the window */
    //It is use to add the alphabetical characters
    gchar *values[27] = { 
        "A", "B", "C", "D", 
        "E", "F", "G", "H",
        "I", "J", "K", "L",
        "M", "N", "Ñ", "O", 
        "P", "Q", "R", "S", 
        "T", "U", "V", "W", 
        "X", "Y", "Z"
    };
    
    int i = 0;
    int j = 0;
    int pos = 0;
    
    for (i=0; i < sizeMatrix; i++) {
        for (j=0; j < sizeMatrix; j++) {
            GtkWidget *label;
            GtkTextBuffer *buffer;
            
            if(i == 0 && j == 0) {
                //The empty space in the left upper corner
                label = gtk_label_new("");    
            } else if(i == 0) {
                //Colums name
                label = gtk_text_view_new ();
                buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (label));
                gtk_text_buffer_set_text (buffer, values[j-1], -1);
            } else if(j == 0) {                
                //Rows name
                label = gtk_text_view_new ();
                buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (label));
                gtk_text_buffer_set_text (buffer, values[i-1], -1);
            } else if(i == j) {
                //The diagonal
                label = gtk_label_new("0");
            } else {
                //Los valores
                label = gtk_text_view_new ();
                buffer = gtk_text_view_get_buffer (GTK_TEXT_VIEW (label));
                if(type == 0) {
                    //Cuando los mete desde la interfaz
                    gtk_text_buffer_set_text (buffer, "-1", -1);    
                } else {
                    //Cuando es por archivo
                    if(matrixF[i][j] == -1) {
                        gtk_text_buffer_set_text (buffer, "-1", -1);    
                    } else {
                        printf("no lo convitio: %c***************************\n", matrixF[i-1][j-1]);
                        char * temporal = (char)matrixF[i][j];
                        printf("no lo convitio: %c***************************\n", temporal);
                        gtk_text_buffer_set_text (buffer, temporal, -1);    //core dump seguro por algo del tipo q acepta la funci'on
                    }   
                        
                }
                
            }
            
            gtk_table_attach_defaults(GTK_TABLE(matrix), label, j, j+1, i, i+1);   
        }
    }
    gtk_widget_show_all(matrix);
}