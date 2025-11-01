#ifndef _java_awt_List$AccessibleAWTList$AccessibleAWTListChild_h_
#define _java_awt_List$AccessibleAWTList$AccessibleAWTListChild_h_
//$ class java.awt.List$AccessibleAWTList$AccessibleAWTListChild
//$ extends java.awt.Component$AccessibleAWTComponent
//$ implements javax.accessibility.Accessible

#include <java/awt/Component$AccessibleAWTComponent.h>
#include <javax/accessibility/Accessible.h>

namespace java {
	namespace awt {
		class Color;
		class Cursor;
		class Dimension;
		class Font;
		class FontMetrics;
		class List;
		class List$AccessibleAWTList;
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
namespace java {
	namespace util {
		class Locale;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
		class AccessibleRole;
		class AccessibleStateSet;
	}
}

namespace java {
	namespace awt {

class $import List$AccessibleAWTList$AccessibleAWTListChild : public ::java::awt::Component$AccessibleAWTComponent, public ::javax::accessibility::Accessible {
	$class(List$AccessibleAWTList$AccessibleAWTListChild, $NO_CLASS_INIT, ::java::awt::Component$AccessibleAWTComponent, ::javax::accessibility::Accessible)
public:
	List$AccessibleAWTList$AccessibleAWTListChild();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::List$AccessibleAWTList* this$1, ::java::awt::List* parent, int32_t indexInParent);
	virtual void addFocusListener(::java::awt::event::FocusListener* l) override;
	virtual bool contains(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleAt(::java::awt::Point* p) override;
	virtual ::javax::accessibility::Accessible* getAccessibleChild(int32_t i) override;
	virtual int32_t getAccessibleChildrenCount() override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual int32_t getAccessibleIndexInParent() override;
	virtual ::javax::accessibility::AccessibleRole* getAccessibleRole() override;
	virtual ::javax::accessibility::AccessibleStateSet* getAccessibleStateSet() override;
	virtual ::java::awt::Color* getBackground() override;
	virtual ::java::awt::Rectangle* getBounds() override;
	virtual ::java::awt::Cursor* getCursor() override;
	virtual ::java::awt::Font* getFont() override;
	virtual ::java::awt::FontMetrics* getFontMetrics(::java::awt::Font* f) override;
	virtual ::java::awt::Color* getForeground() override;
	virtual ::java::util::Locale* getLocale() override;
	virtual ::java::awt::Point* getLocation() override;
	virtual ::java::awt::Point* getLocationOnScreen() override;
	virtual ::java::awt::Dimension* getSize() override;
	virtual bool isEnabled() override;
	virtual bool isFocusTraversable() override;
	virtual bool isShowing() override;
	virtual bool isVisible() override;
	virtual void removeFocusListener(::java::awt::event::FocusListener* l) override;
	virtual void requestFocus() override;
	virtual void setBackground(::java::awt::Color* c) override;
	virtual void setBounds(::java::awt::Rectangle* r) override;
	virtual void setCursor(::java::awt::Cursor* cursor) override;
	virtual void setEnabled(bool b) override;
	virtual void setFont(::java::awt::Font* f) override;
	virtual void setForeground(::java::awt::Color* c) override;
	virtual void setLocation(::java::awt::Point* p) override;
	virtual void setSize(::java::awt::Dimension* d) override;
	virtual void setVisible(bool b) override;
	virtual $String* toString() override;
	::java::awt::List$AccessibleAWTList* this$1 = nullptr;
	static const int64_t serialVersionUID = (int64_t)0x3D3AA779AECBE01D;
	::java::awt::List* parent = nullptr;
	int32_t indexInParent = 0;
};

	} // awt
} // java

#endif // _java_awt_List$AccessibleAWTList$AccessibleAWTListChild_h_