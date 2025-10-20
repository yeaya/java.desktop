#include <sun/awt/image/VSyncedBSManager.h>

#include <java/awt/image/BufferStrategy.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <sun/awt/image/VSyncedBSManager$NoLimitVSyncBSMgr.h>
#include <sun/awt/image/VSyncedBSManager$SingleVSyncedBSMgr.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

using $BufferStrategy = ::java::awt::image::BufferStrategy;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $VSyncedBSManager$NoLimitVSyncBSMgr = ::sun::awt::image::VSyncedBSManager$NoLimitVSyncBSMgr;
using $VSyncedBSManager$SingleVSyncedBSMgr = ::sun::awt::image::VSyncedBSManager$SingleVSyncedBSMgr;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {
		namespace image {

$FieldInfo _VSyncedBSManager_FieldInfo_[] = {
	{"theInstance", "Lsun/awt/image/VSyncedBSManager;", nullptr, $PRIVATE | $STATIC, $staticField(VSyncedBSManager, theInstance)},
	{"vSyncLimit", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(VSyncedBSManager, vSyncLimit)},
	{}
};

$MethodInfo _VSyncedBSManager_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(VSyncedBSManager::*)()>(&VSyncedBSManager::init$))},
	{"checkAllowed", "(Ljava/awt/image/BufferStrategy;)Z", nullptr, $ABSTRACT},
	{"getInstance", "(Z)Lsun/awt/image/VSyncedBSManager;", nullptr, $PRIVATE | $STATIC, $method(static_cast<VSyncedBSManager*(*)(bool)>(&VSyncedBSManager::getInstance))},
	{"releaseVsync", "(Ljava/awt/image/BufferStrategy;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($BufferStrategy*)>(&VSyncedBSManager::releaseVsync))},
	{"relinquishVsync", "(Ljava/awt/image/BufferStrategy;)V", nullptr, $ABSTRACT},
	{"vsyncAllowed", "(Ljava/awt/image/BufferStrategy;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($BufferStrategy*)>(&VSyncedBSManager::vsyncAllowed))},
	{}
};

$InnerClassInfo _VSyncedBSManager_InnerClassesInfo_[] = {
	{"sun.awt.image.VSyncedBSManager$SingleVSyncedBSMgr", "sun.awt.image.VSyncedBSManager", "SingleVSyncedBSMgr", $PRIVATE | $STATIC | $FINAL},
	{"sun.awt.image.VSyncedBSManager$NoLimitVSyncBSMgr", "sun.awt.image.VSyncedBSManager", "NoLimitVSyncBSMgr", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _VSyncedBSManager_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.image.VSyncedBSManager",
	"java.lang.Object",
	nullptr,
	_VSyncedBSManager_FieldInfo_,
	_VSyncedBSManager_MethodInfo_,
	nullptr,
	nullptr,
	_VSyncedBSManager_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.image.VSyncedBSManager$SingleVSyncedBSMgr,sun.awt.image.VSyncedBSManager$NoLimitVSyncBSMgr"
};

$Object* allocate$VSyncedBSManager($Class* clazz) {
	return $of($alloc(VSyncedBSManager));
}

VSyncedBSManager* VSyncedBSManager::theInstance = nullptr;
bool VSyncedBSManager::vSyncLimit = false;

void VSyncedBSManager::init$() {
}

VSyncedBSManager* VSyncedBSManager::getInstance(bool create) {
	$init(VSyncedBSManager);
	if (VSyncedBSManager::theInstance == nullptr && create) {
		$assignStatic(VSyncedBSManager::theInstance, VSyncedBSManager::vSyncLimit ? static_cast<VSyncedBSManager*>($new($VSyncedBSManager$SingleVSyncedBSMgr)) : static_cast<VSyncedBSManager*>($new($VSyncedBSManager$NoLimitVSyncBSMgr)));
	}
	return VSyncedBSManager::theInstance;
}

bool VSyncedBSManager::vsyncAllowed($BufferStrategy* bs) {
	$init(VSyncedBSManager);
	$var(VSyncedBSManager, bsm, getInstance(true));
	return $nc(bsm)->checkAllowed(bs);
}

void VSyncedBSManager::releaseVsync($BufferStrategy* bs) {
	$load(VSyncedBSManager);
	$synchronized(class$) {
		$init(VSyncedBSManager);
		$var(VSyncedBSManager, bsm, getInstance(false));
		if (bsm != nullptr) {
			bsm->relinquishVsync(bs);
		}
	}
}

void clinit$VSyncedBSManager($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	VSyncedBSManager::vSyncLimit = $nc($($Boolean::valueOf($cast($String, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, "sun.java2d.vsynclimit"_s, "true"_s))))))))->booleanValue();
}

VSyncedBSManager::VSyncedBSManager() {
}

$Class* VSyncedBSManager::load$($String* name, bool initialize) {
	$loadClass(VSyncedBSManager, name, initialize, &_VSyncedBSManager_ClassInfo_, clinit$VSyncedBSManager, allocate$VSyncedBSManager);
	return class$;
}

$Class* VSyncedBSManager::class$ = nullptr;

		} // image
	} // awt
} // sun