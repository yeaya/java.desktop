#ifndef _javax_swing_SwingWorker$5_h_
#define _javax_swing_SwingWorker$5_h_
//$ class javax.swing.SwingWorker$5
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace javax {
	namespace swing {
		class SwingWorker;
	}
}

namespace javax {
	namespace swing {

class SwingWorker$5 : public ::java::lang::Runnable {
	$class(SwingWorker$5, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	SwingWorker$5();
	void init$(::javax::swing::SwingWorker* this$0);
	virtual void run() override;
	::javax::swing::SwingWorker* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_SwingWorker$5_h_