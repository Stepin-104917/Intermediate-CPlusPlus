all.out: gpoint.cpp test_gpoint.cpp
	g++ gpoint.cpp test_gpoint.cpp -lgtest_main -lgtest -lpthread -o all.out

test:all.out
	./all.out
	
clean :
	rm *.out
