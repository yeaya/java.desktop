#ifndef _JTextAreaEmojiTest_h_
#define _JTextAreaEmojiTest_h_
//$ class JTextAreaEmojiTest
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

class $export JTextAreaEmojiTest : public ::java::awt::event::ActionListener {
	$class(JTextAreaEmojiTest, 0, ::java::awt::event::ActionListener)
public:
	JTextAreaEmojiTest();
	void init$();
	virtual void actionPerformed(::java::awt::event::ActionEvent* evt) override;
	static void cleanUp();
	void createControlPanelUI();
	static void main($StringArray* args);
	static ::java::awt::GridBagLayout* layout;
	static ::javax::swing::JPanel* textAreaPanel;
	static ::javax::swing::JPanel* mainControlPanel;
	static ::javax::swing::JPanel* instructionPanel;
	static ::javax::swing::JPanel* resultButtonPanel;
	static ::javax::swing::JPanel* controlPanel;
	static ::javax::swing::JTextArea* instructionTextArea;
	static ::javax::swing::JTextArea* emojiTextArea;
	static ::javax::swing::JButton* passButton;
	static ::javax::swing::JButton* failButton;
	static ::javax::swing::JFrame* mainFrame;
	static ::java::util::concurrent::CountDownLatch* testRunLatch;
};

#endif // _JTextAreaEmojiTest_h_