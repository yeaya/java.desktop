#ifndef _javax_swing_JScrollBar$ModelListener_h_
#define _javax_swing_JScrollBar$ModelListener_h_
//$ class javax.swing.JScrollBar$ModelListener
//$ extends javax.swing.event.ChangeListener
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/event/ChangeListener.h>

namespace javax {
	namespace swing {
		class JScrollBar;
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

class JScrollBar$ModelListener : public ::javax::swing::event::ChangeListener, public ::java::io::Serializable {
	$class(JScrollBar$ModelListener, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener, ::java::io::Serializable)
public:
	JScrollBar$ModelListener();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JScrollBar* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JScrollBar* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JScrollBar$ModelListener_h_