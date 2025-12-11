#include <sun/awt/im/ExecutableInputMethodManager$4.h>

#include <java/util/prefs/Preferences.h>
#include <sun/awt/im/ExecutableInputMethodManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Preferences = ::java::util::prefs::Preferences;
using $ExecutableInputMethodManager = ::sun::awt::im::ExecutableInputMethodManager;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _ExecutableInputMethodManager$4_FieldInfo_[] = {
	{"this$0", "Lsun/awt/im/ExecutableInputMethodManager;", nullptr, $FINAL | $SYNTHETIC, $field(ExecutableInputMethodManager$4, this$0)},
	{}
};

$MethodInfo _ExecutableInputMethodManager$4_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/im/ExecutableInputMethodManager;)V", nullptr, 0, $method(static_cast<void(ExecutableInputMethodManager$4::*)($ExecutableInputMethodManager*)>(&ExecutableInputMethodManager$4::init$))},
	{"run", "()Ljava/util/prefs/Preferences;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ExecutableInputMethodManager$4_EnclosingMethodInfo_ = {
	"sun.awt.im.ExecutableInputMethodManager",
	"getUserRoot",
	"()Ljava/util/prefs/Preferences;"
};

$InnerClassInfo _ExecutableInputMethodManager$4_InnerClassesInfo_[] = {
	{"sun.awt.im.ExecutableInputMethodManager$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ExecutableInputMethodManager$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.im.ExecutableInputMethodManager$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ExecutableInputMethodManager$4_FieldInfo_,
	_ExecutableInputMethodManager$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/prefs/Preferences;>;",
	&_ExecutableInputMethodManager$4_EnclosingMethodInfo_,
	_ExecutableInputMethodManager$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.im.ExecutableInputMethodManager"
};

$Object* allocate$ExecutableInputMethodManager$4($Class* clazz) {
	return $of($alloc(ExecutableInputMethodManager$4));
}

void ExecutableInputMethodManager$4::init$($ExecutableInputMethodManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* ExecutableInputMethodManager$4::run() {
	return $of($Preferences::userRoot());
}

ExecutableInputMethodManager$4::ExecutableInputMethodManager$4() {
}

$Class* ExecutableInputMethodManager$4::load$($String* name, bool initialize) {
	$loadClass(ExecutableInputMethodManager$4, name, initialize, &_ExecutableInputMethodManager$4_ClassInfo_, allocate$ExecutableInputMethodManager$4);
	return class$;
}

$Class* ExecutableInputMethodManager$4::class$ = nullptr;

		} // im
	} // awt
} // sun