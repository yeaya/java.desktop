#ifndef _java_awt_BorderLayout_h_
#define _java_awt_BorderLayout_h_
//$ class java.awt.BorderLayout
//$ extends java.awt.LayoutManager2
//$ implements java.io.Serializable

#include <java/awt/LayoutManager2.h>
#include <java/io/Serializable.h>

#pragma push_macro("AFTER_LAST_LINE")
#undef AFTER_LAST_LINE
#pragma push_macro("AFTER_LINE_ENDS")
#undef AFTER_LINE_ENDS
#pragma push_macro("BEFORE_FIRST_LINE")
#undef BEFORE_FIRST_LINE
#pragma push_macro("BEFORE_LINE_BEGINS")
#undef BEFORE_LINE_BEGINS
#pragma push_macro("CENTER")
#undef CENTER
#pragma push_macro("EAST")
#undef EAST
#pragma push_macro("LINE_END")
#undef LINE_END
#pragma push_macro("LINE_START")
#undef LINE_START
#pragma push_macro("NORTH")
#undef NORTH
#pragma push_macro("PAGE_END")
#undef PAGE_END
#pragma push_macro("PAGE_START")
#undef PAGE_START
#pragma push_macro("SOUTH")
#undef SOUTH
#pragma push_macro("WEST")
#undef WEST

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}

namespace java {
	namespace awt {

class $import BorderLayout : public ::java::awt::LayoutManager2, public ::java::io::Serializable {
	$class(BorderLayout, 0, ::java::awt::LayoutManager2, ::java::io::Serializable)
public:
	BorderLayout();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t hgap, int32_t vgap);
	virtual void addLayoutComponent(::java::awt::Component* comp, Object$* constraints) override;
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	::java::awt::Component* getChild($String* key, bool ltr);
	virtual $Object* getConstraints(::java::awt::Component* comp);
	virtual int32_t getHgap();
	virtual float getLayoutAlignmentX(::java::awt::Container* parent) override;
	virtual float getLayoutAlignmentY(::java::awt::Container* parent) override;
	virtual ::java::awt::Component* getLayoutComponent(Object$* constraints);
	virtual ::java::awt::Component* getLayoutComponent(::java::awt::Container* target, Object$* constraints);
	virtual int32_t getVgap();
	virtual void invalidateLayout(::java::awt::Container* target) override;
	virtual void layoutContainer(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* maximumLayoutSize(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* target) override;
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
	virtual void setHgap(int32_t hgap);
	virtual void setVgap(int32_t vgap);
	virtual $String* toString() override;
	int32_t hgap = 0;
	int32_t vgap = 0;
	::java::awt::Component* north = nullptr;
	::java::awt::Component* west = nullptr;
	::java::awt::Component* east = nullptr;
	::java::awt::Component* south = nullptr;
	::java::awt::Component* center = nullptr;
	::java::awt::Component* firstLine = nullptr;
	::java::awt::Component* lastLine = nullptr;
	::java::awt::Component* firstItem = nullptr;
	::java::awt::Component* lastItem = nullptr;
	static $String* NORTH;
	static $String* SOUTH;
	static $String* EAST;
	static $String* WEST;
	static $String* CENTER;
	static $String* BEFORE_FIRST_LINE;
	static $String* AFTER_LAST_LINE;
	static $String* BEFORE_LINE_BEGINS;
	static $String* AFTER_LINE_ENDS;
	static $String* PAGE_START;
	static $String* PAGE_END;
	static $String* LINE_START;
	static $String* LINE_END;
	static const int64_t serialVersionUID = (int64_t)0x87D7915F7073F21B;
};

	} // awt
} // java

#pragma pop_macro("AFTER_LAST_LINE")
#pragma pop_macro("AFTER_LINE_ENDS")
#pragma pop_macro("BEFORE_FIRST_LINE")
#pragma pop_macro("BEFORE_LINE_BEGINS")
#pragma pop_macro("CENTER")
#pragma pop_macro("EAST")
#pragma pop_macro("LINE_END")
#pragma pop_macro("LINE_START")
#pragma pop_macro("NORTH")
#pragma pop_macro("PAGE_END")
#pragma pop_macro("PAGE_START")
#pragma pop_macro("SOUTH")
#pragma pop_macro("WEST")

#endif // _java_awt_BorderLayout_h_