#ifndef _javax_swing_plaf_synth_SynthComboBoxUI$EditorFocusHandler_h_
#define _javax_swing_plaf_synth_SynthComboBoxUI$EditorFocusHandler_h_
//$ class javax.swing.plaf.synth.SynthComboBoxUI$EditorFocusHandler
//$ extends java.awt.event.FocusListener
//$ implements java.beans.PropertyChangeListener

#include <java/awt/event/FocusListener.h>
#include <java/beans/PropertyChangeListener.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusEvent;
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
		class ComboBoxEditor;
		class JComboBox;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

class SynthComboBoxUI$EditorFocusHandler : public ::java::awt::event::FocusListener, public ::java::beans::PropertyChangeListener {
	$class(SynthComboBoxUI$EditorFocusHandler, $NO_CLASS_INIT, ::java::awt::event::FocusListener, ::java::beans::PropertyChangeListener)
public:
	SynthComboBoxUI$EditorFocusHandler();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::javax::swing::JComboBox* comboBox);
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual void propertyChange(::java::beans::PropertyChangeEvent* evt) override;
	virtual $String* toString() override;
	virtual void unregister();
	::javax::swing::JComboBox* comboBox = nullptr;
	::javax::swing::ComboBoxEditor* editor = nullptr;
	::java::awt::Component* editorComponent = nullptr;
};

			} // synth
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_synth_SynthComboBoxUI$EditorFocusHandler_h_