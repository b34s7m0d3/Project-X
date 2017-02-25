class Actor {
public :
   int x,y; // position on map
   int ch; // ascii code
   TCODColor col; // color
   const char *name; //the actor`s name
//   char name [MAX_NAME_LENGtH]; if you want to change the name later

   Actor(int x, int y, int ch, const char *name, const TCODColor &col);

   void update();
   bool moveOrAttack(int x, int y);
   void render() const;
};


