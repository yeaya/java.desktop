#ifndef _TitledBorder_h_
#define _TitledBorder_h_
//$ class TitledBorder
//$ extends java.lang.Runnable

#include <java/lang/Runnable.h>

namespace java {
	namespace awt {
		class GridBagLayout;
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
		class JButton;
		class JFrame;
		class JPanel;
		class JTextArea;
	}
}

class TitledBorder : public ::java::lang::Runnable {
	$class(TitledBorder, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	TitledBorder();
	void init$(::java::util::concurrent::CountDownLatch* latch);
	void createUI();
	virtual void run() override;
	static ::java::awt::GridBagLayout* layout;
	static ::javax::swing::JPanel* mainControlPanel;
	static ::javax::swing::JPanel* resultButtonPanel;
	static ::javax::swing::JTextArea* instructionTextArea;
	static ::javax::swing::JButton* passButton;
	static ::javax::swing::JButton* failButton;
	static ::javax::swing::JFrame* mainFrame;
	::java::util::concurrent::CountDownLatch* latch = nullptr;
	bool testResult = false;
};

#endif // _TitledBorder_h_