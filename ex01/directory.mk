override SRCDIR := srcs

override NAME := directory

override PHONEBOOKSRC := \
	PhoneBook \
	Commands  \
	Contact   \
	main	  \

override SRCS := $(addprefix $(SRCDIR)/, $(addsuffix .cpp, $(PHONEBOOKSRC)))
