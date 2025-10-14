#ifndef _javax_swing_LayoutFocusTraversalPolicy_h_
#define _javax_swing_LayoutFocusTraversalPolicy_h_
//$ class javax.swing.LayoutFocusTraversalPolicy
//$ extends javax.swing.SortingFocusTraversalPolicy
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/swing/SortingFocusTraversalPolicy.h>

namespace java {
	namespace awt {
		class Component;
		class Container;
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace util {
		class Comparator;
	}
}
namespace javax {
	namespace swing {
		class SwingDefaultFocusTraversalPolicy;
	}
}

namespace javax {
	namespace swing {

class $import LayoutFocusTraversalPolicy : public ::javax::swing::SortingFocusTraversalPolicy, public ::java::io::Serializable {
	$class(LayoutFocusTraversalPolicy, 0, ::javax::swing::SortingFocusTraversalPolicy, ::java::io::Serializable)
public:
	LayoutFocusTraversalPolicy();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	using ::javax::swing::SortingFocusTraversalPolicy::getInitialComponent;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::java::util::Comparator* c);
	virtual bool accept(::java::awt::Component* aComponent) override;
	virtual ::java::awt::Component* getComponentAfter(::java::awt::Container* aContainer, ::java::awt::Component* aComponent) override;
	virtual ::java::awt::Component* getComponentBefore(::java::awt::Container* aContainer, ::java::awt::Component* aComponent) override;
	virtual ::java::awt::Component* getFirstComponent(::java::awt::Container* aContainer) override;
	virtual ::java::awt::Component* getLastComponent(::java::awt::Container* aContainer) override;
	void readObject(::java::io::ObjectInputStream* in);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static ::javax::swing::SwingDefaultFocusTraversalPolicy* fitnessTestPolicy;
};

	} // swing
} // javax

#endif // _javax_swing_LayoutFocusTraversalPolicy_h_