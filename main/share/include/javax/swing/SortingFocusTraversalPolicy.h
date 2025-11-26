#ifndef _javax_swing_SortingFocusTraversalPolicy_h_
#define _javax_swing_SortingFocusTraversalPolicy_h_
//$ class javax.swing.SortingFocusTraversalPolicy
//$ extends javax.swing.InternalFrameFocusTraversalPolicy

#include <java/lang/Array.h>
#include <javax/swing/InternalFrameFocusTraversalPolicy.h>

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
		class Comparator;
		class List;
	}
}
namespace javax {
	namespace swing {
		class SwingContainerOrderFocusTraversalPolicy;
	}
}
namespace sun {
	namespace util {
		namespace logging {
			class PlatformLogger;
		}
	}
}

namespace javax {
	namespace swing {

class $import SortingFocusTraversalPolicy : public ::javax::swing::InternalFrameFocusTraversalPolicy {
	$class(SortingFocusTraversalPolicy, 0, ::javax::swing::InternalFrameFocusTraversalPolicy)
public:
	SortingFocusTraversalPolicy();
	using ::javax::swing::InternalFrameFocusTraversalPolicy::getInitialComponent;
	void init$();
	void init$(::java::util::Comparator* comparator);
	virtual bool accept(::java::awt::Component* aComponent);
	void enumerateAndSortCycle(::java::awt::Container* focusCycleRoot, ::java::util::List* cycle);
	void enumerateCycle(::java::awt::Container* container, ::java::util::List* cycle);
	virtual ::java::util::Comparator* getComparator();
	virtual ::java::awt::Component* getComponentAfter(::java::awt::Container* aContainer, ::java::awt::Component* aComponent) override;
	virtual ::java::awt::Component* getComponentBefore(::java::awt::Container* aContainer, ::java::awt::Component* aComponent) override;
	::java::awt::Component* getComponentDownCycle(::java::awt::Component* comp, int32_t traversalDirection);
	int32_t getComponentIndex(::java::util::List* cycle, ::java::awt::Component* aComponent);
	virtual ::java::awt::Component* getDefaultComponent(::java::awt::Container* aContainer) override;
	virtual ::java::awt::Component* getFirstComponent(::java::awt::Container* aContainer) override;
	::java::util::List* getFocusTraversalCycle(::java::awt::Container* aContainer);
	virtual bool getImplicitDownCycleTraversal();
	virtual ::java::awt::Component* getLastComponent(::java::awt::Container* aContainer) override;
	virtual ::java::awt::Container* getTopmostProvider(::java::awt::Container* focusCycleRoot, ::java::awt::Component* aComponent);
	void legacySort(::java::util::List* l, ::java::util::Comparator* c);
	void mergeSort($ObjectArray* src, $ObjectArray* dest, int32_t low, int32_t high, int32_t off, ::java::util::Comparator* c);
	virtual void setComparator(::java::util::Comparator* comparator);
	virtual void setImplicitDownCycleTraversal(bool implicitDownCycleTraversal);
	::java::util::Comparator* comparator = nullptr;
	bool implicitDownCycleTraversal = false;
	::sun::util::logging::PlatformLogger* log = nullptr;
	::java::awt::Container* cachedRoot = nullptr;
	::java::util::List* cachedCycle = nullptr;
	static ::javax::swing::SwingContainerOrderFocusTraversalPolicy* fitnessTestPolicy;
	static const int32_t FORWARD_TRAVERSAL = 0;
	static const int32_t BACKWARD_TRAVERSAL = 1;
	static bool legacySortingFTPEnabled;
};

	} // swing
} // javax

#pragma pop_macro("BACKWARD_TRAVERSAL")
#pragma pop_macro("FORWARD_TRAVERSAL")

#endif // _javax_swing_SortingFocusTraversalPolicy_h_