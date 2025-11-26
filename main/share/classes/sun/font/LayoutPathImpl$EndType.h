#ifndef _sun_font_LayoutPathImpl$EndType_h_
#define _sun_font_LayoutPathImpl$EndType_h_
//$ class sun.font.LayoutPathImpl$EndType
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

#pragma push_macro("CLOSED")
#undef CLOSED
#pragma push_macro("EXTENDED")
#undef EXTENDED
#pragma push_macro("PINNED")
#undef PINNED

namespace sun {
	namespace font {

class LayoutPathImpl$EndType : public ::java::lang::Enum {
	$class(LayoutPathImpl$EndType, 0, ::java::lang::Enum)
public:
	LayoutPathImpl$EndType();
	static $Array<::sun::font::LayoutPathImpl$EndType>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal);
	virtual bool isClosed();
	virtual bool isExtended();
	virtual bool isPinned();
	static ::sun::font::LayoutPathImpl$EndType* valueOf($String* name);
	static $Array<::sun::font::LayoutPathImpl$EndType>* values();
	static ::sun::font::LayoutPathImpl$EndType* PINNED;
	static ::sun::font::LayoutPathImpl$EndType* EXTENDED;
	static ::sun::font::LayoutPathImpl$EndType* CLOSED;
	static $Array<::sun::font::LayoutPathImpl$EndType>* $VALUES;
};

	} // font
} // sun

#pragma pop_macro("CLOSED")
#pragma pop_macro("EXTENDED")
#pragma pop_macro("PINNED")

#endif // _sun_font_LayoutPathImpl$EndType_h_