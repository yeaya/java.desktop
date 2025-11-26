#ifndef _sun_font_StrikeCache$DisposableStrike_h_
#define _sun_font_StrikeCache$DisposableStrike_h_
//$ interface sun.font.StrikeCache$DisposableStrike
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace sun {
	namespace font {
		class FontStrikeDisposer;
	}
}

namespace sun {
	namespace font {

class StrikeCache$DisposableStrike : public ::java::lang::Object {
	$interface(StrikeCache$DisposableStrike, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::sun::font::FontStrikeDisposer* getDisposer() {return nullptr;}
};

	} // font
} // sun

#endif // _sun_font_StrikeCache$DisposableStrike_h_