obj=main.o Sale_data.o
main1: $(obj) 
	cc -o main1 $(obj) 
main.o:main.cpp 
	cc -c main.cpp
Sale_data.o:Sale_data.cpp
	cc -c Sale_data.cpp
.PHONY:clean 
clean:
	rm main1 $(obj)
