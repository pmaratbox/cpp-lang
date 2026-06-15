#include <sqlite3.h>
#include <iostream>
#include <string>
int main(){
  sqlite3 *db; sqlite3_open(":memory:", &db);
  sqlite3_exec(db,"create table sales(category text, amount integer)",0,0,0);
  struct Row { const char *category; int amount; };
  const Row rows[]={{"a",10},{"b",20},{"a",30},{"b",5},{"a",2}};
  sqlite3_stmt *ins; sqlite3_prepare_v2(db,"insert into sales values(?,?)",-1,&ins,0);
  for(const auto &r:rows){ sqlite3_bind_text(ins,1,r.category,-1,SQLITE_TRANSIENT);
    sqlite3_bind_int(ins,2,r.amount); sqlite3_step(ins); sqlite3_reset(ins); }
  sqlite3_finalize(ins);
  sqlite3_stmt *q; sqlite3_prepare_v2(db,
    "select category,sum(amount) from sales group by category order by category",-1,&q,0);
  while(sqlite3_step(q)==SQLITE_ROW)
    std::cout << reinterpret_cast<const char*>(sqlite3_column_text(q,0)) << " "
              << sqlite3_column_int(q,1) << "\n";
  sqlite3_finalize(q);
  sqlite3_close(db);
  return 0;
}
