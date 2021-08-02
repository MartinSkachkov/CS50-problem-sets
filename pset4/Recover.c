#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
 
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Program accepts exactly one command-line argument!\n");
        return 1;
    }
    
    FILE *file = fopen(argv[1], "r");
    
    if (file == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }
    
    unsigned char buffer[512];
     
    int count_image = 0;
     
    FILE *restored = NULL;
    
    char *filename = malloc(8 *sizeof(char)); //char filename[8]; // xxx.jpeg'\0' 
    
    while (fread(&buffer, sizeof(char), 512, file))
    {
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            //write jpeg into file name in form 001.jpg, 002.jpg and so on
            sprintf(filename, "%03i.jpg", count_image);
            
            restored = fopen(filename, "w");
            
            count_image++;
        }
        
         if (restored != NULL)
            {
                fwrite(&buffer, sizeof(char), 512, restored);
            }
    }
    
    free(filename);
    free(restored);
    free(file);
    return 0;
    
}
