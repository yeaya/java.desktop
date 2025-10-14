#ifndef _TestUI_h_
#define _TestUI_h_
//$ class TestUI
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class GridBagConstraints;
		class GridBagLayout;
	}
}
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
		class JButton;
		class JFrame;
		class JPanel;
		class JTextArea;
	}
}

class TestUI : public ::java::lang::Object {
	$class(TestUI, $NO_CLASS_INIT, ::java::lang::Object)
public:
	TestUI();
	void init$(::java::util::concurrent::CountDownLatch* latch);
	void createUI();
	void customize();
	virtual void disposeUI();
	void initialize();
	void lambda$createUI$0(::java::awt::event::ActionEvent* e);
	void lambda$createUI$1(::java::awt::event::ActionEvent* e);
	static ::javax::swing::JFrame* mainFrame;
	static ::javax::swing::JPanel* mainControlPanel;
	static ::javax::swing::JTextArea* instructionTextArea;
	static ::javax::swing::JPanel* resultButtonPanel;
	static ::javax::swing::JButton* passButton;
	static ::javax::swing::JButton* failButton;
	::java::awt::GridBagConstraints* gbc = nullptr;
	static ::java::awt::GridBagLayout* layout;
	::java::util::concurrent::CountDownLatch* latch = nullptr;
	bool testResult = false;
};

#endif // _TestUI_h_