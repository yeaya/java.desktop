#include <sun/print/PSPrinterJob$1.h>

#include <java/util/Properties.h>
#include <sun/print/PSPrinterJob.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Properties = ::java::util::Properties;
using $PSPrinterJob = ::sun::print::PSPrinterJob;

namespace sun {
	namespace print {

$MethodInfo _PSPrinterJob$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(PSPrinterJob$1::*)()>(&PSPrinterJob$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PSPrinterJob$1_EnclosingMethodInfo_ = {
	"sun.print.PSPrinterJob",
	"initStatic",
	"()V"
};

$InnerClassInfo _PSPrinterJob$1_InnerClassesInfo_[] = {
	{"sun.print.PSPrinterJob$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PSPrinterJob$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.PSPrinterJob$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_PSPrinterJob$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_PSPrinterJob$1_EnclosingMethodInfo_,
	_PSPrinterJob$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.PSPrinterJob"
};

$Object* allocate$PSPrinterJob$1($Class* clazz) {
	return $of($alloc(PSPrinterJob$1));
}

void PSPrinterJob$1::init$() {
}

$Object* PSPrinterJob$1::run() {
	$init($PSPrinterJob);
	$assignStatic($PSPrinterJob::mFontProps, $PSPrinterJob::initProps());
	$var($String, osName, $System::getProperty("os.name"_s));
	$PSPrinterJob::isMac = $nc(osName)->startsWith("Mac"_s);
	return $of(nullptr);
}

PSPrinterJob$1::PSPrinterJob$1() {
}

$Class* PSPrinterJob$1::load$($String* name, bool initialize) {
	$loadClass(PSPrinterJob$1, name, initialize, &_PSPrinterJob$1_ClassInfo_, allocate$PSPrinterJob$1);
	return class$;
}

$Class* PSPrinterJob$1::class$ = nullptr;

	} // print
} // sun