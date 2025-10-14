#include <sun/print/ServiceDialog$4.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Error.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Error = ::java::lang::Error;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $ServiceDialog = ::sun::print::ServiceDialog;

namespace sun {
	namespace print {

$MethodInfo _ServiceDialog$4_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ServiceDialog$4::*)()>(&ServiceDialog$4::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ServiceDialog$4_EnclosingMethodInfo_ = {
	"sun.print.ServiceDialog",
	"initResource",
	"()V"
};

$InnerClassInfo _ServiceDialog$4_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServiceDialog$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$4",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_ServiceDialog$4_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_ServiceDialog$4_EnclosingMethodInfo_,
	_ServiceDialog$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$4($Class* clazz) {
	return $of($alloc(ServiceDialog$4));
}

void ServiceDialog$4::init$() {
}

$Object* ServiceDialog$4::run() {
	$beforeCallerSensitive();
	try {
		$init($ServiceDialog);
		$assignStatic($ServiceDialog::messageRB, $ResourceBundle::getBundle("sun.print.resources.serviceui"_s));
		return $of(nullptr);
	} catch ($MissingResourceException&) {
		$var($MissingResourceException, e, $catch());
		$throwNew($Error, "Fatal: Resource for ServiceUI is missing"_s);
	}
	$shouldNotReachHere();
}

ServiceDialog$4::ServiceDialog$4() {
}

$Class* ServiceDialog$4::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$4, name, initialize, &_ServiceDialog$4_ClassInfo_, allocate$ServiceDialog$4);
	return class$;
}

$Class* ServiceDialog$4::class$ = nullptr;

	} // print
} // sun