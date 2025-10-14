#ifndef _javax_swing_JTabbedPane$ModelListener_h_
#define _javax_swing_JTabbedPane$ModelListener_h_
//$ class javax.swing.JTabbedPane$ModelListener
//$ extends javax.swing.event.ChangeListener
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/event/ChangeListener.h>

namespace javax {
	namespace swing {
		class JTabbedPane;
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

class $import JTabbedPane$ModelListener : public ::javax::swing::event::ChangeListener, public ::java::io::Serializable {
	$class(JTabbedPane$ModelListener, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener, ::java::io::Serializable)
public:
	JTabbedPane$ModelListener();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JTabbedPane* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JTabbedPane* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JTabbedPane$ModelListener_h_