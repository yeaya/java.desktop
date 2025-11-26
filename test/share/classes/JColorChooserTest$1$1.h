#ifndef _JColorChooserTest$1$1_h_
#define _JColorChooserTest$1$1_h_
//$ class JColorChooserTest$1$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

class JColorChooserTest$1;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class JColorChooserTest$1$1 : public ::java::awt::event::ActionListener {
	$class(JColorChooserTest$1$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	JColorChooserTest$1$1();
	void init$(::JColorChooserTest$1* this$1);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::JColorChooserTest$1* this$1 = nullptr;
};

#endif // _JColorChooserTest$1$1_h_