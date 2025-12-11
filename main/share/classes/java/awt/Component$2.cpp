#include <java/awt/Component$2.h>

#include <java/awt/Component.h>
#include <java/awt/MouseInfo.h>
#include <java/awt/PointerInfo.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $MouseInfo = ::java::awt::MouseInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$FieldInfo _Component$2_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(Component$2, this$0)},
	{}
};

$MethodInfo _Component$2_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;)V", nullptr, 0, $method(static_cast<void(Component$2::*)($Component*)>(&Component$2::init$))},
	{"run", "()Ljava/awt/PointerInfo;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Component$2_EnclosingMethodInfo_ = {
	"java.awt.Component",
	"getMousePosition",
	"()Ljava/awt/Point;"
};

$InnerClassInfo _Component$2_InnerClassesInfo_[] = {
	{"java.awt.Component$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Component$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Component$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Component$2_FieldInfo_,
	_Component$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/PointerInfo;>;",
	&_Component$2_EnclosingMethodInfo_,
	_Component$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Component"
};

$Object* allocate$Component$2($Class* clazz) {
	return $of($alloc(Component$2));
}

void Component$2::init$($Component* this$0) {
	$set(this, this$0, this$0);
}

$Object* Component$2::run() {
	return $of($MouseInfo::getPointerInfo());
}

Component$2::Component$2() {
}

$Class* Component$2::load$($String* name, bool initialize) {
	$loadClass(Component$2, name, initialize, &_Component$2_ClassInfo_, allocate$Component$2);
	return class$;
}

$Class* Component$2::class$ = nullptr;

	} // awt
} // java