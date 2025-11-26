#ifndef _javax_swing_SwingWorker$6_h_
#define _javax_swing_SwingWorker$6_h_
//$ class javax.swing.SwingWorker$6
//$ extends java.util.concurrent.ThreadFactory

#include <java/util/concurrent/ThreadFactory.h>

namespace java {
	namespace lang {
		class Runnable;
		class Thread;
	}
}

namespace javax {
	namespace swing {

class SwingWorker$6 : public ::java::util::concurrent::ThreadFactory {
	$class(SwingWorker$6, $NO_CLASS_INIT, ::java::util::concurrent::ThreadFactory)
public:
	SwingWorker$6();
	void init$();
	virtual $Thread* newThread(::java::lang::Runnable* r) override;
	::java::util::concurrent::ThreadFactory* defaultFactory = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_SwingWorker$6_h_