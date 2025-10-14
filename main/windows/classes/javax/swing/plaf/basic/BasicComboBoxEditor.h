#ifndef _javax_swing_plaf_basic_BasicComboBoxEditor_h_
#define _javax_swing_plaf_basic_BasicComboBoxEditor_h_
//$ class javax.swing.plaf.basic.BasicComboBoxEditor
//$ extends javax.swing.ComboBoxEditor
//$ implements java.awt.event.FocusListener

#include <java/awt/event/FocusListener.h>
#include <javax/swing/ComboBoxEditor.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionListener;
			class FocusEvent;
		}
	}
}
namespace javax {
	namespace swing {
		class JTextField;
	}
}

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

class $export BasicComboBoxEditor : public ::javax::swing::ComboBoxEditor, public ::java::awt::event::FocusListener {
	$class(BasicComboBoxEditor, $NO_CLASS_INIT, ::javax::swing::ComboBoxEditor, ::java::awt::event::FocusListener)
public:
	BasicComboBoxEditor();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addActionListener(::java::awt::event::ActionListener* l) override;
	virtual ::javax::swing::JTextField* createEditorComponent();
	virtual void focusGained(::java::awt::event::FocusEvent* e) override;
	virtual void focusLost(::java::awt::event::FocusEvent* e) override;
	virtual ::java::awt::Component* getEditorComponent() override;
	virtual $Object* getItem() override;
	virtual void removeActionListener(::java::awt::event::ActionListener* l) override;
	virtual void selectAll() override;
	virtual void setItem(Object$* anObject) override;
	virtual $String* toString() override;
	::javax::swing::JTextField* editor = nullptr;
	$Object* oldValue = nullptr;
};

			} // basic
		} // plaf
	} // swing
} // javax

#endif // _javax_swing_plaf_basic_BasicComboBoxEditor_h_