int download(char url[1024], char file0[1024], int jump){	
	FILE *file1 = fopen(file0, "w");
	if(file1==NULL){
		if(jump!=1){printf("\x1b[31mERROR trying to open \"%s\"\n\x1b[0m", file0);}
		return 1;
	}else{
		CURL *curl;
		CURLcode tmp;
		curl = curl_easy_init();
		curl_easy_setopt(curl, CURLOPT_URL, url);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, file1);
		tmp = curl_easy_perform(curl);
		if(jump!=1){printf("loading...\n");}
		if(tmp==0){
			if(jump!=1){printf("\x1b[32msuccess\x1b[39m\n");}
			fclose(file1);
			curl_easy_cleanup(curl);
			return 0;
		}else{
			if(jump!=1){printf("\x1b[31mdownload error\n\x1b[0m");}
			fclose(file1);
			curl_easy_cleanup(curl);
			return 1;
		}
	}
}