PROJECT_NAME=work
BUILD_DIR=Build





# All include folders with header files
INC	= -Iinc\
-Iunity\

#Library Inlcudes
#INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit


ifdef OS
	FixPath = $(subst /,\,$1)
	EXEC = exe
else
	ifeq ($(shell uname), Linux)
		FixPath = $1
		EXEC = out
	endif	
endif

all:unity/unity.c src/prac.c test/test_prac.c $(BUILD_DIR)
	gcc unity/unity.c src/prac.c test/test_prac.c $(INC) -o $(call FixPath,$(BUILD_DIR)/$(PROJECT_NAME).$(EXEC))

$(BUILD_DIR):
	mkdir $(BUILD_DIR)

run:all
	$(call FixPath,$(BUILD_DIR)/$(PROJECT_NAME).$(EXEC))