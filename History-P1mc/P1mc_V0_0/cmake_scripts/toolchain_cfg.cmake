# Validate ECU family
if(NOT ECU_USE_MCU_FAMILY STREQUAL "rh850" OR NOT ECU_USE_MCU_VAR STREQUAL "rh850_p1mc")
    message(WARNING "The configured ECU and compiler combination is not supported, ECU_USE_MCU_FAMILY: ${ECU_USE_MCU_FAMILY}, ECU_USE_MCU_VAR: ${ECU_USE_MCU_VAR}") 
    message(FATAL_ERROR "Reconfigure ECU and compiler settings")
endif()

# Set compiler properties
set(TOOLCHAIN_PATH "${CMAKE_CURRENT_LIST_DIR}/../../../tools/ghs-rh850/comp_202314")
set(ECU_COMP_NAME     "${TOOLCHAIN_PATH}/ccrh850")
set(ECU_ASM_NAME      "${TOOLCHAIN_PATH}/ccrh850")
# set(ECU_AR_NAME     "${TOOLCHAIN_PATH}/ax")

set(ECU_HEX_TOOL_NAME "${TOOLCHAIN_PATH}/gsrec")
set(ECU_COMP_LIB_PATH "${TOOLCHAIN_PATH}/lib/rh850_22_compat")

# Set compile flags
set(ECU_C_FLAGS "-cpu=rh850g3m -dual_debug -ignore_callt_state_in_interrupts -nofarcalls -no_callt -large_sda -Onone -prepare_dispose -reserve_r2 -shorten_loads -Wshadow -Wundef --brief_diagnostics --no_commons --no_wrap_diagnostics --prototype_errors -e _RESET  -D__GHS__ -D__RH850_P1MC__ --short_enum -c99 -bsp generic -sda=all -g -shorten_moves -passsource -list -additional_sda_reg=0 -rh850_abi=ghs2014")

if(ECU_BUILD_TYPE STREQUAL "DEBUG")
    message("#Set C flags for DEBUG build#")
    set(ECU_C_FLAGS "${ECU_C_FLAGS} -Onone")
elseif(ECU_BUILD_TYPE STREQUAL "NODEBUG")
    message("Set C flags for NODEBUG build")
    set(ECU_C_FLAGS "${ECU_C_FLAGS} -Onone")
else()
    message("No build type is set.")
endif()

# Set assembler flags
set(ECU_ASM_FLAGS ${ECU_C_FLAGS})

# Set archiver flags
set(ECU_AR_FLAGS "-archive -o <TARGET> <LINK_FLAGS> <OBJECTS>")

# Build linker script file name from config parameters
set(ECU_LINKER_SCRIPT "--preprocess_linker_directive_full -T ../dr7f701373.ld")

# Set compiler specific libraries
set(ECU_USE_COMP_LIBS "-lansi -I ./include/v800")

# Set linker flags
set(ECU_LINKER_FLAGS "-Man -Ml -Mu -Mx -keepmap -mapfile_type=2 -globalcheck=normal -strict_overlap_check -Qn -delete --ignore_debug_references -MD -no_map_eofn_symbols -lnk=-no_xda_modifications -elxr_diag_error=283 ${ECU_LINKER_SCRIPT} -map=${ECU_TARGET_NAME}.map -srec=${ECU_TARGET_NAME}.srec -L${ECU_COMP_LIB_PATH}")

# Set HEX conversion tool and flags
set(ECU_HEX_TOOL       ${ECU_HEX_TOOL_NAME})
set(ECU_HEX_FLAGS      -hex386;${CMAKE_CURRENT_BINARY_DIR}/${ECU_TARGET_NAME}.elf;-o ${ECU_TARGET_NAME}.hex)

# Set CMAKE compiler
set(CMAKE_C_COMPILER      ${ECU_COMP_NAME})
message("!!!CMAKE_C_COMPILER ${CMAKE_C_COMPILER}")
set(CMAKE_ASM_COMPILER    ${ECU_ASM_NAME})
message("!!!CMAKE_ASM_COMPILER ${CMAKE_ASM_COMPILER}")

set(CMAKE_AR              ${ECU_AR_NAME})
set(CMAKE_C_COMPILER_ID   "GHS")
set(CMAKE_ASM_COMPILER_ID "GHS")
# Disbale RANLIB from running when creating archives
# NOTE: This is a hack - There must be a better way of disabling RANLIB
set(CMAKE_RANLIB       echo)
# Set ECU Used Compiler Version
set(ECU_USED_COMPILER_VERSION " ")
