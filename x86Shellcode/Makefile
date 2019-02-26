all:

Exploits1:	
	nasm -f elf src/Exploits1_01.asm -o obj/exploit.o

printer:
	gcc -c src/hexprint.c -o obj/hexprint.o 
	gcc -o bin/shellcode obj/hexprint.o obj/exploit.o

clean:
	rm -rf bin/*
