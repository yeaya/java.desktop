#include <javax/swing/RepaintManager$2$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/RepaintManager$2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $RepaintManager$2 = ::javax::swing::RepaintManager$2;

namespace javax {
	namespace swing {

$FieldInfo _RepaintManager$2$1_FieldInfo_[] = {
	{"this$1", "Ljavax/swing/RepaintManager$2;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$2$1, this$1)},
	{}
};

$MethodInfo _RepaintManager$2$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/RepaintManager$2;)V", nullptr, 0, $method(static_cast<void(RepaintManager$2$1::*)($RepaintManager$2*)>(&RepaintManager$2$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RepaintManager$2$1_EnclosingMethodInfo_ = {
	"javax.swing.RepaintManager$2",
	"run",
	"()V"
};

$InnerClassInfo _RepaintManager$2$1_InnerClassesInfo_[] = {
	{"javax.swing.RepaintManager$2", nullptr, nullptr, 0},
	{"javax.swing.RepaintManager$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RepaintManager$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.RepaintManager$2$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_RepaintManager$2$1_FieldInfo_,
	_RepaintManager$2$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_RepaintManager$2$1_EnclosingMethodInfo_,
	_RepaintManager$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RepaintManager"
};

$Object* allocate$RepaintManager$2$1($Class* clazz) {
	return $of($alloc(RepaintManager$2$1));
}

void RepaintManager$2$1::init$($RepaintManager$2* this$1) {
	$set(this, this$1, this$1);
}

$Object* RepaintManager$2$1::run() {
	$nc(this->this$1->val$r)->run();
	return $of(nullptr);
}

RepaintManager$2$1::RepaintManager$2$1() {
}

$Class* RepaintManager$2$1::load$($String* name, bool initialize) {
	$loadClass(RepaintManager$2$1, name, initialize, &_RepaintManager$2$1_ClassInfo_, allocate$RepaintManager$2$1);
	return class$;
}

$Class* RepaintManager$2$1::class$ = nullptr;

	} // swing
} // javax