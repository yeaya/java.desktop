#ifndef _JColorChooserTest_h_
#define _JColorChooserTest_h_
//$ class JColorChooserTest
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
		class JColorChooser;
		class JFrame;
		class JPanel;
		class JTextArea;
	}
}

class JColorChooserTest : public ::java::lang::Runnable {
	$class(JColorChooserTest, $NO_CLASS_INIT, ::java::lang::Runnable)
public:
	JColorChooserTest();
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
	static ::javax::swing::JColorChooser* colorChooser;
	::java::util::concurrent::CountDownLatch* latch = nullptr;
	$volatile(bool) testResult = false;
};

#endif // _JColorChooserTest_h_