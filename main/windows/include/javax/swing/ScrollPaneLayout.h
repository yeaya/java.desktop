#ifndef _javax_swing_ScrollPaneLayout_h_
#define _javax_swing_ScrollPaneLayout_h_
//$ class javax.swing.ScrollPaneLayout
//$ extends java.awt.LayoutManager
//$ implements javax.swing.ScrollPaneConstants,java.io.Serializable

#include <java/awt/LayoutManager.h>
#include <java/io/Serializable.h>
#include <javax/swing/ScrollPaneConstants.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
		class Insets;
		class Rectangle;
	}
}
namespace javax {
	namespace swing {
		class JScrollBar;
		class JScrollPane;
		class JViewport;
	}
}

namespace javax {
	namespace swing {

class $import ScrollPaneLayout : public ::java::awt::LayoutManager, public ::javax::swing::ScrollPaneConstants, public ::java::io::Serializable {
	$class(ScrollPaneLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager, ::javax::swing::ScrollPaneConstants, ::java::io::Serializable)
public:
	ScrollPaneLayout();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual void addLayoutComponent($String* s, ::java::awt::Component* c) override;
	virtual ::java::awt::Component* addSingletonComponent(::java::awt::Component* oldC, ::java::awt::Component* newC);
	void adjustForHSB(bool wantsHSB, ::java::awt::Rectangle* available, ::java::awt::Rectangle* hsbR, ::java::awt::Insets* vpbInsets);
	void adjustForVSB(bool wantsVSB, ::java::awt::Rectangle* available, ::java::awt::Rectangle* vsbR, ::java::awt::Insets* vpbInsets, bool leftToRight);
	virtual ::javax::swing::JViewport* getColumnHeader();
	virtual ::java::awt::Component* getCorner($String* key);
	virtual ::javax::swing::JScrollBar* getHorizontalScrollBar();
	virtual int32_t getHorizontalScrollBarPolicy();
	virtual ::javax::swing::JViewport* getRowHeader();
	virtual ::javax::swing::JScrollBar* getVerticalScrollBar();
	virtual int32_t getVerticalScrollBarPolicy();
	virtual ::javax::swing::JViewport* getViewport();
	virtual ::java::awt::Rectangle* getViewportBorderBounds(::javax::swing::JScrollPane* scrollpane);
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	virtual void setHorizontalScrollBarPolicy(int32_t x);
	virtual void setVerticalScrollBarPolicy(int32_t x);
	virtual void syncWithScrollPane(::javax::swing::JScrollPane* sp);
	virtual $String* toString() override;
	::javax::swing::JViewport* viewport = nullptr;
	::javax::swing::JScrollBar* vsb = nullptr;
	::javax::swing::JScrollBar* hsb = nullptr;
	::javax::swing::JViewport* rowHead = nullptr;
	::javax::swing::JViewport* colHead = nullptr;
	::java::awt::Component* lowerLeft = nullptr;
	::java::awt::Component* lowerRight = nullptr;
	::java::awt::Component* upperLeft = nullptr;
	::java::awt::Component* upperRight = nullptr;
	int32_t vsbPolicy = 0;
	int32_t hsbPolicy = 0;
};

	} // swing
} // javax

#endif // _javax_swing_ScrollPaneLayout_h_