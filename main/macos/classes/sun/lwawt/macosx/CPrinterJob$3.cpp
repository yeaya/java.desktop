#include <sun/lwawt/macosx/CPrinterJob$3.h>

#include <java/awt/print/PrinterAbortException.h>
#include <sun/lwawt/macosx/CPrinterJob.h>
#include <jcpp.h>

using $PrinterAbortException = ::java::awt::print::PrinterAbortException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CPrinterJob = ::sun::lwawt::macosx::CPrinterJob;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CPrinterJob$3_FieldInfo_[] = {
	{"this$0", "Lsun/lwawt/macosx/CPrinterJob;", nullptr, $FINAL | $SYNTHETIC, $field(CPrinterJob$3, this$0)},
	{}
};

$MethodInfo _CPrinterJob$3_MethodInfo_[] = {
	{"<init>", "(Lsun/lwawt/macosx/CPrinterJob;)V", nullptr, 0, $method(static_cast<void(CPrinterJob$3::*)($CPrinterJob*)>(&CPrinterJob$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _CPrinterJob$3_EnclosingMethodInfo_ = {
	"sun.lwawt.macosx.CPrinterJob",
	"cancelCheck",
	"()Z"
};

$InnerClassInfo _CPrinterJob$3_InnerClassesInfo_[] = {
	{"sun.lwawt.macosx.CPrinterJob$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CPrinterJob$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.lwawt.macosx.CPrinterJob$3",
	"java.lang.Object",
	"java.lang.Runnable",
	_CPrinterJob$3_FieldInfo_,
	_CPrinterJob$3_MethodInfo_,
	nullptr,
	&_CPrinterJob$3_EnclosingMethodInfo_,
	_CPrinterJob$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.lwawt.macosx.CPrinterJob"
};

$Object* allocate$CPrinterJob$3($Class* clazz) {
	return $of($alloc(CPrinterJob$3));
}

void CPrinterJob$3::init$($CPrinterJob* this$0) {
	$set(this, this$0, this$0);
}

void CPrinterJob$3::run() {
	try {
		this->this$0->cancelDoc();
	} catch ($PrinterAbortException& pae) {
	}
}

CPrinterJob$3::CPrinterJob$3() {
}

$Class* CPrinterJob$3::load$($String* name, bool initialize) {
	$loadClass(CPrinterJob$3, name, initialize, &_CPrinterJob$3_ClassInfo_, allocate$CPrinterJob$3);
	return class$;
}

$Class* CPrinterJob$3::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun