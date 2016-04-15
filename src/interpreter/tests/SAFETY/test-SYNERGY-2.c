// SAFE
// Example on which SLAM/BLAST/TRACER works well

void main(){
  int x,y;
  int NON_DET;
  int lock_state;

  lock_state = 0;
  do {
    lock_state = 1;
    x =y;
    if (NON_DET){
      lock_state = 0;
      y=y+1;
    }

  } while (x != y);
    
  _TRACER_abort(lock_state != 1);
}
