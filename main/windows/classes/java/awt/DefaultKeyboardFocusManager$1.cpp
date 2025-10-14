#include <java/awt/DefaultKeyboardFocusManager$1.h>

#include <java/awt/DefaultKeyboardFocusManager.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $DefaultKeyboardFocusManager = ::java::awt::DefaultKeyboardFocusManager;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AWTAccessor$DefaultKeyboardFocusManagerAccessor = ::sun::awt::AWTAccessor$DefaultKeyboardFocusManagerAccessor;

namespace java {
	namespace awt {

$MethodInfo _DefaultKeyboardFocusManager$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultKeyboardFocusManager$1::*)()>(&DefaultKeyboardFocusManager$1::init$))},
	{"consumeNextKeyTyped", "(Ljava/awt/DefaultKeyboardFocusManager;Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultKeyboardFocusManager$1_EnclosingMethodInfo_ = {
	"java.awt.DefaultKeyboardFocusManager",
	"initStatic",
	"()V"
};

$InnerClassInfo _DefaultKeyboardFocusManager$1_InnerClassesInfo_[] = {
	{"java.awt.DefaultKeyboardFocusManager$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$DefaultKeyboardFocusManagerAccessor", "sun.awt.AWTAccessor", "DefaultKeyboardFocusManagerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DefaultKeyboardFocusManager$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.DefaultKeyboardFocusManager$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$DefaultKeyboardFocusManagerAccessor",
	nullptr,
	_DefaultKeyboardFocusManager$1_MethodInfo_,
	nullptr,
	&_DefaultKeyboardFocusManager$1_EnclosingMethodInfo_,
	_DefaultKeyboardFocusManager$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.DefaultKeyboardFocusManager"
};

$Object* allocate$DefaultKeyboardFocusManager$1($Class* clazz) {
	return $of($alloc(DefaultKeyboardFocusManager$1));
}

void DefaultKeyboardFocusManager$1::init$() {
}

void DefaultKeyboardFocusManager$1::consumeNextKeyTyped($DefaultKeyboardFocusManager* dkfm, $KeyEvent* e) {
	$nc(dkfm)->consumeNextKeyTyped(e);
}

DefaultKeyboardFocusManager$1::DefaultKeyboardFocusManager$1() {
}

$Class* DefaultKeyboardFocusManager$1::load$($String* name, bool initialize) {
	$loadClass(DefaultKeyboardFocusManager$1, name, initialize, &_DefaultKeyboardFocusManager$1_ClassInfo_, allocate$DefaultKeyboardFocusManager$1);
	return class$;
}

$Class* DefaultKeyboardFocusManager$1::class$ = nullptr;

	} // awt
} // java