obj=makef.o
edit: $(obj)
	cc -o edit $(obj)
makef.o:makef.cpp 
	cc -c makef.cpp
hellofunc.o:hellofunc.cpp hellofunc.h
	cc -c hellofunc.cpp
.PHONY:clean
clean:
	rm edit $(obj)
