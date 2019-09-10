int update(){
	FILE *file0 = fopen("/etc/sing/sources.list", "r");
	if(file0==NULL){printf("\x1b[31mERROR trying to open \"/etc/sing/sources\"\n\x1b[0m");return 1;}
	system("rm -rf /etc/sing/sources/*");
	char var[BUFSIZ];
	int index = 0;
	char temp[1024] = "";
	while(fgets(var, BUFSIZ, file0) != NULL){
		if(var[strlen(var)-1]=='\n'){
			char tmp[1024]="";
			int index1=0;
			while(strlen(var)-1!=index1){
				sprintf(tmp, "%s%c", tmp, var[index1]);
				index1++;
			}
			sprintf(var, "%s", tmp);
		}
		printf("%s\n", var);
		sprintf(temp, "/etc/sing/sources/%i", index);
		download(var, temp, 1);
		index++;
	}
}