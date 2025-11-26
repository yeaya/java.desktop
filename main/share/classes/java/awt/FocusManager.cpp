#include <java/awt/FocusManager.h>

#include <java/awt/Container.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _FocusManager_FieldInfo_[] = {
	{"focusRoot", "Ljava/awt/Container;", nullptr, 0, $field(FocusManager, focusRoot)},
	{"focusOwner", "Ljava/awt/Component;", nullptr, 0, $field(FocusManager, focusOwner)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FocusManager, serialVersionUID)},
	{}
};

$MethodInfo _FocusManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(FocusManager::*)()>(&FocusManager::init$))},
	{}
};

$ClassInfo _FocusManager_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.FocusManager",
	"java.lang.Object",
	"java.io.Serializable",
	_FocusManager_FieldInfo_,
	_FocusManager_MethodInfo_
};

$Object* allocate$FocusManager($Class* clazz) {
	return $of($alloc(FocusManager));
}

void FocusManager::init$() {
}

FocusManager::FocusManager() {
}

$Class* FocusManager::load$($String* name, bool initialize) {
	$loadClass(FocusManager, name, initialize, &_FocusManager_ClassInfo_, allocate$FocusManager);
	return class$;
}

$Class* FocusManager::class$ = nullptr;

	} // awt
} // java