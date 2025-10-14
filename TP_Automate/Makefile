
all: prepare compile

prepare:
	mkdir -p build

clean:
	rm -rf build/

compile: prepare
	g++ *.hpp *.cpp -o build/exec
