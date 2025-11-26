#include <sun/awt/X11/XToolkit$2.h>

#include <sun/awt/X11/XToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DisplayChangedListener = ::sun::awt::DisplayChangedListener;
using $XToolkit = ::sun::awt::X11::XToolkit;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XToolkit$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XToolkit$2::*)()>(&XToolkit$2::init$))},
	{"displayChanged", "()V", nullptr, $PUBLIC},
	{"paletteChanged", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XToolkit$2_EnclosingMethodInfo_ = {
	"sun.awt.X11.XToolkit",
	nullptr,
	nullptr
};

$InnerClassInfo _XToolkit$2_InnerClassesInfo_[] = {
	{"sun.awt.X11.XToolkit$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XToolkit$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XToolkit$2",
	"java.lang.Object",
	"sun.awt.DisplayChangedListener",
	nullptr,
	_XToolkit$2_MethodInfo_,
	nullptr,
	&_XToolkit$2_EnclosingMethodInfo_,
	_XToolkit$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XToolkit"
};

$Object* allocate$XToolkit$2($Class* clazz) {
	return $of($alloc(XToolkit$2));
}

void XToolkit$2::init$() {
}

void XToolkit$2::displayChanged() {
	$init($XToolkit);
	$XToolkit::maxWindowWidthInPixels = -1;
	$XToolkit::maxWindowHeightInPixels = -1;
}

void XToolkit$2::paletteChanged() {
}

XToolkit$2::XToolkit$2() {
}

$Class* XToolkit$2::load$($String* name, bool initialize) {
	$loadClass(XToolkit$2, name, initialize, &_XToolkit$2_ClassInfo_, allocate$XToolkit$2);
	return class$;
}

$Class* XToolkit$2::class$ = nullptr;

		} // X11
	} // awt
} // sun