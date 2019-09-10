#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <curl/curl.h>
#include "download.h"
#include "help.h"
#include "file.h"
#include "init.h"
#include "search_install.h"
#include "update.h"

int main(int argc, char *argv[]){
	init(getuid());
	if(argc==1 || argc>4){
		help();
	}else{
		if(strcmp(argv[1], "-d")==0 || strcmp(argv[1], "--download")==0){
			
		
		}if(strcmp(argv[1], "-u")==0 || strcmp(argv[1], "--update")==0){
			update();
			
		}
		
	}
	return 0;
}