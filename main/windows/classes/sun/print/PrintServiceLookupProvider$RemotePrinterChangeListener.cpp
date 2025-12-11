#include <sun/print/PrintServiceLookupProvider$RemotePrinterChangeListener.h>

#include <sun/print/PrintServiceLookupProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrintServiceLookupProvider = ::sun::print::PrintServiceLookupProvider;

namespace sun {
	namespace print {

$FieldInfo _PrintServiceLookupProvider$RemotePrinterChangeListener_FieldInfo_[] = {
	{"this$0", "Lsun/print/PrintServiceLookupProvider;", nullptr, $FINAL | $SYNTHETIC, $field(PrintServiceLookupProvider$RemotePrinterChangeListener, this$0)},
	{}
};

$MethodInfo _PrintServiceLookupProvider$RemotePrinterChangeListener_MethodInfo_[] = {
	{"<init>", "(Lsun/print/PrintServiceLookupProvider;)V", nullptr, $PRIVATE, $method(static_cast<void(PrintServiceLookupProvider$RemotePrinterChangeListener::*)($PrintServiceLookupProvider*)>(&PrintServiceLookupProvider$RemotePrinterChangeListener::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _PrintServiceLookupProvider$RemotePrinterChangeListener_InnerClassesInfo_[] = {
	{"sun.print.PrintServiceLookupProvider$RemotePrinterChangeListener", "sun.print.PrintServiceLookupProvider", "RemotePrinterChangeListener", $PRIVATE | $FINAL},
	{}
};

$ClassInfo _PrintServiceLookupProvider$RemotePrinterChangeListener_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.print.PrintServiceLookupProvider$RemotePrinterChangeListener",
	"java.lang.Object",
	"java.lang.Runnable",
	_PrintServiceLookupProvider$RemotePrinterChangeListener_FieldInfo_,
	_PrintServiceLookupProvider$RemotePrinterChangeListener_MethodInfo_,
	nullptr,
	nullptr,
	_PrintServiceLookupProvider$RemotePrinterChangeListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.print.PrintServiceLookupProvider"
};

$Object* allocate$PrintServiceLookupProvider$RemotePrinterChangeListener($Class* clazz) {
	return $of($alloc(PrintServiceLookupProvider$RemotePrinterChangeListener));
}

void PrintServiceLookupProvider$RemotePrinterChangeListener::init$($PrintServiceLookupProvider* this$0) {
	$set(this, this$0, this$0);
}

void PrintServiceLookupProvider$RemotePrinterChangeListener::run() {
	this->this$0->notifyRemotePrinterChange();
}

PrintServiceLookupProvider$RemotePrinterChangeListener::PrintServiceLookupProvider$RemotePrinterChangeListener() {
}

$Class* PrintServiceLookupProvider$RemotePrinterChangeListener::load$($String* name, bool initialize) {
	$loadClass(PrintServiceLookupProvider$RemotePrinterChangeListener, name, initialize, &_PrintServiceLookupProvider$RemotePrinterChangeListener_ClassInfo_, allocate$PrintServiceLookupProvider$RemotePrinterChangeListener);
	return class$;
}

$Class* PrintServiceLookupProvider$RemotePrinterChangeListener::class$ = nullptr;

	} // print
} // sun