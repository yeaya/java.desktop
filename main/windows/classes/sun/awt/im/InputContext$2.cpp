#include <sun/awt/im/InputContext$2.h>

#include <java/awt/AWTKeyStroke.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/prefs/Preferences.h>
#include <sun/awt/im/InputContext.h>
#include <jcpp.h>

using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Preferences = ::java::util::prefs::Preferences;
using $InputContext = ::sun::awt::im::InputContext;

namespace sun {
	namespace awt {
		namespace im {

$FieldInfo _InputContext$2_FieldInfo_[] = {
	{"this$0", "Lsun/awt/im/InputContext;", nullptr, $FINAL | $SYNTHETIC, $field(InputContext$2, this$0)},
	{}
};

$MethodInfo _InputContext$2_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/im/InputContext;)V", nullptr, 0, $method(static_cast<void(InputContext$2::*)($InputContext*)>(&InputContext$2::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _InputContext$2_EnclosingMethodInfo_ = {
	"sun.awt.im.InputContext",
	"initializeInputMethodSelectionKey",
	"()V"
};

$InnerClassInfo _InputContext$2_InnerClassesInfo_[] = {
	{"sun.awt.im.InputContext$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _InputContext$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.im.InputContext$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_InputContext$2_FieldInfo_,
	_InputContext$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_InputContext$2_EnclosingMethodInfo_,
	_InputContext$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.im.InputContext"
};

$Object* allocate$InputContext$2($Class* clazz) {
	return $of($alloc(InputContext$2));
}

void InputContext$2::init$($InputContext* this$0) {
	$set(this, this$0, this$0);
}

$Object* InputContext$2::run() {
	$var($Preferences, root, $Preferences::userRoot());
	$init($InputContext);
	$assignStatic($InputContext::inputMethodSelectionKey, this->this$0->getInputMethodSelectionKeyStroke(root));
	if ($InputContext::inputMethodSelectionKey == nullptr) {
		$assign(root, $Preferences::systemRoot());
		$assignStatic($InputContext::inputMethodSelectionKey, this->this$0->getInputMethodSelectionKeyStroke(root));
	}
	return $of(nullptr);
}

InputContext$2::InputContext$2() {
}

$Class* InputContext$2::load$($String* name, bool initialize) {
	$loadClass(InputContext$2, name, initialize, &_InputContext$2_ClassInfo_, allocate$InputContext$2);
	return class$;
}

$Class* InputContext$2::class$ = nullptr;

		} // im
	} // awt
} // sun