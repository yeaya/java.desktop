#ifndef _javax_swing_SwingWorker$1_h_
#define _javax_swing_SwingWorker$1_h_
//$ class javax.swing.SwingWorker$1
//$ extends java.util.concurrent.Callable

#include <java/util/concurrent/Callable.h>

namespace javax {
	namespace swing {
		class SwingWorker;
	}
}

namespace javax {
	namespace swing {

class SwingWorker$1 : public ::java::util::concurrent::Callable {
	$class(SwingWorker$1, $NO_CLASS_INIT, ::java::util::concurrent::Callable)
public:
	SwingWorker$1();
	void init$(::javax::swing::SwingWorker* this$0);
	virtual $Object* call() override;
	::javax::swing::SwingWorker* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_SwingWorker$1_h_