#ifndef _TitledBorder$1$1_h_
#define _TitledBorder$1$1_h_
//$ class TitledBorder$1$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

class TitledBorder$1;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class TitledBorder$1$1 : public ::java::awt::event::ActionListener {
	$class(TitledBorder$1$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	TitledBorder$1$1();
	void init$(::TitledBorder$1* this$1);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	::TitledBorder$1* this$1 = nullptr;
};

#endif // _TitledBorder$1$1_h_