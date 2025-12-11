#include <sun/awt/X11/XAWTXSettings$1.h>

#include <java/awt/Toolkit.h>
#include <java/util/Map.h>
#include <sun/awt/X11/XAWTXSettings.h>
#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $Toolkit = ::java::awt::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $XAWTXSettings = ::sun::awt::X11::XAWTXSettings;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XAWTXSettings$1_FieldInfo_[] = {
	{"this$0", "Lsun/awt/X11/XAWTXSettings;", nullptr, $FINAL | $SYNTHETIC, $field(XAWTXSettings$1, this$0)},
	{"val$updatedSettings", "Ljava/util/Map;", nullptr, $FINAL | $SYNTHETIC, $field(XAWTXSettings$1, val$updatedSettings)},
	{}
};

$MethodInfo _XAWTXSettings$1_MethodInfo_[] = {
	{"<init>", "(Lsun/awt/X11/XAWTXSettings;Ljava/util/Map;)V", "()V", 0, $method(static_cast<void(XAWTXSettings$1::*)($XAWTXSettings*,$Map*)>(&XAWTXSettings$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XAWTXSettings$1_EnclosingMethodInfo_ = {
	"sun.awt.X11.XAWTXSettings",
	"updateXSettings",
	"(IJ)V"
};

$InnerClassInfo _XAWTXSettings$1_InnerClassesInfo_[] = {
	{"sun.awt.X11.XAWTXSettings$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XAWTXSettings$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XAWTXSettings$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_XAWTXSettings$1_FieldInfo_,
	_XAWTXSettings$1_MethodInfo_,
	nullptr,
	&_XAWTXSettings$1_EnclosingMethodInfo_,
	_XAWTXSettings$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XAWTXSettings"
};

$Object* allocate$XAWTXSettings$1($Class* clazz) {
	return $of($alloc(XAWTXSettings$1));
}

void XAWTXSettings$1::init$($XAWTXSettings* this$0, $Map* val$updatedSettings) {
	$set(this, this$0, this$0);
	$set(this, val$updatedSettings, val$updatedSettings);
}

void XAWTXSettings$1::run() {
	$nc(($cast($XToolkit, $($Toolkit::getDefaultToolkit()))))->parseXSettings(0, this->val$updatedSettings);
}

XAWTXSettings$1::XAWTXSettings$1() {
}

$Class* XAWTXSettings$1::load$($String* name, bool initialize) {
	$loadClass(XAWTXSettings$1, name, initialize, &_XAWTXSettings$1_ClassInfo_, allocate$XAWTXSettings$1);
	return class$;
}

$Class* XAWTXSettings$1::class$ = nullptr;

		} // X11
	} // awt
} // sun