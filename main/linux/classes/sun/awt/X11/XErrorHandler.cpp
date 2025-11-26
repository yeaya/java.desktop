#include <sun/awt/X11/XErrorHandler.h>

#include <sun/awt/X11/XErrorEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XErrorHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XErrorHandler::*)()>(&XErrorHandler::init$))},
	{"handleError", "(JLsun/awt/X11/XErrorEvent;)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _XErrorHandler_InnerClassesInfo_[] = {
	{"sun.awt.X11.XErrorHandler$VerifyChangePropertyHandler", "sun.awt.X11.XErrorHandler", "VerifyChangePropertyHandler", $PUBLIC | $STATIC},
	{"sun.awt.X11.XErrorHandler$IgnoreBadWindowHandler", "sun.awt.X11.XErrorHandler", "IgnoreBadWindowHandler", $PUBLIC | $STATIC},
	{"sun.awt.X11.XErrorHandler$XBaseErrorHandler", "sun.awt.X11.XErrorHandler", "XBaseErrorHandler", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XErrorHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.X11.XErrorHandler",
	"java.lang.Object",
	nullptr,
	nullptr,
	_XErrorHandler_MethodInfo_,
	nullptr,
	nullptr,
	_XErrorHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.X11.XErrorHandler$VerifyChangePropertyHandler,sun.awt.X11.XErrorHandler$IgnoreBadWindowHandler,sun.awt.X11.XErrorHandler$XBaseErrorHandler"
};

$Object* allocate$XErrorHandler($Class* clazz) {
	return $of($alloc(XErrorHandler));
}

void XErrorHandler::init$() {
}

XErrorHandler::XErrorHandler() {
}

$Class* XErrorHandler::load$($String* name, bool initialize) {
	$loadClass(XErrorHandler, name, initialize, &_XErrorHandler_ClassInfo_, allocate$XErrorHandler);
	return class$;
}

$Class* XErrorHandler::class$ = nullptr;

		} // X11
	} // awt
} // sun