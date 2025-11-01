#ifndef _java_awt_ScrollPane$PeerFixer_h_
#define _java_awt_ScrollPane$PeerFixer_h_
//$ class java.awt.ScrollPane$PeerFixer
//$ extends java.awt.event.AdjustmentListener
//$ implements java.io.Serializable

#include <java/awt/event/AdjustmentListener.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		class ScrollPane;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class AdjustmentEvent;
		}
	}
}

namespace java {
	namespace awt {

class $export ScrollPane$PeerFixer : public ::java::awt::event::AdjustmentListener, public ::java::io::Serializable {
	$class(ScrollPane$PeerFixer, $NO_CLASS_INIT, ::java::awt::event::AdjustmentListener, ::java::io::Serializable)
public:
	ScrollPane$PeerFixer();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::ScrollPane* this$0, ::java::awt::ScrollPane* scroller);
	virtual void adjustmentValueChanged(::java::awt::event::AdjustmentEvent* e) override;
	virtual $String* toString() override;
	::java::awt::ScrollPane* this$0 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x0E7BD788D4E4E576;
	::java::awt::ScrollPane* scroller = nullptr;
};

	} // awt
} // java

#endif // _java_awt_ScrollPane$PeerFixer_h_