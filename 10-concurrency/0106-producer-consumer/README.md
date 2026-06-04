# 0106 — Producer / Consumer

A producer sends 1..5 to a consumer that sums them, printing `15`. A condition-variable-backed channel hands values from the producer thread to the main consumer, which accumulates the running sum.

## Run

    make && ./consumer
