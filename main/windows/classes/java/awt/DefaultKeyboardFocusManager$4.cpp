#include <java/awt/DefaultKeyboardFocusManager$4.h>

#include <java/awt/DefaultKeyboardFocusManager.h>
#include <java/awt/SentEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $DefaultKeyboardFocusManager = ::java::awt::DefaultKeyboardFocusManager;
using $SentEvent = ::java::awt::SentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;

namespace java {
	namespace awt {

$FieldInfo _DefaultKeyboardFocusManager$4_FieldInfo_[] = {
	{"val$targetAppContext", "Lsun/awt/AppContext;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultKeyboardFocusManager$4, val$targetAppContext)},
	{"val$se", "Ljava/awt/SentEvent;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultKeyboardFocusManager$4, val$se)},
	{}
};

$MethodInfo _DefaultKeyboardFocusManager$4_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/SentEvent;Lsun/awt/AppContext;)V", nullptr, 0, $method(static_cast<void(DefaultKeyboardFocusManager$4::*)($SentEvent*,$AppContext*)>(&DefaultKeyboardFocusManager$4::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultKeyboardFocusManager$4_EnclosingMethodInfo_ = {
	"java.awt.DefaultKeyboardFocusManager",
	"sendMessage",
	"(Ljava/awt/Component;Ljava/awt/AWTEvent;)Z"
};

$InnerClassInfo _DefaultKeyboardFocusManager$4_InnerClassesInfo_[] = {
	{"java.awt.DefaultKeyboardFocusManager$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultKeyboardFocusManager$4_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.DefaultKeyboardFocusManager$4",
	"java.lang.Thread",
	nullptr,
	_DefaultKeyboardFocusManager$4_FieldInfo_,
	_DefaultKeyboardFocusManager$4_MethodInfo_,
	nullptr,
	&_DefaultKeyboardFocusManager$4_EnclosingMethodInfo_,
	_DefaultKeyboardFocusManager$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.DefaultKeyboardFocusManager"
};

$Object* allocate$DefaultKeyboardFocusManager$4($Class* clazz) {
	return $of($alloc(DefaultKeyboardFocusManager$4));
}

void DefaultKeyboardFocusManager$4::init$($SentEvent* val$se, $AppContext* val$targetAppContext) {
	$set(this, val$se, val$se);
	$set(this, val$targetAppContext, val$targetAppContext);
	$Thread::init$();
}

void DefaultKeyboardFocusManager$4::run() {
	$useLocalCurrentObjectStackCache();
	while (!$nc(this->val$se)->dispatched$ && !$nc(this->val$targetAppContext)->isDisposed()) {
		try {
			$Thread::sleep(100);
		} catch ($InterruptedException&) {
			$var($InterruptedException, e, $catch());
			break;
		}
	}
}

DefaultKeyboardFocusManager$4::DefaultKeyboardFocusManager$4() {
}

$Class* DefaultKeyboardFocusManager$4::load$($String* name, bool initialize) {
	$loadClass(DefaultKeyboardFocusManager$4, name, initialize, &_DefaultKeyboardFocusManager$4_ClassInfo_, allocate$DefaultKeyboardFocusManager$4);
	return class$;
}

$Class* DefaultKeyboardFocusManager$4::class$ = nullptr;

	} // awt
} // java