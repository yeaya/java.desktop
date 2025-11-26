#ifndef _javax_swing_RepaintManager$ProcessingRunnable_h_
#define _javax_swing_RepaintManager$ProcessingRunnable_h_
//$ class javax.swing.RepaintManager$ProcessingRunnable
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class RepaintManager;
	}
}

namespace javax {
	namespace swing {

class RepaintManager$ProcessingRunnable : public ::java::lang::Runnable {
	$class(RepaintManager$ProcessingRunnable, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	RepaintManager$ProcessingRunnable();
	void init$(::javax::swing::RepaintManager* this$0);
	bool markPending();
	virtual void run() override;
	::javax::swing::RepaintManager* this$0 = nullptr;
	bool pending = false;
};

	} // swing
} // javax

#endif // _javax_swing_RepaintManager$ProcessingRunnable_h_