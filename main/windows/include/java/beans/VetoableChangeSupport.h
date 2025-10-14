#ifndef _java_beans_VetoableChangeSupport_h_
#define _java_beans_VetoableChangeSupport_h_
//$ class java.beans.VetoableChangeSupport
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
		class VetoableChangeListener;
		class VetoableChangeSupport$VetoableChangeListenerMap;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}

namespace java {
	namespace beans {

class $import VetoableChangeSupport : public ::java::io::Serializable {
	$class(VetoableChangeSupport, 0, ::java::io::Serializable)
public:
	VetoableChangeSupport();
	void init$(Object$* sourceBean);
	virtual void addVetoableChangeListener(::java::beans::VetoableChangeListener* listener);
	virtual void addVetoableChangeListener($String* propertyName, ::java::beans::VetoableChangeListener* listener);
	virtual void fireVetoableChange($String* propertyName, Object$* oldValue, Object$* newValue);
	virtual void fireVetoableChange($String* propertyName, int32_t oldValue, int32_t newValue);
	virtual void fireVetoableChange($String* propertyName, bool oldValue, bool newValue);
	virtual void fireVetoableChange(::java::beans::PropertyChangeEvent* event);
	virtual $Array<::java::beans::VetoableChangeListener>* getVetoableChangeListeners();
	virtual $Array<::java::beans::VetoableChangeListener>* getVetoableChangeListeners($String* propertyName);
	virtual bool hasListeners($String* propertyName);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removeVetoableChangeListener(::java::beans::VetoableChangeListener* listener);
	virtual void removeVetoableChangeListener($String* propertyName, ::java::beans::VetoableChangeListener* listener);
	void writeObject(::java::io::ObjectOutputStream* s);
	::java::beans::VetoableChangeSupport$VetoableChangeListenerMap* map = nullptr;
	$Object* source = nullptr;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static const int64_t serialVersionUID = (int64_t)0xB95BF022CA752F3F;
};

	} // beans
} // java

#endif // _java_beans_VetoableChangeSupport_h_