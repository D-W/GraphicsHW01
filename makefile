make:
	gcc -o picmaker picmaker.c

run: picmaker
	./picmaker

clean:
	rm picmaker
	rm *~
