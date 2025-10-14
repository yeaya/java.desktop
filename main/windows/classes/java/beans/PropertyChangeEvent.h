#ifndef _java_beans_PropertyChangeEvent_h_
#define _java_beans_PropertyChangeEvent_h_
//$ class java.beans.PropertyChangeEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace java {
	namespace lang {
		class StringBuilder;
	}
}

namespace java {
	namespace beans {

class $export PropertyChangeEvent : public ::java::util::EventObject {
	$class(PropertyChangeEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	PropertyChangeEvent();
	void init$(Object$* source, $String* propertyName, Object$* oldValue, Object$* newValue);
	virtual void appendTo(::java::lang::StringBuilder* sb);
	virtual $Object* getNewValue();
	virtual $Object* getOldValue();
	virtual $Object* getPropagationId();
	virtual $String* getPropertyName();
	virtual void setPropagationId(Object$* propagationId);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x61BCAC98A722147B;
	$String* propertyName = nullptr;
	$Object* newValue = nullptr;
	$Object* oldValue = nullptr;
	$Object* propagationId = nullptr;
};

	} // beans
} // java

#endif // _java_beans_PropertyChangeEvent_h_