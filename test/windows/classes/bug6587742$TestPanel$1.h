#ifndef _bug6587742$TestPanel$1_h_
#define _bug6587742$TestPanel$1_h_
//$ class bug6587742$TestPanel$1
//$ extends java.awt.event.ItemListener

#include <java/awt/event/ItemListener.h>

class bug6587742;
class bug6587742$TestPanel;
namespace java {
	namespace awt {
		namespace event {
			class ItemEvent;
		}
	}
}

class bug6587742$TestPanel$1 : public ::java::awt::event::ItemListener {
	$class(bug6587742$TestPanel$1, $NO_CLASS_INIT, ::java::awt::event::ItemListener)
public:
	bug6587742$TestPanel$1();
	void init$(::bug6587742$TestPanel* this$1, ::bug6587742* val$this$0);
	virtual void itemStateChanged(::java::awt::event::ItemEvent* e) override;
	::bug6587742$TestPanel* this$1 = nullptr;
	::bug6587742* val$this$0 = nullptr;
};

#endif // _bug6587742$TestPanel$1_h_