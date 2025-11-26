#ifndef _javax_swing_SwingWorker$3_h_
#define _javax_swing_SwingWorker$3_h_
//$ class javax.swing.SwingWorker$3
//$ extends sun.swing.AccumulativeRunnable

#include <sun/swing/AccumulativeRunnable.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace swing {
		class SwingWorker;
	}
}

namespace javax {
	namespace swing {

class SwingWorker$3 : public ::sun::swing::AccumulativeRunnable {
	$class(SwingWorker$3, $NO_CLASS_INIT, ::sun::swing::AccumulativeRunnable)
public:
	SwingWorker$3();
	void init$(::javax::swing::SwingWorker* this$0);
	using ::sun::swing::AccumulativeRunnable::run;
	virtual void run(::java::util::List* args) override;
	virtual void submit() override;
	::javax::swing::SwingWorker* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_SwingWorker$3_h_