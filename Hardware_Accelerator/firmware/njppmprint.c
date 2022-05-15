// Functions for output to file: any data written using the following
// will end up in the file 'output.dump' - this should be read as a PPM
// This file is expected to be directly #include'd into the main source
#define PPMPORT 0x20000000
void ppm_print_chr(char ch);
void ppm_print_str(const char *p);
void ppm_print_dec(unsigned int val);
void ppm_print_header(bool colour, int width, int height);

void ppm_print_chr(char ch)
{
	*((volatile uint32_t*)PPMPORT) = ch;
}

void ppm_print_str(const char *p)
{
	while (*p != 0)
		*((volatile uint32_t*)PPMPORT) = *(p++);
}

void ppm_print_dec(unsigned int val)
{
	char buffer[10];
	char *p = buffer;
	while (val || p == buffer) {
		*(p++) = val % 10;
		val = val / 10;
	}
	while (p != buffer) {
		*((volatile uint32_t*)PPMPORT) = '0' + *(--p);
	}
}

void ppm_print_header(bool colour, int width, int height)
{
	ppm_print_chr('P');
	ppm_print_chr(colour ? '6' : '5');
	ppm_print_chr('\n');
	ppm_print_dec(width);
	ppm_print_chr(' ');
	ppm_print_dec(height);
	ppm_print_str("\n255\n");
}

