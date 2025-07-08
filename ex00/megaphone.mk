override SRCDIR := srcs/

override NAME := megaphone

override MEGAPHONESRC := \
	megaphone \

override SRCS := $(addprefix $(SRCDIR)/, $(addsuffix .cpp, $(MEGAPHONESRC)))