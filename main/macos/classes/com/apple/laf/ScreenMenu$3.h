#ifndef _com_apple_laf_ScreenMenu$3_h_
#define _com_apple_laf_ScreenMenu$3_h_
//$ class com.apple.laf.ScreenMenu$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace com {
	namespace apple {
		namespace laf {
			class ScreenMenu;
		}
	}
}
namespace javax {
	namespace swing {
		class JMenu;
	}
}

namespace com {
	namespace apple {
		namespace laf {

class ScreenMenu$3 : public ::java::lang::Runnable {
	$class(ScreenMenu$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ScreenMenu$3();
	void init$(::com::apple::laf::ScreenMenu* this$0, ::javax::swing::JMenu* val$invoker);
	virtual void run() override;
	::com::apple::laf::ScreenMenu* this$0 = nullptr;
	::javax::swing::JMenu* val$invoker = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_ScreenMenu$3_h_