################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/postfix\ and\ prefix.cpp 

OBJS += \
./src/postfix\ and\ prefix.o 

CPP_DEPS += \
./src/postfix\ and\ prefix.d 


# Each subdirectory must supply rules for building sources it contributes
src/postfix\ and\ prefix.o: ../src/postfix\ and\ prefix.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/postfix and prefix.d" -MT"src/postfix\ and\ prefix.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


