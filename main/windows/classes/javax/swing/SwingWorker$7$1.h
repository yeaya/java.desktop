#ifndef _javax_swing_SwingWorker$7$1_h_
#define _javax_swing_SwingWorker$7$1_h_
//$ class javax.swing.SwingWorker$7$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace util {
		namespace concurrent {
			class ExecutorService;
		}
	}
}
namespace javax {
	namespace swing {
		class SwingWorker$7;
	}
}

namespace javax {
	namespace swing {

class SwingWorker$7$1 : public ::java::security::PrivilegedAction {
	$class(SwingWorker$7$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	SwingWorker$7$1();
	void init$(::javax::swing::SwingWorker$7* this$0, ::java::util::concurrent::ExecutorService* val$executorService);
	virtual $Object* run() override;
	::javax::swing::SwingWorker$7* this$0 = nullptr;
	::java::util::concurrent::ExecutorService* val$executorService = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_SwingWorker$7$1_h_