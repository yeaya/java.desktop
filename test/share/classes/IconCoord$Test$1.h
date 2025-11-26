#ifndef _IconCoord$Test$1_h_
#define _IconCoord$Test$1_h_
//$ class IconCoord$Test$1
//$ extends java.awt.event.ActionListener

#include <java/awt/event/ActionListener.h>

class IconCoord$Test;
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}

class IconCoord$Test$1 : public ::java::awt::event::ActionListener {
	$class(IconCoord$Test$1, $NO_CLASS_INIT, ::java::awt::event::ActionListener)
public:
	IconCoord$Test$1();
	void init$(::IconCoord$Test* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
	::IconCoord$Test* this$0 = nullptr;
};

#endif // _IconCoord$Test$1_h_