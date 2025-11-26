#ifndef _javax_swing_AbstractButton$ButtonChangeListener_h_
#define _javax_swing_AbstractButton$ButtonChangeListener_h_
//$ class javax.swing.AbstractButton$ButtonChangeListener
//$ extends javax.swing.event.ChangeListener
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/event/ChangeListener.h>

namespace javax {
	namespace swing {
		class AbstractButton;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class ChangeEvent;
		}
	}
}

namespace javax {
	namespace swing {

class $import AbstractButton$ButtonChangeListener : public ::javax::swing::event::ChangeListener, public ::java::io::Serializable {
	$class(AbstractButton$ButtonChangeListener, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener, ::java::io::Serializable)
public:
	AbstractButton$ButtonChangeListener();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::AbstractButton* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::AbstractButton* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_AbstractButton$ButtonChangeListener_h_