#include <java/awt/Container$2.h>

#include <java/awt/Container.h>
#include <java/awt/MouseInfo.h>
#include <java/awt/PointerInfo.h>
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
using $MouseInfo = ::java::awt::MouseInfo;
using $PointerInfo = ::java::awt::PointerInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace awt {

$FieldInfo _Container$2_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Container;", nullptr, $FINAL | $SYNTHETIC, $field(Container$2, this$0)},
	{}
};

$MethodInfo _Container$2_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Container;)V", nullptr, 0, $method(static_cast<void(Container$2::*)($Container*)>(&Container$2::init$))},
	{"run", "()Ljava/awt/PointerInfo;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Container$2_EnclosingMethodInfo_ = {
	"java.awt.Container",
	"getMousePosition",
	"(Z)Ljava/awt/Point;"
};

$InnerClassInfo _Container$2_InnerClassesInfo_[] = {
	{"java.awt.Container$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Container$2_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Container$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Container$2_FieldInfo_,
	_Container$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/PointerInfo;>;",
	&_Container$2_EnclosingMethodInfo_,
	_Container$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Container"
};

$Object* allocate$Container$2($Class* clazz) {
	return $of($alloc(Container$2));
}

void Container$2::init$($Container* this$0) {
	$set(this, this$0, this$0);
}

$Object* Container$2::run() {
	return $of($MouseInfo::getPointerInfo());
}

Container$2::Container$2() {
}

$Class* Container$2::load$($String* name, bool initialize) {
	$loadClass(Container$2, name, initialize, &_Container$2_ClassInfo_, allocate$Container$2);
	return class$;
}

$Class* Container$2::class$ = nullptr;

	} // awt
} // java