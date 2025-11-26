#ifndef _java_awt_ScrollPane_h_
#define _java_awt_ScrollPane_h_
//$ class java.awt.ScrollPane
//$ extends java.awt.Container
//$ implements javax.accessibility.Accessible

#include <java/awt/Container.h>
#include <javax/accessibility/Accessible.h>

#pragma push_macro("SCROLLBARS_ALWAYS")
#undef SCROLLBARS_ALWAYS
#pragma push_macro("SCROLLBARS_AS_NEEDED")
#undef SCROLLBARS_AS_NEEDED
#pragma push_macro("SCROLLBARS_NEVER")
#undef SCROLLBARS_NEVER

namespace java {
	namespace awt {
		class Adjustable;
		class Component;
		class Dimension;
		class Graphics;
		class LayoutManager;
		class Point;
		class ScrollPaneAdjustable;
	}
}
namespace java {
	namespace awt {
		namespace event {
			class MouseWheelEvent;
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace javax {
	namespace accessibility {
		class AccessibleContext;
	}
}

namespace java {
	namespace awt {

class $export ScrollPane : public ::java::awt::Container, public ::javax::accessibility::Accessible {
	$class(ScrollPane, 0, ::java::awt::Container, ::javax::accessibility::Accessible)
public:
	ScrollPane();
	using ::java::awt::Container::add;
	using ::java::awt::Container::getMousePosition;
	using ::java::awt::Container::list;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t scrollbarDisplayPolicy);
	virtual void addImpl(::java::awt::Component* comp, Object$* constraints, int32_t index) override;
	virtual void addNotify() override;
	void addToPanel(::java::awt::Component* comp, Object$* constraints, int32_t index);
	virtual void autoProcessMouseWheel(::java::awt::event::MouseWheelEvent* e) override;
	virtual ::java::awt::Dimension* calculateChildSize();
	virtual $String* constructComponentName() override;
	virtual void doLayout() override;
	virtual bool eventTypeEnabled(int32_t type) override;
	virtual ::javax::accessibility::AccessibleContext* getAccessibleContext() override;
	virtual ::java::awt::Adjustable* getHAdjustable();
	virtual int32_t getHScrollbarHeight();
	virtual ::java::awt::Point* getScrollPosition();
	virtual int32_t getScrollbarDisplayPolicy();
	virtual ::java::awt::Adjustable* getVAdjustable();
	virtual int32_t getVScrollbarWidth();
	virtual ::java::awt::Dimension* getViewportSize();
	static void initIDs();
	virtual bool isWheelScrollingEnabled();
	virtual void layout() override;
	virtual $String* paramString() override;
	virtual void printComponents(::java::awt::Graphics* g) override;
	virtual void processMouseWheelEvent(::java::awt::event::MouseWheelEvent* e) override;
	void readObject(::java::io::ObjectInputStream* s);
	using ::java::awt::Container::remove;
	virtual void setLayout(::java::awt::LayoutManager* mgr) override;
	virtual void setScrollPosition(int32_t x, int32_t y);
	virtual void setScrollPosition(::java::awt::Point* p);
	virtual void setWheelScrollingEnabled(bool handleWheel);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int32_t SCROLLBARS_AS_NEEDED = 0;
	static const int32_t SCROLLBARS_ALWAYS = 1;
	static const int32_t SCROLLBARS_NEVER = 2;
	int32_t scrollbarDisplayPolicy = 0;
	::java::awt::ScrollPaneAdjustable* vAdjustable = nullptr;
	::java::awt::ScrollPaneAdjustable* hAdjustable = nullptr;
	static $String* base;
	static int32_t nameCounter;
	static const bool defaultWheelScroll = true;
	bool wheelScrollingEnabled = false;
	static const int64_t serialVersionUID = (int64_t)0x6E6B8E7E8AE24B83;
};

	} // awt
} // java

#pragma pop_macro("SCROLLBARS_ALWAYS")
#pragma pop_macro("SCROLLBARS_AS_NEEDED")
#pragma pop_macro("SCROLLBARS_NEVER")

#endif // _java_awt_ScrollPane_h_