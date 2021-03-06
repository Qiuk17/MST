#include <iostream>
#include "KruskalMstSolver.h"
#include "GraphMst.h"

int main() {
	GraphMstBuilder builder;
	auto graph = builder.addEdge(1, 2, 3)
		.addEdge(2, 3, 4)
		.addEdge(3, 1, 5)
		.setMstSolver(new KruskalMstSolver())
		.build();

	for (auto e : graph->getMstEdges()) {
		std::cout << e.getFrom() << ' ' << e.getTo() << ' ' << e.getDistance() << std::endl;
	}
	return 0;
}
