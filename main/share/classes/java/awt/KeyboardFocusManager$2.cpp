#include <java/awt/KeyboardFocusManager$2.h>

#include <java/awt/KeyboardFocusManager.h>
#include <jcpp.h>

using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace awt {

$FieldInfo _KeyboardFocusManager$2_FieldInfo_[] = {
	{"this$0", "Ljava/awt/KeyboardFocusManager;", nullptr, $FINAL | $SYNTHETIC, $field(KeyboardFocusManager$2, this$0)},
	{}
};

$MethodInfo _KeyboardFocusManager$2_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/KeyboardFocusManager;)V", nullptr, 0, $method(static_cast<void(KeyboardFocusManager$2::*)($KeyboardFocusManager*)>(&KeyboardFocusManager$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _KeyboardFocusManager$2_EnclosingMethodInfo_ = {
	"java.awt.KeyboardFocusManager",
	"clearGlobalFocusOwnerPriv",
	"()V"
};

$InnerClassInfo _KeyboardFocusManager$2_InnerClassesInfo_[] = {
	{"java.awt.KeyboardFocusManager$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeyboardFocusManager$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.KeyboardFocusManager$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_KeyboardFocusManager$2_FieldInfo_,
	_KeyboardFocusManager$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_KeyboardFocusManager$2_EnclosingMethodInfo_,
	_KeyboardFocusManager$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.KeyboardFocusManager"
};

$Object* allocate$KeyboardFocusManager$2($Class* clazz) {
	return $of($alloc(KeyboardFocusManager$2));
}

void KeyboardFocusManager$2::init$($KeyboardFocusManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* KeyboardFocusManager$2::run() {
	this->this$0->clearGlobalFocusOwner();
	return $of(nullptr);
}

KeyboardFocusManager$2::KeyboardFocusManager$2() {
}

$Class* KeyboardFocusManager$2::load$($String* name, bool initialize) {
	$loadClass(KeyboardFocusManager$2, name, initialize, &_KeyboardFocusManager$2_ClassInfo_, allocate$KeyboardFocusManager$2);
	return class$;
}

$Class* KeyboardFocusManager$2::class$ = nullptr;

	} // awt
} // java