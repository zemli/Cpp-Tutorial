################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Constructor\ Initialization\ List.cpp \
../src/Person.cpp 

OBJS += \
./src/Constructor\ Initialization\ List.o \
./src/Person.o 

CPP_DEPS += \
./src/Constructor\ Initialization\ List.d \
./src/Person.d 


# Each subdirectory must supply rules for building sources it contributes
src/Constructor\ Initialization\ List.o: ../src/Constructor\ Initialization\ List.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Constructor Initialization List.d" -MT"src/Constructor\ Initialization\ List.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


