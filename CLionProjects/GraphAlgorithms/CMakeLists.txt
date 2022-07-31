cmake_minimum_required(VERSION 3.21)
project(GraphAlgorithms)

set(CMAKE_CXX_STANDARD 14)

add_executable(GraphAlgorithms main.cpp graphIOchar.cpp graphIOchar.h treasure_graph.cpp treasure_graph.h dfs.cpp dfs.h utils.h forest.cpp forest.h two_colors.cpp two_colors.h bfs.cpp bfs.h painting_a_board.cpp painting_a_board.h treasures_map.cpp treasures_map.h zamburguesas.cpp zamburguesas.h dijkstra.cpp dijkstra.h weightedGraphIOint.cpp weightedGraphIOint.h)
