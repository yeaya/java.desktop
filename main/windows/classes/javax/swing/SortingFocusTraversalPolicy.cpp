#include <javax/swing/SortingFocusTraversalPolicy.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <javax/swing/InternalFrameFocusTraversalPolicy.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingContainerOrderFocusTraversalPolicy.h>
#include <sun/security/action/GetPropertyAction.h>
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
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $InternalFrameFocusTraversalPolicy = ::javax::swing::InternalFrameFocusTraversalPolicy;
using $JComponent = ::javax::swing::JComponent;
using $SwingContainerOrderFocusTraversalPolicy = ::javax::swing::SwingContainerOrderFocusTraversalPolicy;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;
using $PlatformLogger$Level = ::sun::util::logging::PlatformLogger$Level;

namespace javax {
	namespace swing {

$FieldInfo _SortingFocusTraversalPolicy_FieldInfo_[] = {
	{"comparator", "Ljava/util/Comparator;", "Ljava/util/Comparator<-Ljava/awt/Component;>;", $PRIVATE, $field(SortingFocusTraversalPolicy, comparator)},
	{"implicitDownCycleTraversal", "Z", nullptr, $PRIVATE, $field(SortingFocusTraversalPolicy, implicitDownCycleTraversal)},
	{"log", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE, $field(SortingFocusTraversalPolicy, log)},
	{"cachedRoot", "Ljava/awt/Container;", nullptr, $PRIVATE | $TRANSIENT, $field(SortingFocusTraversalPolicy, cachedRoot)},
	{"cachedCycle", "Ljava/util/List;", "Ljava/util/List<Ljava/awt/Component;>;", $PRIVATE | $TRANSIENT, $field(SortingFocusTraversalPolicy, cachedCycle)},
	{"fitnessTestPolicy", "Ljavax/swing/SwingContainerOrderFocusTraversalPolicy;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SortingFocusTraversalPolicy, fitnessTestPolicy)},
	{"FORWARD_TRAVERSAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SortingFocusTraversalPolicy, FORWARD_TRAVERSAL)},
	{"BACKWARD_TRAVERSAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SortingFocusTraversalPolicy, BACKWARD_TRAVERSAL)},
	{"legacySortingFTPEnabled", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SortingFocusTraversalPolicy, legacySortingFTPEnabled)},
	{}
};

$MethodInfo _SortingFocusTraversalPolicy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SortingFocusTraversalPolicy::*)()>(&SortingFocusTraversalPolicy::init$))},
	{"<init>", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<-Ljava/awt/Component;>;)V", $PUBLIC, $method(static_cast<void(SortingFocusTraversalPolicy::*)($Comparator*)>(&SortingFocusTraversalPolicy::init$))},
	{"accept", "(Ljava/awt/Component;)Z", nullptr, $PROTECTED},
	{"enumerateAndSortCycle", "(Ljava/awt/Container;Ljava/util/List;)V", "(Ljava/awt/Container;Ljava/util/List<Ljava/awt/Component;>;)V", $PRIVATE, $method(static_cast<void(SortingFocusTraversalPolicy::*)($Container*,$List*)>(&SortingFocusTraversalPolicy::enumerateAndSortCycle))},
	{"enumerateCycle", "(Ljava/awt/Container;Ljava/util/List;)V", "(Ljava/awt/Container;Ljava/util/List<Ljava/awt/Component;>;)V", $PRIVATE, $method(static_cast<void(SortingFocusTraversalPolicy::*)($Container*,$List*)>(&SortingFocusTraversalPolicy::enumerateCycle))},
	{"getComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<-Ljava/awt/Component;>;", $PROTECTED},
	{"getComponentAfter", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getComponentBefore", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getComponentDownCycle", "(Ljava/awt/Component;I)Ljava/awt/Component;", nullptr, $PRIVATE, $method(static_cast<$Component*(SortingFocusTraversalPolicy::*)($Component*,int32_t)>(&SortingFocusTraversalPolicy::getComponentDownCycle))},
	{"getComponentIndex", "(Ljava/util/List;Ljava/awt/Component;)I", "(Ljava/util/List<Ljava/awt/Component;>;Ljava/awt/Component;)I", $PRIVATE, $method(static_cast<int32_t(SortingFocusTraversalPolicy::*)($List*,$Component*)>(&SortingFocusTraversalPolicy::getComponentIndex))},
	{"getDefaultComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getFirstComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getFocusTraversalCycle", "(Ljava/awt/Container;)Ljava/util/List;", "(Ljava/awt/Container;)Ljava/util/List<Ljava/awt/Component;>;", $PRIVATE, $method(static_cast<$List*(SortingFocusTraversalPolicy::*)($Container*)>(&SortingFocusTraversalPolicy::getFocusTraversalCycle))},
	{"getImplicitDownCycleTraversal", "()Z", nullptr, $PUBLIC},
	{"getLastComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getTopmostProvider", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Container;", nullptr, 0},
	{"legacySort", "(Ljava/util/List;Ljava/util/Comparator;)V", "(Ljava/util/List<Ljava/awt/Component;>;Ljava/util/Comparator<-Ljava/awt/Component;>;)V", $PRIVATE, $method(static_cast<void(SortingFocusTraversalPolicy::*)($List*,$Comparator*)>(&SortingFocusTraversalPolicy::legacySort))},
	{"mergeSort", "([Ljava/lang/Object;[Ljava/lang/Object;IIILjava/util/Comparator;)V", "<T:Ljava/lang/Object;>([TT;[TT;IIILjava/util/Comparator<-TT;>;)V", $PRIVATE, $method(static_cast<void(SortingFocusTraversalPolicy::*)($ObjectArray*,$ObjectArray*,int32_t,int32_t,int32_t,$Comparator*)>(&SortingFocusTraversalPolicy::mergeSort))},
	{"setComparator", "(Ljava/util/Comparator;)V", "(Ljava/util/Comparator<-Ljava/awt/Component;>;)V", $PROTECTED},
	{"setImplicitDownCycleTraversal", "(Z)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SortingFocusTraversalPolicy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.SortingFocusTraversalPolicy",
	"javax.swing.InternalFrameFocusTraversalPolicy",
	nullptr,
	_SortingFocusTraversalPolicy_FieldInfo_,
	_SortingFocusTraversalPolicy_MethodInfo_
};

$Object* allocate$SortingFocusTraversalPolicy($Class* clazz) {
	return $of($alloc(SortingFocusTraversalPolicy));
}

$SwingContainerOrderFocusTraversalPolicy* SortingFocusTraversalPolicy::fitnessTestPolicy = nullptr;
bool SortingFocusTraversalPolicy::legacySortingFTPEnabled = false;

void SortingFocusTraversalPolicy::init$() {
	$InternalFrameFocusTraversalPolicy::init$();
	this->implicitDownCycleTraversal = true;
	$set(this, log, $PlatformLogger::getLogger("javax.swing.SortingFocusTraversalPolicy"_s));
}

void SortingFocusTraversalPolicy::init$($Comparator* comparator) {
	$InternalFrameFocusTraversalPolicy::init$();
	this->implicitDownCycleTraversal = true;
	$set(this, log, $PlatformLogger::getLogger("javax.swing.SortingFocusTraversalPolicy"_s));
	$set(this, comparator, comparator);
}

$List* SortingFocusTraversalPolicy::getFocusTraversalCycle($Container* aContainer) {
	$var($List, cycle, $new($ArrayList));
	enumerateAndSortCycle(aContainer, cycle);
	return cycle;
}

int32_t SortingFocusTraversalPolicy::getComponentIndex($List* cycle, $Component* aComponent) {
	int32_t index = 0;
	try {
		index = $Collections::binarySearch(cycle, aComponent, this->comparator);
	} catch ($ClassCastException&) {
		$var($ClassCastException, e, $catch());
		$init($PlatformLogger$Level);
		if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(this->log)->fine($$str({"### During the binary search for "_s, aComponent, " the exception occurred: "_s}), static_cast<$Throwable*>(e));
		}
		return -1;
	}
	if (index < 0) {
		index = $nc(cycle)->indexOf(aComponent);
	}
	return index;
}

void SortingFocusTraversalPolicy::enumerateAndSortCycle($Container* focusCycleRoot, $List* cycle) {
	if ($nc(focusCycleRoot)->isShowing()) {
		enumerateCycle(focusCycleRoot, cycle);
		if (SortingFocusTraversalPolicy::legacySortingFTPEnabled) {
			legacySort(cycle, this->comparator);
		} else {
			$nc(cycle)->sort(this->comparator);
		}
	}
}

void SortingFocusTraversalPolicy::legacySort($List* l, $Comparator* c) {
	if (c != nullptr && $nc(l)->size() > 1) {
		$var($ComponentArray, a, $fcast($ComponentArray, l->toArray($$new($ComponentArray, l->size()))));
		mergeSort($cast($ComponentArray, $($nc(a)->clone())), a, 0, a->length, 0, c);
		$var($ListIterator, i, l->listIterator());
		{
			$var($ComponentArray, arr$, a);
			int32_t len$ = $nc(arr$)->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($Component, e, arr$->get(i$));
				{
					$nc(i)->next();
					i->set(e);
				}
			}
		}
	}
}

void SortingFocusTraversalPolicy::enumerateCycle($Container* container, $List* cycle) {
	bool var$0 = $nc(container)->isVisible();
	if (!(var$0 && container->isDisplayable())) {
		return;
	}
	$nc(cycle)->add(container);
	$var($ComponentArray, components, $nc(container)->getComponents());
	{
		$var($ComponentArray, arr$, components);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Component, comp, arr$->get(i$));
			{
				if ($instanceOf($Container, comp)) {
					$var($Container, cont, $cast($Container, comp));
					bool var$2 = !$nc(cont)->isFocusCycleRoot();
					bool var$1 = var$2 && !cont->isFocusTraversalPolicyProvider();
					if (var$1 && !(($instanceOf($JComponent, cont)) && $nc(($cast($JComponent, cont)))->isManagingFocus())) {
						enumerateCycle(cont, cycle);
						continue;
					}
				}
				cycle->add(comp);
			}
		}
	}
}

$Container* SortingFocusTraversalPolicy::getTopmostProvider($Container* focusCycleRoot, $Component* aComponent) {
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

$Component* SortingFocusTraversalPolicy::getComponentDownCycle($Component* comp, int32_t traversalDirection) {
	$var($Component, retComp, nullptr);
	if ($instanceOf($Container, comp)) {
		$var($Container, cont, $cast($Container, comp));
		if ($nc(cont)->isFocusCycleRoot()) {
			if (getImplicitDownCycleTraversal()) {
				$assign(retComp, $nc($(cont->getFocusTraversalPolicy()))->getDefaultComponent(cont));
				$init($PlatformLogger$Level);
				if (retComp != nullptr && $nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
					$nc(this->log)->fine($$str({"### Transfered focus down-cycle to "_s, retComp, " in the focus cycle root "_s, cont}));
				}
			} else {
				return nullptr;
			}
		} else if (cont->isFocusTraversalPolicyProvider()) {
			$assign(retComp, traversalDirection == this->FORWARD_TRAVERSAL ? $nc($(cont->getFocusTraversalPolicy()))->getDefaultComponent(cont) : $nc($(cont->getFocusTraversalPolicy()))->getLastComponent(cont));
			$init($PlatformLogger$Level);
			if (retComp != nullptr && $nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(this->log)->fine($$str({"### Transfered focus to "_s, retComp, " in the FTP provider "_s, cont}));
			}
		}
	}
	return retComp;
}

$Component* SortingFocusTraversalPolicy::getComponentAfter($Container* aContainer, $Component* aComponent$renamed) {
	$var($Component, aComponent, aComponent$renamed);
	$init($PlatformLogger$Level);
	if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(this->log)->fine($$str({"### Searching in "_s, aContainer, " for component after "_s, aComponent}));
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
	$var($Component, comp, getComponentDownCycle(aComponent, this->FORWARD_TRAVERSAL));
	if (comp != nullptr) {
		return comp;
	}
	$var($Container, provider, getTopmostProvider(aContainer, aComponent));
	if (provider != nullptr) {
		if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(this->log)->fine($$str({"### Asking FTP "_s, provider, " for component after "_s, aComponent}));
		}
		$var($FocusTraversalPolicy, policy, provider->getFocusTraversalPolicy());
		$var($Component, afterComp, $nc(policy)->getComponentAfter(provider, aComponent));
		if (afterComp != nullptr) {
			if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(this->log)->fine($$str({"### FTP returned "_s, afterComp}));
			}
			return afterComp;
		}
		$assign(aComponent, provider);
	}
	$var($List, cycle, getFocusTraversalCycle(aContainer));
	if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(this->log)->fine($$str({"### Cycle is "_s, cycle, ", component is "_s, aComponent}));
	}
	int32_t index = getComponentIndex(cycle, aComponent);
	if (index < 0) {
		if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(this->log)->fine($$str({"### Didn\'t find component "_s, aComponent, " in a cycle "_s, aContainer}));
		}
		return getFirstComponent(aContainer);
	}
	for (++index; index < $nc(cycle)->size(); ++index) {
		$assign(comp, $cast($Component, cycle->get(index)));
		if (accept(comp)) {
			return comp;
		} else if (($assign(comp, getComponentDownCycle(comp, this->FORWARD_TRAVERSAL))) != nullptr) {
			return comp;
		}
	}
	if ($nc(aContainer)->isFocusCycleRoot()) {
		$set(this, cachedRoot, aContainer);
		$set(this, cachedCycle, cycle);
		$assign(comp, getFirstComponent(aContainer));
		$set(this, cachedRoot, nullptr);
		$set(this, cachedCycle, nullptr);
		return comp;
	}
	return nullptr;
}

$Component* SortingFocusTraversalPolicy::getComponentBefore($Container* aContainer, $Component* aComponent$renamed) {
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
	$var($Container, provider, getTopmostProvider(aContainer, aComponent));
	if (provider != nullptr) {
		$init($PlatformLogger$Level);
		if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(this->log)->fine($$str({"### Asking FTP "_s, provider, " for component after "_s, aComponent}));
		}
		$var($FocusTraversalPolicy, policy, provider->getFocusTraversalPolicy());
		$var($Component, beforeComp, $nc(policy)->getComponentBefore(provider, aComponent));
		if (beforeComp != nullptr) {
			if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
				$nc(this->log)->fine($$str({"### FTP returned "_s, beforeComp}));
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
	if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(this->log)->fine($$str({"### Cycle is "_s, cycle, ", component is "_s, aComponent}));
	}
	int32_t index = getComponentIndex(cycle, aComponent);
	if (index < 0) {
		if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(this->log)->fine($$str({"### Didn\'t find component "_s, aComponent, " in a cycle "_s, aContainer}));
		}
		return getLastComponent(aContainer);
	}
	$var($Component, comp, nullptr);
	$var($Component, tryComp, nullptr);
	for (--index; index >= 0; --index) {
		$assign(comp, $cast($Component, $nc(cycle)->get(index)));
		if (!$equals(comp, aContainer) && ($assign(tryComp, getComponentDownCycle(comp, this->BACKWARD_TRAVERSAL))) != nullptr) {
			return tryComp;
		} else if (accept(comp)) {
			return comp;
		}
	}
	if ($nc(aContainer)->isFocusCycleRoot()) {
		$set(this, cachedRoot, aContainer);
		$set(this, cachedCycle, cycle);
		$assign(comp, getLastComponent(aContainer));
		$set(this, cachedRoot, nullptr);
		$set(this, cachedCycle, nullptr);
		return comp;
	}
	return nullptr;
}

$Component* SortingFocusTraversalPolicy::getFirstComponent($Container* aContainer) {
	$var($List, cycle, nullptr);
	$init($PlatformLogger$Level);
	if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(this->log)->fine($$str({"### Getting first component in "_s, aContainer}));
	}
	if (aContainer == nullptr) {
		$throwNew($IllegalArgumentException, "aContainer cannot be null"_s);
	}
	if (this->cachedRoot == aContainer) {
		$assign(cycle, this->cachedCycle);
	} else {
		$assign(cycle, getFocusTraversalCycle(aContainer));
	}
	if ($nc(cycle)->size() == 0) {
		if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(this->log)->fine("### Cycle is empty"_s);
		}
		return nullptr;
	}
	if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(this->log)->fine($$str({"### Cycle is "_s, cycle}));
	}
	{
		$var($Iterator, i$, $nc(cycle)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Component, comp, $cast($Component, i$->next()));
			{
				if (accept(comp)) {
					return comp;
				} else if (!$equals(comp, aContainer) && ($assign(comp, getComponentDownCycle(comp, this->FORWARD_TRAVERSAL))) != nullptr) {
					return comp;
				}
			}
		}
	}
	return nullptr;
}

$Component* SortingFocusTraversalPolicy::getLastComponent($Container* aContainer) {
	$var($List, cycle, nullptr);
	$init($PlatformLogger$Level);
	if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(this->log)->fine($$str({"### Getting last component in "_s, aContainer}));
	}
	if (aContainer == nullptr) {
		$throwNew($IllegalArgumentException, "aContainer cannot be null"_s);
	}
	if (this->cachedRoot == aContainer) {
		$assign(cycle, this->cachedCycle);
	} else {
		$assign(cycle, getFocusTraversalCycle(aContainer));
	}
	if ($nc(cycle)->size() == 0) {
		if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
			$nc(this->log)->fine("### Cycle is empty"_s);
		}
		return nullptr;
	}
	if ($nc(this->log)->isLoggable($PlatformLogger$Level::FINE)) {
		$nc(this->log)->fine($$str({"### Cycle is "_s, cycle}));
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
	return nullptr;
}

$Component* SortingFocusTraversalPolicy::getDefaultComponent($Container* aContainer) {
	return getFirstComponent(aContainer);
}

void SortingFocusTraversalPolicy::setImplicitDownCycleTraversal(bool implicitDownCycleTraversal) {
	this->implicitDownCycleTraversal = implicitDownCycleTraversal;
}

bool SortingFocusTraversalPolicy::getImplicitDownCycleTraversal() {
	return this->implicitDownCycleTraversal;
}

void SortingFocusTraversalPolicy::setComparator($Comparator* comparator) {
	$set(this, comparator, comparator);
}

$Comparator* SortingFocusTraversalPolicy::getComparator() {
	return this->comparator;
}

bool SortingFocusTraversalPolicy::accept($Component* aComponent) {
	return $nc(SortingFocusTraversalPolicy::fitnessTestPolicy)->accept(aComponent);
}

void SortingFocusTraversalPolicy::mergeSort($ObjectArray* src, $ObjectArray* dest, int32_t low, int32_t high, int32_t off, $Comparator* c) {
	int32_t length = high - low;
	if (length < 7) {
		for (int32_t i = low; i < high; ++i) {
			for (int32_t j = i; j > low && $nc(c)->compare($nc(dest)->get(j - 1), dest->get(j)) > 0; --j) {
				$var($Object0, t, $nc(dest)->get(j));
				dest->set(j, dest->get(j - 1));
				dest->set(j - 1, t);
			}
		}
		return;
	}
	int32_t destLow = low;
	int32_t destHigh = high;
	low += off;
	high += off;
	int32_t mid = (int32_t)((uint32_t)(low + high) >> 1);
	mergeSort(dest, src, low, mid, -off, c);
	mergeSort(dest, src, mid, high, -off, c);
	if ($nc(c)->compare($nc(src)->get(mid - 1), src->get(mid)) <= 0) {
		$System::arraycopy(src, low, dest, destLow, length);
		return;
	}
	{
		int32_t i = destLow;
		int32_t p = low;
		int32_t q = mid;
		for (; i < destHigh; ++i) {
			if (q >= high || p < mid && $nc(c)->compare($nc(src)->get(p), src->get(q)) <= 0) {
				$nc(dest)->set(i, $nc(src)->get(p++));
			} else {
				$nc(dest)->set(i, $nc(src)->get(q++));
			}
		}
	}
}

void clinit$SortingFocusTraversalPolicy($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(SortingFocusTraversalPolicy::fitnessTestPolicy, $new($SwingContainerOrderFocusTraversalPolicy));
	{
		SortingFocusTraversalPolicy::legacySortingFTPEnabled = "true"_s->equals($($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "swing.legacySortingFTPEnabled"_s, "true"_s)))));
	}
}

SortingFocusTraversalPolicy::SortingFocusTraversalPolicy() {
}

$Class* SortingFocusTraversalPolicy::load$($String* name, bool initialize) {
	$loadClass(SortingFocusTraversalPolicy, name, initialize, &_SortingFocusTraversalPolicy_ClassInfo_, clinit$SortingFocusTraversalPolicy, allocate$SortingFocusTraversalPolicy);
	return class$;
}

$Class* SortingFocusTraversalPolicy::class$ = nullptr;

	} // swing
} // javax