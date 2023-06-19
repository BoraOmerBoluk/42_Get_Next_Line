// >> LIBRARIES <<

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"

//-------------------------------------------------------------------------------
// >> 1 - 26. Satırlar Arasını Yazdırma İşlemi <<

// int main()
// {
// 	char *line = NULL;
// 	int fd;

// 	fd = open("get_next_line.h", O_RDONLY);
// 	int i = 0;

// 	while(i < 1 && (line = get_next_line(fd)))
// 	{
// 		printf("%s", line);
// 		free(line);
// 		i++;
// 	}

// 		while (i < 26)
// 	{
// 		line = get_next_line(fd);
// 		printf("%s", line);
// 		free(line); // mainde leaks temizliyor.
// 		i++;
// 	}
// system("leaks a.out"); // mainde leaks kontrolü yapmayı sağlıyor.
// }

//-------------------------------------------------------------------------------
// >> Terminalden Girdi Yapma İşlemi <<

// int main()
// {
// 	char *line;
// 	int ret;

// 	line = get_next_line(0); 

// 	while (line)
// 	{
// 		printf("%s\n", line);
// 		free(line);
// 		line = get_next_line(0);
// 	}

// }

//-------------------------------------------------------------------------------
// >> Dosya Sonuna Kadar Yazdırma İşlemi <<

// int main()
// {
// 	char *line = NULL;
// 	int fd;

// 	fd = open("a.txt", O_RDONLY);
// 	  while ((line = get_next_line(fd)))
//     {
//         printf("%s", line);
//         free(line);
//     }
//    system("leaks a.out");
// } 
