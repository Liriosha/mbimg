namespace squish {
int FloatToInt(float a, int limit) {
  // use ANSI round-to-zero behaviour to get round-to-nearest
  int i = (int)(a + 0.5f);

  // clamp to the limit
  if (i < 0)
    i = 0;
  else if (i > limit)
    i = limit;

  // done
  return i;
}
} // namespace squish
