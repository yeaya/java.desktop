#include <sun/print/ServiceDialog$5.h>

#include <java/net/URL.h>
#include <sun/print/ServiceDialog.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $ServiceDialog = ::sun::print::ServiceDialog;

namespace sun {
	namespace print {

$FieldInfo _ServiceDialog$5_FieldInfo_[] = {
	{"val$key", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(ServiceDialog$5, val$key)},
	{}
};

$MethodInfo _ServiceDialog$5_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(static_cast<void(ServiceDialog$5::*)($String*)>(&ServiceDialog$5::init$))},
	{"run", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ServiceDialog$5_EnclosingMethodInfo_ = {
	"sun.print.ServiceDialog",
	"getImageResource",
	"(Ljava/lang/String;)Ljava/net/URL;"
};

$InnerClassInfo _ServiceDialog$5_InnerClassesInfo_[] = {
	{"sun.print.ServiceDialog$5", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ServiceDialog$5_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.ServiceDialog$5",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_ServiceDialog$5_FieldInfo_,
	_ServiceDialog$5_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/net/URL;>;",
	&_ServiceDialog$5_EnclosingMethodInfo_,
	_ServiceDialog$5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.ServiceDialog"
};

$Object* allocate$ServiceDialog$5($Class* clazz) {
	return $of($alloc(ServiceDialog$5));
}

void ServiceDialog$5::init$($String* val$key) {
	$set(this, val$key, val$key);
}

$Object* ServiceDialog$5::run() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$load($ServiceDialog);
	$var($URL, url, $ServiceDialog::class$->getResource($$str({"resources/"_s, this->val$key})));
	return $of(url);
}

ServiceDialog$5::ServiceDialog$5() {
}

$Class* ServiceDialog$5::load$($String* name, bool initialize) {
	$loadClass(ServiceDialog$5, name, initialize, &_ServiceDialog$5_ClassInfo_, allocate$ServiceDialog$5);
	return class$;
}

$Class* ServiceDialog$5::class$ = nullptr;

	} // print
} // sun