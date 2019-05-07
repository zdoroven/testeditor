include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

QMAKE_CXXFLAGS += -Wall -Wextra -Werror
QMAKE_CFLAGS += -Wall -Wextra -Werror

# gcov
QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
QMAKE_CFLAGS += -fprofile-arcs -ftest-coverage
LIBS += -lgcov


HEADERS += ../app/common.h \
	../app/text/_text.h \
	rh.h \
	mcf.h \
	showfirstwords.h \
	main.h

SOURCES +=     ../app/load.c \
	../app/showfirstwords.c \
	../app/rh.c \
	../app/mwcrsr.c \
	../app/mcf.c \
	../app/text/append_line.c \
	../app/text/delete_line.c \
	../app/text/change_cursor_position.c \
	../app/text/process_forward.c \
	../app/text/create_text.c \
	../app/text/remove_all.c \
	../app/show.c \
    main.cpp

INCLUDEPATH += ../app

DISTFILES += \
	expected/expected1.txt \
	expected/expected2.txt \
	expected/expected3.txt \
	expected/expected4.txt \
	expected/expected5.txt \
	expected/expected6.txt \
	expected/expected7.txt \
	expected/expected8.txt \
	expected/expected9.txt \
	input/input1.txt \
	input/input2.txt \
	input/input3.txt \
	input/input4.txt \
	input/input5.txt \
	input/input6.txt \
	input/input7.txt \
	input/input8.txt \
	input/input9.txt \
    output/output1.txt \
	output/output2.txt \
    output/output3.txt \
    output/output4.txt \
    output/output5.txt \
	output/output6.txt \
	output/output7.txt \
	output/output8.txt \
    output/output9.txt
