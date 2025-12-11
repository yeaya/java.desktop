#include <sun/print/PrintServiceLookupProvider$PrinterChangeListener.h>

#include <java/lang/InterruptedException.h>
#include <javax/print/PrintService.h>
#include <sun/print/IPPPrintService.h>
#include <sun/print/PrintServiceLookupProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $IPPPrintService = ::sun::print::IPPPrintService;
using $PrintServiceLookupProvider = ::sun::print::PrintServiceLookupProvider;

namespace sun {
	namespace print {

$FieldInfo _PrintServiceLookupProvider$PrinterChangeListener_FieldInfo_[] = {
	{"this$0", "Lsun/print/PrintServiceLookupProvider;", nullptr, $FINAL | $SYNTHETIC, $field(PrintServiceLookupProvider$PrinterChangeListener, this$0)},
	{}
};

$MethodInfo _PrintServiceLookupProvider$PrinterChangeListener_MethodInfo_[] = {
	{"<init>", "(Lsun/print/PrintServiceLookupProvider;)V", nullptr, $PRIVATE, $method(static_cast<void(PrintServiceLookupProvider$PrinterChangeListener::*)($PrintServiceLookupProvider*)>(&PrintServiceLookupProvider$PrinterChangeListener::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PrintServiceLookupProvider$PrinterChangeListener_InnerClassesInfo_[] = {
	{"sun.print.PrintServiceLookupProvider$PrinterChangeListener", "sun.print.PrintServiceLookupProvider", "PrinterChangeListener", $PRIVATE},
	{}
};

$ClassInfo _PrintServiceLookupProvider$PrinterChangeListener_ClassInfo_ = {
	$ACC_SUPER,
	"sun.print.PrintServiceLookupProvider$PrinterChangeListener",
	"java.lang.Object",
	"java.lang.Runnable",
	_PrintServiceLookupProvider$PrinterChangeListener_FieldInfo_,
	_PrintServiceLookupProvider$PrinterChangeListener_MethodInfo_,
	nullptr,
	nullptr,
	_PrintServiceLookupProvider$PrinterChangeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.PrintServiceLookupProvider"
};

$Object* allocate$PrintServiceLookupProvider$PrinterChangeListener($Class* clazz) {
	return $of($alloc(PrintServiceLookupProvider$PrinterChangeListener));
}

void PrintServiceLookupProvider$PrinterChangeListener::init$($PrintServiceLookupProvider* this$0) {
	$set(this, this$0, this$0);
}

void PrintServiceLookupProvider$PrinterChangeListener::run() {
	$useLocalCurrentObjectStackCache();
	int32_t refreshSecs = 0;
	while (true) {
		try {
			this->this$0->refreshServices();
		} catch ($Exception& se) {
			$init($PrintServiceLookupProvider);
			$IPPPrintService::debug_println($$str({$PrintServiceLookupProvider::debugPrefix, "Exception in refresh thread."_s}));
			break;
		}
		$init($PrintServiceLookupProvider);
		if ((this->this$0->printServices != nullptr) && ($nc(this->this$0->printServices)->length > $PrintServiceLookupProvider::minRefreshTime)) {
			refreshSecs = $nc(this->this$0->printServices)->length;
		} else {
			refreshSecs = $PrintServiceLookupProvider::minRefreshTime;
		}
		try {
			$Thread::sleep(refreshSecs * 1000);
		} catch ($InterruptedException& e) {
			break;
		}
	}
}

PrintServiceLookupProvider$PrinterChangeListener::PrintServiceLookupProvider$PrinterChangeListener() {
}

$Class* PrintServiceLookupProvider$PrinterChangeListener::load$($String* name, bool initialize) {
	$loadClass(PrintServiceLookupProvider$PrinterChangeListener, name, initialize, &_PrintServiceLookupProvider$PrinterChangeListener_ClassInfo_, allocate$PrintServiceLookupProvider$PrinterChangeListener);
	return class$;
}

$Class* PrintServiceLookupProvider$PrinterChangeListener::class$ = nullptr;

	} // print
} // sun