PROJECT_NAME=work
BUILD=Build




TEST_SRC=src/prac.c\
test/test_prac.c\
unity/unity.c

# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Inlcudes
#INCLUDE_LIBS = 
#INCLUDE_LIBS = -lcunit


ifdef OS
	FixPath = $(subst /,\,$1)
	EXEC = exe
else
	ifeq ($(shell uname), Linux)
		FixPath = $1
		EXEC = out
	endif	
endif

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).$(EXEC)

all:unity/unity.c src/prac.c test/test_prac.c $(BUILD)
	gcc unity/unity.c src/prac.c test/test_prac.c $(INC) -o $(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) 
	./$(TEST_OUTPUT)	

$(BUILD):
	mkdir $(BUILD)

run:all
	$(call FixPath,$(BUILD)/$(PROJECT_NAME).$(EXEC))