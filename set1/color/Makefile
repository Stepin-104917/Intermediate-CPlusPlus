all.out: colour.cpp colour_test.cpp
	g++ colour.cpp colour_test.cpp -lgtest_main -lgtest -lpthread -o all.out

test:all.out
	./all.out
	
clean:
	rm  *.out
