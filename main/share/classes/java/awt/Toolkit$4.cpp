#include <java/awt/Toolkit$4.h>

#include <java/awt/Toolkit.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace java {
	namespace awt {

$MethodInfo _Toolkit$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Toolkit$4::*)()>(&Toolkit$4::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Toolkit$4_EnclosingMethodInfo_ = {
	"java.awt.Toolkit",
	"initStatic",
	"()V"
};

$InnerClassInfo _Toolkit$4_InnerClassesInfo_[] = {
	{"java.awt.Toolkit$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Toolkit$4_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Toolkit$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_Toolkit$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_Toolkit$4_EnclosingMethodInfo_,
	_Toolkit$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Toolkit"
};

$Object* allocate$Toolkit$4($Class* clazz) {
	return $of($alloc(Toolkit$4));
}

void Toolkit$4::init$() {
}

$Object* Toolkit$4::run() {
	$beforeCallerSensitive();
	try {
		$init($Toolkit);
		$assignStatic($Toolkit::resources, $ResourceBundle::getBundle("sun.awt.resources.awt"_s));
	} catch ($MissingResourceException& e) {
	}
	return $of(nullptr);
}

Toolkit$4::Toolkit$4() {
}

$Class* Toolkit$4::load$($String* name, bool initialize) {
	$loadClass(Toolkit$4, name, initialize, &_Toolkit$4_ClassInfo_, allocate$Toolkit$4);
	return class$;
}

$Class* Toolkit$4::class$ = nullptr;

	} // awt
} // java