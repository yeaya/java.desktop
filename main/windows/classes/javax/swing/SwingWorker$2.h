#ifndef _javax_swing_SwingWorker$2_h_
#define _javax_swing_SwingWorker$2_h_
//$ class javax.swing.SwingWorker$2
//$ extends java.util.concurrent.FutureTask

#include <java/util/concurrent/FutureTask.h>

namespace java {
	namespace util {
		namespace concurrent {
			class Callable;
		}
	}
}
namespace javax {
	namespace swing {
		class SwingWorker;
	}
}

namespace javax {
	namespace swing {

class SwingWorker$2 : public ::java::util::concurrent::FutureTask {
	$class(SwingWorker$2, $NO_CLASS_INIT, ::java::util::concurrent::FutureTask)
public:
	SwingWorker$2();
	void init$(::javax::swing::SwingWorker* this$0, ::java::util::concurrent::Callable* arg0);
	virtual void done() override;
	::javax::swing::SwingWorker* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_SwingWorker$2_h_