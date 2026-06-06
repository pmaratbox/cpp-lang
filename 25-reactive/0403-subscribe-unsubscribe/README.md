# 0403 — Subscribe and Unsubscribe

Return a Subscription from subscribe() and use it to unsubscribe so later values are not delivered. A shared_ptr<bool> "closed" flag lets the observer's unsubscribe() signal the synchronous producer to stop.

## Run

    make -s && ./subscribeunsubscribe
