#include <sun/print/IPPPrintService$1.h>

#include <java/io/OutputStream.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/URLConnection.h>
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
using $IPPPrintService = ::sun::print::IPPPrintService;

namespace sun {
	namespace print {

$FieldInfo _IPPPrintService$1_FieldInfo_[] = {
	{"this$0", "Lsun/print/IPPPrintService;", nullptr, $FINAL | $SYNTHETIC, $field(IPPPrintService$1, this$0)},
	{}
};

$MethodInfo _IPPPrintService$1_MethodInfo_[] = {
	{"<init>", "(Lsun/print/IPPPrintService;)V", nullptr, 0, $method(static_cast<void(IPPPrintService$1::*)($IPPPrintService*)>(&IPPPrintService$1::init$))},
	{"run", "()Ljava/io/OutputStream;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _IPPPrintService$1_EnclosingMethodInfo_ = {
	"sun.print.IPPPrintService",
	"opGetAttributes",
	"()V"
};

$InnerClassInfo _IPPPrintService$1_InnerClassesInfo_[] = {
	{"sun.print.IPPPrintService$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _IPPPrintService$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.IPPPrintService$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_IPPPrintService$1_FieldInfo_,
	_IPPPrintService$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/io/OutputStream;>;",
	&_IPPPrintService$1_EnclosingMethodInfo_,
	_IPPPrintService$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.IPPPrintService"
};

$Object* allocate$IPPPrintService$1($Class* clazz) {
	return $of($alloc(IPPPrintService$1));
}

void IPPPrintService$1::init$($IPPPrintService* this$0) {
	$set(this, this$0, this$0);
}

$Object* IPPPrintService$1::run() {
	try {
		return $of($nc(this->this$0->urlConnection)->getOutputStream());
	} catch ($Exception& e) {
	}
	return $of(nullptr);
}

IPPPrintService$1::IPPPrintService$1() {
}

$Class* IPPPrintService$1::load$($String* name, bool initialize) {
	$loadClass(IPPPrintService$1, name, initialize, &_IPPPrintService$1_ClassInfo_, allocate$IPPPrintService$1);
	return class$;
}

$Class* IPPPrintService$1::class$ = nullptr;

	} // print
} // sun