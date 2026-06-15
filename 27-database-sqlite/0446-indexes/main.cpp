#include <sqlite3.h>
#include <iostream>
int main(){
  sqlite3 *db; sqlite3_open(":memory:", &db);
  sqlite3_exec(db,"create table products(id integer, sku text, price integer)",0,0,0);
  struct { int id; const char *sku; int price; } rows[]={{1,"A",100},{2,"B",200},{3,"C",300}};
  sqlite3_stmt *ins; sqlite3_prepare_v2(db,"insert into products values(?,?,?)",-1,&ins,0);
  for(auto &r:rows){ sqlite3_bind_int(ins,1,r.id); sqlite3_bind_text(ins,2,r.sku,-1,SQLITE_TRANSIENT);
    sqlite3_bind_int(ins,3,r.price); sqlite3_step(ins); sqlite3_reset(ins); }
  sqlite3_finalize(ins);
  sqlite3_exec(db,"create index idx_sku on products(sku)",0,0,0);
  sqlite3_stmt *q; sqlite3_prepare_v2(db,"select price from products where sku=?",-1,&q,0);
  sqlite3_bind_text(q,1,"B",-1,SQLITE_TRANSIENT);
  while(sqlite3_step(q)==SQLITE_ROW)
    std::cout << sqlite3_column_int(q,0) << "\n";
  sqlite3_finalize(q);
  sqlite3_close(db);
  return 0;
}
