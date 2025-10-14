#ifndef _java_beans_PropertyEditorSupport_h_
#define _java_beans_PropertyEditorSupport_h_
//$ class java.beans.PropertyEditorSupport
//$ extends java.beans.PropertyEditor

#include <java/beans/PropertyEditor.h>
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
	namespace util {
		class Vector;
	}
}

namespace java {
	namespace beans {

class $export PropertyEditorSupport : public ::java::beans::PropertyEditor {
	$class(PropertyEditorSupport, $NO_CLASS_INIT, ::java::beans::PropertyEditor)
public:
	PropertyEditorSupport();
	void init$();
	void init$(Object$* source);
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void firePropertyChange();
	virtual $String* getAsText() override;
	virtual ::java::awt::Component* getCustomEditor() override;
	virtual $String* getJavaInitializationString() override;
	virtual $Object* getSource();
	virtual $StringArray* getTags() override;
	virtual $Object* getValue() override;
	virtual bool isPaintable() override;
	virtual void paintValue(::java::awt::Graphics* gfx, ::java::awt::Rectangle* box) override;
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void setAsText($String* text) override;
	virtual void setSource(Object$* source);
	virtual void setValue(Object$* value) override;
	virtual bool supportsCustomEditor() override;
	::java::util::Vector* unsafeClone(::java::util::Vector* v);
	$Object* value = nullptr;
	$Object* source = nullptr;
	::java::util::Vector* listeners = nullptr;
};

	} // beans
} // java

#endif // _java_beans_PropertyEditorSupport_h_