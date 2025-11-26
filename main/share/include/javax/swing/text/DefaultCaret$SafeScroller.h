#ifndef _javax_swing_text_DefaultCaret$SafeScroller_h_
#define _javax_swing_text_DefaultCaret$SafeScroller_h_
//$ class javax.swing.text.DefaultCaret$SafeScroller
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class DefaultCaret;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import DefaultCaret$SafeScroller : public ::java::lang::Runnable {
	$class(DefaultCaret$SafeScroller, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	DefaultCaret$SafeScroller();
	void init$(::javax::swing::text::DefaultCaret* this$0, ::java::awt::Rectangle* r);
	virtual void run() override;
	::javax::swing::text::DefaultCaret* this$0 = nullptr;
	::java::awt::Rectangle* r = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultCaret$SafeScroller_h_