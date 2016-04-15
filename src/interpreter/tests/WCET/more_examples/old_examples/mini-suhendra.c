
void main()
{
  int x, y, z;

  //<0>  
  if (x>3)
    // <1> 
    z = z + 1; // <3>
  else
    // <2>
    x = flag;  // <3>

  // <3>
  if (y > 4)
    //<4> 
    y = y + 1; //<6>
  else
    //<5>
    x = 1;  //<6>

}
