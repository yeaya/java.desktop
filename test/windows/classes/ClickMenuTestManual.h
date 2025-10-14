#ifndef _ClickMenuTestManual_h_
#define _ClickMenuTestManual_h_
//$ class ClickMenuTestManual
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>
#include <java/lang/Array.h>

#pragma push_macro("TEST_STRING")
#undef TEST_STRING

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
		class JMenu;
		class JMenuBar;
		class JMenuItem;
		class JPanel;
		class JTextArea;
	}
}

class $export ClickMenuTestManual : public ::java::awt::event::ActionListener {
	$class(ClickMenuTestManual, 0, ::java::awt::event::ActionListener)
public:
	ClickMenuTestManual();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* evt) override;
	static void cleanUp();
	void createControlPanelUI();
	static void lambda$createControlPanelUI$0(::java::awt::event::ActionEvent* e);
	static void main($StringArray* args);
	static $String* TEST_STRING;
	static ::java::awt::GridBagLayout* layout;
	static ::javax::swing::JPanel* mainControlPanel;
	static ::javax::swing::JPanel* instructionPanel;
	static ::javax::swing::JPanel* testPanel;
	static ::javax::swing::JPanel* resultButtonPanel;
	static ::javax::swing::JPanel* controlPanel;
	static ::javax::swing::JTextArea* instructionTextArea;
	static ::javax::swing::JTextArea* testTextArea;
	static ::javax::swing::JButton* passButton;
	static ::javax::swing::JButton* failButton;
	static ::javax::swing::JMenu* menu;
	static ::javax::swing::JMenuBar* menuBar;
	static ::javax::swing::JMenuItem* menuItem;
	static ::javax::swing::JFrame* mainFrame;
};

#pragma pop_macro("TEST_STRING")

#endif // _ClickMenuTestManual_h_