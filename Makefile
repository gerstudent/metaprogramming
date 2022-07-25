metaprogramming: euclidGcd.cpp
	mkdir -p ~/metaprogramming
	g++ -o ~/metaprogramming/output -std=c++17 euclidGcd.cpp
clean:
	rm *.o
