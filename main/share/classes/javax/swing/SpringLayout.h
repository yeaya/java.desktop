#ifndef _javax_swing_SpringLayout_h_
#define _javax_swing_SpringLayout_h_
//$ class javax.swing.SpringLayout
//$ extends java.awt.LayoutManager2

#include <java/awt/LayoutManager2.h>
#include <java/lang/Array.h>

#pragma push_macro("ALL_HORIZONTAL")
#undef ALL_HORIZONTAL
#pragma push_macro("ALL_VERTICAL")
#undef ALL_VERTICAL
#pragma push_macro("BASELINE")
#undef BASELINE
#pragma push_macro("EAST")
#undef EAST
#pragma push_macro("HEIGHT")
#undef HEIGHT
#pragma push_macro("HORIZONTAL_CENTER")
#undef HORIZONTAL_CENTER
#pragma push_macro("NORTH")
#undef NORTH
#pragma push_macro("SOUTH")
#undef SOUTH
#pragma push_macro("VERTICAL_CENTER")
#undef VERTICAL_CENTER
#pragma push_macro("WEST")
#undef WEST
#pragma push_macro("WIDTH")
#undef WIDTH

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
		class Set;
	}
}
namespace javax {
	namespace swing {
		class Spring;
		class SpringLayout$Constraints;
	}
}

namespace javax {
	namespace swing {

class $export SpringLayout : public ::java::awt::LayoutManager2 {
	$class(SpringLayout, 0, ::java::awt::LayoutManager2)
public:
	SpringLayout();
	void init$();
	::javax::swing::Spring* abandonCycles(::javax::swing::Spring* s);
	static ::java::awt::Dimension* addInsets(int32_t width, int32_t height, ::java::awt::Container* p);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* c) override;
	virtual void addLayoutComponent(::java::awt::Component* component, Object$* constraints) override;
	::javax::swing::SpringLayout$Constraints* applyDefaults(::java::awt::Component* c, ::javax::swing::SpringLayout$Constraints* constraints);
	void applyDefaults(::javax::swing::SpringLayout$Constraints* constraints, $String* name1, ::javax::swing::Spring* spring1, $String* name2, ::javax::swing::Spring* spring2, ::java::util::List* history);
	virtual ::javax::swing::Spring* getConstraint($String* edgeName, ::java::awt::Component* c);
	virtual ::javax::swing::SpringLayout$Constraints* getConstraints(::java::awt::Component* c);
	virtual float getLayoutAlignmentX(::java::awt::Container* p) override;
	virtual float getLayoutAlignmentY(::java::awt::Container* p) override;
	virtual void invalidateLayout(::java::awt::Container* p) override;
	virtual bool isCyclic(::javax::swing::Spring* s);
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* maximumLayoutSize(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	virtual void putConstraint($String* e1, ::java::awt::Component* c1, int32_t pad, $String* e2, ::java::awt::Component* c2);
	virtual void putConstraint($String* e1, ::java::awt::Component* c1, ::javax::swing::Spring* s, $String* e2, ::java::awt::Component* c2);
	void putConstraint($String* e, ::java::awt::Component* c, ::javax::swing::Spring* s);
	void putConstraints(::java::awt::Component* component, ::javax::swing::SpringLayout$Constraints* constraints);
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	void resetCyclicStatuses();
	void setParent(::java::awt::Container* p);
	::java::util::Map* componentConstraints = nullptr;
	::javax::swing::Spring* cyclicReference = nullptr;
	::java::util::Set* cyclicSprings = nullptr;
	::java::util::Set* acyclicSprings = nullptr;
	static $String* NORTH;
	static $String* SOUTH;
	static $String* EAST;
	static $String* WEST;
	static $String* HORIZONTAL_CENTER;
	static $String* VERTICAL_CENTER;
	static $String* BASELINE;
	static $String* WIDTH;
	static $String* HEIGHT;
	static $StringArray* ALL_HORIZONTAL;
	static $StringArray* ALL_VERTICAL;
};

	} // swing
} // javax

#pragma pop_macro("ALL_HORIZONTAL")
#pragma pop_macro("ALL_VERTICAL")
#pragma pop_macro("BASELINE")
#pragma pop_macro("EAST")
#pragma pop_macro("HEIGHT")
#pragma pop_macro("HORIZONTAL_CENTER")
#pragma pop_macro("NORTH")
#pragma pop_macro("SOUTH")
#pragma pop_macro("VERTICAL_CENTER")
#pragma pop_macro("WEST")
#pragma pop_macro("WIDTH")

#endif // _javax_swing_SpringLayout_h_