#define L LOW
#define H HIGH
#define DW(x, y) digitalWrite(x, y)
byte led[5] = {2, 3, 4};
int sens[3] = {0, 512, 682};

void setup()
{
  for (int i = 0; i < 5; i++)
  {
    pinMode(led[i], OUTPUT);
  }
}

void loop()
{
  switch (analogRead(A0))
  {
    case 0: DW(led[0], H); break;
    case 512: DW(led[1], H); break;
    case 682: DW(led[2], H); break;
    default:
      for (int i = 0; i < 5; i++)
      {
        DW(led[i], L);
      }
  }
}

