#include "traversal_dir.h"
#include "md5.h"
#include "log.h"
#include <pthread.h>
#include <dirent.h>
#include <sys/stat.h>

static int deal_file(unsigned char *s_file_path, unsigned char *d_file_path);



static int deal_file(unsigned char *s_file_path, unsigned char *d_file_path)
{
	unsigned char s_md5_vlaue[32]={0};
	unsigned char d_md5_vlaue[32]={0};
	struct stat s_stat, d_stat;
	if(lstat(s_file_path, &s_stat) < 0){
		
	}
}
		
	
	
}

