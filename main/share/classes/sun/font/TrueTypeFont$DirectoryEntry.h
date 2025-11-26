#ifndef _sun_font_TrueTypeFont$DirectoryEntry_h_
#define _sun_font_TrueTypeFont$DirectoryEntry_h_
//$ class sun.font.TrueTypeFont$DirectoryEntry
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace font {

class TrueTypeFont$DirectoryEntry : public ::java::lang::Object {
	$class(TrueTypeFont$DirectoryEntry, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TrueTypeFont$DirectoryEntry();
	void init$();
	int32_t tag = 0;
	int32_t offset = 0;
	int32_t length = 0;
};

	} // font
} // sun

#endif // _sun_font_TrueTypeFont$DirectoryEntry_h_