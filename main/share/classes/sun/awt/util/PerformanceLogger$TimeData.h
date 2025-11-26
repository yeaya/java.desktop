#ifndef _sun_awt_util_PerformanceLogger$TimeData_h_
#define _sun_awt_util_PerformanceLogger$TimeData_h_
//$ class sun.awt.util.PerformanceLogger$TimeData
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace awt {
		namespace util {

class PerformanceLogger$TimeData : public ::java::lang::Object {
	$class(PerformanceLogger$TimeData, $NO_CLASS_INIT, ::java::lang::Object)
public:
	PerformanceLogger$TimeData();
	void init$($String* message, int64_t time);
	virtual $String* getMessage();
	virtual int64_t getTime();
	$String* message = nullptr;
	int64_t time = 0;
};

		} // util
	} // awt
} // sun

#endif // _sun_awt_util_PerformanceLogger$TimeData_h_