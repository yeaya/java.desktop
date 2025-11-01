#ifndef _com_sun_beans_editors_FontEditor_h_
#define _com_sun_beans_editors_FontEditor_h_
//$ class com.sun.beans.editors.FontEditor
//$ extends java.awt.Panel
//$ implements java.beans.PropertyEditor

#include <java/awt/Panel.h>
#include <java/beans/PropertyEditor.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Choice;
		class Component;
		class Dimension;
		class Event;
		class Font;
		class Graphics;
		class Label;
		class Rectangle;
		class Toolkit;
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

class FontEditor : public ::java::awt::Panel, public ::java::beans::PropertyEditor {
	$class(FontEditor, $NO_CLASS_INIT, ::java::awt::Panel, ::java::beans::PropertyEditor)
public:
	FontEditor();
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
	void changeFont(::java::awt::Font* f);
	virtual $String* getAsText() override;
	virtual ::java::awt::Component* getCustomEditor() override;
	virtual $String* getJavaInitializationString() override;
	virtual $StringArray* getTags() override;
	virtual $Object* getValue() override;
	virtual bool isPaintable() override;
	using ::java::awt::Panel::list;
	virtual void paintValue(::java::awt::Graphics* gfx, ::java::awt::Rectangle* box) override;
	virtual ::java::awt::Dimension* preferredSize() override;
	using ::java::awt::Panel::remove;
	using ::java::awt::Panel::removePropertyChangeListener;
	virtual void removePropertyChangeListener(::java::beans::PropertyChangeListener* l) override;
	virtual void setAsText($String* text) override;
	virtual void setValue(Object$* o) override;
	virtual bool supportsCustomEditor() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x5D6F5F0F01DEED1D;
	::java::awt::Font* font = nullptr;
	::java::awt::Toolkit* toolkit = nullptr;
	$String* sampleText = nullptr;
	::java::awt::Label* sample = nullptr;
	::java::awt::Choice* familyChoser = nullptr;
	::java::awt::Choice* styleChoser = nullptr;
	::java::awt::Choice* sizeChoser = nullptr;
	$StringArray* fonts = nullptr;
	$StringArray* styleNames = nullptr;
	$ints* styles = nullptr;
	$ints* pointSizes = nullptr;
	::java::beans::PropertyChangeSupport* support = nullptr;
};

			} // editors
		} // beans
	} // sun
} // com

#endif // _com_sun_beans_editors_FontEditor_h_