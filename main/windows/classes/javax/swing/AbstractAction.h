#ifndef _javax_swing_AbstractAction_h_
#define _javax_swing_AbstractAction_h_
//$ class javax.swing.AbstractAction
//$ extends javax.swing.Action
//$ implements java.lang.Cloneable,java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>
#include <javax/swing/Action.h>

#pragma push_macro("RECONFIGURE_ON_NULL")
#undef RECONFIGURE_ON_NULL

namespace java {
	namespace beans {
		class PropertyChangeEvent;
		class PropertyChangeListener;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace javax {
	namespace swing {
		class ArrayTable;
		class Icon;
		class JComponent;
	}
}
namespace javax {
	namespace swing {
		namespace event {
			class SwingPropertyChangeSupport;
		}
	}
}

namespace javax {
	namespace swing {

class $export AbstractAction : public ::javax::swing::Action, public ::java::lang::Cloneable, public ::java::io::Serializable {
	$class(AbstractAction, $NO_CLASS_INIT, ::javax::swing::Action, ::java::lang::Cloneable, ::java::io::Serializable)
public:
	AbstractAction();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$($String* name);
	void init$($String* name, ::javax::swing::Icon* icon);
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual $Object* clone() override;
	virtual void firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue);
	virtual $ObjectArray* getKeys();
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners();
	virtual $Object* getValue($String* key) override;
	static bool hasSelectedKey(::javax::swing::Action* a);
	virtual bool isEnabled() override;
	static bool isSelected(::javax::swing::Action* a);
	virtual void putValue($String* key, Object$* newValue) override;
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void setEnabled(bool newValue) override;
	static void setEnabledFromAction(::javax::swing::JComponent* c, ::javax::swing::Action* a);
	static void setToolTipTextFromAction(::javax::swing::JComponent* c, ::javax::swing::Action* a);
	static bool shouldReconfigure(::java::beans::PropertyChangeEvent* e);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static ::java::lang::Boolean* RECONFIGURE_ON_NULL;
	bool enabled = false;
	::javax::swing::ArrayTable* arrayTable = nullptr;
	::javax::swing::event::SwingPropertyChangeSupport* changeSupport = nullptr;
};

	} // swing
} // javax

#pragma pop_macro("RECONFIGURE_ON_NULL")

#endif // _javax_swing_AbstractAction_h_