#include <sun/awt/DebugSettings$1.h>

#include <sun/awt/DebugSettings.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DebugSettings = ::sun::awt::DebugSettings;

namespace sun {
	namespace awt {

$FieldInfo _DebugSettings$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/DebugSettings;", nullptr, $FINAL | $SYNTHETIC, $field(DebugSettings$1, this$0)},
	{}
};

$MethodInfo _DebugSettings$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/DebugSettings;)V", nullptr, 0, $method(static_cast<void(DebugSettings$1::*)($DebugSettings*)>(&DebugSettings$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _DebugSettings$1_EnclosingMethodInfo_ = {
	"sun.awt.DebugSettings",
	"loadProperties",
	"()V"
};

$InnerClassInfo _DebugSettings$1_InnerClassesInfo_[] = {
	{"sun.awt.DebugSettings$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DebugSettings$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.DebugSettings$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_DebugSettings$1_FieldInfo_,
	_DebugSettings$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_DebugSettings$1_EnclosingMethodInfo_,
	_DebugSettings$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.DebugSettings"
};

$Object* allocate$DebugSettings$1($Class* clazz) {
	return $of($alloc(DebugSettings$1));
}

void DebugSettings$1::init$($DebugSettings* this$0) {
	$set(this, this$0, this$0);
}

$Object* DebugSettings$1::run() {
	this->this$0->loadDefaultProperties();
	this->this$0->loadFileProperties();
	this->this$0->loadSystemProperties();
	return $of(nullptr);
}

DebugSettings$1::DebugSettings$1() {
}

$Class* DebugSettings$1::load$($String* name, bool initialize) {
	$loadClass(DebugSettings$1, name, initialize, &_DebugSettings$1_ClassInfo_, allocate$DebugSettings$1);
	return class$;
}

$Class* DebugSettings$1::class$ = nullptr;

	} // awt
} // sun