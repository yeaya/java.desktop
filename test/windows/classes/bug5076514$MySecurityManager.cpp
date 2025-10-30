#include <bug5076514$MySecurityManager.h>

#include <bug5076514.h>
#include <java/lang/SecurityManager.h>
#include <java/security/Permission.h>
#include <jcpp.h>

using $bug5076514 = ::bug5076514;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $Permission = ::java::security::Permission;

$MethodInfo _bug5076514$MySecurityManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(bug5076514$MySecurityManager::*)()>(&bug5076514$MySecurityManager::init$))},
	{"checkPermission", "(Ljava/security/Permission;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _bug5076514$MySecurityManager_InnerClassesInfo_[] = {
	{"bug5076514$MySecurityManager", "bug5076514", "MySecurityManager", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _bug5076514$MySecurityManager_ClassInfo_ = {
	$ACC_SUPER,
	"bug5076514$MySecurityManager",
	"java.lang.SecurityManager",
	nullptr,
	nullptr,
	_bug5076514$MySecurityManager_MethodInfo_,
	nullptr,
	nullptr,
	_bug5076514$MySecurityManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug5076514"
};

$Object* allocate$bug5076514$MySecurityManager($Class* clazz) {
	return $of($alloc(bug5076514$MySecurityManager));
}

void bug5076514$MySecurityManager::init$() {
	$SecurityManager::init$();
}

void bug5076514$MySecurityManager::checkPermission($Permission* perm) {
	if ("accessClipboard"_s->equals($($nc(perm)->getName()))) {
		$init($bug5076514);
		$bug5076514::isCheckPermissionCalled = true;
	}
}

bug5076514$MySecurityManager::bug5076514$MySecurityManager() {
}

$Class* bug5076514$MySecurityManager::load$($String* name, bool initialize) {
	$loadClass(bug5076514$MySecurityManager, name, initialize, &_bug5076514$MySecurityManager_ClassInfo_, allocate$bug5076514$MySecurityManager);
	return class$;
}

$Class* bug5076514$MySecurityManager::class$ = nullptr;