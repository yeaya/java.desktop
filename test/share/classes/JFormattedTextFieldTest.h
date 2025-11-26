#ifndef _JFormattedTextFieldTest_h_
#define _JFormattedTextFieldTest_h_
//$ class JFormattedTextFieldTest
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
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
namespace javax {
	namespace swing {
		class JButton;
		class JFrame;
		class JLabel;
		class JPanel;
	}
}

class $export JFormattedTextFieldTest : public ::java::awt::event::ActionListener {
	$class(JFormattedTextFieldTest, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	JFormattedTextFieldTest();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* evt) override;
	static void cleanUp();
	void createUI();
	void lambda$createUI$0();
	static void main($StringArray* args);
	static ::java::awt::GridBagLayout* layout;
	static ::javax::swing::JPanel* mainControlPanel;
	static ::javax::swing::JPanel* resultButtonPanel;
	static ::javax::swing::JLabel* instructionText;
	static ::javax::swing::JButton* passButton;
	static ::javax::swing::JButton* failButton;
	static ::javax::swing::JFrame* mainFrame;
};

#endif // _JFormattedTextFieldTest_h_