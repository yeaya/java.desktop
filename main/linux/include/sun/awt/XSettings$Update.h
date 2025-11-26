#ifndef _sun_awt_XSettings$Update_h_
#define _sun_awt_XSettings$Update_h_
//$ class sun.awt.XSettings$Update
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BIG_ENDIAN")
#undef BIG_ENDIAN
#pragma push_macro("LITTLE_ENDIAN")
#undef LITTLE_ENDIAN
#pragma push_macro("TYPE_COLOR")
#undef TYPE_COLOR
#pragma push_macro("TYPE_INTEGER")
#undef TYPE_INTEGER
#pragma push_macro("TYPE_STRING")
#undef TYPE_STRING

namespace java {
	namespace util {
		class HashMap;
		class Map;
	}
}
namespace sun {
	namespace awt {
		class XSettings;
	}
}

namespace sun {
	namespace awt {

class $import XSettings$Update : public ::java::lang::Object {
	$class(XSettings$Update, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XSettings$Update();
	void init$(::sun::awt::XSettings* this$0, $bytes* data);
	int32_t getCARD16();
	int64_t getCARD32();
	int32_t getCARD8();
	int32_t getINT32();
	$String* getString(int32_t len);
	void needBytes(int32_t n);
	virtual ::java::util::Map* update();
	void updateOne(int64_t currentSerial);
	::sun::awt::XSettings* this$0 = nullptr;
	static const int32_t LITTLE_ENDIAN = 0;
	static const int32_t BIG_ENDIAN = 1;
	static const int32_t TYPE_INTEGER = 0;
	static const int32_t TYPE_STRING = 1;
	static const int32_t TYPE_COLOR = 2;
	$bytes* data = nullptr;
	int32_t dlen = 0;
	int32_t idx = 0;
	bool isLittle = false;
	int64_t serial = 0;
	int32_t nsettings = 0;
	bool isValid = false;
	::java::util::HashMap* updatedSettings = nullptr;
};

	} // awt
} // sun

#pragma pop_macro("BIG_ENDIAN")
#pragma pop_macro("LITTLE_ENDIAN")
#pragma pop_macro("TYPE_COLOR")
#pragma pop_macro("TYPE_INTEGER")
#pragma pop_macro("TYPE_STRING")

#endif // _sun_awt_XSettings$Update_h_