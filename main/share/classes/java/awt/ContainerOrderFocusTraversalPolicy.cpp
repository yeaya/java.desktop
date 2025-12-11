#include <java/awt/ContainerOrderFocusTraversalPolicy.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Window.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <sun/util/logging/PlatformLogger$Level.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef BACKWARD_TRAVERSAL
#undef FINE
#undef FORWARD_TRAVERSAL

using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace java {
	namespace awt {

$FieldInfo _ContainerOrderFocusTraversalPolicy_FieldInfo_[] = {
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ContainerOrderFocusTraversalPolicy, log)},
	{"FORWARD_TRAVERSAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ContainerOrderFocusTraversalPolicy, FORWARD_TRAVERSAL)},
	{"BACKWARD_TRAVERSAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ContainerOrderFocusTraversalPolicy, BACKWARD_TRAVERSAL)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ContainerOrderFocusTraversalPolicy, serialVersionUID)},
	{"implicitDownCycleTraversal", "Z", nullptr, $PRIVATE, $field(ContainerOrderFocusTraversalPolicy, implicitDownCycleTraversal)},
	{"cachedRoot", "Ljava/awt/Container;", nullptr, $PRIVATE | $TRANSIENT, $field(ContainerOrderFocusTraversalPolicy, cachedRoot)},
	{"cachedCycle", "Ljava/util/List;", "Ljava/util/List<Ljava/awt/Component;>;", $PRIVATE | $TRANSIENT, $field(ContainerOrderFocusTraversalPolicy, cachedCycle)},
	{}
};

$MethodInfo _ContainerOrderFocusTraversalPolicy_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ContainerOrderFocusTraversalPolicy::*)()>(&ContainerOrderFocusTraversalPolicy::init$))},
	{"accept", "(Ljava/awt/Component;)Z", nullptr, $PROTECTED},
	{"enumerateCycle", "(Ljava/awt/Container;Ljava/util/List;)V", "(Ljava/awt/Container;Ljava/util/List<Ljava/awt/Component;>;)V", $PRIVATE, $method(static_cast<void(ContainerOrderFocusTraversalPolicy::*)($Container*,$List*)>(&ContainerOrderFocusTraversalPolicy::enumerateCycle))},
	{"getComponentAfter", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getComponentBefore", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getComponentDownCycle", "(Ljava/awt/Component;I)Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(ContainerOrderFocusTraversalPolicy::*)($Component*,int32_t)>(&ContainerOrderFocusTraversalPolicy::getComponentDownCycle))},
	{"getComponentIndex", "(Ljava/util/List;Ljava/awt/Component;)I", "(Ljava/util/List<Ljava/awt/Component;>;Ljava/awt/Component;)I", $PRIVATE, $method(static_cast<int32_t(ContainerOrderFocusTraversalPolicy::*)($List*,$Component*)>(&ContainerOrderFocusTraversalPolicy::getComponentIndex))},
	{"getDefaultComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getFirstComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getFocusTraversalCycle", "(Ljava/awt/Container;)Ljava/util/List;", "(Ljava/awt/Container;)Ljava/util/List<Ljava/awt/Component;>;", $PRIVATE, $method(static_cast<$List*(ContainerOrderFocusTraversalPolicy::*)($Container*)>(&ContainerOrderFocusTraversalPolicy::getFocusTraversalCycle))},
	{"getImplicitDownCycleTraversal", "()Z", nullptr, $PUBLIC},
	{"getLastComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getTopmostProvider", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Container;", nullptr, $PRIVATE, $method(static_cast<$Container*(ContainerOrderFocusTraversalPolicy::*)($Container*,$Component*)>(&ContainerOrderFocusTraversalPolicy::getTopmostProvider))},
	{"setImplicitDownCycleTraversal", "(Z)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ContainerOrderFocusTraversalPolicy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.ContainerOrderFocusTraversalPolicy",
	"java.awt.FocusTraversalPolicy",
	"java.io.Serializable",
	_ContainerOrderFocusTraversalPolicy_FieldInfo_,
	_ContainerOrderFocusTraversalPolicy_MethodInfo_
};

$Object* allocate$ContainerOrderFocusTraversalPolicy($Class* clazz) {
	return $of($alloc(ContainerOrderFocusTraversalPolicy));
}

int32_t ContainerOrderFocusTraversalPolicy::hashCode() {
	 return this->$FocusTraversalPolicy::hashCode();
}

bool ContainerOrderFocusTraversalPolicy::equals(Object$* arg0) {
	 return this->$FocusTraversalPolicy::equals(arg0);
}

$Object* ContainerOrderFocusTraversalPolicy::clone() {
	 return this->$FocusTraversalPolicy::clone();
}

$String* ContainerOrderFocusTraversalPolicy::toString() {
	 return this->$FocusTraversalPolicy::toString();
}

void ContainerOrderFocusTraversalPolicy::finalize() {
	this->$FocusTraversalPolicy::finalize();
}

$PlatformLogger* ContainerOrderFocusTraversalPolicy::log = nullptr;

void ContainerOrderFocusTraversalPolicy::init$() {
	$FocusTraversalPolicy::init$();
	this->implicitDownCycleTraversal = true;
}

$List* ContainerOrderFocusTraversalPolicy::getFocusTraversalCycle($Container* aContainer) {
	$var($List, cycle, $new($ArrayList));
	enumerateCycle(aContainer, cycle);
	return cycle;
}

int32_t ContainerOrderFocusTraversalPolicy::getComponentIndex($List* cycle, $Component* aComponent) {
	return $nc(cycle)->indexOf(aComponent);
}

void ContainerOrderFocusTraversalPolicy::enumerateCycle($Container* container, $List* cycle) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(container)->isVisible();
	if (!(var$0 && container->isDisplayable())) {
		return;
	}
	$nc(cycle)->add(container);
	$var($ComponentArray, components, $nc(container)->getComponents());
	for (int32_t i = 0; i < $nc(components)->length; ++i) {
		$var($Component, comp, components->get(i));
		if ($instanceOf($Container, comp)) {
			$var($Container, cont, $cast($Container, comp));
			bool var$1 = !$nc(cont)->isFocusCycleRoot();
			if (var$1 && !cont->isFocusTraversalPolicyProvider()) {
				enumerateCycle(cont, cycle);
				continue;
			}
		}
		cycle->add(comp);
	}
}

$Container* ContainerOrderFocusTraversalPolicy::getTopmostProvider($Container* focusCycleRoot, $Component* aComponent) {
	$useLocalCurrentObjectStackCache();
	$var($Container, aCont, $nc(aComponent)->getParent());
	$var($Container, ftp, nullptr);
	while (aCont != focusCycleRoot && aCont != nullptr) {
		if (aCont->isFocusTraversalPolicyProvider()) {
			$assign(ftp, aCont);
		}
		$assign(aCont, aCont->getParent());
	}
	if (aCont == nullptr) {
		return nullptr;
	}
	return ftp;
}

$Component* ContainerOrderFocusTraversalPolicy::getComponentDownCycle($Component* comp, int32_t traversalDirection) {
	$useLocalCurrentObjectStackCache();
	$var($Component, retComp, nullptr);
	if ($instanceOf($Container, comp)) {
		$var($Container, cont, $cast($Container, comp));
		if ($nc(cont)->isFocusCycleRoot()) {
			if (getImplicitDownCycleTraversal()) {
				$assign(retComp, $nc($(cont->getFocusTraversalPolicy()))->getDefaultComponent(cont));
				$init($PlatformLogger$Level);
				if (retComp != nullptr && $nc(ContainerOrderFocusTraversalPolicy::log)->isLoggable($PlatformLogger$Level::FINE)) {
					$nc(ContainerOrderFocusTraversalPolicy::log)->fine($$str({"### Transferred focus down-cycle to "_s, retComp, " in the focus cycle root "_s, cont}));
				}
			} else {
				return nullptr;
			}
		} else if (cont->isFocusTraversalPolicyProvider()) {
			$assign(retComp, traversalDirection == ContainerOrderFocusTraversalPolicy::FORWARD_TRAVERSAL ? $nc($(cont->getFocusTraversalPolicy()))->getDefaultComponent(cont) : $nc($(cont->getFocusTraversalPolicy()))->getLastComponent(cont));
			$init($PlatformLogger$Level);
			if (retComp != nullptr && $nc(ContainerOrderFocusTraversalPolicy::log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(ContainerOrderFocusTraversalPolicy::log)->fine($$str({"### Transferred focus to "_s, retComp, " in the FTP provider "_s, cont}));
			}
		}
	}
	return retComp;
}

$Component* ContainerOrderFocusTraversalPolicy::getComponentAfter($Container* aContainer, $Component* aComponent$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Component, aComponent, aComponent$renamed);
	$init($PlatformLogger$Level);
	if ($nc(ContainerOrderFocusTraversalPolicy::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(ContainerOrderFocusTraversalPolicy::log)->fine($$str({"### Searching in "_s, aContainer, " for component after "_s, aComponent}));
	}
	if (aContainer == nullptr || aComponent == nullptr) {
		$throwNew($IllegalArgumentException, "aContainer and aComponent cannot be null"_s);
	}
	bool var$0 = !$nc(aContainer)->isFocusTraversalPolicyProvider();
	if (var$0 && !aContainer->isFocusCycleRoot()) {
		$throwNew($IllegalArgumentException, "aContainer should be focus cycle root or focus traversal policy provider"_s);
	} else {
		bool var$2 = aContainer->isFocusCycleRoot();
		if (var$2 && !$nc(aComponent)->isFocusCycleRoot(aContainer)) {
			$throwNew($IllegalArgumentException, "aContainer is not a focus cycle root of aComponent"_s);
		}
	}
	$synchronized($nc(aContainer)->getTreeLock()) {
		bool var$3 = aContainer->isVisible();
		if (!(var$3 && aContainer->isDisplayable())) {
			return nullptr;
		}
		$var($Component, comp, getComponentDownCycle(aComponent, ContainerOrderFocusTraversalPolicy::FORWARD_TRAVERSAL));
		if (comp != nullptr && comp != aComponent) {
			return comp;
		}
		$var($Container, provider, getTopmostProvider(aContainer, aComponent));
		if (provider != nullptr) {
			if ($nc(ContainerOrderFocusTraversalPolicy::log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(ContainerOrderFocusTraversalPolicy::log)->fine($$str({"### Asking FTP "_s, provider, " for component after "_s, aComponent}));
			}
			$var($FocusTraversalPolicy, policy, provider->getFocusTraversalPolicy());
			$var($Component, afterComp, $nc(policy)->getComponentAfter(provider, aComponent));
			if (afterComp != nullptr) {
				if ($nc(ContainerOrderFocusTraversalPolicy::log)->isLoggable($PlatformLogger$Level::FINE)) {
					$nc(ContainerOrderFocusTraversalPolicy::log)->fine($$str({"### FTP returned "_s, afterComp}));
				}
				return afterComp;
			}
			$assign(aComponent, provider);
		}
		$var($List, cycle, getFocusTraversalCycle(aContainer));
		if ($nc(ContainerOrderFocusTraversalPolicy::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(ContainerOrderFocusTraversalPolicy::log)->fine($$str({"### Cycle is "_s, cycle, ", component is "_s, aComponent}));
		}
		int32_t index = getComponentIndex(cycle, aComponent);
		if (index < 0) {
			if ($nc(ContainerOrderFocusTraversalPolicy::log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(ContainerOrderFocusTraversalPolicy::log)->fine($$str({"### Didn\'t find component "_s, aComponent, " in a cycle "_s, aContainer}));
			}
			return getFirstComponent(aContainer);
		}
		for (++index; index < $nc(cycle)->size(); ++index) {
			$assign(comp, $cast($Component, cycle->get(index)));
			if (accept(comp)) {
				return comp;
			} else if (($assign(comp, getComponentDownCycle(comp, ContainerOrderFocusTraversalPolicy::FORWARD_TRAVERSAL))) != nullptr) {
				return comp;
			}
		}
		if (aContainer->isFocusCycleRoot()) {
			$set(this, cachedRoot, aContainer);
			$set(this, cachedCycle, cycle);
			$assign(comp, getFirstComponent(aContainer));
			$set(this, cachedRoot, nullptr);
			$set(this, cachedCycle, nullptr);
			return comp;
		}
	}
	return nullptr;
}

$Component* ContainerOrderFocusTraversalPolicy::getComponentBefore($Container* aContainer, $Component* aComponent$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($Component, aComponent, aComponent$renamed);
	if (aContainer == nullptr || aComponent == nullptr) {
		$throwNew($IllegalArgumentException, "aContainer and aComponent cannot be null"_s);
	}
	bool var$0 = !$nc(aContainer)->isFocusTraversalPolicyProvider();
	if (var$0 && !aContainer->isFocusCycleRoot()) {
		$throwNew($IllegalArgumentException, "aContainer should be focus cycle root or focus traversal policy provider"_s);
	} else {
		bool var$2 = aContainer->isFocusCycleRoot();
		if (var$2 && !$nc(aComponent)->isFocusCycleRoot(aContainer)) {
			$throwNew($IllegalArgumentException, "aContainer is not a focus cycle root of aComponent"_s);
		}
	}
	$synchronized($nc(aContainer)->getTreeLock()) {
		bool var$3 = aContainer->isVisible();
		if (!(var$3 && aContainer->isDisplayable())) {
			return nullptr;
		}
		$var($Container, provider, getTopmostProvider(aContainer, aComponent));
		if (provider != nullptr) {
			$init($PlatformLogger$Level);
			if ($nc(ContainerOrderFocusTraversalPolicy::log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(ContainerOrderFocusTraversalPolicy::log)->fine($$str({"### Asking FTP "_s, provider, " for component after "_s, aComponent}));
			}
			$var($FocusTraversalPolicy, policy, provider->getFocusTraversalPolicy());
			$var($Component, beforeComp, $nc(policy)->getComponentBefore(provider, aComponent));
			if (beforeComp != nullptr) {
				if ($nc(ContainerOrderFocusTraversalPolicy::log)->isLoggable($PlatformLogger$Level::FINE)) {
					$nc(ContainerOrderFocusTraversalPolicy::log)->fine($$str({"### FTP returned "_s, beforeComp}));
				}
				return beforeComp;
			}
			$assign(aComponent, provider);
			if (accept(aComponent)) {
				return aComponent;
			}
		}
		$var($List, cycle, getFocusTraversalCycle(aContainer));
		$init($PlatformLogger$Level);
		if ($nc(ContainerOrderFocusTraversalPolicy::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(ContainerOrderFocusTraversalPolicy::log)->fine($$str({"### Cycle is "_s, cycle, ", component is "_s, aComponent}));
		}
		int32_t index = getComponentIndex(cycle, aComponent);
		if (index < 0) {
			if ($nc(ContainerOrderFocusTraversalPolicy::log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(ContainerOrderFocusTraversalPolicy::log)->fine($$str({"### Didn\'t find component "_s, aComponent, " in a cycle "_s, aContainer}));
			}
			return getLastComponent(aContainer);
		}
		$var($Component, comp, nullptr);
		$var($Component, tryComp, nullptr);
		for (--index; index >= 0; --index) {
			$assign(comp, $cast($Component, $nc(cycle)->get(index)));
			if (!$equals(comp, aContainer) && ($assign(tryComp, getComponentDownCycle(comp, ContainerOrderFocusTraversalPolicy::BACKWARD_TRAVERSAL))) != nullptr) {
				return tryComp;
			} else if (accept(comp)) {
				return comp;
			}
		}
		if (aContainer->isFocusCycleRoot()) {
			$set(this, cachedRoot, aContainer);
			$set(this, cachedCycle, cycle);
			$assign(comp, getLastComponent(aContainer));
			$set(this, cachedRoot, nullptr);
			$set(this, cachedCycle, nullptr);
			return comp;
		}
	}
	return nullptr;
}

$Component* ContainerOrderFocusTraversalPolicy::getFirstComponent($Container* aContainer) {
	$useLocalCurrentObjectStackCache();
	$var($List, cycle, nullptr);
	$init($PlatformLogger$Level);
	if ($nc(ContainerOrderFocusTraversalPolicy::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(ContainerOrderFocusTraversalPolicy::log)->fine($$str({"### Getting first component in "_s, aContainer}));
	}
	if (aContainer == nullptr) {
		$throwNew($IllegalArgumentException, "aContainer cannot be null"_s);
	}
	$synchronized($nc(aContainer)->getTreeLock()) {
		bool var$0 = aContainer->isVisible();
		if (!(var$0 && aContainer->isDisplayable())) {
			return nullptr;
		}
		if (this->cachedRoot == aContainer) {
			$assign(cycle, this->cachedCycle);
		} else {
			$assign(cycle, getFocusTraversalCycle(aContainer));
		}
		if ($nc(cycle)->size() == 0) {
			if ($nc(ContainerOrderFocusTraversalPolicy::log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(ContainerOrderFocusTraversalPolicy::log)->fine("### Cycle is empty"_s);
			}
			return nullptr;
		}
		if ($nc(ContainerOrderFocusTraversalPolicy::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(ContainerOrderFocusTraversalPolicy::log)->fine($$str({"### Cycle is "_s, cycle}));
		}
		{
			$var($Iterator, i$, $nc(cycle)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Component, comp, $cast($Component, i$->next()));
				{
					if (accept(comp)) {
						return comp;
					} else if (!$equals(comp, aContainer) && ($assign(comp, getComponentDownCycle(comp, ContainerOrderFocusTraversalPolicy::FORWARD_TRAVERSAL))) != nullptr) {
						return comp;
					}
				}
			}
		}
	}
	return nullptr;
}

$Component* ContainerOrderFocusTraversalPolicy::getLastComponent($Container* aContainer) {
	$useLocalCurrentObjectStackCache();
	$var($List, cycle, nullptr);
	$init($PlatformLogger$Level);
	if ($nc(ContainerOrderFocusTraversalPolicy::log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(ContainerOrderFocusTraversalPolicy::log)->fine($$str({"### Getting last component in "_s, aContainer}));
	}
	if (aContainer == nullptr) {
		$throwNew($IllegalArgumentException, "aContainer cannot be null"_s);
	}
	$synchronized($nc(aContainer)->getTreeLock()) {
		bool var$0 = aContainer->isVisible();
		if (!(var$0 && aContainer->isDisplayable())) {
			return nullptr;
		}
		if (this->cachedRoot == aContainer) {
			$assign(cycle, this->cachedCycle);
		} else {
			$assign(cycle, getFocusTraversalCycle(aContainer));
		}
		if ($nc(cycle)->size() == 0) {
			if ($nc(ContainerOrderFocusTraversalPolicy::log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(ContainerOrderFocusTraversalPolicy::log)->fine("### Cycle is empty"_s);
			}
			return nullptr;
		}
		if ($nc(ContainerOrderFocusTraversalPolicy::log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(ContainerOrderFocusTraversalPolicy::log)->fine($$str({"### Cycle is "_s, cycle}));
		}
		for (int32_t i = $nc(cycle)->size() - 1; i >= 0; --i) {
			$var($Component, comp, $cast($Component, cycle->get(i)));
			if (accept(comp)) {
				return comp;
			} else if ($instanceOf($Container, comp) && !$equals(comp, aContainer)) {
				$var($Container, cont, $cast($Container, comp));
				if ($nc(cont)->isFocusTraversalPolicyProvider()) {
					$var($Component, retComp, $nc($(cont->getFocusTraversalPolicy()))->getLastComponent(cont));
					if (retComp != nullptr) {
						return retComp;
					}
				}
			}
		}
	}
	return nullptr;
}

$Component* ContainerOrderFocusTraversalPolicy::getDefaultComponent($Container* aContainer) {
	return getFirstComponent(aContainer);
}

void ContainerOrderFocusTraversalPolicy::setImplicitDownCycleTraversal(bool implicitDownCycleTraversal) {
	this->implicitDownCycleTraversal = implicitDownCycleTraversal;
}

bool ContainerOrderFocusTraversalPolicy::getImplicitDownCycleTraversal() {
	return this->implicitDownCycleTraversal;
}

bool ContainerOrderFocusTraversalPolicy::accept($Component* aComponent) {
	if (!$nc(aComponent)->canBeFocusOwner()) {
		return false;
	}
	if (!($instanceOf($Window, aComponent))) {
		{
			$var($Container, enableTest, $nc(aComponent)->getParent());
			for (; enableTest != nullptr; $assign(enableTest, $nc(enableTest)->getParent())) {
				bool var$0 = enableTest->isEnabled();
				if (!(var$0 || enableTest->isLightweight())) {
					return false;
				}
				if ($instanceOf($Window, enableTest)) {
					break;
				}
			}
		}
	}
	return true;
}

void clinit$ContainerOrderFocusTraversalPolicy($Class* class$) {
	$assignStatic(ContainerOrderFocusTraversalPolicy::log, $PlatformLogger::getLogger("java.awt.ContainerOrderFocusTraversalPolicy"_s));
}

ContainerOrderFocusTraversalPolicy::ContainerOrderFocusTraversalPolicy() {
}

$Class* ContainerOrderFocusTraversalPolicy::load$($String* name, bool initialize) {
	$loadClass(ContainerOrderFocusTraversalPolicy, name, initialize, &_ContainerOrderFocusTraversalPolicy_ClassInfo_, clinit$ContainerOrderFocusTraversalPolicy, allocate$ContainerOrderFocusTraversalPolicy);
	return class$;
}

$Class* ContainerOrderFocusTraversalPolicy::class$ = nullptr;

	} // awt
} // java