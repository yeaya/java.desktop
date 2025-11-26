#ifndef _sun_awt_OSInfo$OSType_h_
#define _sun_awt_OSInfo$OSType_h_
//$ class sun.awt.OSInfo$OSType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("AIX")
#undef AIX
#pragma push_macro("LINUX")
#undef LINUX
#pragma push_macro("MACOSX")
#undef MACOSX
#pragma push_macro("UNKNOWN")
#undef UNKNOWN
#pragma push_macro("WINDOWS")
#undef WINDOWS

namespace sun {
	namespace awt {

class $export OSInfo$OSType : public ::java::lang::Enum {
	$class(OSInfo$OSType, 0, ::java::lang::Enum)
public:
	OSInfo$OSType();
	static $Array<::sun::awt::OSInfo$OSType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	static ::sun::awt::OSInfo$OSType* valueOf($String* name);
	static $Array<::sun::awt::OSInfo$OSType>* values();
	static ::sun::awt::OSInfo$OSType* WINDOWS;
	static ::sun::awt::OSInfo$OSType* LINUX;
	static ::sun::awt::OSInfo$OSType* MACOSX;
	static ::sun::awt::OSInfo$OSType* AIX;
	static ::sun::awt::OSInfo$OSType* UNKNOWN;
	static $Array<::sun::awt::OSInfo$OSType>* $VALUES;
};

	} // awt
} // sun

#pragma pop_macro("AIX")
#pragma pop_macro("LINUX")
#pragma pop_macro("MACOSX")
#pragma pop_macro("UNKNOWN")
#pragma pop_macro("WINDOWS")

#endif // _sun_awt_OSInfo$OSType_h_