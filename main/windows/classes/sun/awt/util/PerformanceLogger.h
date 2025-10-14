#ifndef _sun_awt_util_PerformanceLogger_h_
#define _sun_awt_util_PerformanceLogger_h_
//$ class sun.awt.util.PerformanceLogger
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LAST_RESERVED")
#undef LAST_RESERVED
#pragma push_macro("START_INDEX")
#undef START_INDEX

namespace java {
	namespace io {
		class Writer;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace sun {
	namespace awt {
		namespace util {

class PerformanceLogger : public ::java::lang::Object {
	$class(PerformanceLogger, 0, ::java::lang::Object)
public:
	PerformanceLogger();
	void init$();
	static int64_t getCurrentTime();
	static $String* getMessageAtIndex(int32_t index);
	static int64_t getStartTime();
	static int64_t getTimeAtIndex(int32_t index);
	static bool loggingEnabled();
	static void outputLog(::java::io::Writer* writer);
	static void outputLog();
	static void setBaseTime(int64_t time);
	static void setStartTime($String* message);
	static void setStartTime($String* message, int64_t time);
	static int32_t setTime($String* message);
	static int32_t setTime($String* message, int64_t time);
	static const int32_t START_INDEX = 0;
	static const int32_t LAST_RESERVED = START_INDEX;
	static bool perfLoggingOn;
	static bool useNanoTime;
	static ::java::util::Vector* times;
	static $String* logFileName;
	static ::java::io::Writer* logWriter;
	static int64_t baseTime;
};

		} // util
	} // awt
} // sun

#pragma pop_macro("LAST_RESERVED")
#pragma pop_macro("START_INDEX")

#endif // _sun_awt_util_PerformanceLogger_h_