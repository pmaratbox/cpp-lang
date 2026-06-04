# 0331 — Transducer Pipeline

Compose map(+1) with filter(even) and run it over [1,2,3,4], printing `2 4`. Each transducer wraps a reducing step function, so composing them yields a single-pass transformation independent of the output collection.

## Run

    make && ./transducerpipeline
