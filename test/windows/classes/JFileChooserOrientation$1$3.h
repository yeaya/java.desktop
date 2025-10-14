#ifndef _JFileChooserOrientation$1$3_h_
#define _JFileChooserOrientation$1$3_h_
//$ class JFileChooserOrientation$1$3
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

class JFileChooserOrientation$1;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class JFileChooserOrientation$1$3 : public ::java::awt::event::ActionListener {
	$class(JFileChooserOrientation$1$3, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	JFileChooserOrientation$1$3();
	void init$(::JFileChooserOrientation$1* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::JFileChooserOrientation$1* this$0 = nullptr;
};

#endif // _JFileChooserOrientation$1$3_h_