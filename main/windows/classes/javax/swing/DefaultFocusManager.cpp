#include <javax/swing/DefaultFocusManager.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/FocusManager.h>
#include <javax/swing/InternalFrameFocusTraversalPolicy.h>
#include <javax/swing/LayoutComparator.h>
#include <javax/swing/LayoutFocusTraversalPolicy.h>
#include <javax/swing/LegacyGlueFocusTraversalPolicy.h>
#include <javax/swing/LegacyLayoutFocusTraversalPolicy.h>
#include <javax/swing/SortingFocusTraversalPolicy.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FocusManager = ::javax::swing::FocusManager;
using $InternalFrameFocusTraversalPolicy = ::javax::swing::InternalFrameFocusTraversalPolicy;
using $LayoutComparator = ::javax::swing::LayoutComparator;
using $LayoutFocusTraversalPolicy = ::javax::swing::LayoutFocusTraversalPolicy;
using $LegacyGlueFocusTraversalPolicy = ::javax::swing::LegacyGlueFocusTraversalPolicy;
using $LegacyLayoutFocusTraversalPolicy = ::javax::swing::LegacyLayoutFocusTraversalPolicy;
using $SortingFocusTraversalPolicy = ::javax::swing::SortingFocusTraversalPolicy;

namespace javax {
	namespace swing {

$FieldInfo _DefaultFocusManager_FieldInfo_[] = {
	{"gluePolicy", "Ljava/awt/FocusTraversalPolicy;", nullptr, $FINAL, $field(DefaultFocusManager, gluePolicy)},
	{"layoutPolicy", "Ljava/awt/FocusTraversalPolicy;", nullptr, $PRIVATE | $FINAL, $field(DefaultFocusManager, layoutPolicy)},
	{"comparator", "Ljavax/swing/LayoutComparator;", nullptr, $PRIVATE | $FINAL, $field(DefaultFocusManager, comparator)},
	{}
};

$MethodInfo _DefaultFocusManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DefaultFocusManager::*)()>(&DefaultFocusManager::init$))},
	{"compareTabOrder", "(Ljava/awt/Component;Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{"getComponentAfter", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getComponentBefore", "(Ljava/awt/Container;Ljava/awt/Component;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getFirstComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{"getLastComponent", "(Ljava/awt/Container;)Ljava/awt/Component;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DefaultFocusManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.DefaultFocusManager",
	"javax.swing.FocusManager",
	nullptr,
	_DefaultFocusManager_FieldInfo_,
	_DefaultFocusManager_MethodInfo_
};

$Object* allocate$DefaultFocusManager($Class* clazz) {
	return $of($alloc(DefaultFocusManager));
}

void DefaultFocusManager::init$() {
	$FocusManager::init$();
	$set(this, gluePolicy, $new($LegacyGlueFocusTraversalPolicy, this));
	$set(this, layoutPolicy, $new($LegacyLayoutFocusTraversalPolicy, this));
	$set(this, comparator, $new($LayoutComparator));
	setDefaultFocusTraversalPolicy(this->gluePolicy);
}

$Component* DefaultFocusManager::getComponentAfter($Container* aContainer, $Component* aComponent) {
	$useLocalCurrentObjectStackCache();
	$var($Container, root, ($nc(aContainer)->isFocusCycleRoot()) ? aContainer : $nc(aContainer)->getFocusCycleRootAncestor());
	if (root != nullptr) {
		$var($FocusTraversalPolicy, policy, root->getFocusTraversalPolicy());
		if (policy != this->gluePolicy) {
			return $nc(policy)->getComponentAfter(root, aComponent);
		}
		$nc(this->comparator)->setComponentOrientation($(root->getComponentOrientation()));
		return $nc(this->layoutPolicy)->getComponentAfter(root, aComponent);
	}
	return nullptr;
}

$Component* DefaultFocusManager::getComponentBefore($Container* aContainer, $Component* aComponent) {
	$useLocalCurrentObjectStackCache();
	$var($Container, root, ($nc(aContainer)->isFocusCycleRoot()) ? aContainer : $nc(aContainer)->getFocusCycleRootAncestor());
	if (root != nullptr) {
		$var($FocusTraversalPolicy, policy, root->getFocusTraversalPolicy());
		if (policy != this->gluePolicy) {
			return $nc(policy)->getComponentBefore(root, aComponent);
		}
		$nc(this->comparator)->setComponentOrientation($(root->getComponentOrientation()));
		return $nc(this->layoutPolicy)->getComponentBefore(root, aComponent);
	}
	return nullptr;
}

$Component* DefaultFocusManager::getFirstComponent($Container* aContainer) {
	$useLocalCurrentObjectStackCache();
	$var($Container, root, ($nc(aContainer)->isFocusCycleRoot()) ? aContainer : $nc(aContainer)->getFocusCycleRootAncestor());
	if (root != nullptr) {
		$var($FocusTraversalPolicy, policy, root->getFocusTraversalPolicy());
		if (policy != this->gluePolicy) {
			return $nc(policy)->getFirstComponent(root);
		}
		$nc(this->comparator)->setComponentOrientation($(root->getComponentOrientation()));
		return $nc(this->layoutPolicy)->getFirstComponent(root);
	}
	return nullptr;
}

$Component* DefaultFocusManager::getLastComponent($Container* aContainer) {
	$useLocalCurrentObjectStackCache();
	$var($Container, root, ($nc(aContainer)->isFocusCycleRoot()) ? aContainer : $nc(aContainer)->getFocusCycleRootAncestor());
	if (root != nullptr) {
		$var($FocusTraversalPolicy, policy, root->getFocusTraversalPolicy());
		if (policy != this->gluePolicy) {
			return $nc(policy)->getLastComponent(root);
		}
		$nc(this->comparator)->setComponentOrientation($(root->getComponentOrientation()));
		return $nc(this->layoutPolicy)->getLastComponent(root);
	}
	return nullptr;
}

bool DefaultFocusManager::compareTabOrder($Component* a, $Component* b) {
	return ($nc(this->comparator)->compare(a, b) < 0);
}

DefaultFocusManager::DefaultFocusManager() {
}

$Class* DefaultFocusManager::load$($String* name, bool initialize) {
	$loadClass(DefaultFocusManager, name, initialize, &_DefaultFocusManager_ClassInfo_, allocate$DefaultFocusManager);
	return class$;
}

$Class* DefaultFocusManager::class$ = nullptr;

	} // swing
} // javax