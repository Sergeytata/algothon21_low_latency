
bin/main: src/main.cpp
	@mkdir -p bin
	@g++ $^ -o bin/main

run: bin/main
	@bin/main

make clean:
	rm -rf bin