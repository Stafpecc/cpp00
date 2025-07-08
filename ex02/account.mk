override SRCDIR := srcs

override NAME := account

override ACCOUNTSRC := \
	Account \

override SRCS := $(addprefix $(SRCDIR)/, $(addsuffix .cpp, $(ACCOUNTSRC)))
