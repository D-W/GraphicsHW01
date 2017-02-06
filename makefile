make:
	gcc -o picmaker picmaker.c

run: picmaker
	./picmaker

clean:
	rm picmaker
	rm picmaker.ppm
	rm picmaker.png
	rm *~
