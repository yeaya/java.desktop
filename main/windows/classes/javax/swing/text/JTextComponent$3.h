#ifndef _javax_swing_text_JTextComponent$3_h_
#define _javax_swing_text_JTextComponent$3_h_
//$ class javax.swing.text.JTextComponent$3
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace util {
		namespace concurrent {
			class FutureTask;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class JTextComponent$3 : public ::java::lang::Runnable {
	$class(JTextComponent$3, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	JTextComponent$3();
	void init$(::javax::swing::text::JTextComponent* this$0, bool val$isEventDispatchThread, ::java::util::concurrent::FutureTask* val$futurePrinting);
	virtual void run() override;
	::javax::swing::text::JTextComponent* this$0 = nullptr;
	::java::util::concurrent::FutureTask* val$futurePrinting = nullptr;
	bool val$isEventDispatchThread = false;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$3_h_