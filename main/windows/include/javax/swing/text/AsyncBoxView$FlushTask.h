#ifndef _javax_swing_text_AsyncBoxView$FlushTask_h_
#define _javax_swing_text_AsyncBoxView$FlushTask_h_
//$ class javax.swing.text.AsyncBoxView$FlushTask
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		namespace text {
			class AsyncBoxView;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import AsyncBoxView$FlushTask : public ::java::lang::Runnable {
	$class(AsyncBoxView$FlushTask, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	AsyncBoxView$FlushTask();
	void init$(::javax::swing::text::AsyncBoxView* this$0);
	virtual void run() override;
	::javax::swing::text::AsyncBoxView* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_AsyncBoxView$FlushTask_h_