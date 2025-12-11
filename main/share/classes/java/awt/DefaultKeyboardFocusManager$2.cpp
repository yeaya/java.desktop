#include <java/awt/DefaultKeyboardFocusManager$2.h>

#include <java/awt/DefaultKeyboardFocusManager.h>
#include <jcpp.h>

using $DefaultKeyboardFocusManager = ::java::awt::DefaultKeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$MethodInfo _DefaultKeyboardFocusManager$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DefaultKeyboardFocusManager$2::*)()>(&DefaultKeyboardFocusManager$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DefaultKeyboardFocusManager$2_EnclosingMethodInfo_ = {
	"java.awt.DefaultKeyboardFocusManager",
	"initStatic",
	"()V"
};

$InnerClassInfo _DefaultKeyboardFocusManager$2_InnerClassesInfo_[] = {
	{"java.awt.DefaultKeyboardFocusManager$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DefaultKeyboardFocusManager$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.DefaultKeyboardFocusManager$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_DefaultKeyboardFocusManager$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_DefaultKeyboardFocusManager$2_EnclosingMethodInfo_,
	_DefaultKeyboardFocusManager$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.DefaultKeyboardFocusManager"
};

$Object* allocate$DefaultKeyboardFocusManager$2($Class* clazz) {
	return $of($alloc(DefaultKeyboardFocusManager$2));
}

void DefaultKeyboardFocusManager$2::init$() {
}

$Object* DefaultKeyboardFocusManager$2::run() {
	$init($DefaultKeyboardFocusManager);
	$DefaultKeyboardFocusManager::fxAppThreadIsDispatchThread = "true"_s->equals($($System::getProperty("javafx.embed.singleThread"_s)));
	return $of(nullptr);
}

DefaultKeyboardFocusManager$2::DefaultKeyboardFocusManager$2() {
}

$Class* DefaultKeyboardFocusManager$2::load$($String* name, bool initialize) {
	$loadClass(DefaultKeyboardFocusManager$2, name, initialize, &_DefaultKeyboardFocusManager$2_ClassInfo_, allocate$DefaultKeyboardFocusManager$2);
	return class$;
}

$Class* DefaultKeyboardFocusManager$2::class$ = nullptr;

	} // awt
} // java