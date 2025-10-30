#include <javax/swing/RepaintManager$3.h>

#include <java/awt/Component.h>
#include <javax/swing/RepaintManager.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $RepaintManager = ::javax::swing::RepaintManager;

namespace javax {
	namespace swing {

$FieldInfo _RepaintManager$3_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/RepaintManager;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$3, this$0)},
	{"val$c", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(RepaintManager$3, val$c)},
	{}
};

$MethodInfo _RepaintManager$3_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/RepaintManager;Ljava/awt/Component;)V", "()V", 0, $method(static_cast<void(RepaintManager$3::*)($RepaintManager*,$Component*)>(&RepaintManager$3::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _RepaintManager$3_EnclosingMethodInfo_ = {
	"javax.swing.RepaintManager",
	"validateInvalidComponents",
	"()V"
};

$InnerClassInfo _RepaintManager$3_InnerClassesInfo_[] = {
	{"javax.swing.RepaintManager$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _RepaintManager$3_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.RepaintManager$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_RepaintManager$3_FieldInfo_,
	_RepaintManager$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_RepaintManager$3_EnclosingMethodInfo_,
	_RepaintManager$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.RepaintManager"
};

$Object* allocate$RepaintManager$3($Class* clazz) {
	return $of($alloc(RepaintManager$3));
}

void RepaintManager$3::init$($RepaintManager* this$0, $Component* val$c) {
	$set(this, this$0, this$0);
	$set(this, val$c, val$c);
}

$Object* RepaintManager$3::run() {
	$nc(this->val$c)->validate();
	return $of(nullptr);
}

RepaintManager$3::RepaintManager$3() {
}

$Class* RepaintManager$3::load$($String* name, bool initialize) {
	$loadClass(RepaintManager$3, name, initialize, &_RepaintManager$3_ClassInfo_, allocate$RepaintManager$3);
	return class$;
}

$Class* RepaintManager$3::class$ = nullptr;

	} // swing
} // javax