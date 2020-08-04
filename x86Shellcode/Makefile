all:clean dirs Exploit1 Exploit3 printer

Harness:
	tcc -g src/shellcode_harness.c -o bin/shellcode_harness

Exploit1: 	
	nasm -f elf32 src/Exploit01.asm -o obj/exploit01.o
	ld -m elf_i386 obj/exploit01.o -o bin/exploit1
	objdump -D bin/exploit1 > text/exploit1
Exploit3:
	nasm -f elf32 src/Exploit03.asm -o obj/exploit03.o
	ld -m elf_i386 obj/exploit03.o -o bin/exploit3
	objdump -D bin/exploit3 > text/exploit3

printer:
	gcc -c src/hexprint.c -m32 -o obj/hexprint.o
	gcc -o bin/shellcode1  -m32 obj/hexprint.o obj/exploit01.o
	gcc -o bin/shellcode3  -m32 obj/hexprint.o obj/exploit03.o

dirs:
	mkdir bin
	mkdir text

clean:
	rm -rf bin
	rm -rf text
