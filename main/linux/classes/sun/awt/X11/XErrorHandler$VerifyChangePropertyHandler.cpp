#include <sun/awt/X11/XErrorHandler$VerifyChangePropertyHandler.h>

#include <sun/awt/X11/XErrorEvent.h>
#include <sun/awt/X11/XErrorHandler$XBaseErrorHandler.h>
#include <sun/awt/X11/XErrorHandler.h>
#include <sun/awt/X11/XProtocolConstants.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XErrorEvent = ::sun::awt::X11::XErrorEvent;
using $XErrorHandler$XBaseErrorHandler = ::sun::awt::X11::XErrorHandler$XBaseErrorHandler;
using $XProtocolConstants = ::sun::awt::X11::XProtocolConstants;

namespace sun {
	namespace awt {
		namespace X11 {

$FieldInfo _XErrorHandler$VerifyChangePropertyHandler_FieldInfo_[] = {
	{"theInstance", "Lsun/awt/X11/XErrorHandler$VerifyChangePropertyHandler;", nullptr, $PRIVATE | $STATIC, $staticField(XErrorHandler$VerifyChangePropertyHandler, theInstance)},
	{}
};

$MethodInfo _XErrorHandler$VerifyChangePropertyHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XErrorHandler$VerifyChangePropertyHandler::*)()>(&XErrorHandler$VerifyChangePropertyHandler::init$))},
	{"getInstance", "()Lsun/awt/X11/XErrorHandler$VerifyChangePropertyHandler;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XErrorHandler$VerifyChangePropertyHandler*(*)()>(&XErrorHandler$VerifyChangePropertyHandler::getInstance))},
	{"handleError", "(JLsun/awt/X11/XErrorEvent;)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XErrorHandler$VerifyChangePropertyHandler_InnerClassesInfo_[] = {
	{"sun.awt.X11.XErrorHandler$VerifyChangePropertyHandler", "sun.awt.X11.XErrorHandler", "VerifyChangePropertyHandler", $PUBLIC | $STATIC},
	{"sun.awt.X11.XErrorHandler$XBaseErrorHandler", "sun.awt.X11.XErrorHandler", "XBaseErrorHandler", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XErrorHandler$VerifyChangePropertyHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.awt.X11.XErrorHandler$VerifyChangePropertyHandler",
	"sun.awt.X11.XErrorHandler$XBaseErrorHandler",
	nullptr,
	_XErrorHandler$VerifyChangePropertyHandler_FieldInfo_,
	_XErrorHandler$VerifyChangePropertyHandler_MethodInfo_,
	nullptr,
	nullptr,
	_XErrorHandler$VerifyChangePropertyHandler_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.X11.XErrorHandler"
};

$Object* allocate$XErrorHandler$VerifyChangePropertyHandler($Class* clazz) {
	return $of($alloc(XErrorHandler$VerifyChangePropertyHandler));
}

XErrorHandler$VerifyChangePropertyHandler* XErrorHandler$VerifyChangePropertyHandler::theInstance = nullptr;

void XErrorHandler$VerifyChangePropertyHandler::init$() {
	$XErrorHandler$XBaseErrorHandler::init$();
}

int32_t XErrorHandler$VerifyChangePropertyHandler::handleError(int64_t display, $XErrorEvent* err) {
	if ($nc(err)->get_request_code() == $XProtocolConstants::X_ChangeProperty) {
		return 0;
	}
	return $XErrorHandler$XBaseErrorHandler::handleError(display, err);
}

XErrorHandler$VerifyChangePropertyHandler* XErrorHandler$VerifyChangePropertyHandler::getInstance() {
	$init(XErrorHandler$VerifyChangePropertyHandler);
	return XErrorHandler$VerifyChangePropertyHandler::theInstance;
}

void clinit$XErrorHandler$VerifyChangePropertyHandler($Class* class$) {
	$assignStatic(XErrorHandler$VerifyChangePropertyHandler::theInstance, $new(XErrorHandler$VerifyChangePropertyHandler));
}

XErrorHandler$VerifyChangePropertyHandler::XErrorHandler$VerifyChangePropertyHandler() {
}

$Class* XErrorHandler$VerifyChangePropertyHandler::load$($String* name, bool initialize) {
	$loadClass(XErrorHandler$VerifyChangePropertyHandler, name, initialize, &_XErrorHandler$VerifyChangePropertyHandler_ClassInfo_, clinit$XErrorHandler$VerifyChangePropertyHandler, allocate$XErrorHandler$VerifyChangePropertyHandler);
	return class$;
}

$Class* XErrorHandler$VerifyChangePropertyHandler::class$ = nullptr;

		} // X11
	} // awt
} // sun