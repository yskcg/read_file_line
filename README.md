# read_file_line
>
c 语言实现读取指定文件中指定行
###interface function
>
>char * read_file_line(char *path,int line)
>

###usage
>
```
char *buf =NULL;
buf = read_file_line("xxx/yyy",1);
printf("line one content is:%s\n",buf);
free(buf);
```


