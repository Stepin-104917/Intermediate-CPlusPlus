all.out: time.cpp test_time.cpp
	g++ time.cpp test_time.cpp -lgtest_main -lgtest -lpthread -o all.out

test:all.out
	./all.out
	
clean:
	rm  *.out
