#include <sun/awt/X11/XErrorHandler$IgnoreBadWindowHandler.h>

#include <sun/awt/X11/XConstants.h>
#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XConstants = ::sun::awt::X11::XConstants;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XErrorHandler$XBaseErrorHandler = ::sun::awt::X11::XErrorHandler$XBaseErrorHandler;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XErrorHandler$IgnoreBadWindowHandler_FieldInfo_[] = {
	{"theInstance", "Lsun/awt/X11/XErrorHandler$IgnoreBadWindowHandler;", nullptr, $PRIVATE | $STATIC, $staticField(XErrorHandler$IgnoreBadWindowHandler, theInstance)},
	{}
};

$MethodInfo _XErrorHandler$IgnoreBadWindowHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XErrorHandler$IgnoreBadWindowHandler::*)()>(&XErrorHandler$IgnoreBadWindowHandler::init$))},
	{"getInstance", "()Lsun/awt/X11/XErrorHandler$IgnoreBadWindowHandler;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XErrorHandler$IgnoreBadWindowHandler*(*)()>(&XErrorHandler$IgnoreBadWindowHandler::getInstance))},
	{"handleError", "(JLsun/awt/X11/XErrorEvent;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XErrorHandler$IgnoreBadWindowHandler_InnerClassesInfo_[] = {
	{"sun.awt.X11.XErrorHandler$IgnoreBadWindowHandler", "sun.awt.X11.XErrorHandler", "IgnoreBadWindowHandler", $PUBLIC | $STATIC},
	{"sun.awt.X11.XErrorHandler$XBaseErrorHandler", "sun.awt.X11.XErrorHandler", "XBaseErrorHandler", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XErrorHandler$IgnoreBadWindowHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XErrorHandler$IgnoreBadWindowHandler",
	"sun.awt.X11.XErrorHandler$XBaseErrorHandler",
	nullptr,
	_XErrorHandler$IgnoreBadWindowHandler_FieldInfo_,
	_XErrorHandler$IgnoreBadWindowHandler_MethodInfo_,
	nullptr,
	nullptr,
	_XErrorHandler$IgnoreBadWindowHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XErrorHandler"
};

$Object* allocate$XErrorHandler$IgnoreBadWindowHandler($Class* clazz) {
	return $of($alloc(XErrorHandler$IgnoreBadWindowHandler));
}

XErrorHandler$IgnoreBadWindowHandler* XErrorHandler$IgnoreBadWindowHandler::theInstance = nullptr;

void XErrorHandler$IgnoreBadWindowHandler::init$() {
	$XErrorHandler$XBaseErrorHandler::init$();
}

int32_t XErrorHandler$IgnoreBadWindowHandler::handleError(int64_t display, $XErrorEvent* err) {
	if ($nc(err)->get_error_code() == $XConstants::BadWindow) {
		return 0;
	}
	return $XErrorHandler$XBaseErrorHandler::handleError(display, err);
}

XErrorHandler$IgnoreBadWindowHandler* XErrorHandler$IgnoreBadWindowHandler::getInstance() {
	$init(XErrorHandler$IgnoreBadWindowHandler);
	return XErrorHandler$IgnoreBadWindowHandler::theInstance;
}

void clinit$XErrorHandler$IgnoreBadWindowHandler($Class* class$) {
	$assignStatic(XErrorHandler$IgnoreBadWindowHandler::theInstance, $new(XErrorHandler$IgnoreBadWindowHandler));
}

XErrorHandler$IgnoreBadWindowHandler::XErrorHandler$IgnoreBadWindowHandler() {
}

$Class* XErrorHandler$IgnoreBadWindowHandler::load$($String* name, bool initialize) {
	$loadClass(XErrorHandler$IgnoreBadWindowHandler, name, initialize, &_XErrorHandler$IgnoreBadWindowHandler_ClassInfo_, clinit$XErrorHandler$IgnoreBadWindowHandler, allocate$XErrorHandler$IgnoreBadWindowHandler);
	return class$;
}

$Class* XErrorHandler$IgnoreBadWindowHandler::class$ = nullptr;

		} // X11
	} // awt
} // sun