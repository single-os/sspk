int search_install(char* argv){
	char command[1024] = "";
	int re = 0;
	char var[BUFSIZ];
	FILE *file = fopen("/etc/sing/list", "r");
	while(fgets(var, BUFSIZ, file) != NULL){
		sprintf(command, "%s%s", argv, "\n");
		if(strcmp(command, var)==0 || strcmp(argv, var)==0){
			re = 1;
		}
	}
	return re;
}