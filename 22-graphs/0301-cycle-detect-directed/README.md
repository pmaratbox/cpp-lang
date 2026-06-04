# 0301 — Directed Cycle Detection

Detect a cycle in the digraph 0->1,1->2,2->0, printing `cycle`. A recursive generic lambda (`auto&& self`) runs the white/gray/black DFS coloring, flagging a back edge to a gray node.

## Run

    make && ./cycledetectdirected
