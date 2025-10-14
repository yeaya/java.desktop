#ifndef _java_beans_PropertyChangeSupport_h_
#define _java_beans_PropertyChangeSupport_h_
//$ class java.beans.PropertyChangeSupport
//$ extends java.io.Serializable

#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace beans {
		class PropertyChangeEvent;
		class PropertyChangeListener;
		class PropertyChangeSupport$PropertyChangeListenerMap;
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

class $import PropertyChangeSupport : public ::java::io::Serializable {
	$class(PropertyChangeSupport, 0, ::java::io::Serializable)
public:
	PropertyChangeSupport();
	void init$(Object$* sourceBean);
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual void addPropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener);
	static void fire($Array<::java::beans::PropertyChangeListener>* listeners, ::java::beans::PropertyChangeEvent* event);
	virtual void fireIndexedPropertyChange($String* propertyName, int32_t index, Object$* oldValue, Object$* newValue);
	virtual void fireIndexedPropertyChange($String* propertyName, int32_t index, int32_t oldValue, int32_t newValue);
	virtual void fireIndexedPropertyChange($String* propertyName, int32_t index, bool oldValue, bool newValue);
	virtual void firePropertyChange($String* propertyName, Object$* oldValue, Object$* newValue);
	virtual void firePropertyChange($String* propertyName, int32_t oldValue, int32_t newValue);
	virtual void firePropertyChange($String* propertyName, bool oldValue, bool newValue);
	virtual void firePropertyChange(::java::beans::PropertyChangeEvent* event);
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners();
	virtual $Array<::java::beans::PropertyChangeListener>* getPropertyChangeListeners($String* propertyName);
	virtual bool hasListeners($String* propertyName);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener);
	virtual void removePropertyChangeListener($String* propertyName, ::java::beans::PropertyChangeListener* listener);
	void writeObject(::java::io::ObjectOutputStream* s);
	::java::beans::PropertyChangeSupport$PropertyChangeListenerMap* map = nullptr;
	$Object* source = nullptr;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	static const int64_t serialVersionUID = (int64_t)0x58D5D264574860BB;
};

	} // beans
} // java

#endif // _java_beans_PropertyChangeSupport_h_