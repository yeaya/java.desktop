#include <java/beans/PropertyEditorManager.h>

#include <com/sun/beans/finder/PropertyEditorFinder.h>
#include <java/beans/PropertyEditor.h>
#include <java/beans/ThreadGroupContext.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $InstanceFinder = ::com::sun::beans::finder::InstanceFinder;
using $PropertyEditorFinder = ::com::sun::beans::finder::PropertyEditorFinder;
using $PropertyEditor = ::java::beans::PropertyEditor;
using $ThreadGroupContext = ::java::beans::ThreadGroupContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;

namespace java {
	namespace beans {

$MethodInfo _PropertyEditorManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PropertyEditorManager::*)()>(&PropertyEditorManager::init$))},
	{"findEditor", "(Ljava/lang/Class;)Ljava/beans/PropertyEditor;", "(Ljava/lang/Class<*>;)Ljava/beans/PropertyEditor;", $PUBLIC | $STATIC, $method(static_cast<$PropertyEditor*(*)($Class*)>(&PropertyEditorManager::findEditor))},
	{"getEditorSearchPath", "()[Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$StringArray*(*)()>(&PropertyEditorManager::getEditorSearchPath))},
	{"registerEditor", "(Ljava/lang/Class;Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;Ljava/lang/Class<*>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Class*,$Class*)>(&PropertyEditorManager::registerEditor))},
	{"setEditorSearchPath", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&PropertyEditorManager::setEditorSearchPath))},
	{}
};

$ClassInfo _PropertyEditorManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.beans.PropertyEditorManager",
	"java.lang.Object",
	nullptr,
	nullptr,
	_PropertyEditorManager_MethodInfo_
};

$Object* allocate$PropertyEditorManager($Class* clazz) {
	return $of($alloc(PropertyEditorManager));
}

void PropertyEditorManager::init$() {
}

void PropertyEditorManager::registerEditor($Class* targetType, $Class* editorClass) {
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPropertiesAccess();
	}
	$nc($($nc($($ThreadGroupContext::getContext()))->getPropertyEditorFinder()))->register$(targetType, editorClass);
}

$PropertyEditor* PropertyEditorManager::findEditor($Class* targetType) {
	return $cast($PropertyEditor, $nc($($nc($($ThreadGroupContext::getContext()))->getPropertyEditorFinder()))->find(targetType));
}

$StringArray* PropertyEditorManager::getEditorSearchPath() {
	return $nc($($nc($($ThreadGroupContext::getContext()))->getPropertyEditorFinder()))->getPackages();
}

void PropertyEditorManager::setEditorSearchPath($StringArray* path) {
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		sm->checkPropertiesAccess();
	}
	$nc($($nc($($ThreadGroupContext::getContext()))->getPropertyEditorFinder()))->setPackages(path);
}

PropertyEditorManager::PropertyEditorManager() {
}

$Class* PropertyEditorManager::load$($String* name, bool initialize) {
	$loadClass(PropertyEditorManager, name, initialize, &_PropertyEditorManager_ClassInfo_, allocate$PropertyEditorManager);
	return class$;
}

$Class* PropertyEditorManager::class$ = nullptr;

	} // beans
} // java