#ifndef _java_beans_PropertyEditor_h_
#define _java_beans_PropertyEditor_h_
//$ interface java.beans.PropertyEditor
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
		class Graphics;
		class Rectangle;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
	}
}

namespace java {
	namespace beans {

class $import PropertyEditor : public ::java::lang::Object {
	$interface(PropertyEditor, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) {}
	virtual $String* getAsText() {return nullptr;}
	virtual ::java::awt::Component* getCustomEditor() {return nullptr;}
	virtual $String* getJavaInitializationString() {return nullptr;}
	virtual $StringArray* getTags() {return nullptr;}
	virtual $Object* getValue() {return nullptr;}
	virtual bool isPaintable() {return false;}
	virtual void paintValue(::java::awt::Graphics* gfx, ::java::awt::Rectangle* box) {}
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) {}
	virtual void setAsText($String* text) {}
	virtual void setValue(Object$* value) {}
	virtual bool supportsCustomEditor() {return false;}
};

	} // beans
} // java

#endif // _java_beans_PropertyEditor_h_