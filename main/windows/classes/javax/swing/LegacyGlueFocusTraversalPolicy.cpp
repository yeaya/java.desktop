#include <javax/swing/LegacyGlueFocusTraversalPolicy.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Window.h>
#include <java/io/InvalidObjectException.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <javax/swing/DefaultFocusManager.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Window = ::java::awt::Window;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $DefaultFocusManager = ::javax::swing::DefaultFocusManager;

namespace javax {
	namespace swing {

$FieldInfo _LegacyGlueFocusTraversalPolicy_FieldInfo_[] = {
	{"delegatePolicy", "Ljava/awt/FocusTraversalPolicy;", nullptr, $PRIVATE | $TRANSIENT, $field(LegacyGlueFocusTraversalPolicy, delegatePolicy)},
	{"delegateManager", "Ljavax/swing/DefaultFocusManager;", nullptr, $PRIVATE | $TRANSIENT, $field(LegacyGlueFocusTraversalPolicy, delegateManager)},
	{"forwardMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/awt/Component;Ljava/awt/Component;>;", $PRIVATE, $field(LegacyGlueFocusTraversalPolicy, forwardMap)},
	{"backwardMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/awt/Component;Ljava/awt/Component;>;", $PRIVATE, $field(LegacyGlueFocusTraversalPolicy, backwardMap)},
	{}
};

$MethodInfo _LegacyGlueFocusTraversalPolicy_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/FocusTraversalPolicy;)V", nullptr, 0, $method(static_cast<void(LegacyGlueFocusTraversalPolicy::*)($FocusTraversalPolicy*)>(&LegacyGlueFocusTraversalPolicy::init$))},
	{"<init>", "(Ljavax/swing/DefaultFocusManager;)V", nullptr, 0, $method(static_cast<void(LegacyGlueFocusTraversalPolicy::*)($DefaultFocusManager*)>(&LegacyGlueFocusTraversalPolicy::init$))},
	{"accept", "(Ljava/awt/Component;)Z", nullptr, $PRIVATE, $method(static_cast<bool(LegacyGlueFocusTraversalPolicy::*)($Component*)>(&LegacyGlueFocusTraversalPolicy::accept))},
	{"getComponentAfter", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getComponentBefore", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getDefaultComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getFirstComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getLastComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(LegacyGlueFocusTraversalPolicy::*)($ObjectInputStream*)>(&LegacyGlueFocusTraversalPolicy::readObject)), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"setNextFocusableComponent", "(Ljava/awt/Component;Ljava/awt/Component;)V", nullptr, 0, $method(static_cast<void(LegacyGlueFocusTraversalPolicy::*)($Component*,$Component*)>(&LegacyGlueFocusTraversalPolicy::setNextFocusableComponent))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unsetNextFocusableComponent", "(Ljava/awt/Component;Ljava/awt/Component;)V", nullptr, 0, $method(static_cast<void(LegacyGlueFocusTraversalPolicy::*)($Component*,$Component*)>(&LegacyGlueFocusTraversalPolicy::unsetNextFocusableComponent))},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(LegacyGlueFocusTraversalPolicy::*)($ObjectOutputStream*)>(&LegacyGlueFocusTraversalPolicy::writeObject)), "java.io.IOException"},
	{}
};

$ClassInfo _LegacyGlueFocusTraversalPolicy_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.swing.LegacyGlueFocusTraversalPolicy",
	"java.awt.FocusTraversalPolicy",
	"java.io.Serializable",
	_LegacyGlueFocusTraversalPolicy_FieldInfo_,
	_LegacyGlueFocusTraversalPolicy_MethodInfo_
};

$Object* allocate$LegacyGlueFocusTraversalPolicy($Class* clazz) {
	return $of($alloc(LegacyGlueFocusTraversalPolicy));
}

int32_t LegacyGlueFocusTraversalPolicy::hashCode() {
	 return this->$FocusTraversalPolicy::hashCode();
}

bool LegacyGlueFocusTraversalPolicy::equals(Object$* arg0) {
	 return this->$FocusTraversalPolicy::equals(arg0);
}

$Object* LegacyGlueFocusTraversalPolicy::clone() {
	 return this->$FocusTraversalPolicy::clone();
}

$String* LegacyGlueFocusTraversalPolicy::toString() {
	 return this->$FocusTraversalPolicy::toString();
}

void LegacyGlueFocusTraversalPolicy::finalize() {
	this->$FocusTraversalPolicy::finalize();
}

void LegacyGlueFocusTraversalPolicy::init$($FocusTraversalPolicy* delegatePolicy) {
	$FocusTraversalPolicy::init$();
	$set(this, forwardMap, $new($HashMap));
	$set(this, backwardMap, $new($HashMap));
	$set(this, delegatePolicy, delegatePolicy);
}

void LegacyGlueFocusTraversalPolicy::init$($DefaultFocusManager* delegateManager) {
	$FocusTraversalPolicy::init$();
	$set(this, forwardMap, $new($HashMap));
	$set(this, backwardMap, $new($HashMap));
	$set(this, delegateManager, delegateManager);
}

void LegacyGlueFocusTraversalPolicy::setNextFocusableComponent($Component* left, $Component* right) {
	$nc(this->forwardMap)->put(left, right);
	$nc(this->backwardMap)->put(right, left);
}

void LegacyGlueFocusTraversalPolicy::unsetNextFocusableComponent($Component* left, $Component* right) {
	$nc(this->forwardMap)->remove(left);
	$nc(this->backwardMap)->remove(right);
}

$Component* LegacyGlueFocusTraversalPolicy::getComponentAfter($Container* focusCycleRoot, $Component* aComponent) {
	$useLocalCurrentObjectStackCache();
	$var($Component, hardCoded, aComponent);
	$var($Component, prevHardCoded, nullptr);
	$var($HashSet, sanity, $new($HashSet));
	do {
		$assign(prevHardCoded, hardCoded);
		$assign(hardCoded, $cast($Component, $nc(this->forwardMap)->get(hardCoded)));
		if (hardCoded == nullptr) {
			if (this->delegatePolicy != nullptr && $nc(prevHardCoded)->isFocusCycleRoot(focusCycleRoot)) {
				return $nc(this->delegatePolicy)->getComponentAfter(focusCycleRoot, prevHardCoded);
			} else if (this->delegateManager != nullptr) {
				return $nc(this->delegateManager)->getComponentAfter(focusCycleRoot, aComponent);
			} else {
				return nullptr;
			}
		}
		if (sanity->contains(hardCoded)) {
			return nullptr;
		}
		sanity->add(hardCoded);
	} while (!accept(hardCoded));
	return hardCoded;
}

$Component* LegacyGlueFocusTraversalPolicy::getComponentBefore($Container* focusCycleRoot, $Component* aComponent) {
	$useLocalCurrentObjectStackCache();
	$var($Component, hardCoded, aComponent);
	$var($Component, prevHardCoded, nullptr);
	$var($HashSet, sanity, $new($HashSet));
	do {
		$assign(prevHardCoded, hardCoded);
		$assign(hardCoded, $cast($Component, $nc(this->backwardMap)->get(hardCoded)));
		if (hardCoded == nullptr) {
			if (this->delegatePolicy != nullptr && $nc(prevHardCoded)->isFocusCycleRoot(focusCycleRoot)) {
				return $nc(this->delegatePolicy)->getComponentBefore(focusCycleRoot, prevHardCoded);
			} else if (this->delegateManager != nullptr) {
				return $nc(this->delegateManager)->getComponentBefore(focusCycleRoot, aComponent);
			} else {
				return nullptr;
			}
		}
		if (sanity->contains(hardCoded)) {
			return nullptr;
		}
		sanity->add(hardCoded);
	} while (!accept(hardCoded));
	return hardCoded;
}

$Component* LegacyGlueFocusTraversalPolicy::getFirstComponent($Container* focusCycleRoot) {
	if (this->delegatePolicy != nullptr) {
		return $nc(this->delegatePolicy)->getFirstComponent(focusCycleRoot);
	} else if (this->delegateManager != nullptr) {
		return $nc(this->delegateManager)->getFirstComponent(focusCycleRoot);
	} else {
		return nullptr;
	}
}

$Component* LegacyGlueFocusTraversalPolicy::getLastComponent($Container* focusCycleRoot) {
	if (this->delegatePolicy != nullptr) {
		return $nc(this->delegatePolicy)->getLastComponent(focusCycleRoot);
	} else if (this->delegateManager != nullptr) {
		return $nc(this->delegateManager)->getLastComponent(focusCycleRoot);
	} else {
		return nullptr;
	}
}

$Component* LegacyGlueFocusTraversalPolicy::getDefaultComponent($Container* focusCycleRoot) {
	if (this->delegatePolicy != nullptr) {
		return $nc(this->delegatePolicy)->getDefaultComponent(focusCycleRoot);
	} else {
		return getFirstComponent(focusCycleRoot);
	}
}

bool LegacyGlueFocusTraversalPolicy::accept($Component* aComponent) {
	bool var$2 = $nc(aComponent)->isVisible();
	bool var$1 = var$2 && aComponent->isDisplayable();
	bool var$0 = var$1 && aComponent->isFocusable();
	if (!(var$0 && aComponent->isEnabled())) {
		return false;
	}
	if (!($instanceOf($Window, aComponent))) {
		{
			$var($Container, enableTest, $nc(aComponent)->getParent());
			for (; enableTest != nullptr; $assign(enableTest, $nc(enableTest)->getParent())) {
				bool var$3 = enableTest->isEnabled();
				if (!(var$3 || enableTest->isLightweight())) {
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

void LegacyGlueFocusTraversalPolicy::writeObject($ObjectOutputStream* out) {
	$nc(out)->defaultWriteObject();
	if ($instanceOf($Serializable, this->delegatePolicy)) {
		out->writeObject(this->delegatePolicy);
	} else {
		out->writeObject(nullptr);
	}
	if ($instanceOf($Serializable, this->delegateManager)) {
		out->writeObject(this->delegateManager);
	} else {
		out->writeObject(nullptr);
	}
}

void LegacyGlueFocusTraversalPolicy::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, f, $nc(in)->readFields());
	$var($HashMap, newForwardMap, $cast($HashMap, $nc(f)->get("forwardMap"_s, ($Object*)nullptr)));
	if (newForwardMap == nullptr) {
		$throwNew($InvalidObjectException, "Null forwardMap"_s);
	}
	$set(this, forwardMap, newForwardMap);
	$var($HashMap, newBackwardMap, $cast($HashMap, f->get("backwardMap"_s, ($Object*)nullptr)));
	if (newBackwardMap == nullptr) {
		$throwNew($InvalidObjectException, "Null backwardMap"_s);
	}
	$set(this, backwardMap, newBackwardMap);
	$set(this, delegatePolicy, $cast($FocusTraversalPolicy, in->readObject()));
	$set(this, delegateManager, $cast($DefaultFocusManager, in->readObject()));
}

LegacyGlueFocusTraversalPolicy::LegacyGlueFocusTraversalPolicy() {
}

$Class* LegacyGlueFocusTraversalPolicy::load$($String* name, bool initialize) {
	$loadClass(LegacyGlueFocusTraversalPolicy, name, initialize, &_LegacyGlueFocusTraversalPolicy_ClassInfo_, allocate$LegacyGlueFocusTraversalPolicy);
	return class$;
}

$Class* LegacyGlueFocusTraversalPolicy::class$ = nullptr;

	} // swing
} // javax