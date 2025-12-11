#include <sun/awt/windows/WToolkitThreadBlockedHandler.h>

#include <java/lang/IllegalMonitorStateException.h>
#include <sun/awt/Mutex.h>
#include <sun/awt/windows/WToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalMonitorStateException = ::java::lang::IllegalMonitorStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Mutex = ::sun::awt::Mutex;
using $WToolkit = ::sun::awt::windows::WToolkit;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WToolkitThreadBlockedHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(WToolkitThreadBlockedHandler::*)()>(&WToolkitThreadBlockedHandler::init$))},
	{"enter", "()V", nullptr, $PUBLIC},
	{"exit", "()V", nullptr, $PUBLIC},
	{"*lock", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"startSecondaryEventLoop", "()V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WToolkitThreadBlockedHandler::*)()>(&WToolkitThreadBlockedHandler::startSecondaryEventLoop))},
	{"*unlock", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_startSecondaryEventLoop 8

$ClassInfo _WToolkitThreadBlockedHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WToolkitThreadBlockedHandler",
	"sun.awt.Mutex",
	"sun.awt.datatransfer.ToolkitThreadBlockedHandler",
	nullptr,
	_WToolkitThreadBlockedHandler_MethodInfo_
};

$Object* allocate$WToolkitThreadBlockedHandler($Class* clazz) {
	return $of($alloc(WToolkitThreadBlockedHandler));
}

void WToolkitThreadBlockedHandler::lock() {
	this->$Mutex::lock();
}

void WToolkitThreadBlockedHandler::unlock() {
	this->$Mutex::unlock();
}

int32_t WToolkitThreadBlockedHandler::hashCode() {
	 return this->$Mutex::hashCode();
}

bool WToolkitThreadBlockedHandler::equals(Object$* arg0) {
	 return this->$Mutex::equals(arg0);
}

$Object* WToolkitThreadBlockedHandler::clone() {
	 return this->$Mutex::clone();
}

$String* WToolkitThreadBlockedHandler::toString() {
	 return this->$Mutex::toString();
}

void WToolkitThreadBlockedHandler::finalize() {
	this->$Mutex::finalize();
}

void WToolkitThreadBlockedHandler::init$() {
	$Mutex::init$();
}

void WToolkitThreadBlockedHandler::enter() {
	if (!isOwned()) {
		$throwNew($IllegalMonitorStateException);
	}
	unlock();
	startSecondaryEventLoop();
	lock();
}

void WToolkitThreadBlockedHandler::exit() {
	if (!isOwned()) {
		$throwNew($IllegalMonitorStateException);
	}
	$WToolkit::quitSecondaryEventLoop();
}

void WToolkitThreadBlockedHandler::startSecondaryEventLoop() {
	$prepareNative(WToolkitThreadBlockedHandler, startSecondaryEventLoop, void);
	$invokeNative();
	$finishNative();
}

WToolkitThreadBlockedHandler::WToolkitThreadBlockedHandler() {
}

$Class* WToolkitThreadBlockedHandler::load$($String* name, bool initialize) {
	$loadClass(WToolkitThreadBlockedHandler, name, initialize, &_WToolkitThreadBlockedHandler_ClassInfo_, allocate$WToolkitThreadBlockedHandler);
	return class$;
}

$Class* WToolkitThreadBlockedHandler::class$ = nullptr;

		} // windows
	} // awt
} // sun