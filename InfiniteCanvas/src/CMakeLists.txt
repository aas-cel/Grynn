add_executable(InfiniteCanvas
    main.cpp
    core/Application.cpp
    ui/MainWindow.cpp
)

target_include_directories(InfiniteCanvas PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/core ${CMAKE_CURRENT_SOURCE_DIR}/ui)

target_link_libraries(InfiniteCanvas PRIVATE StyleCPP)
