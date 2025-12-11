#ifndef _com_apple_laf_ScreenMenu$2_h_
#define _com_apple_laf_ScreenMenu$2_h_
//$ class com.apple.laf.ScreenMenu$2
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

class ScreenMenu$2 : public ::java::lang::Runnable {
	$class(ScreenMenu$2, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	ScreenMenu$2();
	void init$(::com::apple::laf::ScreenMenu* this$0, ::javax::swing::JMenu* val$invoker);
	virtual void run() override;
	::com::apple::laf::ScreenMenu* this$0 = nullptr;
	::javax::swing::JMenu* val$invoker = nullptr;
};

		} // laf
	} // apple
} // com

#endif // _com_apple_laf_ScreenMenu$2_h_