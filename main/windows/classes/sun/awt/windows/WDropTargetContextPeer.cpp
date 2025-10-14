#include <sun/awt/windows/WDropTargetContextPeer.h>

#include <java/awt/AWTEvent.h>
#include <java/io/FileInputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Runnable.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/EventObject.h>
#include <sun/awt/PeerEvent.h>
#include <sun/awt/SunToolkit.h>
#include <sun/awt/dnd/SunDropTargetContextPeer.h>
#include <sun/awt/dnd/SunDropTargetEvent.h>
#include <sun/awt/windows/WDropTargetContextPeer$1.h>
#include <sun/awt/windows/WDropTargetContextPeerFileStream.h>
#include <sun/awt/windows/WDropTargetContextPeerIStream.h>
#include <jcpp.h>

#undef MOUSE_DROPPED

using $AWTEvent = ::java::awt::AWTEvent;
using $FileInputStream = ::java::io::FileInputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $EventObject = ::java::util::EventObject;
using $PeerEvent = ::sun::awt::PeerEvent;
using $SunToolkit = ::sun::awt::SunToolkit;
using $SunDropTargetContextPeer = ::sun::awt::dnd::SunDropTargetContextPeer;
using $SunDropTargetEvent = ::sun::awt::dnd::SunDropTargetEvent;
using $WDropTargetContextPeer$1 = ::sun::awt::windows::WDropTargetContextPeer$1;
using $WDropTargetContextPeerFileStream = ::sun::awt::windows::WDropTargetContextPeerFileStream;
using $WDropTargetContextPeerIStream = ::sun::awt::windows::WDropTargetContextPeerIStream;

namespace sun {
	namespace awt {
		namespace windows {

$MethodInfo _WDropTargetContextPeer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(WDropTargetContextPeer::*)()>(&WDropTargetContextPeer::init$))},
	{"doDropDone", "(ZIZ)V", nullptr, $PROTECTED},
	{"dropDone", "(JZI)V", nullptr, $PRIVATE | $NATIVE, $method(static_cast<void(WDropTargetContextPeer::*)(int64_t,bool,int32_t)>(&WDropTargetContextPeer::dropDone))},
	{"eventPosted", "(Lsun/awt/dnd/SunDropTargetEvent;)V", nullptr, $PROTECTED},
	{"getData", "(JJ)Ljava/lang/Object;", nullptr, $PRIVATE | $NATIVE, $method(static_cast<$Object*(WDropTargetContextPeer::*)(int64_t,int64_t)>(&WDropTargetContextPeer::getData))},
	{"getFileStream", "(Ljava/lang/String;J)Ljava/io/FileInputStream;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$FileInputStream*(*)($String*,int64_t)>(&WDropTargetContextPeer::getFileStream)), "java.io.IOException"},
	{"getIStream", "(J)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Object*(*)(int64_t)>(&WDropTargetContextPeer::getIStream)), "java.io.IOException"},
	{"getNativeData", "(J)Ljava/lang/Object;", nullptr, $PROTECTED},
	{"getWDropTargetContextPeer", "()Lsun/awt/windows/WDropTargetContextPeer;", nullptr, $STATIC, $method(static_cast<WDropTargetContextPeer*(*)()>(&WDropTargetContextPeer::getWDropTargetContextPeer))},
	{}
};

#define _METHOD_INDEX_dropDone 2
#define _METHOD_INDEX_getData 4

$InnerClassInfo _WDropTargetContextPeer_InnerClassesInfo_[] = {
	{"sun.awt.windows.WDropTargetContextPeer$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _WDropTargetContextPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WDropTargetContextPeer",
	"sun.awt.dnd.SunDropTargetContextPeer",
	nullptr,
	nullptr,
	_WDropTargetContextPeer_MethodInfo_,
	nullptr,
	nullptr,
	_WDropTargetContextPeer_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.windows.WDropTargetContextPeer$1"
};

$Object* allocate$WDropTargetContextPeer($Class* clazz) {
	return $of($alloc(WDropTargetContextPeer));
}

WDropTargetContextPeer* WDropTargetContextPeer::getWDropTargetContextPeer() {
	$init(WDropTargetContextPeer);
	return $new(WDropTargetContextPeer);
}

void WDropTargetContextPeer::init$() {
	$SunDropTargetContextPeer::init$();
}

$FileInputStream* WDropTargetContextPeer::getFileStream($String* file, int64_t stgmedium) {
	$init(WDropTargetContextPeer);
	return $new($WDropTargetContextPeerFileStream, file, stgmedium);
}

$Object* WDropTargetContextPeer::getIStream(int64_t istream) {
	$init(WDropTargetContextPeer);
	return $of($new($WDropTargetContextPeerIStream, istream));
}

$Object* WDropTargetContextPeer::getNativeData(int64_t format) {
	return $of(getData(getNativeDragContext(), format));
}

void WDropTargetContextPeer::doDropDone(bool success, int32_t dropAction, bool isLocal) {
	dropDone(getNativeDragContext(), success, dropAction);
}

void WDropTargetContextPeer::eventPosted($SunDropTargetEvent* e) {
	if ($nc(e)->getID() != $SunDropTargetEvent::MOUSE_DROPPED) {
		$var($Runnable, runnable, $new($WDropTargetContextPeer$1, this, e));
		$var($PeerEvent, peerEvent, $new($PeerEvent, $(e->getSource()), runnable, 0));
		$SunToolkit::executeOnEventHandlerThread(peerEvent);
	}
}

$Object* WDropTargetContextPeer::getData(int64_t nativeContext, int64_t format) {
	$var($Object, $ret, nullptr);
	$prepareNative(WDropTargetContextPeer, getData, $Object*, int64_t nativeContext, int64_t format);
	$assign($ret, $invokeNative(WDropTargetContextPeer, getData, nativeContext, format));
	$finishNative();
	return $ret;
}

void WDropTargetContextPeer::dropDone(int64_t nativeContext, bool success, int32_t action) {
	$prepareNative(WDropTargetContextPeer, dropDone, void, int64_t nativeContext, bool success, int32_t action);
	$invokeNative(WDropTargetContextPeer, dropDone, nativeContext, success, action);
	$finishNative();
}

WDropTargetContextPeer::WDropTargetContextPeer() {
}

$Class* WDropTargetContextPeer::load$($String* name, bool initialize) {
	$loadClass(WDropTargetContextPeer, name, initialize, &_WDropTargetContextPeer_ClassInfo_, allocate$WDropTargetContextPeer);
	return class$;
}

$Class* WDropTargetContextPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun