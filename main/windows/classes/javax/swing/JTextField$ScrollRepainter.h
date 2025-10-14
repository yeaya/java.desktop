#ifndef _javax_swing_JTextField$ScrollRepainter_h_
#define _javax_swing_JTextField$ScrollRepainter_h_
//$ class javax.swing.JTextField$ScrollRepainter
//$ extends javax.swing.event.ChangeListener
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/event/ChangeListener.h>

namespace javax {
	namespace swing {
		class JTextField;
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

class $export JTextField$ScrollRepainter : public ::javax::swing::event::ChangeListener, public ::java::io::Serializable {
	$class(JTextField$ScrollRepainter, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener, ::java::io::Serializable)
public:
	JTextField$ScrollRepainter();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JTextField* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JTextField* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTextField$ScrollRepainter_h_