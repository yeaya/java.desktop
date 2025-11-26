#ifndef _javax_swing_AbstractButton$Handler_h_
#define _javax_swing_AbstractButton$Handler_h_
//$ class javax.swing.AbstractButton$Handler
//$ extends java.awt.event.ActionListener
//$ implements javax.swing.event.ChangeListener,java.awt.event.ItemListener,java.io.Serializable

#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ItemListener.h>
#include <java/io/Serializable.h>
#include <javax/swing/event/ChangeListener.h>

namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
			class ItemEvent;
		}
	}
}
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

class $import AbstractButton$Handler : public ::java::awt::event::ActionListener, public ::javax::swing::event::ChangeListener, public ::java::awt::event::ItemListener, public ::java::io::Serializable {
	$class(AbstractButton$Handler, $NO_CLASS_INIT, ::java::awt::event::ActionListener, ::javax::swing::event::ChangeListener, ::java::awt::event::ItemListener, ::java::io::Serializable)
public:
	AbstractButton$Handler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::AbstractButton* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* event) override;
	virtual void itemStateChanged(::java::awt::event::ItemEvent* event) override;
	virtual void stateChanged(::javax::swing::event::ChangeEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::AbstractButton* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_AbstractButton$Handler_h_