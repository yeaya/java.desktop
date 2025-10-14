#ifndef _bug4242228$1$1_h_
#define _bug4242228$1$1_h_
//$ class bug4242228$1$1
//$ extends javax.swing.event.ChangeListener

#include <javax/swing/event/ChangeListener.h>

class bug4242228$1;
namespace javax {
	namespace swing {
		class JScrollPane;
		class JTextPane;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

class bug4242228$1$1 : public ::javax::swing::event::ChangeListener {
	$class(bug4242228$1$1, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener)
public:
	bug4242228$1$1();
	void init$(::bug4242228$1* this$0, ::javax::swing::JScrollPane* val$editorPane, ::javax::swing::JTextPane* val$htmlEditor, ::javax::swing::JTextPane* val$sourceEditor);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	::bug4242228$1* this$0 = nullptr;
	::javax::swing::JTextPane* val$sourceEditor = nullptr;
	::javax::swing::JTextPane* val$htmlEditor = nullptr;
	::javax::swing::JScrollPane* val$editorPane = nullptr;
};

#endif // _bug4242228$1$1_h_