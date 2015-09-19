add_executable(note2pgsql note2pgsql.cpp)
target_link_libraries(note2pgsql ${Boost_LIBRARIES} ${Boost_PROGRAM_OPTIONS_LIBRARY})