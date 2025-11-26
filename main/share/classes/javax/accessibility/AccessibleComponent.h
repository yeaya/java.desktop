#ifndef _javax_accessibility_AccessibleComponent_h_
#define _javax_accessibility_AccessibleComponent_h_
//$ interface javax.accessibility.AccessibleComponent
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		class Color;
		class Cursor;
		class Dimension;
		class Font;
		class FontMetrics;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class FocusListener;
		}
	}
}
namespace javax {
	namespace accessibility {
		class Accessible;
	}
}

namespace javax {
	namespace accessibility {

class $export AccessibleComponent : public ::java::lang::Object {
	$interface(AccessibleComponent, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void addFocusListener(::java::awt::event::FocusListener* l) {}
	virtual bool contains(::java::awt::Point* p) {return false;}
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p) {return nullptr;}
	virtual ::java::awt::Color* getBackground() {return nullptr;}
	virtual ::java::awt::Rectangle* getBounds() {return nullptr;}
	virtual ::java::awt::Cursor* getCursor() {return nullptr;}
	virtual ::java::awt::Font* getFont() {return nullptr;}
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) {return nullptr;}
	virtual ::java::awt::Color* getForeground() {return nullptr;}
	virtual ::java::awt::Point* getLocation() {return nullptr;}
	virtual ::java::awt::Point* getLocationOnScreen() {return nullptr;}
	virtual ::java::awt::Dimension* getSize() {return nullptr;}
	virtual bool isEnabled() {return false;}
	virtual bool isFocusTraversable() {return false;}
	virtual bool isShowing() {return false;}
	virtual bool isVisible() {return false;}
	virtual void removeFocusListener(::java::awt::event::FocusListener* l) {}
	virtual void requestFocus() {}
	virtual void setBackground(::java::awt::Color* c) {}
	virtual void setBounds(::java::awt::Rectangle* r) {}
	virtual void setCursor(::java::awt::Cursor* cursor) {}
	virtual void setEnabled(bool b) {}
	virtual void setFont(::java::awt::Font* f) {}
	virtual void setForeground(::java::awt::Color* c) {}
	virtual void setLocation(::java::awt::Point* p) {}
	virtual void setSize(::java::awt::Dimension* d) {}
	virtual void setVisible(bool b) {}
};

	} // accessibility
} // javax

#endif // _javax_accessibility_AccessibleComponent_h_