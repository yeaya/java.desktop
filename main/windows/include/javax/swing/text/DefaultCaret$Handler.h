#ifndef _javax_swing_text_DefaultCaret$Handler_h_
#define _javax_swing_text_DefaultCaret$Handler_h_
//$ class javax.swing.text.DefaultCaret$Handler
//$ extends java.beans.PropertyChangeListener
//$ implements javax.swing.event.DocumentListener,java.awt.event.ActionListener,java.awt.datatransfer.ClipboardOwner

#include <java/awt/datatransfer/ClipboardOwner.h>
#include <java/awt/event/ActionListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/DocumentListener.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class Clipboard;
			class Transferable;
		}
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionEvent;
		}
	}
}
namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class DocumentEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class DefaultCaret;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import DefaultCaret$Handler : public ::java::beans::PropertyChangeListener, public ::javax::swing::event::DocumentListener, public ::java::awt::event::ActionListener, public ::java::awt::datatransfer::ClipboardOwner {
	$class(DefaultCaret$Handler, $NO_CLASS_INIT, ::java::beans::PropertyChangeListener, ::javax::swing::event::DocumentListener, ::java::awt::event::ActionListener, ::java::awt::datatransfer::ClipboardOwner)
public:
	DefaultCaret$Handler();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::DefaultCaret* this$0);
	virtual void actionPerformed(::java::awt::event::ActionEvent* e) override;
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void lostOwnership(::java::awt::datatransfer::Clipboard* clipboard, ::java::awt::datatransfer::Transferable* contents) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::text::DefaultCaret* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_DefaultCaret$Handler_h_