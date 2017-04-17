################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/basic\ exceptions.cpp 

OBJS += \
./src/basic\ exceptions.o 

CPP_DEPS += \
./src/basic\ exceptions.d 


# Each subdirectory must supply rules for building sources it contributes
src/basic\ exceptions.o: ../src/basic\ exceptions.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/basic exceptions.d" -MT"src/basic\ exceptions.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


