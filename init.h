int init(int argv){
	if(argv){
		system("rm -rf /tmp/sing/*");
	}else{
		system("rm -rf /tmp/sing/*");
		if(!file("/etc/sing/")){
			system("mkdir /etc/sing/");
			if(!file("/etc/sing/")){
				printf("\x1b[31mERROR trying to open \"/etc/sing/\"\n\x1b[0m");
				return 1;
			}
		}else{if(!file("/etc/sing/list")){
				system(">> /etc/sing/lis");
				if(!file("/etc/sing/lis")){
					printf("\x1b[31mERROR trying to open \"/etc/sing/list\"\x1b[0m\n");
					return 1;
				}
			}
			if(!file("/etc/sing/sources")){
				system(" /etc/sing/sources");
				if(!file("/etc/sing/sources")){
					printf("\x1b[31mERROR trying to open \"/etc/sing/sources\"\x1b[0m\n");
					return 1;
				}
			}	
		}
	}
}