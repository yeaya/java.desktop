#include <sun/awt/windows/WToolkit$ToolkitDisposer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/awt/windows/WToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WToolkit = ::sun::awt::windows::WToolkit;
using $DisposerRecord = ::sun::java2d::DisposerRecord;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WToolkit$ToolkitDisposer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WToolkit$ToolkitDisposer::*)()>(&WToolkit$ToolkitDisposer::init$))},
	{"dispose", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WToolkit$ToolkitDisposer_InnerClassesInfo_[] = {
	{"sun.awt.windows.WToolkit$ToolkitDisposer", "sun.awt.windows.WToolkit", "ToolkitDisposer", $STATIC},
	{}
};

$ClassInfo _WToolkit$ToolkitDisposer_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.windows.WToolkit$ToolkitDisposer",
	"java.lang.Object",
	"sun.java2d.DisposerRecord",
	nullptr,
	_WToolkit$ToolkitDisposer_MethodInfo_,
	nullptr,
	nullptr,
	_WToolkit$ToolkitDisposer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.windows.WToolkit"
};

$Object* allocate$WToolkit$ToolkitDisposer($Class* clazz) {
	return $of($alloc(WToolkit$ToolkitDisposer));
}

void WToolkit$ToolkitDisposer::init$() {
}

void WToolkit$ToolkitDisposer::dispose() {
	$WToolkit::postDispose();
}

WToolkit$ToolkitDisposer::WToolkit$ToolkitDisposer() {
}

$Class* WToolkit$ToolkitDisposer::load$($String* name, bool initialize) {
	$loadClass(WToolkit$ToolkitDisposer, name, initialize, &_WToolkit$ToolkitDisposer_ClassInfo_, allocate$WToolkit$ToolkitDisposer);
	return class$;
}

$Class* WToolkit$ToolkitDisposer::class$ = nullptr;

		} // windows
	} // awt
} // sun