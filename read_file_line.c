#include "read_file_line.h"

char * read_file_line(char *path,int line)
{
	FILE *fp = NULL;
	int ch ;
	int first_line_size = 0;
	int readsize = 0;
	int read_line = 0;
	int read_line_offset = 0;
	int read_line_size;
	static char content[256] = {0};
	char *p = NULL;
	
	fp = fopen(path,"r");
	
	if(fp<0){
		return;
	}
	
	fseek(fp, 0, SEEK_SET);
	while((read_line != line) && (ch = fgetc(fp))!= EOF ){
		readsize ++;
		first_line_size ++;	
		if(ch == '\n'){
			read_line ++;
			
			if(read_line +1 == line){
				read_line_offset = readsize;
			}
			if(read_line == line){
				read_line_size = readsize - read_line_offset;		
				break;
			}
		}		
	}
	if(line ==1){
		read_line_offset = readsize - first_line_size;
	}
	//content = (char *)malloc(read_line_size);
	fseek(fp,read_line_offset+1,SEEK_SET);
	fread(content,read_line_size,1,fp);
	p = content;
	fclose(fp);
	return p;
	
}
int main(int argc, char** argv) 
{ 
  int i=atoi(argv[2]); 
  char *line_content = NULL; 
  line_content = read_file_line(argv[1],i);
  
  printf("line %d:%s",i,line_content); 
   
  //free(line_content);
  return 0; 
} 


