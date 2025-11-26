#ifndef _javax_swing_text_StyledEditorKit$AttributeTracker_h_
#define _javax_swing_text_StyledEditorKit$AttributeTracker_h_
//$ class javax.swing.text.StyledEditorKit$AttributeTracker
//$ extends javax.swing.event.CaretListener
//$ implements java.beans.PropertyChangeListener,java.io.Serializable

#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <javax/swing/event/CaretListener.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class CaretEvent;
		}
	}
}
namespace javax {
	namespace swing {
		namespace text {
			class JTextComponent;
			class StyledEditorKit;
		}
	}
}

namespace javax {
	namespace swing {
		namespace text {

class $import StyledEditorKit$AttributeTracker : public ::javax::swing::event::CaretListener, public ::java::beans::PropertyChangeListener, public ::java::io::Serializable {
	$class(StyledEditorKit$AttributeTracker, $NO_CLASS_INIT, ::javax::swing::event::CaretListener, ::java::beans::PropertyChangeListener, ::java::io::Serializable)
public:
	StyledEditorKit$AttributeTracker();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::text::StyledEditorKit* this$0);
	virtual void caretUpdate(::javax::swing::event::CaretEvent* e) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual $String* toString() override;
	virtual void updateInputAttributes(int32_t dot, int32_t mark, ::javax::swing::text::JTextComponent* c);
	::javax::swing::text::StyledEditorKit* this$0 = nullptr;
};

		} // text
	} // swing
} // javax

#endif // _javax_swing_text_StyledEditorKit$AttributeTracker_h_