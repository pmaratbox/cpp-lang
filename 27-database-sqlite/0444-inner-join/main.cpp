#include <sqlite3.h>
#include <iostream>
#include <string>
int main(){
  sqlite3 *db; sqlite3_open(":memory:", &db);
  sqlite3_exec(db,"create table users(id integer, name text)",0,0,0);
  sqlite3_exec(db,"create table orders(user_id integer, item text)",0,0,0);

  struct U{int id; const char* name;} us[]={{1,"alice"},{2,"bob"}};
  sqlite3_stmt *iu; sqlite3_prepare_v2(db,"insert into users values(?,?)",-1,&iu,0);
  for(const auto &u:us){ sqlite3_bind_int(iu,1,u.id); sqlite3_bind_text(iu,2,u.name,-1,SQLITE_TRANSIENT);
    sqlite3_step(iu); sqlite3_reset(iu); }
  sqlite3_finalize(iu);

  struct O{int uid; const char* item;} os[]={{1,"book"},{2,"pen"},{1,"lamp"}};
  sqlite3_stmt *io; sqlite3_prepare_v2(db,"insert into orders values(?,?)",-1,&io,0);
  for(const auto &o:os){ sqlite3_bind_int(io,1,o.uid); sqlite3_bind_text(io,2,o.item,-1,SQLITE_TRANSIENT);
    sqlite3_step(io); sqlite3_reset(io); }
  sqlite3_finalize(io);

  sqlite3_stmt *q;
  sqlite3_prepare_v2(db,
    "select u.name,o.item from orders o join users u on u.id=o.user_id order by u.name,o.item",
    -1,&q,0);
  while(sqlite3_step(q)==SQLITE_ROW)
    std::cout << reinterpret_cast<const char*>(sqlite3_column_text(q,0)) << " "
              << reinterpret_cast<const char*>(sqlite3_column_text(q,1)) << "\n";
  sqlite3_finalize(q);
  sqlite3_close(db);
  return 0;
}
