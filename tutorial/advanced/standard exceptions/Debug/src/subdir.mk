################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/standard\ exceptions.cpp 

OBJS += \
./src/standard\ exceptions.o 

CPP_DEPS += \
./src/standard\ exceptions.d 


# Each subdirectory must supply rules for building sources it contributes
src/standard\ exceptions.o: ../src/standard\ exceptions.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/standard exceptions.d" -MT"src/standard\ exceptions.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


