################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Animal.cpp \
../src/Cat.cpp \
../src/Namespace.cpp 

OBJS += \
./src/Animal.o \
./src/Cat.o \
./src/Namespace.o 

CPP_DEPS += \
./src/Animal.d \
./src/Cat.d \
./src/Namespace.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

