#ifndef _java_awt_ContainerOrderFocusTraversalPolicy_h_
#define _java_awt_ContainerOrderFocusTraversalPolicy_h_
//$ class java.awt.ContainerOrderFocusTraversalPolicy
//$ extends java.awt.FocusTraversalPolicy
//$ implements java.io.Serializable

#include <java/awt/FocusTraversalPolicy.h>
#include <java/io/Serializable.h>

#pragma push_macro("BACKWARD_TRAVERSAL")
#undef BACKWARD_TRAVERSAL
#pragma push_macro("FORWARD_TRAVERSAL")
#undef FORWARD_TRAVERSAL

namespace java {
	namespace awt {
		class Component;
		class Container;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace java {
	namespace awt {

class $import ContainerOrderFocusTraversalPolicy : public ::java::awt::FocusTraversalPolicy, public ::java::io::Serializable {
	$class(ContainerOrderFocusTraversalPolicy, 0, ::java::awt::FocusTraversalPolicy, ::java::io::Serializable)
public:
	ContainerOrderFocusTraversalPolicy();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual bool accept(::java::awt::Component* aComponent);
	void enumerateCycle(::java::awt::Container* container, ::java::util::List* cycle);
	virtual ::java::awt::Component* getComponentAfter(::java::awt::Container* aContainer, ::java::awt::Component* aComponent) override;
	virtual ::java::awt::Component* getComponentBefore(::java::awt::Container* aContainer, ::java::awt::Component* aComponent) override;
	::java::awt::Component* getComponentDownCycle(::java::awt::Component* comp, int32_t traversalDirection);
	int32_t getComponentIndex(::java::util::List* cycle, ::java::awt::Component* aComponent);
	virtual ::java::awt::Component* getDefaultComponent(::java::awt::Container* aContainer) override;
	virtual ::java::awt::Component* getFirstComponent(::java::awt::Container* aContainer) override;
	::java::util::List* getFocusTraversalCycle(::java::awt::Container* aContainer);
	virtual bool getImplicitDownCycleTraversal();
	virtual ::java::awt::Component* getLastComponent(::java::awt::Container* aContainer) override;
	::java::awt::Container* getTopmostProvider(::java::awt::Container* focusCycleRoot, ::java::awt::Component* aComponent);
	virtual void setImplicitDownCycleTraversal(bool implicitDownCycleTraversal);
	virtual $String* toString() override;
	static ::sun::util::logging::PlatformLogger* log;
	static const int32_t FORWARD_TRAVERSAL = 0;
	static const int32_t BACKWARD_TRAVERSAL = 1;
	static const int64_t serialVersionUID = (int64_t)0x06C1EFA1FE0F814F;
	bool implicitDownCycleTraversal = false;
	::java::awt::Container* cachedRoot = nullptr;
	::java::util::List* cachedCycle = nullptr;
};

	} // awt
} // java

#pragma pop_macro("BACKWARD_TRAVERSAL")
#pragma pop_macro("FORWARD_TRAVERSAL")

#endif // _java_awt_ContainerOrderFocusTraversalPolicy_h_