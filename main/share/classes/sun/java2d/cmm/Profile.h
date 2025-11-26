#ifndef _sun_java2d_cmm_Profile_h_
#define _sun_java2d_cmm_Profile_h_
//$ class sun.java2d.cmm.Profile
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace java2d {
		namespace cmm {

class Profile : public ::java::lang::Object {
	$class(Profile, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Profile();
	void init$(int64_t ptr);
	int64_t getNativePtr();
	int64_t nativePtr = 0;
};

		} // cmm
	} // java2d
} // sun

#endif // _sun_java2d_cmm_Profile_h_