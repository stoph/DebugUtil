#ifdef ENABLE_DEBUG
#define DEBUG_PRINT(str) \
  Serial.print(str);
#define DEBUG_PRINTLN(str) \
  Serial.println(str);
#define DEBUG_PRINT_VERBOSE(str) \
  Serial.println(str); \
  Serial.print(" ^^ ["); \
  Serial.print(millis()); \
  Serial.print("ms] "); \
  Serial.print(__PRETTY_FUNCTION__); \
  Serial.print("' @ '"); \
  Serial.print(__FILE__); \
  Serial.print(":"); \
  Serial.print(__LINE__); \
  Serial.println("' ");
#else
#define DEBUG_PRINT(str)
#define DEBUG_PRINTLN(str)
#define DEBUG_PRINT_VERBOSE(str)
#endif
