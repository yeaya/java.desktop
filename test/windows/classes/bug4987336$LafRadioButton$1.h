#ifndef _bug4987336$LafRadioButton$1_h_
#define _bug4987336$LafRadioButton$1_h_
//$ class bug4987336$LafRadioButton$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

class bug4987336;
class bug4987336$LafRadioButton;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class UIManager$LookAndFeelInfo;
	}
}

class bug4987336$LafRadioButton$1 : public ::java::awt::event::ActionListener {
	$class(bug4987336$LafRadioButton$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	bug4987336$LafRadioButton$1();
	void init$(::bug4987336$LafRadioButton* this$1, ::bug4987336* val$this$0, ::javax::swing::UIManager$LookAndFeelInfo* val$lafInfo);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::bug4987336$LafRadioButton* this$1 = nullptr;
	::javax::swing::UIManager$LookAndFeelInfo* val$lafInfo = nullptr;
	::bug4987336* val$this$0 = nullptr;
};

#endif // _bug4987336$LafRadioButton$1_h_