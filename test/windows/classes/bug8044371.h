#ifndef _bug8044371_h_
#define _bug8044371_h_
//$ class bug8044371
//$ extends java.awt.event.AdjustmentListener

#include <java/awt/event/AdjustmentListener.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace event {
			class AdjustmentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JFrame;
		class JSplitPane;
	}
}

class $export bug8044371 : public ::java::awt::event::AdjustmentListener {
	$class(bug8044371, $NO_CLASS_INIT, ::java::awt::event::AdjustmentListener)
public:
	bug8044371();
	void init$(::javax::swing::JFrame* frame);
	virtual void adjustmentValueChanged(::java::awt::event::AdjustmentEvent* e) override;
	static void main($StringArray* args);
	virtual void step1();
	virtual void step2();
	virtual void step3();
	::javax::swing::JSplitPane* sptPane = nullptr;
	int32_t lastAdjust = 0;
	int32_t initialAdjust = 0;
};

#endif // _bug8044371_h_