#ifndef _java_awt_FlowLayout_h_
#define _java_awt_FlowLayout_h_
//$ class java.awt.FlowLayout
//$ extends java.awt.LayoutManager
//$ implements java.io.Serializable

#include <java/awt/LayoutManager.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>

#pragma push_macro("CENTER")
#undef CENTER
#pragma push_macro("LEADING")
#undef LEADING
#pragma push_macro("LEFT")
#undef LEFT
#pragma push_macro("RIGHT")
#undef RIGHT
#pragma push_macro("TRAILING")
#undef TRAILING

namespace java {
	namespace awt {
		class Component;
		class Container;
		class Dimension;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
	}
}

namespace java {
	namespace awt {

class $import FlowLayout : public ::java::awt::LayoutManager, public ::java::io::Serializable {
	$class(FlowLayout, $NO_CLASS_INIT, ::java::awt::LayoutManager, ::java::io::Serializable)
public:
	FlowLayout();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t align);
	void init$(int32_t align, int32_t hgap, int32_t vgap);
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	virtual bool getAlignOnBaseline();
	virtual int32_t getAlignment();
	virtual int32_t getHgap();
	virtual int32_t getVgap();
	virtual void layoutContainer(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* target) override;
	int32_t moveComponents(::java::awt::Container* target, int32_t x, int32_t y, int32_t width, int32_t height, int32_t rowStart, int32_t rowEnd, bool ltr, bool useBaseline, $ints* ascent, $ints* descent);
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* target) override;
	void readObject(::java::io::ObjectInputStream* stream);
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
	virtual void setAlignOnBaseline(bool alignOnBaseline);
	virtual void setAlignment(int32_t align);
	virtual void setHgap(int32_t hgap);
	virtual void setVgap(int32_t vgap);
	virtual $String* toString() override;
	static const int32_t LEFT = 0;
	static const int32_t CENTER = 1;
	static const int32_t RIGHT = 2;
	static const int32_t LEADING = 3;
	static const int32_t TRAILING = 4;
	int32_t align = 0;
	int32_t newAlign = 0;
	int32_t hgap = 0;
	int32_t vgap = 0;
	bool alignOnBaseline = false;
	static const int64_t serialVersionUID = (int64_t)0x9B364B025BF90239;
	static const int32_t currentSerialVersion = 1;
	int32_t serialVersionOnStream = 0;
};

	} // awt
} // java

#pragma pop_macro("CENTER")
#pragma pop_macro("LEADING")
#pragma pop_macro("LEFT")
#pragma pop_macro("RIGHT")
#pragma pop_macro("TRAILING")

#endif // _java_awt_FlowLayout_h_