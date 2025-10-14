#ifndef _sun_swing_text_TextComponentPrintable$9_h_
#define _sun_swing_text_TextComponentPrintable$9_h_
//$ class sun.swing.text.TextComponentPrintable$9
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

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

class TextComponentPrintable$9 : public ::java::lang::Runnable {
	$class(TextComponentPrintable$9, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	TextComponentPrintable$9();
	void init$(::sun::swing::text::TextComponentPrintable* this$0);
	virtual void run() override;
	::sun::swing::text::TextComponentPrintable* this$0 = nullptr;
};

		} // text
	} // swing
} // sun

#endif // _sun_swing_text_TextComponentPrintable$9_h_