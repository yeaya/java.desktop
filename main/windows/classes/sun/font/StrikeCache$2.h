#ifndef _sun_font_StrikeCache$2_h_
#define _sun_font_StrikeCache$2_h_
//$ class sun.font.StrikeCache$2
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace sun {
	namespace font {
		class FontStrikeDisposer;
	}
}

namespace sun {
	namespace font {

class StrikeCache$2 : public ::java::lang::Runnable {
	$class(StrikeCache$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	StrikeCache$2();
	void init$(::sun::font::FontStrikeDisposer* val$disposer);
	virtual void run() override;
	::sun::font::FontStrikeDisposer* val$disposer = nullptr;
};

	} // font
} // sun

#endif // _sun_font_StrikeCache$2_h_