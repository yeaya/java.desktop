#ifndef _javax_swing_LegacyGlueFocusTraversalPolicy_h_
#define _javax_swing_LegacyGlueFocusTraversalPolicy_h_
//$ class javax.swing.LegacyGlueFocusTraversalPolicy
//$ extends java.awt.FocusTraversalPolicy
//$ implements java.io.Serializable

#include <java/awt/FocusTraversalPolicy.h>
#include <java/io/Serializable.h>

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
		class HashMap;
	}
}
namespace javax {
	namespace swing {
		class DefaultFocusManager;
	}
}

namespace javax {
	namespace swing {

class LegacyGlueFocusTraversalPolicy : public ::java::awt::FocusTraversalPolicy, public ::java::io::Serializable {
	$class(LegacyGlueFocusTraversalPolicy, $NO_CLASS_INIT, ::java::awt::FocusTraversalPolicy, ::java::io::Serializable)
public:
	LegacyGlueFocusTraversalPolicy();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::java::awt::FocusTraversalPolicy* delegatePolicy);
	void init$(::javax::swing::DefaultFocusManager* delegateManager);
	bool accept(::java::awt::Component* aComponent);
	virtual ::java::awt::Component* getComponentAfter(::java::awt::Container* focusCycleRoot, ::java::awt::Component* aComponent) override;
	virtual ::java::awt::Component* getComponentBefore(::java::awt::Container* focusCycleRoot, ::java::awt::Component* aComponent) override;
	virtual ::java::awt::Component* getDefaultComponent(::java::awt::Container* focusCycleRoot) override;
	virtual ::java::awt::Component* getFirstComponent(::java::awt::Container* focusCycleRoot) override;
	virtual ::java::awt::Component* getLastComponent(::java::awt::Container* focusCycleRoot) override;
	void readObject(::java::io::ObjectInputStream* in);
	void setNextFocusableComponent(::java::awt::Component* left, ::java::awt::Component* right);
	virtual $String* toString() override;
	void unsetNextFocusableComponent(::java::awt::Component* left, ::java::awt::Component* right);
	void writeObject(::java::io::ObjectOutputStream* out);
	::java::awt::FocusTraversalPolicy* delegatePolicy = nullptr;
	::javax::swing::DefaultFocusManager* delegateManager = nullptr;
	::java::util::HashMap* forwardMap = nullptr;
	::java::util::HashMap* backwardMap = nullptr;
};

	} // swing
} // javax

#endif // _javax_swing_LegacyGlueFocusTraversalPolicy_h_