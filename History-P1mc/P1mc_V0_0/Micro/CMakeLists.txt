target_sources(${ECU_TARGET_NAME} PUBLIC
    ${CMAKE_CURRENT_LIST_DIR}/Interrupt_VectorTable.c
    ${CMAKE_CURRENT_LIST_DIR}/dr7f701373_startup.850
    ${CMAKE_CURRENT_LIST_DIR}/irq.c
    ${CMAKE_CURRENT_LIST_DIR}/lowinit.c
    ${CMAKE_CURRENT_LIST_DIR}/main.c
)

target_include_directories(${ECU_TARGET_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR})
