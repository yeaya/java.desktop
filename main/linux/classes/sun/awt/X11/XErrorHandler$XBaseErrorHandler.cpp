#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>

#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XErrorHandlerUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XErrorHandler = ::sun::awt::X11::XErrorHandler;
using $XErrorHandlerUtil = ::sun::awt::X11::XErrorHandlerUtil;

namespace sun {
	namespace awt {
		namespace X11 {

$MethodInfo _XErrorHandler$XBaseErrorHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XErrorHandler$XBaseErrorHandler::*)()>(&XErrorHandler$XBaseErrorHandler::init$))},
	{"handleError", "(JLsun/awt/X11/XErrorEvent;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XErrorHandler$XBaseErrorHandler_InnerClassesInfo_[] = {
	{"sun.awt.X11.XErrorHandler$XBaseErrorHandler", "sun.awt.X11.XErrorHandler", "XBaseErrorHandler", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XErrorHandler$XBaseErrorHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XErrorHandler$XBaseErrorHandler",
	"sun.awt.X11.XErrorHandler",
	nullptr,
	nullptr,
	_XErrorHandler$XBaseErrorHandler_MethodInfo_,
	nullptr,
	nullptr,
	_XErrorHandler$XBaseErrorHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XErrorHandler"
};

$Object* allocate$XErrorHandler$XBaseErrorHandler($Class* clazz) {
	return $of($alloc(XErrorHandler$XBaseErrorHandler));
}

void XErrorHandler$XBaseErrorHandler::init$() {
	$XErrorHandler::init$();
}

int32_t XErrorHandler$XBaseErrorHandler::handleError(int64_t display, $XErrorEvent* err) {
	return $XErrorHandlerUtil::SAVED_XERROR_HANDLER(display, err);
}

XErrorHandler$XBaseErrorHandler::XErrorHandler$XBaseErrorHandler() {
}

$Class* XErrorHandler$XBaseErrorHandler::load$($String* name, bool initialize) {
	$loadClass(XErrorHandler$XBaseErrorHandler, name, initialize, &_XErrorHandler$XBaseErrorHandler_ClassInfo_, allocate$XErrorHandler$XBaseErrorHandler);
	return class$;
}

$Class* XErrorHandler$XBaseErrorHandler::class$ = nullptr;

		} // X11
	} // awt
} // sun