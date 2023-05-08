#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <elf.h>
#include <string.h>

/**
 * p_error - prints the error message to the stderr
 * @msg: the error message string.
 */
void p_error(char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}
/**
 * os_abi - print the operating system and ABI to which the object is targeted
 * @elf_ident: the byte that identifies the os/abi.
 */
void os_abi(int elf_ident)
{
	printf("  OS/ABI:                            ");
	switch (elf_ident)
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - GNU");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64 UNIX");
			break;
		case ELFOSABI_ARM:
			printf("UNIX - ARM architecture");
			break;
		case ELFOSABI_STANDALONE:
			printf("UNIX - Stand-alone (embedded)");
			break;
		default:
			printf("<unknown: 53>");
			break;
	}
	printf("\n");
}
/**
 * type - prints the type.
 * @elf_type: the byte that identifies the type.
 */
void type(int elf_type)
{
	printf("  Type:                              ");
	switch (elf_type)
	{
		case ET_NONE:
			printf("NONE (No file type)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("Unknown");
			break;
	}
	printf("\n");
}
/**
 * elf_info - will printf all the wanted info about the elf file entered.
 * @elf_file: the elf file header.
 */
void elf_info(Elf64_Ehdr *elf_file)
{
	int i = 0;

	printf("  Magic:   ");
	while (i < EI_NIDENT)
	{
		printf("%02x ", elf_file->e_ident[i]);
		i++;
	}
	printf("\n");
	printf("  Class:                             ");
	printf("%s\n",
		elf_file->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
	printf("  Data:                              ");
	if (elf_file->e_ident[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else
		printf("2's complement, big endian\n");
	printf("  Version:                           ");
	printf("%d", elf_file->e_ident[EI_VERSION]);
	if (elf_file->e_ident[EI_VERSION] == EV_CURRENT)
		printf(" (current)\n");
	else
		printf(" (invalid)\n");
	os_abi(elf_file->e_ident[EI_OSABI]);
	printf("  ABI Version:                       ");
	printf("%d\n", elf_file->e_ident[EI_ABIVERSION]);
	type(elf_file->e_type);
	printf("  Entry point address:               ");
	printf("%#lx\n", (unsigned long)elf_file->e_entry);
}
/**
 * main - the main function.
 * @ac: the number of args.
 * @av: the args list.
 * Return: 0 if everything works as expected.
 */
int main(int ac, char *av[])
{
	int fd, check;
	Elf64_Ehdr elf_file;
	ssize_t bytes_number;

	if (ac != 2)
		p_error("elf_header elf_filename");
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		p_error("can't open the file");
	bytes_number = read(fd, &elf_file, sizeof(Elf64_Ehdr));
	if (bytes_number < 0)
		p_error("can't read the ELF header");
	if (bytes_number < (long int)sizeof(Elf64_Ehdr))
		p_error("Unknown ELF header");
	check = memcmp(elf_file.e_ident, ELFMAG, (unsigned long)SELFMAG);
	if (check != 0)
		p_error("the file is not an ELF file");
	printf("ELF Header:\n");
	elf_info(&elf_file);
	close(fd);
	return (0);
}
