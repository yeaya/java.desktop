#ifndef _java_awt_CardLayout_h_
#define _java_awt_CardLayout_h_
//$ class java.awt.CardLayout
//$ extends java.awt.LayoutManager2
//$ implements java.io.Serializable

#include <java/awt/LayoutManager2.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>

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
		class ObjectOutputStream;
		class ObjectStreamField;
	}
}
namespace java {
	namespace util {
		class Vector;
	}
}

namespace java {
	namespace awt {

class $export CardLayout : public ::java::awt::LayoutManager2, public ::java::io::Serializable {
	$class(CardLayout, 0, ::java::awt::LayoutManager2, ::java::io::Serializable)
public:
	CardLayout();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(int32_t hgap, int32_t vgap);
	virtual void addLayoutComponent(::java::awt::Component* comp, Object$* constraints) override;
	virtual void addLayoutComponent($String* name, ::java::awt::Component* comp) override;
	virtual void checkLayout(::java::awt::Container* parent);
	virtual void first(::java::awt::Container* parent);
	virtual int32_t getHgap();
	virtual float getLayoutAlignmentX(::java::awt::Container* parent) override;
	virtual float getLayoutAlignmentY(::java::awt::Container* parent) override;
	virtual int32_t getVgap();
	virtual void invalidateLayout(::java::awt::Container* target) override;
	virtual void last(::java::awt::Container* parent);
	virtual void layoutContainer(::java::awt::Container* parent) override;
	virtual ::java::awt::Dimension* maximumLayoutSize(::java::awt::Container* target) override;
	virtual ::java::awt::Dimension* minimumLayoutSize(::java::awt::Container* parent) override;
	virtual void next(::java::awt::Container* parent);
	virtual ::java::awt::Dimension* preferredLayoutSize(::java::awt::Container* parent) override;
	virtual void previous(::java::awt::Container* parent);
	void readObject(::java::io::ObjectInputStream* s);
	virtual void removeLayoutComponent(::java::awt::Component* comp) override;
	virtual void setHgap(int32_t hgap);
	virtual void setVgap(int32_t vgap);
	virtual void show(::java::awt::Container* parent, $String* name);
	virtual void showDefaultComponent(::java::awt::Container* parent);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* s);
	static const int64_t serialVersionUID = (int64_t)0xC3EF283B778BA917;
	::java::util::Vector* vector = nullptr;
	int32_t currentCard = 0;
	int32_t hgap = 0;
	int32_t vgap = 0;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
};

	} // awt
} // java

#endif // _java_awt_CardLayout_h_