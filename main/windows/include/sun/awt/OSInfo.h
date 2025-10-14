#ifndef _sun_awt_OSInfo_h_
#define _sun_awt_OSInfo_h_
//$ class sun.awt.OSInfo
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("OS_NAME")
#undef OS_NAME
#pragma push_macro("OS_VERSION")
#undef OS_VERSION
#pragma push_macro("WINDOWS_7")
#undef WINDOWS_7
#pragma push_macro("WINDOWS_95")
#undef WINDOWS_95
#pragma push_macro("WINDOWS_98")
#undef WINDOWS_98
#pragma push_macro("WINDOWS_ME")
#undef WINDOWS_ME
#pragma push_macro("WINDOWS_UNKNOWN")
#undef WINDOWS_UNKNOWN
#pragma push_macro("WINDOWS_VISTA")
#undef WINDOWS_VISTA
#pragma push_macro("WINDOWS_XP")
#undef WINDOWS_XP

namespace java {
	namespace security {
		class PrivilegedAction;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}
namespace sun {
	namespace awt {
		class OSInfo$OSType;
		class OSInfo$WindowsVersion;
	}
}

namespace sun {
	namespace awt {

class $import OSInfo : public ::java::lang::Object {
	$class(OSInfo, 0, ::java::lang::Object)
public:
	OSInfo();
	void init$();
	static ::sun::awt::OSInfo$OSType* getOSType();
	static ::java::security::PrivilegedAction* getOSTypeAction();
	static ::sun::awt::OSInfo$WindowsVersion* getWindowsVersion();
	static ::sun::awt::OSInfo$WindowsVersion* WINDOWS_UNKNOWN;
	static ::sun::awt::OSInfo$WindowsVersion* WINDOWS_95;
	static ::sun::awt::OSInfo$WindowsVersion* WINDOWS_98;
	static ::sun::awt::OSInfo$WindowsVersion* WINDOWS_ME;
	static ::sun::awt::OSInfo$WindowsVersion* WINDOWS_2000;
	static ::sun::awt::OSInfo$WindowsVersion* WINDOWS_XP;
	static ::sun::awt::OSInfo$WindowsVersion* WINDOWS_2003;
	static ::sun::awt::OSInfo$WindowsVersion* WINDOWS_VISTA;
	static ::sun::awt::OSInfo$WindowsVersion* WINDOWS_7;
	static $String* OS_NAME;
	static $String* OS_VERSION;
	static ::java::util::Map* windowsVersionMap;
	static ::java::security::PrivilegedAction* osTypeAction;
};

	} // awt
} // sun

#pragma pop_macro("OS_NAME")
#pragma pop_macro("OS_VERSION")
#pragma pop_macro("WINDOWS_7")
#pragma pop_macro("WINDOWS_95")
#pragma pop_macro("WINDOWS_98")
#pragma pop_macro("WINDOWS_ME")
#pragma pop_macro("WINDOWS_UNKNOWN")
#pragma pop_macro("WINDOWS_VISTA")
#pragma pop_macro("WINDOWS_XP")

#endif // _sun_awt_OSInfo_h_