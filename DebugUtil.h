#ifdef ENABLE_DEBUG
  #define __FILENAME__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)
  #define DEBUG_PRINT(str) \
    Serial.print(str);
  #define DEBUG_PRINTLN(str) \
    Serial.println(str);
  #define DEBUG_PRINT_VERBOSE(str) \
    Serial.println(str); \
    Serial.print(" ^^ ["); \
    Serial.print(millis()); \
    Serial.print("ms] in '"); \
    Serial.print(__PRETTY_FUNCTION__); \
    Serial.print("' from '"); \
    Serial.print(__FILENAME__); \
    Serial.print("' at line "); \
    Serial.print(__LINE__); \
    Serial.println();
#else
  #define DEBUG_PRINT(str)
  #define DEBUG_PRINTLN(str)
  #define DEBUG_PRINT_VERBOSE(str)
#endif
