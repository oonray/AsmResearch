all:clean dirs printer Exploit1 Exploit2 Exploit3 Harness

Harness:
	tcc -g src/shellcode_harness.c -o bin/shellcode_harness

Exploit1: 	
	nasm -f elf src/Exploit01.asm -o obj/exploit.o
	ld obj/exploit.o -o bin/exploit
	objdump -D bin/exploit > text/exploit
Exploit2: 	
	nasm -f elf src/Exploit02.asm -o obj/exploit2.o
	ld obj/exploit2.o -o bin/exploit2
	objdump -D bin/exploit2 > text/exploit2
Exploit3:
	nasm -f elf src/Exploit03.asm -o obj/exploit03.o
	ld obj/exploit03.o -o bin/exploit3
	objdump -D bin/exploit3 > text/exploit3

printer:
	gcc -c src/hexprint.c -o obj/hexprint.o 
	gcc -o bin/shellcode1 obj/hexprint.o obj/exploit.o
	gcc -o bin/shellcode2 obj/hexprint.o obj/exploit2.o

dirs:
	mkdir bin
	mkdir text

clean:
	rm -rf bin
	rm -rf text
