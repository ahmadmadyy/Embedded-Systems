################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../MCAL \
../HAL \
../MCAL/DIO \
../APP


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../APP/COUNTER_APP.c \
../HAL/KP_prg.c \
../main.c \
../MCAL/DIO/DIO_prg.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
APP/COUNTER_APP.o \
HAL/KP_prg.o \
main.o \
MCAL/DIO/DIO_prg.o

OBJS_AS_ARGS +=  \
APP/COUNTER_APP.o \
HAL/KP_prg.o \
main.o \
MCAL/DIO/DIO_prg.o

C_DEPS +=  \
APP/COUNTER_APP.d \
HAL/KP_prg.d \
main.d \
MCAL/DIO/DIO_prg.d

C_DEPS_AS_ARGS +=  \
APP/COUNTER_APP.d \
HAL/KP_prg.d \
main.d \
MCAL/DIO/DIO_prg.d

OUTPUT_FILE_PATH +=ATMega32_LIB.elf

OUTPUT_FILE_PATH_AS_ARGS +=ATMega32_LIB.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler
APP/COUNTER_APP.o: ../APP/COUNTER_APP.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.45
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.45\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATmega32  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATmega32__ -DDEBUG  -I".." -I"../MCAL" -I"../MCAL/DIO" -I"../HAL" -I"../APP"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

HAL/KP_prg.o: ../HAL/KP_prg.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.45
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.45\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATmega32  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATmega32__ -DDEBUG  -I".." -I"../MCAL" -I"../MCAL/DIO" -I"../HAL" -I"../APP"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./main.o: .././main.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.45
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.45\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATmega32  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATmega32__ -DDEBUG  -I".." -I"../MCAL" -I"../MCAL/DIO" -I"../HAL" -I"../APP"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

MCAL/DIO/DIO_prg.o: ../MCAL/DIO/DIO_prg.c
	@echo Building file: $<
	@echo Invoking: XC8 C Compiler : 2.45
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.45\bin\xc8-cc.exe$(QUOTE)  -mcpu=ATmega32  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\xc8"  -c -x c -funsigned-char -funsigned-bitfields -mext=cci -D__ATmega32__ -DDEBUG  -I".." -I"../MCAL" -I"../MCAL/DIO" -I"../HAL" -I"../APP"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	




# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking:  XC8 C Linker : 2.45
	$(QUOTE)C:\Program Files\Microchip\xc8\v2.45\bin\xc8-cc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -mcpu=ATmega32  -mdfp="C:\Program Files (x86)\Atmel\Studio\7.0\Packs\atmel\ATmega_DFP\1.7.374\xc8"  -Wl,-Map="ATMega32_LIB.map" -funsigned-char -funsigned-bitfields -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums --memorysummary,memoryfile.xml  
	@echo Finished building target: $@
	"C:\Program Files\Microchip\xc8\v2.45\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "ATMega32_LIB.elf" "ATMega32_LIB.hex"
	"C:\Program Files\Microchip\xc8\v2.45\bin\avr-objcopy.exe" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0 --no-change-warnings -O ihex "ATMega32_LIB.elf" "ATMega32_LIB.eep" || exit 0
	"C:\Program Files\Microchip\xc8\v2.45\bin\avr-objdump.exe" -h -S "ATMega32_LIB.elf" > "ATMega32_LIB.lss"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "ATMega32_LIB.elf" "ATMega32_LIB.hex" "ATMega32_LIB.eep" "ATMega32_LIB.map" "ATMega32_LIB.usersignatures" "ATMega32_LIB.a"  "ATMega32_LIB.lss"
	