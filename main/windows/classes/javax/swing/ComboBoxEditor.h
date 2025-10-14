#ifndef _javax_swing_ComboBoxEditor_h_
#define _javax_swing_ComboBoxEditor_h_
//$ interface javax.swing.ComboBoxEditor
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Component;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class ActionListener;
		}
	}
}

namespace javax {
	namespace swing {

class $export ComboBoxEditor : public ::java::lang::Object {
	$interface(ComboBoxEditor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addActionListener(::java::awt::event::ActionListener* l) {}
	virtual ::java::awt::Component* getEditorComponent() {return nullptr;}
	virtual $Object* getItem() {return nullptr;}
	virtual void removeActionListener(::java::awt::event::ActionListener* l) {}
	virtual void selectAll() {}
	virtual void setItem(Object$* anObject) {}
};

	} // swing
} // javax

#endif // _javax_swing_ComboBoxEditor_h_