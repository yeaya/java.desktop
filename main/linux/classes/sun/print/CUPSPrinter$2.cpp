#include <sun/print/CUPSPrinter$2.h>

#include <java/io/OutputStream.h>
#include <java/net/HttpURLConnection.h>
#include <sun/print/CUPSPrinter.h>
#include <sun/print/IPPPrintService.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $URLConnection = ::java::net::URLConnection;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $CUPSPrinter = ::sun::print::CUPSPrinter;
using $IPPPrintService = ::sun::print::IPPPrintService;

namespace sun {
	namespace print {

$FieldInfo _CUPSPrinter$2_FieldInfo_[] = {
	{"val$urlConnection", "Ljava/net/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(CUPSPrinter$2, val$urlConnection)},
	{}
};

$MethodInfo _CUPSPrinter$2_MethodInfo_[] = {
	{"<init>", "(Ljava/net/HttpURLConnection;)V", "()V", 0, $method(static_cast<void(CUPSPrinter$2::*)($HttpURLConnection*)>(&CUPSPrinter$2::init$))},
	{"run", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CUPSPrinter$2_EnclosingMethodInfo_ = {
	"sun.print.CUPSPrinter",
	"getDefaultPrinter",
	"()[Ljava/lang/String;"
};

$InnerClassInfo _CUPSPrinter$2_InnerClassesInfo_[] = {
	{"sun.print.CUPSPrinter$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CUPSPrinter$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.CUPSPrinter$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_CUPSPrinter$2_FieldInfo_,
	_CUPSPrinter$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/OutputStream;>;",
	&_CUPSPrinter$2_EnclosingMethodInfo_,
	_CUPSPrinter$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.CUPSPrinter"
};

$Object* allocate$CUPSPrinter$2($Class* clazz) {
	return $of($alloc(CUPSPrinter$2));
}

void CUPSPrinter$2::init$($HttpURLConnection* val$urlConnection) {
	$set(this, val$urlConnection, val$urlConnection);
}

$Object* CUPSPrinter$2::run() {
	try {
		return $of($nc(this->val$urlConnection)->getOutputStream());
	} catch ($Exception& e) {
		$IPPPrintService::debug_println($$str({"CUPSPrinter>> "_s, e}));
	}
	return $of(nullptr);
}

CUPSPrinter$2::CUPSPrinter$2() {
}

$Class* CUPSPrinter$2::load$($String* name, bool initialize) {
	$loadClass(CUPSPrinter$2, name, initialize, &_CUPSPrinter$2_ClassInfo_, allocate$CUPSPrinter$2);
	return class$;
}

$Class* CUPSPrinter$2::class$ = nullptr;

	} // print
} // sun