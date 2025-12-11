#ifndef _apple_laf_JRSUIConstants$Key_h_
#define _apple_laf_JRSUIConstants$Key_h_
//$ class apple.laf.JRSUIConstants$Key
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ANIMATION_FRAME")
#undef ANIMATION_FRAME
#pragma push_macro("THUMB_PROPORTION")
#undef THUMB_PROPORTION
#pragma push_macro("THUMB_START")
#undef THUMB_START
#pragma push_macro("VALUE")
#undef VALUE
#pragma push_macro("WINDOW_TITLE_BAR_HEIGHT")
#undef WINDOW_TITLE_BAR_HEIGHT

namespace apple {
	namespace laf {

class JRSUIConstants$Key : public ::java::lang::Object {
	$class(JRSUIConstants$Key, 0, ::java::lang::Object)
public:
	JRSUIConstants$Key();
	void init$(int32_t constant);
	$String* getConstantName(::apple::laf::JRSUIConstants$Key* hit);
	virtual int64_t getConstantPtr();
	virtual $String* toString() override;
	static const int32_t _value = 20;
	static ::apple::laf::JRSUIConstants$Key* VALUE;
	static const int32_t _thumbProportion = 24;
	static ::apple::laf::JRSUIConstants$Key* THUMB_PROPORTION;
	static const int32_t _thumbStart = 25;
	static ::apple::laf::JRSUIConstants$Key* THUMB_START;
	static const int32_t _windowTitleBarHeight = 28;
	static ::apple::laf::JRSUIConstants$Key* WINDOW_TITLE_BAR_HEIGHT;
	static const int32_t _animationFrame = 23;
	static ::apple::laf::JRSUIConstants$Key* ANIMATION_FRAME;
	int32_t constant = 0;
	int64_t ptr = 0;
};

	} // laf
} // apple

#pragma pop_macro("ANIMATION_FRAME")
#pragma pop_macro("THUMB_PROPORTION")
#pragma pop_macro("THUMB_START")
#pragma pop_macro("VALUE")
#pragma pop_macro("WINDOW_TITLE_BAR_HEIGHT")

#endif // _apple_laf_JRSUIConstants$Key_h_