#ifndef _javax_swing_colorchooser_SmartGridLayout_h_
#define _javax_swing_colorchooser_SmartGridLayout_h_
//$ class javax.swing.colorchooser.SmartGridLayout
//$ extends java.awt.LayoutManager
//$ implements java.io.Serializable

#include <java/awt/LayoutManager.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}

namespace javax {
	namespace swing {
		namespace colorchooser {

class SmartGridLayout : public ::java::awt::LayoutManager, public ::java::io::Serializable {
	$class(SmartGridLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager, ::java::io::Serializable)
public:
	SmartGridLayout();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(int32_t numColumns, int32_t numRows);
	virtual void addLayoutComponent($String* s, ::java::awt::Component* c) override;
	void buildLayoutGrid(::java::awt::Container* c);
	int32_t computeColumnWidth(int32_t columnNum);
	int32_t computeRowHeight(int32_t rowNum);
	virtual void layoutContainer(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* c) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* c) override;
	virtual void removeLayoutComponent(::java::awt::Component* c) override;
	virtual $String* toString() override;
	int32_t rows = 0;
	int32_t columns = 0;
	int32_t xGap = 0;
	int32_t yGap = 0;
	int32_t componentCount = 0;
	$Array<::java::awt::Component, 2>* layoutGrid = nullptr;
};

		} // colorchooser
	} // swing
} // javax

#endif // _javax_swing_colorchooser_SmartGridLayout_h_