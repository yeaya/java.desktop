#ifndef _sun_swing_text_TextComponentPrintable$10_h_
#define _sun_swing_text_TextComponentPrintable$10_h_
//$ class sun.swing.text.TextComponentPrintable$10
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace sun {
	namespace swing {
		namespace text {
			class TextComponentPrintable;
		}
	}
}

namespace sun {
	namespace swing {
		namespace text {

class TextComponentPrintable$10 : public ::java::util::concurrent::Callable {
	$class(TextComponentPrintable$10, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	TextComponentPrintable$10();
	void init$(::sun::swing::text::TextComponentPrintable* this$0, int32_t val$width);
	virtual $Object* call() override;
	::sun::swing::text::TextComponentPrintable* this$0 = nullptr;
	int32_t val$width = 0;
};

		} // text
	} // swing
} // sun

#endif // _sun_swing_text_TextComponentPrintable$10_h_