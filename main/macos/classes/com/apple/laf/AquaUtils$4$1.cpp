#include <com/apple/laf/AquaUtils$4$1.h>

#include <com/apple/laf/AquaUtils$4.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef TYPE

using $AquaUtils$4 = ::com::apple::laf::AquaUtils$4;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaUtils$4$1_FieldInfo_[] = {
	{"this$0", "Lcom/apple/laf/AquaUtils$4;", nullptr, $FINAL | $SYNTHETIC, $field(AquaUtils$4$1, this$0)},
	{}
};

$MethodInfo _AquaUtils$4$1_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaUtils$4;)V", nullptr, 0, $method(static_cast<void(AquaUtils$4$1::*)($AquaUtils$4*)>(&AquaUtils$4$1::init$))},
	{"run", "()Ljava/lang/reflect/Method;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _AquaUtils$4$1_EnclosingMethodInfo_ = {
	"com.apple.laf.AquaUtils$4",
	"getInstance",
	"()Ljava/lang/reflect/Method;"
};

$InnerClassInfo _AquaUtils$4$1_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtils$4", nullptr, nullptr, 0},
	{"com.apple.laf.AquaUtils$4$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaUtils$4$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaUtils$4$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_AquaUtils$4$1_FieldInfo_,
	_AquaUtils$4$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/reflect/Method;>;",
	&_AquaUtils$4$1_EnclosingMethodInfo_,
	_AquaUtils$4$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaUtils"
};

$Object* allocate$AquaUtils$4$1($Class* clazz) {
	return $of($alloc(AquaUtils$4$1));
}

void AquaUtils$4$1::init$($AquaUtils$4* this$0) {
	$set(this, this$0, this$0);
}

$Object* AquaUtils$4$1::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$load($JComponent);
		$init($Integer);
		$var($Method, method, $JComponent::class$->getDeclaredMethod("getFlag"_s, $$new($ClassArray, {$Integer::TYPE})));
		$nc(method)->setAccessible(true);
		return $of(method);
	} catch ($Throwable& ignored) {
		return $of(nullptr);
	}
	$shouldNotReachHere();
}

AquaUtils$4$1::AquaUtils$4$1() {
}

$Class* AquaUtils$4$1::load$($String* name, bool initialize) {
	$loadClass(AquaUtils$4$1, name, initialize, &_AquaUtils$4$1_ClassInfo_, allocate$AquaUtils$4$1);
	return class$;
}

$Class* AquaUtils$4$1::class$ = nullptr;

		} // laf
	} // apple
} // com