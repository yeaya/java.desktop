#ifndef _java_awt_GridBagLayout_h_
#define _java_awt_GridBagLayout_h_
//$ class java.awt.GridBagLayout
//$ extends java.awt.LayoutManager2
//$ implements java.io.Serializable

#include <java/awt/LayoutManager2.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("EMPIRICMULTIPLIER")
#undef EMPIRICMULTIPLIER
#pragma push_macro("MAXGRIDSIZE")
#undef MAXGRIDSIZE
#pragma push_macro("MINSIZE")
#undef MINSIZE
#pragma push_macro("PREFERREDSIZE")
#undef PREFERREDSIZE

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
		class GridBagConstraints;
		class GridBagLayoutInfo;
		class Point;
		class Rectangle;
	}
}
namespace java {
	namespace util {
		class Hashtable;
	}
}

namespace java {
	namespace awt {

class $export GridBagLayout : public ::java::awt::LayoutManager2, public ::java::io::Serializable {
	$class(GridBagLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager2, ::java::io::Serializable)
public:
	GridBagLayout();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void AdjustForGravity(::java::awt::GridBagConstraints* constraints, ::java::awt::Rectangle* r);
	virtual void ArrangeGrid(::java::awt::Container* parent);
	virtual ::java::awt::GridBagLayoutInfo* GetLayoutInfo(::java::awt::Container* parent, int32_t sizeflag);
	virtual ::java::awt::Dimension* GetMinSize(::java::awt::Container* parent, ::java::awt::GridBagLayoutInfo* info);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	virtual void addLayoutComponent(::java::awt::Component* comp, Object$* constraints) override;
	virtual void adjustForGravity(::java::awt::GridBagConstraints* constraints, ::java::awt::Rectangle* r);
	void alignAboveBaseline(::java::awt::GridBagConstraints* cons, ::java::awt::Rectangle* r, int32_t cellY, int32_t cellHeight);
	void alignBelowBaseline(::java::awt::GridBagConstraints* cons, ::java::awt::Rectangle* r, int32_t cellY, int32_t cellHeight);
	void alignOnBaseline(::java::awt::GridBagConstraints* cons, ::java::awt::Rectangle* r, int32_t cellY, int32_t cellHeight);
	virtual void arrangeGrid(::java::awt::Container* parent);
	bool calculateBaseline(::java::awt::Component* c, ::java::awt::GridBagConstraints* constraints, ::java::awt::Dimension* size);
	void centerVertically(::java::awt::GridBagConstraints* cons, ::java::awt::Rectangle* r, int32_t cellHeight);
	virtual ::java::awt::GridBagConstraints* getConstraints(::java::awt::Component* comp);
	virtual float getLayoutAlignmentX(::java::awt::Container* parent) override;
	virtual float getLayoutAlignmentY(::java::awt::Container* parent) override;
	virtual $Array<int32_t, 2>* getLayoutDimensions();
	virtual ::java::awt::GridBagLayoutInfo* getLayoutInfo(::java::awt::Container* parent, int32_t sizeflag);
	virtual ::java::awt::Point* getLayoutOrigin();
	virtual $Array<double, 2>* getLayoutWeights();
	virtual ::java::awt::Dimension* getMinSize(::java::awt::Container* parent, ::java::awt::GridBagLayoutInfo* info);
	virtual void invalidateLayout(::java::awt::Container* target) override;
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual ::java::awt::Point* location(int32_t x, int32_t y);
	virtual ::java::awt::GridBagConstraints* lookupConstraints(::java::awt::Component* comp);
	virtual ::java::awt::Dimension* maximumLayoutSize(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	$longs* preInitMaximumArraySizes(::java::awt::Container* parent);
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	void removeConstraints(::java::awt::Component* comp);
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
	virtual void setConstraints(::java::awt::Component* comp, ::java::awt::GridBagConstraints* constraints);
	virtual $String* toString() override;
	static const int32_t EMPIRICMULTIPLIER = 2;
	static const int32_t MAXGRIDSIZE = 512;
	static const int32_t MINSIZE = 1;
	static const int32_t PREFERREDSIZE = 2;
	::java::util::Hashtable* comptable = nullptr;
	::java::awt::GridBagConstraints* defaultConstraints = nullptr;
	::java::awt::GridBagLayoutInfo* layoutInfo = nullptr;
	$ints* columnWidths = nullptr;
	$ints* rowHeights = nullptr;
	$doubles* columnWeights = nullptr;
	$doubles* rowWeights = nullptr;
	::java::awt::Component* componentAdjusting = nullptr;
	bool rightToLeft = false;
	static const int64_t serialVersionUID = (int64_t)0x7AA990A858EE0F3D;
};

	} // awt
} // java

#pragma pop_macro("EMPIRICMULTIPLIER")
#pragma pop_macro("MAXGRIDSIZE")
#pragma pop_macro("MINSIZE")
#pragma pop_macro("PREFERREDSIZE")

#endif // _java_awt_GridBagLayout_h_