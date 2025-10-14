#ifndef _sun_swing_text_TextComponentPrintable$2_h_
#define _sun_swing_text_TextComponentPrintable$2_h_
//$ class sun.swing.text.TextComponentPrintable$2
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}
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

class TextComponentPrintable$2 : public ::java::util::concurrent::Callable {
	$class(TextComponentPrintable$2, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	TextComponentPrintable$2();
	void init$(::sun::swing::text::TextComponentPrintable* this$0, ::javax::swing::text::JTextComponent* val$textComponent);
	virtual $Object* call() override;
	::sun::swing::text::TextComponentPrintable* this$0 = nullptr;
	::javax::swing::text::JTextComponent* val$textComponent = nullptr;
};

		} // text
	} // swing
} // sun

#endif // _sun_swing_text_TextComponentPrintable$2_h_