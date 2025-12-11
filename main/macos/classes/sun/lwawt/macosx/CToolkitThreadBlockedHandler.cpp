#include <sun/lwawt/macosx/CToolkitThreadBlockedHandler.h>

#include <java/lang/IllegalMonitorStateException.h>
#include <sun/awt/Mutex.h>
#include <sun/lwawt/macosx/LWCToolkit.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalMonitorStateException = ::java::lang::IllegalMonitorStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Mutex = ::sun::awt::Mutex;
using $LWCToolkit = ::sun::lwawt::macosx::LWCToolkit;

namespace sun {
	namespace lwawt {
		namespace macosx {

$FieldInfo _CToolkitThreadBlockedHandler_FieldInfo_[] = {
	{"awtRunLoopMediator", "J", nullptr, $PRIVATE, $field(CToolkitThreadBlockedHandler, awtRunLoopMediator)},
	{"processEvents", "Z", nullptr, $PRIVATE | $FINAL, $field(CToolkitThreadBlockedHandler, processEvents)},
	{}
};

$MethodInfo _CToolkitThreadBlockedHandler_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CToolkitThreadBlockedHandler::*)()>(&CToolkitThreadBlockedHandler::init$))},
	{"enter", "()V", nullptr, $PUBLIC},
	{"exit", "()V", nullptr, $PUBLIC},
	{"*lock", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*unlock", "()V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _CToolkitThreadBlockedHandler_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.lwawt.macosx.CToolkitThreadBlockedHandler",
	"sun.awt.Mutex",
	"sun.awt.datatransfer.ToolkitThreadBlockedHandler",
	_CToolkitThreadBlockedHandler_FieldInfo_,
	_CToolkitThreadBlockedHandler_MethodInfo_
};

$Object* allocate$CToolkitThreadBlockedHandler($Class* clazz) {
	return $of($alloc(CToolkitThreadBlockedHandler));
}

void CToolkitThreadBlockedHandler::lock() {
	this->$Mutex::lock();
}

void CToolkitThreadBlockedHandler::unlock() {
	this->$Mutex::unlock();
}

int32_t CToolkitThreadBlockedHandler::hashCode() {
	 return this->$Mutex::hashCode();
}

bool CToolkitThreadBlockedHandler::equals(Object$* arg0) {
	 return this->$Mutex::equals(arg0);
}

$Object* CToolkitThreadBlockedHandler::clone() {
	 return this->$Mutex::clone();
}

$String* CToolkitThreadBlockedHandler::toString() {
	 return this->$Mutex::toString();
}

void CToolkitThreadBlockedHandler::finalize() {
	this->$Mutex::finalize();
}

void CToolkitThreadBlockedHandler::init$() {
	$Mutex::init$();
	this->awtRunLoopMediator = 0;
	this->processEvents = true;
}

void CToolkitThreadBlockedHandler::enter() {
	if (!isOwned()) {
		$throwNew($IllegalMonitorStateException);
	}
	this->awtRunLoopMediator = $LWCToolkit::createAWTRunLoopMediator();
	unlock();
	$LWCToolkit::doAWTRunLoop(this->awtRunLoopMediator, this->processEvents);
	lock();
}

void CToolkitThreadBlockedHandler::exit() {
	if (!isOwned()) {
		$throwNew($IllegalMonitorStateException);
	}
	$LWCToolkit::stopAWTRunLoop(this->awtRunLoopMediator);
	this->awtRunLoopMediator = 0;
}

CToolkitThreadBlockedHandler::CToolkitThreadBlockedHandler() {
}

$Class* CToolkitThreadBlockedHandler::load$($String* name, bool initialize) {
	$loadClass(CToolkitThreadBlockedHandler, name, initialize, &_CToolkitThreadBlockedHandler_ClassInfo_, allocate$CToolkitThreadBlockedHandler);
	return class$;
}

$Class* CToolkitThreadBlockedHandler::class$ = nullptr;

		} // macosx
	} // lwawt
} // sun