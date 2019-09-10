int file(char* argv){
	FILE *file = fopen(argv, "r");
	if(file==NULL){return 0;}
	else{fclose(file);return 1;}
}