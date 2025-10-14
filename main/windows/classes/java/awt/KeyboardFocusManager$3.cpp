#include <java/awt/KeyboardFocusManager$3.h>

#include <java/awt/Container.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace awt {

$FieldInfo _KeyboardFocusManager$3_FieldInfo_[] = {
	{"this$0", "Ljava/awt/KeyboardFocusManager;", nullptr, $FINAL | $SYNTHETIC, $field(KeyboardFocusManager$3, this$0)},
	{"val$newFocusCycleRoot", "Ljava/awt/Container;", nullptr, $FINAL | $SYNTHETIC, $field(KeyboardFocusManager$3, val$newFocusCycleRoot)},
	{}
};

$MethodInfo _KeyboardFocusManager$3_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/KeyboardFocusManager;Ljava/awt/Container;)V", "()V", 0, $method(static_cast<void(KeyboardFocusManager$3::*)($KeyboardFocusManager*,$Container*)>(&KeyboardFocusManager$3::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _KeyboardFocusManager$3_EnclosingMethodInfo_ = {
	"java.awt.KeyboardFocusManager",
	"setGlobalCurrentFocusCycleRootPriv",
	"(Ljava/awt/Container;)V"
};

$InnerClassInfo _KeyboardFocusManager$3_InnerClassesInfo_[] = {
	{"java.awt.KeyboardFocusManager$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeyboardFocusManager$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.KeyboardFocusManager$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_KeyboardFocusManager$3_FieldInfo_,
	_KeyboardFocusManager$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_KeyboardFocusManager$3_EnclosingMethodInfo_,
	_KeyboardFocusManager$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.KeyboardFocusManager"
};

$Object* allocate$KeyboardFocusManager$3($Class* clazz) {
	return $of($alloc(KeyboardFocusManager$3));
}

void KeyboardFocusManager$3::init$($KeyboardFocusManager* this$0, $Container* val$newFocusCycleRoot) {
	$set(this, this$0, this$0);
	$set(this, val$newFocusCycleRoot, val$newFocusCycleRoot);
}

$Object* KeyboardFocusManager$3::run() {
	this->this$0->setGlobalCurrentFocusCycleRoot(this->val$newFocusCycleRoot);
	return $of(nullptr);
}

KeyboardFocusManager$3::KeyboardFocusManager$3() {
}

$Class* KeyboardFocusManager$3::load$($String* name, bool initialize) {
	$loadClass(KeyboardFocusManager$3, name, initialize, &_KeyboardFocusManager$3_ClassInfo_, allocate$KeyboardFocusManager$3);
	return class$;
}

$Class* KeyboardFocusManager$3::class$ = nullptr;

	} // awt
} // java