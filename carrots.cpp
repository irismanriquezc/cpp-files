#include <iostream>
#include <queue>
#include <sstream>
using namespace std;

int next_to(char ca, int ra, char cb, int rb) {
  return abs(ca - cb) == abs(ra - rb);
}

int main() {
  int t; cin >> t;
  for (int i = 0; i < t; ++i) {
    char ca, cb;
    int ra, rb;
    cin >> ca >> ra >> cb >> rb;
    int dc = abs(ca - cb);
    int dr = abs(ra - rb);
    if (dc % 2 != dr % 2) {
      cout << "Impossible\n";
      continue;
    }
    if (ca == cb && ra == rb) {
	  cout << "0 " << ca << " " << ra << "\n";
	  continue;    
    }
    if (next_to(ca, ra, cb, rb)) {
      cout << "1 " << ca << " " << ra << " " << cb << " " << rb << "\n";
      continue;
    }
    bool found = false;
    for (char tc = 'A'; !found && tc <= 'H'; ++tc) for (int tr = 1; !found && tr <= 8; ++tr) {
      if (next_to(ca, ra, tc, tr) && next_to(cb, rb, tc, tr)) {
        cout << "2 " << ca << " " << ra << " " << tc << " " << tr << " " << cb << " " << rb << "\n";
        found = true;
        break;
	  }
    }
  }
  return 0;
}
