#include <java/awt/DefaultKeyboardFocusManager$3.h>

#include <java/awt/DefaultKeyboardFocusManager.h>
#include <java/awt/SentEvent.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $SentEvent = ::java::awt::SentEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;

namespace java {
	namespace awt {

$FieldInfo _DefaultKeyboardFocusManager$3_FieldInfo_[] = {
	{"val$targetAppContext", "Lsun/awt/AppContext;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultKeyboardFocusManager$3, val$targetAppContext)},
	{"val$se", "Ljava/awt/SentEvent;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultKeyboardFocusManager$3, val$se)},
	{}
};

$MethodInfo _DefaultKeyboardFocusManager$3_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/SentEvent;Lsun/awt/AppContext;)V", "()V", 0, $method(static_cast<void(DefaultKeyboardFocusManager$3::*)($SentEvent*,$AppContext*)>(&DefaultKeyboardFocusManager$3::init$))},
	{"evaluate", "()Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultKeyboardFocusManager$3_EnclosingMethodInfo_ = {
	"java.awt.DefaultKeyboardFocusManager",
	"sendMessage",
	"(Ljava/awt/Component;Ljava/awt/AWTEvent;)Z"
};

$InnerClassInfo _DefaultKeyboardFocusManager$3_InnerClassesInfo_[] = {
	{"java.awt.DefaultKeyboardFocusManager$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultKeyboardFocusManager$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.DefaultKeyboardFocusManager$3",
	"java.lang.Object",
	"java.awt.Conditional",
	_DefaultKeyboardFocusManager$3_FieldInfo_,
	_DefaultKeyboardFocusManager$3_MethodInfo_,
	nullptr,
	&_DefaultKeyboardFocusManager$3_EnclosingMethodInfo_,
	_DefaultKeyboardFocusManager$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.DefaultKeyboardFocusManager"
};

$Object* allocate$DefaultKeyboardFocusManager$3($Class* clazz) {
	return $of($alloc(DefaultKeyboardFocusManager$3));
}

void DefaultKeyboardFocusManager$3::init$($SentEvent* val$se, $AppContext* val$targetAppContext) {
	$set(this, val$se, val$se);
	$set(this, val$targetAppContext, val$targetAppContext);
}

bool DefaultKeyboardFocusManager$3::evaluate() {
	return !$nc(this->val$se)->dispatched$ && !$nc(this->val$targetAppContext)->isDisposed();
}

DefaultKeyboardFocusManager$3::DefaultKeyboardFocusManager$3() {
}

$Class* DefaultKeyboardFocusManager$3::load$($String* name, bool initialize) {
	$loadClass(DefaultKeyboardFocusManager$3, name, initialize, &_DefaultKeyboardFocusManager$3_ClassInfo_, allocate$DefaultKeyboardFocusManager$3);
	return class$;
}

$Class* DefaultKeyboardFocusManager$3::class$ = nullptr;

	} // awt
} // java