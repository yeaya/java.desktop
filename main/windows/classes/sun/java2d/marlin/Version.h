#ifndef _sun_java2d_marlin_Version_h_
#define _sun_java2d_marlin_Version_h_
//$ class sun.java2d.marlin.Version
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("VERSION")
#undef VERSION

namespace sun {
	namespace java2d {
		namespace marlin {

class Version : public ::java::lang::Object {
	$class(Version, 0, ::java::lang::Object)
public:
	Version();
	void init$();
	static $String* getVersion();
	static $String* VERSION;
};

		} // marlin
	} // java2d
} // sun

#pragma pop_macro("VERSION")

#endif // _sun_java2d_marlin_Version_h_