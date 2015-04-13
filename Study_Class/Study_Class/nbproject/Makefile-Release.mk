#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-MacOSX
CND_DLIB_EXT=dylib
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Classes/Class_Objects.o \
	${OBJECTDIR}/Classes/ConstRef.o \
	${OBJECTDIR}/Classes/Record.o \
	${OBJECTDIR}/Classes/Sales_item.o \
	${OBJECTDIR}/Classes/Screen.o \
	${OBJECTDIR}/Classes/Test_Classes.o \
	${OBJECTDIR}/Study_Class_Main.o \
	${OBJECTDIR}/Test.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/study_class

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/study_class: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/study_class ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Classes/Class_Objects.o: Classes/Class_Objects.cpp 
	${MKDIR} -p ${OBJECTDIR}/Classes
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Classes/Class_Objects.o Classes/Class_Objects.cpp

${OBJECTDIR}/Classes/ConstRef.o: Classes/ConstRef.cpp 
	${MKDIR} -p ${OBJECTDIR}/Classes
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Classes/ConstRef.o Classes/ConstRef.cpp

${OBJECTDIR}/Classes/Record.o: Classes/Record.cpp 
	${MKDIR} -p ${OBJECTDIR}/Classes
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Classes/Record.o Classes/Record.cpp

${OBJECTDIR}/Classes/Sales_item.o: Classes/Sales_item.cpp 
	${MKDIR} -p ${OBJECTDIR}/Classes
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Classes/Sales_item.o Classes/Sales_item.cpp

${OBJECTDIR}/Classes/Screen.o: Classes/Screen.cpp 
	${MKDIR} -p ${OBJECTDIR}/Classes
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Classes/Screen.o Classes/Screen.cpp

${OBJECTDIR}/Classes/Test_Classes.o: Classes/Test_Classes.cpp 
	${MKDIR} -p ${OBJECTDIR}/Classes
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Classes/Test_Classes.o Classes/Test_Classes.cpp

${OBJECTDIR}/Study_Class_Main.o: Study_Class_Main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Study_Class_Main.o Study_Class_Main.cpp

${OBJECTDIR}/Test.o: Test.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Test.o Test.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/study_class

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
