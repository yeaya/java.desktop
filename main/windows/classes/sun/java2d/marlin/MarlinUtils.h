#ifndef _sun_java2d_marlin_MarlinUtils_h_
#define _sun_java2d_marlin_MarlinUtils_h_
//$ class sun.java2d.marlin.MarlinUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LOG")
#undef LOG

namespace java {
	namespace lang {
		class ThreadGroup;
		class Throwable;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace sun {
	namespace java2d {
		namespace marlin {

class MarlinUtils : public ::java::lang::Object {
	$class(MarlinUtils, 0, ::java::lang::Object)
public:
	MarlinUtils();
	void init$();
	static ::java::lang::ThreadGroup* getRootThreadGroup();
	static void logException($String* msg, $Throwable* th);
	static void logInfo($String* msg);
	static ::sun::util::logging::PlatformLogger* LOG;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("LOG")

#endif // _sun_java2d_marlin_MarlinUtils_h_