#ifndef _LostText_h_
#define _LostText_h_
//$ class LostText
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

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
			class TableModel;
		}
	}
}

class LostText : public ::java::lang::Runnable {
	$class(LostText, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	LostText();
	void init$(::java::util::concurrent::CountDownLatch* latch);
	void createUI();
	virtual void dispose();
	static void lostTextTest();
	virtual void run() override;
	static ::javax::swing::table::TableModel* testSelectionWithFilterTable();
	static ::javax::swing::JFrame* f;
	static ::javax::swing::JDialog* dialog;
	static ::javax::swing::table::DefaultTableModel* model;
	bool testResult = false;
	::java::util::concurrent::CountDownLatch* latch = nullptr;
};

#endif // _LostText_h_