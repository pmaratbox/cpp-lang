# 0423 — EventEmitter (Pub/Sub)

Build a multi-topic EventEmitter with on(topic, handler), emit(topic, payload), and off(topic, handler). A std::map of topic to a vector of std::function handlers wires producers to subscribers.

## Run

    make -s && ./eventemitterpubsub
