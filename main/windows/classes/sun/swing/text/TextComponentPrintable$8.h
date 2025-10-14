#ifndef _sun_swing_text_TextComponentPrintable$8_h_
#define _sun_swing_text_TextComponentPrintable$8_h_
//$ class sun.swing.text.TextComponentPrintable$8
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace java {
	namespace awt {
		class Graphics;
	}
}
namespace java {
	namespace awt {
		namespace print {
			class PageFormat;
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

class TextComponentPrintable$8 : public ::java::util::concurrent::Callable {
	$class(TextComponentPrintable$8, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	TextComponentPrintable$8();
	void init$(::sun::swing::text::TextComponentPrintable* this$0, ::java::awt::Graphics* val$graphics, ::java::awt::print::PageFormat* val$pf, int32_t val$pageIndex);
	virtual $Object* call() override;
	::sun::swing::text::TextComponentPrintable* this$0 = nullptr;
	int32_t val$pageIndex = 0;
	::java::awt::print::PageFormat* val$pf = nullptr;
	::java::awt::Graphics* val$graphics = nullptr;
};

		} // text
	} // swing
} // sun

#endif // _sun_swing_text_TextComponentPrintable$8_h_