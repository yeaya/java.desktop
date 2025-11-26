#include <sun/awt/X11/XBaseWindow$StateLock.h>

#include <sun/awt/X11/XBaseWindow.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XBaseWindow = ::sun::awt::X11::XBaseWindow;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XBaseWindow$StateLock_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XBaseWindow$StateLock::*)()>(&XBaseWindow$StateLock::init$))},
	{}
};

$InnerClassInfo _XBaseWindow$StateLock_InnerClassesInfo_[] = {
	{"sun.awt.X11.XBaseWindow$StateLock", "sun.awt.X11.XBaseWindow", "StateLock", $STATIC},
	{}
};

$ClassInfo _XBaseWindow$StateLock_ClassInfo_ = {
	$ACC_SUPER,
	"sun.awt.X11.XBaseWindow$StateLock",
	"java.lang.Object",
	nullptr,
	nullptr,
	_XBaseWindow$StateLock_MethodInfo_,
	nullptr,
	nullptr,
	_XBaseWindow$StateLock_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XBaseWindow"
};

$Object* allocate$XBaseWindow$StateLock($Class* clazz) {
	return $of($alloc(XBaseWindow$StateLock));
}

void XBaseWindow$StateLock::init$() {
}

XBaseWindow$StateLock::XBaseWindow$StateLock() {
}

$Class* XBaseWindow$StateLock::load$($String* name, bool initialize) {
	$loadClass(XBaseWindow$StateLock, name, initialize, &_XBaseWindow$StateLock_ClassInfo_, allocate$XBaseWindow$StateLock);
	return class$;
}

$Class* XBaseWindow$StateLock::class$ = nullptr;

		} // X11
	} // awt
} // sun