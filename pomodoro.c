#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void display()
{
    printf("\n");
    printf("\n");    
    printf("\033[0;32m");
    printf("          ▓ \n");
    printf("        ▓▓▓▓▓ \n");
    printf("\033[0m");
    printf("\033[1;31m");
    printf("      ▓▓▓▓▓▓▓▓▓ \n");
    printf("    ▓▓▓▓▓▓▓▓▓▓▓▓▓ \n");
    printf("    ▓▓▓▓▓▓▓▓▓▓▓▓▓ \n");
    printf("     ▓▓▓▓▓▓▓▓▓▓▓ \n");
    printf("      ▓▓▓▓▓▓▓▓▓  \n");
    printf("\033[0m");
    printf("\n");
    printf("\n");
}

int play_sound(char *sound_file)
{
    char command[256];
    int status;

    sprintf(command, "aplay -c 1 -q -t wav %s", sound_file);

    status = system(command);

    return status;

}


int main(int argc, char *argv[])
{
        
	while(1)
	{
	    display();
	    printf("      Work time!\n");
	    sleep(1500);
	    play_sound(argv[1]);
	    printf("      5 Minute Break\n");
	    sleep(300);
	}
	return 0;
}
