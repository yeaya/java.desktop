#ifndef _com_apple_laf_ScreenMenu$4_h_
#define _com_apple_laf_ScreenMenu$4_h_
//$ class com.apple.laf.ScreenMenu$4
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace apple {
		namespace laf {
			class ScreenMenu;
		}
	}
}

namespace com {
	namespace apple {
		namespace laf {

class ScreenMenu$4 : public ::java::lang::Runnable {
	$class(ScreenMenu$4, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ScreenMenu$4();
	void init$(::com::apple::laf::ScreenMenu* this$0, int32_t val$x, int32_t val$y, int64_t val$when, int32_t val$modifiers, int32_t val$kind);
	virtual void run() override;
	::com::apple::laf::ScreenMenu* this$0 = nullptr;
	int32_t val$kind = 0;
	int32_t val$modifiers = 0;
	int64_t val$when = 0;
	int32_t val$y = 0;
	int32_t val$x = 0;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_ScreenMenu$4_h_