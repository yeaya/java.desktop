#include <javax/swing/FocusManager.h>

#include <java/awt/ContainerOrderFocusTraversalPolicy.h>
#include <java/awt/DefaultFocusTraversalPolicy.h>
#include <java/awt/DefaultKeyboardFocusManager.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultFocusManager.h>
#include <javax/swing/DelegatingDefaultFocusManager.h>
#include <jcpp.h>

#undef FOCUS_MANAGER_CLASS_PROPERTY

using $ContainerOrderFocusTraversalPolicy = ::java::awt::ContainerOrderFocusTraversalPolicy;
using $DefaultFocusTraversalPolicy = ::java::awt::DefaultFocusTraversalPolicy;
using $DefaultKeyboardFocusManager = ::java::awt::DefaultKeyboardFocusManager;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultFocusManager = ::javax::swing::DefaultFocusManager;
using $DelegatingDefaultFocusManager = ::javax::swing::DelegatingDefaultFocusManager;

namespace javax {
	namespace swing {

$CompoundAttribute _FocusManager_MethodAnnotations_disableSwingFocusManager1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _FocusManager_MethodAnnotations_isFocusManagerEnabled3[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _FocusManager_FieldInfo_[] = {
	{"FOCUS_MANAGER_CLASS_PROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(FocusManager, FOCUS_MANAGER_CLASS_PROPERTY)},
	{"enabled", "Z", nullptr, $PRIVATE | $STATIC, $staticField(FocusManager, enabled)},
	{}
};

$MethodInfo _FocusManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(FocusManager::*)()>(&FocusManager::init$))},
	{"disableSwingFocusManager", "()V", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<void(*)()>(&FocusManager::disableSwingFocusManager)), nullptr, nullptr, _FocusManager_MethodAnnotations_disableSwingFocusManager1},
	{"getCurrentManager", "()Ljavax/swing/FocusManager;", nullptr, $PUBLIC | $STATIC, $method(static_cast<FocusManager*(*)()>(&FocusManager::getCurrentManager))},
	{"isFocusManagerEnabled", "()Z", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<bool(*)()>(&FocusManager::isFocusManagerEnabled)), nullptr, nullptr, _FocusManager_MethodAnnotations_isFocusManagerEnabled3},
	{"setCurrentManager", "(Ljavax/swing/FocusManager;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(FocusManager*)>(&FocusManager::setCurrentManager)), "java.lang.SecurityException"},
	{}
};

$ClassInfo _FocusManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.FocusManager",
	"java.awt.DefaultKeyboardFocusManager",
	nullptr,
	_FocusManager_FieldInfo_,
	_FocusManager_MethodInfo_
};

$Object* allocate$FocusManager($Class* clazz) {
	return $of($alloc(FocusManager));
}


$String* FocusManager::FOCUS_MANAGER_CLASS_PROPERTY = nullptr;
bool FocusManager::enabled = false;

void FocusManager::init$() {
	$DefaultKeyboardFocusManager::init$();
}

FocusManager* FocusManager::getCurrentManager() {
	$init(FocusManager);
	$var($KeyboardFocusManager, manager, $KeyboardFocusManager::getCurrentKeyboardFocusManager());
	if ($instanceOf(FocusManager, manager)) {
		return $cast(FocusManager, manager);
	} else {
		return $new($DelegatingDefaultFocusManager, manager);
	}
}

void FocusManager::setCurrentManager(FocusManager* aFocusManager) {
	$init(FocusManager);
	$var($KeyboardFocusManager, toSet, ($instanceOf($DelegatingDefaultFocusManager, aFocusManager)) ? $nc(($cast($DelegatingDefaultFocusManager, aFocusManager)))->getDelegate() : static_cast<$KeyboardFocusManager*>(aFocusManager));
	$KeyboardFocusManager::setCurrentKeyboardFocusManager(toSet);
}

void FocusManager::disableSwingFocusManager() {
	$init(FocusManager);
	if (FocusManager::enabled) {
		FocusManager::enabled = false;
		$nc($($KeyboardFocusManager::getCurrentKeyboardFocusManager()))->setDefaultFocusTraversalPolicy($$new($DefaultFocusTraversalPolicy));
	}
}

bool FocusManager::isFocusManagerEnabled() {
	$init(FocusManager);
	return FocusManager::enabled;
}

void clinit$FocusManager($Class* class$) {
	$assignStatic(FocusManager::FOCUS_MANAGER_CLASS_PROPERTY, "FocusManagerClassName"_s);
	FocusManager::enabled = true;
}

FocusManager::FocusManager() {
}

$Class* FocusManager::load$($String* name, bool initialize) {
	$loadClass(FocusManager, name, initialize, &_FocusManager_ClassInfo_, clinit$FocusManager, allocate$FocusManager);
	return class$;
}

$Class* FocusManager::class$ = nullptr;

	} // swing
} // javax