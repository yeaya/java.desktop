#include <java/awt/Component$3.h>

#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace java {
	namespace awt {

$FieldInfo _Component$3_FieldInfo_[] = {
	{"this$0", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(Component$3, this$0)},
	{"val$clazz", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(Component$3, val$clazz)},
	{}
};

$MethodInfo _Component$3_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Component;Ljava/lang/Class;)V", "()V", 0, $method(static_cast<void(Component$3::*)($Component*,$Class*)>(&Component$3::init$))},
	{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Component$3_EnclosingMethodInfo_ = {
	"java.awt.Component",
	"checkCoalescing",
	"()Z"
};

$InnerClassInfo _Component$3_InnerClassesInfo_[] = {
	{"java.awt.Component$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Component$3_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Component$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_Component$3_FieldInfo_,
	_Component$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
	&_Component$3_EnclosingMethodInfo_,
	_Component$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Component"
};

$Object* allocate$Component$3($Class* clazz) {
	return $of($alloc(Component$3));
}

void Component$3::init$($Component* this$0, $Class* val$clazz) {
	$set(this, this$0, this$0);
	$set(this, val$clazz, val$clazz);
}

$Object* Component$3::run() {
	return $of($Boolean::valueOf($Component::isCoalesceEventsOverriden(this->val$clazz)));
}

Component$3::Component$3() {
}

$Class* Component$3::load$($String* name, bool initialize) {
	$loadClass(Component$3, name, initialize, &_Component$3_ClassInfo_, allocate$Component$3);
	return class$;
}

$Class* Component$3::class$ = nullptr;

	} // awt
} // java