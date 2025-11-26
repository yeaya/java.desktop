#ifndef _Test4319113$1_h_
#define _Test4319113$1_h_
//$ class Test4319113$1
//$ extends java.awt.event.ItemListener

#include <java/awt/event/ItemListener.h>

class Test4319113;
namespace java {
	namespace awt {
		namespace event {
			class ItemEvent;
		}
	}
}

class Test4319113$1 : public ::java::awt::event::ItemListener {
	$class(Test4319113$1, $NO_CLASS_INIT, ::java::awt::event::ItemListener)
public:
	Test4319113$1();
	void init$(::Test4319113* this$0);
	virtual void itemStateChanged(::java::awt::event::ItemEvent* itemEvent) override;
	::Test4319113* this$0 = nullptr;
};

#endif // _Test4319113$1_h_