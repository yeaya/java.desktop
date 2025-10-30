#include <sun/awt/windows/WPrinterJob$HandleRecord.h>

#include <sun/awt/windows/WPrinterJob.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WPrinterJob = ::sun::awt::windows::WPrinterJob;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WPrinterJob$HandleRecord_FieldInfo_[] = {
	{"mPrintDC", "J", nullptr, $PRIVATE, $field(WPrinterJob$HandleRecord, mPrintDC)},
	{"mPrintHDevMode", "J", nullptr, $PRIVATE, $field(WPrinterJob$HandleRecord, mPrintHDevMode)},
	{"mPrintHDevNames", "J", nullptr, $PRIVATE, $field(WPrinterJob$HandleRecord, mPrintHDevNames)},
	{}
};

$MethodInfo _WPrinterJob$HandleRecord_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WPrinterJob$HandleRecord::*)()>(&WPrinterJob$HandleRecord::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WPrinterJob$HandleRecord_InnerClassesInfo_[] = {
	{"sun.awt.windows.WPrinterJob$HandleRecord", "sun.awt.windows.WPrinterJob", "HandleRecord", $STATIC},
	{}
};

$ClassInfo _WPrinterJob$HandleRecord_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WPrinterJob$HandleRecord",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	_WPrinterJob$HandleRecord_FieldInfo_,
	_WPrinterJob$HandleRecord_MethodInfo_,
	nullptr,
	nullptr,
	_WPrinterJob$HandleRecord_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WPrinterJob"
};

$Object* allocate$WPrinterJob$HandleRecord($Class* clazz) {
	return $of($alloc(WPrinterJob$HandleRecord));
}

void WPrinterJob$HandleRecord::init$() {
}

void WPrinterJob$HandleRecord::dispose() {
	$WPrinterJob::deleteDC(this->mPrintDC, this->mPrintHDevMode, this->mPrintHDevNames);
}

WPrinterJob$HandleRecord::WPrinterJob$HandleRecord() {
}

$Class* WPrinterJob$HandleRecord::load$($String* name, bool initialize) {
	$loadClass(WPrinterJob$HandleRecord, name, initialize, &_WPrinterJob$HandleRecord_ClassInfo_, allocate$WPrinterJob$HandleRecord);
	return class$;
}

$Class* WPrinterJob$HandleRecord::class$ = nullptr;

		} // windows
	} // awt
} // sun