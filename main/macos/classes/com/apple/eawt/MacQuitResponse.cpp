#include <com/apple/eawt/MacQuitResponse.h>

#include <com/apple/eawt/_AppEventHandler.h>
#include <jcpp.h>

using $_AppEventHandler = ::com::apple::eawt::_AppEventHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$FieldInfo _MacQuitResponse_FieldInfo_[] = {
	{"appEventHandler", "Lcom/apple/eawt/_AppEventHandler;", nullptr, $FINAL, $field(MacQuitResponse, appEventHandler)},
	{}
};

$MethodInfo _MacQuitResponse_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/eawt/_AppEventHandler;)V", nullptr, 0, $method(static_cast<void(MacQuitResponse::*)($_AppEventHandler*)>(&MacQuitResponse::init$))},
	{"cancelQuit", "()V", nullptr, $PUBLIC},
	{"performQuit", "()V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MacQuitResponse_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.eawt.MacQuitResponse",
	"java.lang.Object",
	"java.awt.desktop.QuitResponse",
	_MacQuitResponse_FieldInfo_,
	_MacQuitResponse_MethodInfo_
};

$Object* allocate$MacQuitResponse($Class* clazz) {
	return $of($alloc(MacQuitResponse));
}

void MacQuitResponse::init$($_AppEventHandler* appEventHandler) {
	$set(this, appEventHandler, appEventHandler);
}

void MacQuitResponse::performQuit() {
	if ($nc(this->appEventHandler)->currentQuitResponse != this) {
		return;
	}
	$nc(this->appEventHandler)->performQuit();
}

void MacQuitResponse::cancelQuit() {
	if ($nc(this->appEventHandler)->currentQuitResponse != this) {
		return;
	}
	$nc(this->appEventHandler)->cancelQuit();
}

MacQuitResponse::MacQuitResponse() {
}

$Class* MacQuitResponse::load$($String* name, bool initialize) {
	$loadClass(MacQuitResponse, name, initialize, &_MacQuitResponse_ClassInfo_, allocate$MacQuitResponse);
	return class$;
}

$Class* MacQuitResponse::class$ = nullptr;

		} // eawt
	} // apple
} // com