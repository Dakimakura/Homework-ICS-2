 #include "Object.h"

void TestObjects(){
  Object *d = new Object(1);
  Object *a = new Object(2);
  Object *b = new Object(3);
  delete b;
  delete a;
  Object *c = new Object(4);
  delete c;
  delete d;
}
