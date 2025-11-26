#include <sun/awt/GlobalCursorManager$NativeUpdater.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/Component.h>
#include <java/awt/event/InvocationEvent.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/GlobalCursorManager.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $Component = ::java::awt::Component;
using $InvocationEvent = ::java::awt::event::InvocationEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $AppContext = ::sun::awt::AppContext;
using $GlobalCursorManager = ::sun::awt::GlobalCursorManager;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

$FieldInfo _GlobalCursorManager$NativeUpdater_FieldInfo_[] = {
	{"this$0", "Lsun/awt/GlobalCursorManager;", nullptr, $FINAL | $SYNTHETIC, $field(GlobalCursorManager$NativeUpdater, this$0)},
	{"pending", "Z", nullptr, 0, $field(GlobalCursorManager$NativeUpdater, pending)},
	{}
};

$MethodInfo _GlobalCursorManager$NativeUpdater_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/GlobalCursorManager;)V", nullptr, 0, $method(static_cast<void(GlobalCursorManager$NativeUpdater::*)($GlobalCursorManager*)>(&GlobalCursorManager$NativeUpdater::init$))},
	{"postIfNotPending", "(Ljava/awt/Component;Ljava/awt/event/InvocationEvent;)V", nullptr, $PUBLIC},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _GlobalCursorManager$NativeUpdater_InnerClassesInfo_[] = {
	{"sun.awt.GlobalCursorManager$NativeUpdater", "sun.awt.GlobalCursorManager", "NativeUpdater", 0},
	{}
};

$ClassInfo _GlobalCursorManager$NativeUpdater_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.GlobalCursorManager$NativeUpdater",
	"java.lang.Object",
	"java.lang.Runnable",
	_GlobalCursorManager$NativeUpdater_FieldInfo_,
	_GlobalCursorManager$NativeUpdater_MethodInfo_,
	nullptr,
	nullptr,
	_GlobalCursorManager$NativeUpdater_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.GlobalCursorManager"
};

$Object* allocate$GlobalCursorManager$NativeUpdater($Class* clazz) {
	return $of($alloc(GlobalCursorManager$NativeUpdater));
}

void GlobalCursorManager$NativeUpdater::init$($GlobalCursorManager* this$0) {
	$set(this, this$0, this$0);
	this->pending = false;
}

void GlobalCursorManager$NativeUpdater::run() {
	bool shouldUpdate = false;
	$synchronized(this) {
		if (this->pending) {
			this->pending = false;
			shouldUpdate = true;
		}
	}
	if (shouldUpdate) {
		this->this$0->_updateCursor(false);
	}
}

void GlobalCursorManager$NativeUpdater::postIfNotPending($Component* heavy, $InvocationEvent* in) {
	bool shouldPost = false;
	$synchronized(this) {
		if (!this->pending) {
			this->pending = (shouldPost = true);
		}
	}
	if (shouldPost) {
		$SunToolkit::postEvent($($SunToolkit::targetToAppContext(heavy)), in);
	}
}

GlobalCursorManager$NativeUpdater::GlobalCursorManager$NativeUpdater() {
}

$Class* GlobalCursorManager$NativeUpdater::load$($String* name, bool initialize) {
	$loadClass(GlobalCursorManager$NativeUpdater, name, initialize, &_GlobalCursorManager$NativeUpdater_ClassInfo_, allocate$GlobalCursorManager$NativeUpdater);
	return class$;
}

$Class* GlobalCursorManager$NativeUpdater::class$ = nullptr;

	} // awt
} // sun