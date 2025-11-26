#ifndef _sun_font_XMap_h_
#define _sun_font_XMap_h_
//$ class sun.font.XMap
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DOUBLE_BYTE")
#undef DOUBLE_BYTE
#pragma push_macro("SINGLE_BYTE")
#undef SINGLE_BYTE
#pragma push_macro("SURR_MAX")
#undef SURR_MAX
#pragma push_macro("SURR_MIN")
#undef SURR_MIN

namespace java {
	namespace util {
		class HashMap;
	}
}

namespace sun {
	namespace font {

class XMap : public ::java::lang::Object {
	$class(XMap, 0, ::java::lang::Object)
public:
	XMap();
	void init$($String* className, int32_t minU, int32_t maxU, int32_t nBytes, bool addAscii, bool lowPartOnly);
	static ::sun::font::XMap* getXMapper($String* encoding);
	static ::sun::font::XMap* getXMapperInternal($String* encoding);
	static ::java::util::HashMap* xMappers;
	$chars* convertedGlyphs = nullptr;
	static const int32_t SINGLE_BYTE = 1;
	static const int32_t DOUBLE_BYTE = 2;
	static const char16_t SURR_MIN = ((char16_t)55296);
	static const char16_t SURR_MAX = ((char16_t)57343);
};

	} // font
} // sun

#pragma pop_macro("DOUBLE_BYTE")
#pragma pop_macro("SINGLE_BYTE")
#pragma pop_macro("SURR_MAX")
#pragma pop_macro("SURR_MIN")

#endif // _sun_font_XMap_h_