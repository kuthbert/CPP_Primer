#=====================================================================================
# Project			: Study_Class
# Description		: Build a C++ project "Study_Class"
# ------------------------------------------------------------------------------------
# File name			: Makefile
# Description		: The build script to manage & build the project "Study_Class".
# Creator			: XU ZAN
# Creation date		: Thur.		Nov. 27, 2014
# Copyright(C)		2014	All rights reserved.
# 
#=====================================================================================




OBJS = Study_Class_Main.o Test.o

Study_Class : $(OBJS)
	g++ $(OBJS) -o Study_Class

Study_Class_Main.o : Study_Class_Main.cpp Test.h
	g++ -c Study_Class_Main.cpp

Test.o : Test.cpp Test.h Classes/Test_Classes.h
	g++ -c Test.cpp

	cd Classes

Test_Classes.o : Test_Classes.cpp Test_Classes.h Class_Objects.h
	g++ -c Test_Classes.cpp

Class_Objects.o : Class_Objects.cpp Class_Objects.h Sales_item.h Screen.h
	g++ -c Class_Objects.cpp

Sales_item.o : Sales_item.cpp Sales_item.h
	g++ -c Sales_item.cpp

Screen.o : Screen.cpp Screen.h
	g++ -c Screen.cpp

Record.o : Record.cpp Record.h
	g++ -c Record.cpp




