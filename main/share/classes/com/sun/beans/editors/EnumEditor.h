#ifndef _com_sun_beans_editors_EnumEditor_h_
#define _com_sun_beans_editors_EnumEditor_h_
//$ class com.sun.beans.editors.EnumEditor
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
		class List;
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

class EnumEditor : public ::java::beans::PropertyEditor {
	$class(EnumEditor, $NO_CLASS_INIT, ::java::beans::PropertyEditor)
public:
	EnumEditor();
	void init$($Class* type);
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual $String* getAsText() override;
	virtual ::java::awt::Component* getCustomEditor() override;
	virtual $String* getJavaInitializationString() override;
	virtual $StringArray* getTags() override;
	virtual $Object* getValue() override;
	virtual bool isPaintable() override;
	virtual void paintValue(::java::awt::Graphics* gfx, ::java::awt::Rectangle* box) override;
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* listener) override;
	virtual void setAsText($String* text) override;
	virtual void setValue(Object$* value) override;
	virtual bool supportsCustomEditor() override;
	::java::util::List* listeners = nullptr;
	$Class* type = nullptr;
	$StringArray* tags = nullptr;
	$Object* value = nullptr;
};

			} // editors
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_editors_EnumEditor_h_