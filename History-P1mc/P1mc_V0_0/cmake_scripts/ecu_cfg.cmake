# ECU build for target can be configured using this file

# Name of the executable to be built
set(ECU_NAME "rh850")

# Options to enable multicore or not
# Supported values (case sensitive)
# true
# false
if(NOT ECU_ENABLE_MULTICORE)
    set(ECU_ENABLE_MULTICORE false)
endif()

# Selection of build config
# Supported values
# DEBUG
# NODEBUG
if (NOT ECU_BUILD_TYPE)
    set(ECU_BUILD_TYPE DEBUG CACHE STRING "ECU Build type" FORCE)
endif()

# Selection of uC family the ECU is based on
# Supported values
# rh850u2a
set(ECU_USE_MCU_FAMILY rh850)

# Selection of uC variant the ECU is based on
# Supported values
set(ECU_USE_MCU_VAR rh850_p1mc)


# Configuration of ECU multicore enabled core number
# Supported values
# 1-N
if(ECU_ENABLE_MULTICORE)
    if(${ECU_USE_MCU_VAR} STREQUAL rh850_p1mc)
        set(ECU_ENABLED_CORE_NUM 1)
    else()
        message(FATAL_ERROR "multicore not support yet!")
        set(ECU_ENABLED_CORE_NUM 2)
    endif()
else()
    set(ECU_ENABLED_CORE_NUM 1)
endif()

# just for safety check
if(ECU_ENABLED_CORE_NUM LESS 1)
    set(ECU_ENABLED_CORE_NUM 1)
    message(FATAL_ERROR "ECU_ENABLED_CORE_NUM should be no less than 1")
message(DEBUG "ECU_ENABLED_CORE_NUM is set to ${ECU_ENABLED_CORE_NUM}")
endif()

# Selection of compiler to be used
# Supported values
# ghs
if(NOT ECU_USE_COMPILER)
    set(ECU_USE_COMPILER ghs)
endif()



# Set ECU SW version
if(NOT ECU_SW_VERSION)
    set(ECU_SW_VERSION v00_00_00)
endif()
message(DEBUG "sw version is set to ${ECU_SW_VERSION}")

# set ECU RELEASE CANDIDATE
if(NOT ECU_RELEASE_CANDIDATE)
    set(ECU_RELEASE_CANDIDATE RC00)
endif()
message(NOTICE "ECU Release Candidate is set to ${ECU_RELEASE_CANDIDATE}")

# Set app version number
if(NOT APP_VERSION_NUMBER)
    set(APP_VERSION_NUMBER 0)
endif()
message(NOTICE "app version number is set to ${APP_VERSION_NUMBER}")
