#ifndef _bug4708809$3$1_h_
#define _bug4708809$3$1_h_
//$ class bug4708809$3$1
//$ extends java.awt.event.AdjustmentListener

#include <java/awt/event/AdjustmentListener.h>

class bug4708809$3;
namespace java {
	namespace awt {
		namespace event {
			class AdjustmentEvent;
		}
	}
}

class bug4708809$3$1 : public ::java::awt::event::AdjustmentListener {
	$class(bug4708809$3$1, $NO_CLASS_INIT, ::java::awt::event::AdjustmentListener)
public:
	bug4708809$3$1();
	void init$(::bug4708809$3* this$0, int32_t val$oldValue);
	virtual void adjustmentValueChanged(::java::awt::event::AdjustmentEvent* e) override;
	::bug4708809$3* this$0 = nullptr;
	int32_t val$oldValue = 0;
};

#endif // _bug4708809$3$1_h_