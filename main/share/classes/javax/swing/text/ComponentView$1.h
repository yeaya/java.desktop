#ifndef _javax_swing_text_ComponentView$1_h_
#define _javax_swing_text_ComponentView$1_h_
//$ class javax.swing.text.ComponentView$1
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		namespace text {
			class ComponentView;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class ComponentView$1 : public ::java::lang::Runnable {
	$class(ComponentView$1, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ComponentView$1();
	void init$(::javax::swing::text::ComponentView* this$0);
	virtual void run() override;
	::javax::swing::text::ComponentView* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_ComponentView$1_h_