#ifndef _javax_swing_JSpinner$ModelListener_h_
#define _javax_swing_JSpinner$ModelListener_h_
//$ class javax.swing.JSpinner$ModelListener
//$ extends javax.swing.event.ChangeListener
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/event/ChangeListener.h>

namespace javax {
	namespace swing {
		class JSpinner;
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

class JSpinner$ModelListener : public ::javax::swing::event::ChangeListener, public ::java::io::Serializable {
	$class(JSpinner$ModelListener, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener, ::java::io::Serializable)
public:
	JSpinner$ModelListener();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JSpinner* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JSpinner* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JSpinner$ModelListener_h_