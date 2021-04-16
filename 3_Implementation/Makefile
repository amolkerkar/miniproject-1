PROJ_NAME = poker_game
TEST_PROJ_NAME = Test_$(PROJ_NAME)

SRC =src/cards.c

COV_SRC = my-test-main.c

TEST_SRC = Test/my-test-main.c \
Unity/unity.c 
INC_H = inc
INC_T = Unity

ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif
.PHONY: run clean my-test-main doc all

all:
	gcc -I $(INC_H) $(SRC) my-test-main.c -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	
run:
	$(call FixPath,$(PROJ_NAME).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJ_NAME).$(EXEC))
	./$(call FixPath,$(TEST_PROJ_NAME).$(EXEC))

coverage:
	cp Test/my-test-main.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) Unity/unity.c my-test-main.c $(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.gcn
	$(RM) my-test-main.c


cppcheck:
	cppcheck --enable=all $(SRC) my-test-main.c
debug:
	gcc -I $(INC_H) $(SRC) my-test-main.c -g -o $(PROJ_NAME).$(EXEC)
	gdb $(PROJ_NAME).$(EXEC)

valgrind:
	valgrind ./$(TEST_PROJ_NAME).$(EXEC)


clean:
	rm test poker cards.o my-test-main.o *~
	$(RM) *.gcn
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov

	
