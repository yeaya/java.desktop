#ifndef _java_awt_GridLayout_h_
#define _java_awt_GridLayout_h_
//$ class java.awt.GridLayout
//$ extends java.awt.LayoutManager
//$ implements java.io.Serializable

#include <java/awt/LayoutManager.h>
#include <java/io/Serializable.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}

namespace java {
	namespace awt {

class $import GridLayout : public ::java::awt::LayoutManager, public ::java::io::Serializable {
	$class(GridLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager, ::java::io::Serializable)
public:
	GridLayout();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t rows, int32_t cols);
	void init$(int32_t rows, int32_t cols, int32_t hgap, int32_t vgap);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	virtual int32_t getColumns();
	virtual int32_t getHgap();
	virtual int32_t getRows();
	virtual int32_t getVgap();
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
	virtual void setColumns(int32_t cols);
	virtual void setHgap(int32_t hgap);
	virtual void setRows(int32_t rows);
	virtual void setVgap(int32_t vgap);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x9923FAEB4BDC16EB;
	int32_t hgap = 0;
	int32_t vgap = 0;
	int32_t rows = 0;
	int32_t cols = 0;
};

	} // awt
} // java

#endif // _java_awt_GridLayout_h_