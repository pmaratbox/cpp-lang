# 0304 — Connected Components

Count the connected components of the undirected graph with edges (0,1),(1,2),(3,4) over nodes 0..4, printing `2`. Union-find with `std::iota` for the initial parents counts components as the number of self-rooted nodes.

## Run

    make && ./connectedcomponents
