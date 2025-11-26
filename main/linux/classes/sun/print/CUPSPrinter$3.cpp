#include <sun/print/CUPSPrinter$3.h>

#include <java/io/OutputStream.h>
#include <java/net/HttpURLConnection.h>
#include <sun/print/CUPSPrinter.h>
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

namespace sun {
	namespace print {

$FieldInfo _CUPSPrinter$3_FieldInfo_[] = {
	{"val$urlConnection", "Ljava/net/HttpURLConnection;", nullptr, $FINAL | $SYNTHETIC, $field(CUPSPrinter$3, val$urlConnection)},
	{}
};

$MethodInfo _CUPSPrinter$3_MethodInfo_[] = {
	{"<init>", "(Ljava/net/HttpURLConnection;)V", "()V", 0, $method(static_cast<void(CUPSPrinter$3::*)($HttpURLConnection*)>(&CUPSPrinter$3::init$))},
	{"run", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CUPSPrinter$3_EnclosingMethodInfo_ = {
	"sun.print.CUPSPrinter",
	"getAllPrinters",
	"()[Ljava/lang/String;"
};

$InnerClassInfo _CUPSPrinter$3_InnerClassesInfo_[] = {
	{"sun.print.CUPSPrinter$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CUPSPrinter$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.CUPSPrinter$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_CUPSPrinter$3_FieldInfo_,
	_CUPSPrinter$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/OutputStream;>;",
	&_CUPSPrinter$3_EnclosingMethodInfo_,
	_CUPSPrinter$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.CUPSPrinter"
};

$Object* allocate$CUPSPrinter$3($Class* clazz) {
	return $of($alloc(CUPSPrinter$3));
}

void CUPSPrinter$3::init$($HttpURLConnection* val$urlConnection) {
	$set(this, val$urlConnection, val$urlConnection);
}

$Object* CUPSPrinter$3::run() {
	try {
		return $of($nc(this->val$urlConnection)->getOutputStream());
	} catch ($Exception& e) {
	}
	return $of(nullptr);
}

CUPSPrinter$3::CUPSPrinter$3() {
}

$Class* CUPSPrinter$3::load$($String* name, bool initialize) {
	$loadClass(CUPSPrinter$3, name, initialize, &_CUPSPrinter$3_ClassInfo_, allocate$CUPSPrinter$3);
	return class$;
}

$Class* CUPSPrinter$3::class$ = nullptr;

	} // print
} // sun