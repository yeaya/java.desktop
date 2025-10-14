#include <sun/print/PSPrinterJob$3.h>

#include <java/io/File.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/print/PSPrinterJob.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PSPrinterJob = ::sun::print::PSPrinterJob;

namespace sun {
	namespace print {

$FieldInfo _PSPrinterJob$3_FieldInfo_[] = {
	{"this$0", "Lsun/print/PSPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(PSPrinterJob$3, this$0)},
	{}
};

$MethodInfo _PSPrinterJob$3_MethodInfo_[] = {
	{"<init>", "(Lsun/print/PSPrinterJob;)V", nullptr, 0, $method(static_cast<void(PSPrinterJob$3::*)($PSPrinterJob*)>(&PSPrinterJob$3::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _PSPrinterJob$3_EnclosingMethodInfo_ = {
	"sun.print.PSPrinterJob",
	"abortDoc",
	"()V"
};

$InnerClassInfo _PSPrinterJob$3_InnerClassesInfo_[] = {
	{"sun.print.PSPrinterJob$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PSPrinterJob$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.PSPrinterJob$3",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_PSPrinterJob$3_FieldInfo_,
	_PSPrinterJob$3_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
	&_PSPrinterJob$3_EnclosingMethodInfo_,
	_PSPrinterJob$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.PSPrinterJob"
};

$Object* allocate$PSPrinterJob$3($Class* clazz) {
	return $of($alloc(PSPrinterJob$3));
}

void PSPrinterJob$3::init$($PSPrinterJob* this$0) {
	$set(this, this$0, this$0);
}

$Object* PSPrinterJob$3::run() {
	if (this->this$0->spoolFile != nullptr && $nc(this->this$0->spoolFile)->exists()) {
		$nc(this->this$0->spoolFile)->delete$();
	}
	return $of(nullptr);
}

PSPrinterJob$3::PSPrinterJob$3() {
}

$Class* PSPrinterJob$3::load$($String* name, bool initialize) {
	$loadClass(PSPrinterJob$3, name, initialize, &_PSPrinterJob$3_ClassInfo_, allocate$PSPrinterJob$3);
	return class$;
}

$Class* PSPrinterJob$3::class$ = nullptr;

	} // print
} // sun