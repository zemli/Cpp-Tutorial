################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Pointers\ and\ Arrays.cpp 

OBJS += \
./src/Pointers\ and\ Arrays.o 

CPP_DEPS += \
./src/Pointers\ and\ Arrays.d 


# Each subdirectory must supply rules for building sources it contributes
src/Pointers\ and\ Arrays.o: ../src/Pointers\ and\ Arrays.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Pointers and Arrays.d" -MT"src/Pointers\ and\ Arrays.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


