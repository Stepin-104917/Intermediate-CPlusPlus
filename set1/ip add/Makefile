all.out: main.cpp ip_address_test.cpp
	g++ main.cpp ip_address_test.cpp -lgtest_main -lgtest -lpthread -o all.out

test:all.out
	./all.out
	
clean:
	rm  *.out
