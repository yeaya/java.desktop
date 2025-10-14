#ifndef _ClearSelTest_h_
#define _ClearSelTest_h_
//$ class ClearSelTest
//$ extends java.lang.Runnable

#include <java/lang/Array.h>
#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			class CountDownLatch;
		}
	}
}
namespace javax {
	namespace swing {
		class JDialog;
		class JFrame;
	}
}
namespace javax {
	namespace swing {
		namespace table {
			class DefaultTableModel;
		}
	}
}

class ClearSelTest : public ::java::lang::Runnable {
	$class(ClearSelTest, 0, ::java::lang::Runnable)
public:
	ClearSelTest();
	void init$(::java::util::concurrent::CountDownLatch* latch);
	static void clearSelTest();
	void createUI();
	virtual void dispose();
	void lambda$createUI$1(::java::awt::event::ActionEvent* e);
	void lambda$createUI$2(::java::awt::event::ActionEvent* e);
	void lambda$run$0();
	virtual void run() override;
	static ::javax::swing::JFrame* f;
	static ::javax::swing::JDialog* dialog;
	static ::javax::swing::table::DefaultTableModel* model;
	bool testResult = false;
	::java::util::concurrent::CountDownLatch* latch = nullptr;
	static $StringArray* rows;
};

#endif // _ClearSelTest_h_