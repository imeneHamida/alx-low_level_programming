#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * display_error - Displays an error message to stderr and exits with status code 98.
 * @message: The error message.
 */
void display_error(const char *message) {
    dprintf(STDERR_FILENO, "%s\n", message);
    exit(98);
}

/**
 * read_elf_header - Reads the ELF header from the specified file descriptor.
 * @fd: The file descriptor of the ELF file.
 * @elf_header: Pointer to the ELF header structure.
 */
void read_elf_header(int fd, Elf64_Ehdr *elf_header) {
    if (read(fd, elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        display_error("Error reading ELF header");
    }
}

/**
 * display_elf_info - Displays information from the ELF header.
 * @elf_header: Pointer to the ELF header structure.
 */
void display_elf_info(Elf64_Ehdr *elf_header) {
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", elf_header->e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             %s\n", elf_header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", elf_header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            %s\n", elf_header->e_ident[EI_OSABI]);
    printf("  ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", elf_header->e_type == ET_EXEC ? "EXEC (Executable file)" : "UNKNOWN");
    printf("  Entry point address:               %lx\n", (unsigned long)elf_header->e_entry);
}

int main(int argc, char *argv[]) {
    int fd;
    Elf64_Ehdr elf_header;

    if (argc != 2) {
        display_error("Usage: elf_header elf_filename");
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        display_error("Error opening file");
    }

    read_elf_header(fd, &elf_header);
    display_elf_info(&elf_header);

    if (close(fd) == -1) {
        display_error("Error closing file descriptor");
    }

    return 0;
}

