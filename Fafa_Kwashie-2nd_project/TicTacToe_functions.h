void printBoard()
{
    Serial.print("_");
  Serial.print(board[0]);
  Serial.print("_|_");
  Serial.print(board[1]);
  Serial.print("_|_");
  Serial.print(board[2]);
  Serial.println("_");
  // end line
  Serial.print("_");
  Serial.print(board[3]);
  Serial.print("_|_");
  Serial.print(board[4]);
  Serial.print("_|_");
  Serial.print(board[5]);
  Serial.println("_");
  //next row 
  Serial.print(" ");
  Serial.print(board[6]);
  Serial.print("_|_");
  Serial.print(board[7]);
  Serial.print("_|_");
  Serial.print(board[8]);
  Serial.println(" ");
  delay(50);
}

void getInput()
{ 
  if (player == 1)
 {
  Serial.println("Player 1,select square");
 }
 if (player == 1)
 {
    Serial.println("Player 2,select square");
 }
  while (!Serial.available()) 
  {
    delay(50);
  {
  input = Serial.parseInt();
  }
  
