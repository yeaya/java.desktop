#ifndef _javax_swing_JFormattedTextField$DocumentHandler_h_
#define _javax_swing_JFormattedTextField$DocumentHandler_h_
//$ class javax.swing.JFormattedTextField$DocumentHandler
//$ extends javax.swing.event.DocumentListener
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/event/DocumentListener.h>

namespace javax {
	namespace swing {
		class JFormattedTextField;
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

class JFormattedTextField$DocumentHandler : public ::javax::swing::event::DocumentListener, public ::java::io::Serializable {
	$class(JFormattedTextField$DocumentHandler, $NO_CLASS_INIT, ::javax::swing::event::DocumentListener, ::java::io::Serializable)
public:
	JFormattedTextField$DocumentHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JFormattedTextField* this$0);
	virtual void changedUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void insertUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual void removeUpdate(::javax::swing::event::DocumentEvent* e) override;
	virtual $String* toString() override;
	::javax::swing::JFormattedTextField* this$0 = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_JFormattedTextField$DocumentHandler_h_