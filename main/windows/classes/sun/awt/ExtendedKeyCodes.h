#ifndef _sun_awt_ExtendedKeyCodes_h_
#define _sun_awt_ExtendedKeyCodes_h_
//$ class sun.awt.ExtendedKeyCodes
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class HashMap;
		class HashSet;
	}
}

namespace sun {
	namespace awt {

class $export ExtendedKeyCodes : public ::java::lang::Object {
	$class(ExtendedKeyCodes, 0, ::java::lang::Object)
public:
	ExtendedKeyCodes();
	void init$();
	static int32_t getExtendedKeyCodeForChar(int32_t c);
	static ::java::util::HashMap* regularKeyCodesMap;
	static ::java::util::HashSet* extendedKeyCodesSet;
};

	} // awt
} // sun

#endif // _sun_awt_ExtendedKeyCodes_h_