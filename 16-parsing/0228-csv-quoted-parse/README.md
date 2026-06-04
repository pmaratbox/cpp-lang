# 0228 — Parse Quoted CSV

Parse the CSV row `a,"b,c",d`, respecting the quoted comma, into three fields joined by pipes `a|b,c|d`. A single `in_quotes` bool toggled on each quote keeps the scan branch-light.

## Run

    make && ./csvquotedparse
