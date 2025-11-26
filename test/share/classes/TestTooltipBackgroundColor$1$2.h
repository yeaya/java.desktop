#ifndef _TestTooltipBackgroundColor$1$2_h_
#define _TestTooltipBackgroundColor$1$2_h_
//$ class TestTooltipBackgroundColor$1$2
//$ extends java.awt.event.ContainerAdapter

#include <java/awt/event/ContainerAdapter.h>

class TestTooltipBackgroundColor$1;
namespace java {
	namespace awt {
		namespace event {
			class ContainerEvent;
		}
	}
}

class TestTooltipBackgroundColor$1$2 : public ::java::awt::event::ContainerAdapter {
	$class(TestTooltipBackgroundColor$1$2, $NO_CLASS_INIT, ::java::awt::event::ContainerAdapter)
public:
	TestTooltipBackgroundColor$1$2();
	void init$(::TestTooltipBackgroundColor$1* this$0);
	virtual void componentAdded(::java::awt::event::ContainerEvent* e) override;
	::TestTooltipBackgroundColor$1* this$0 = nullptr;
};

#endif // _TestTooltipBackgroundColor$1$2_h_