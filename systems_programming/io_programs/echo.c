#include <string.h>
#include <unistd.h>

int main ( int argc, char** argv)
{
	for( int i = 1; i < argc; i++ )
	{
		write( 1, argv[i], strlen(argv[i]) );
	}
	return 0;
}
