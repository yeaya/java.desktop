#ifndef _javax_swing_text_JTextComponent$AccessibleJTextComponent$1_h_
#define _javax_swing_text_JTextComponent$AccessibleJTextComponent$1_h_
//$ class javax.swing.text.JTextComponent$AccessibleJTextComponent$1
//$ extends java.awt.event.ComponentAdapter

#include <java/awt/event/ComponentAdapter.h>

namespace java {
	namespace awt {
		namespace event {
			class ComponentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
			class JTextComponent$AccessibleJTextComponent;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class JTextComponent$AccessibleJTextComponent$1 : public ::java::awt::event::ComponentAdapter {
	$class(JTextComponent$AccessibleJTextComponent$1, $NO_CLASS_INIT, ::java::awt::event::ComponentAdapter)
public:
	JTextComponent$AccessibleJTextComponent$1();
	void init$(::javax::swing::text::JTextComponent$AccessibleJTextComponent* this$1, ::javax::swing::text::JTextComponent* val$this$0);
	virtual void componentMoved(::java::awt::event::ComponentEvent* e) override;
	::javax::swing::text::JTextComponent$AccessibleJTextComponent* this$1 = nullptr;
	::javax::swing::text::JTextComponent* val$this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_JTextComponent$AccessibleJTextComponent$1_h_