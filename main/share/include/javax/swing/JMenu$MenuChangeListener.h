#ifndef _javax_swing_JMenu$MenuChangeListener_h_
#define _javax_swing_JMenu$MenuChangeListener_h_
//$ class javax.swing.JMenu$MenuChangeListener
//$ extends javax.swing.event.ChangeListener
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/event/ChangeListener.h>

namespace javax {
	namespace swing {
		class JMenu;
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

class $import JMenu$MenuChangeListener : public ::javax::swing::event::ChangeListener, public ::java::io::Serializable {
	$class(JMenu$MenuChangeListener, $NO_CLASS_INIT, ::javax::swing::event::ChangeListener, ::java::io::Serializable)
public:
	JMenu$MenuChangeListener();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JMenu* this$0);
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JMenu* this$0 = nullptr;
	bool isSelected = false;
};

	} // swing
} // javax

#endif // _javax_swing_JMenu$MenuChangeListener_h_