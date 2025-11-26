#ifndef _com_sun_beans_editors_ColorEditor_h_
#define _com_sun_beans_editors_ColorEditor_h_
//$ class com.sun.beans.editors.ColorEditor
//$ extends java.awt.Panel
//$ implements java.beans.PropertyEditor

#include <java/awt/Panel.h>
#include <java/beans/PropertyEditor.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Canvas;
		class Choice;
		class Color;
		class Component;
		class Dimension;
		class Event;
		class Graphics;
		class Rectangle;
		class TextField;
	}
}
namespace java {
	namespace beans {
		class PropertyChangeListener;
		class PropertyChangeSupport;
	}
}

namespace com {
	namespace sun {
		namespace beans {
			namespace editors {

class ColorEditor : public ::java::awt::Panel, public ::java::beans::PropertyEditor {
	$class(ColorEditor, $NO_CLASS_INIT, ::java::awt::Panel, ::java::beans::PropertyEditor)
public:
	ColorEditor();
	using ::java::awt::Panel::add;
	using ::java::awt::Panel::getMousePosition;
	using ::java::awt::Panel::addPropertyChangeListener;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool action(::java::awt::Event* e, Object$* arg) override;
	virtual void addPropertyChangeListener(::java::beans::PropertyChangeListener* l) override;
	void changeColor(::java::awt::Color* c);
	virtual $String* getAsText() override;
	virtual ::java::awt::Component* getCustomEditor() override;
	virtual $String* getJavaInitializationString() override;
	virtual $StringArray* getTags() override;
	virtual $Object* getValue() override;
	virtual bool isPaintable() override;
	virtual bool keyUp(::java::awt::Event* e, int32_t key) override;
	using ::java::awt::Panel::list;
	virtual void paintValue(::java::awt::Graphics* gfx, ::java::awt::Rectangle* box) override;
	virtual ::java::awt::Dimension* preferredSize() override;
	using ::java::awt::Panel::remove;
	using ::java::awt::Panel::removePropertyChangeListener;
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* l) override;
	virtual void setAsText($String* s) override;
	virtual void setValue(Object$* o) override;
	virtual bool supportsCustomEditor() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x18B84BF8EF5AE816;
	$StringArray* colorNames = nullptr;
	$Array<::java::awt::Color>* colors = nullptr;
	::java::awt::Canvas* sample = nullptr;
	int32_t sampleHeight = 0;
	int32_t sampleWidth = 0;
	int32_t hPad = 0;
	int32_t ourWidth = 0;
	::java::awt::Color* color = nullptr;
	::java::awt::TextField* text = nullptr;
	::java::awt::Choice* choser = nullptr;
	::java::beans::PropertyChangeSupport* support = nullptr;
};

			} // editors
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_editors_ColorEditor_h_