#ifndef MAIN_H
#define MAIN_H

#include <elf.h>

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void display_error(const char *message);
void read_elf_header(int fd, Elf64_Ehdr *elf_header);
void display_elf_info(Elf64_Ehdr *elf_header);

#endif /* MAIN_H */
