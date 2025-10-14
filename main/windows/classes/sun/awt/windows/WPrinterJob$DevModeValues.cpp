#include <sun/awt/windows/WPrinterJob$DevModeValues.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/WPrinterJob.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WPrinterJob = ::sun::awt::windows::WPrinterJob;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WPrinterJob$DevModeValues_FieldInfo_[] = {
	{"dmFields", "I", nullptr, 0, $field(WPrinterJob$DevModeValues, dmFields)},
	{"copies", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, copies)},
	{"collate", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, collate)},
	{"color", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, color)},
	{"duplex", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, duplex)},
	{"orient", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, orient)},
	{"paper", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, paper)},
	{"bin", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, bin)},
	{"xres_quality", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, xres_quality)},
	{"yres", "S", nullptr, 0, $field(WPrinterJob$DevModeValues, yres)},
	{}
};

$MethodInfo _WPrinterJob$DevModeValues_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WPrinterJob$DevModeValues::*)()>(&WPrinterJob$DevModeValues::init$))},
	{}
};

$InnerClassInfo _WPrinterJob$DevModeValues_InnerClassesInfo_[] = {
	{"sun.awt.windows.WPrinterJob$DevModeValues", "sun.awt.windows.WPrinterJob", "DevModeValues", $PRIVATE | $STATIC | $FINAL},
	{}
};

$ClassInfo _WPrinterJob$DevModeValues_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WPrinterJob$DevModeValues",
	"java.lang.Object",
	nullptr,
	_WPrinterJob$DevModeValues_FieldInfo_,
	_WPrinterJob$DevModeValues_MethodInfo_,
	nullptr,
	nullptr,
	_WPrinterJob$DevModeValues_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WPrinterJob"
};

$Object* allocate$WPrinterJob$DevModeValues($Class* clazz) {
	return $of($alloc(WPrinterJob$DevModeValues));
}

void WPrinterJob$DevModeValues::init$() {
}

WPrinterJob$DevModeValues::WPrinterJob$DevModeValues() {
}

$Class* WPrinterJob$DevModeValues::load$($String* name, bool initialize) {
	$loadClass(WPrinterJob$DevModeValues, name, initialize, &_WPrinterJob$DevModeValues_ClassInfo_, allocate$WPrinterJob$DevModeValues);
	return class$;
}

$Class* WPrinterJob$DevModeValues::class$ = nullptr;

		} // windows
	} // awt
} // sun