#include <sun/awt/windows/WDragSourceContextPeer.h>

#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Point.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/InvalidDnDOperationException.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/DataBuffer.h>
#include <java/awt/image/DataBufferInt.h>
#include <java/awt/image/ImageObserver.h>
#include <java/awt/image/Raster.h>
#include <java/util/Map.h>
#include <sun/awt/dnd/SunDragSourceContextPeer.h>
#include <sun/awt/windows/WDropTargetContextPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $Point = ::java::awt::Point;
using $Transferable = ::java::awt::datatransfer::Transferable;
using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $DragGestureRecognizer = ::java::awt::dnd::DragGestureRecognizer;
using $InvalidDnDOperationException = ::java::awt::dnd::InvalidDnDOperationException;
using $InputEvent = ::java::awt::event::InputEvent;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $DataBuffer = ::java::awt::image::DataBuffer;
using $DataBufferInt = ::java::awt::image::DataBufferInt;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $Raster = ::java::awt::image::Raster;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $SunDragSourceContextPeer = ::sun::awt::dnd::SunDragSourceContextPeer;
using $SunDropTargetContextPeer = ::sun::awt::dnd::SunDropTargetContextPeer;
using $WDropTargetContextPeer = ::sun::awt::windows::WDropTargetContextPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;

namespace sun {
	namespace awt {
		namespace windows {

$FieldInfo _WDragSourceContextPeer_FieldInfo_[] = {
	{"theInstance", "Lsun/awt/windows/WDragSourceContextPeer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WDragSourceContextPeer, theInstance)},
	{}
};

$MethodInfo _WDragSourceContextPeer_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/dnd/DragGestureEvent;)V", nullptr, $PRIVATE, $method(static_cast<void(WDragSourceContextPeer::*)($DragGestureEvent*)>(&WDragSourceContextPeer::init$))},
	{"createDragSource", "(Ljava/awt/Component;Ljava/awt/datatransfer/Transferable;Ljava/awt/event/InputEvent;I[JLjava/util/Map;)J", "(Ljava/awt/Component;Ljava/awt/datatransfer/Transferable;Ljava/awt/event/InputEvent;I[JLjava/util/Map<Ljava/lang/Long;Ljava/awt/datatransfer/DataFlavor;>;)J", $NATIVE, $method(static_cast<int64_t(WDragSourceContextPeer::*)($Component*,$Transferable*,$InputEvent*,int32_t,$longs*,$Map*)>(&WDragSourceContextPeer::createDragSource))},
	{"createDragSourceContextPeer", "(Ljava/awt/dnd/DragGestureEvent;)Lsun/awt/windows/WDragSourceContextPeer;", nullptr, $STATIC, $method(static_cast<WDragSourceContextPeer*(*)($DragGestureEvent*)>(&WDragSourceContextPeer::createDragSourceContextPeer)), "java.awt.dnd.InvalidDnDOperationException"},
	{"doDragDrop", "(JLjava/awt/Cursor;[IIIII)V", nullptr, $NATIVE, $method(static_cast<void(WDragSourceContextPeer::*)(int64_t,$Cursor*,$ints*,int32_t,int32_t,int32_t,int32_t)>(&WDragSourceContextPeer::doDragDrop))},
	{"quitSecondaryEventLoop", "()V", nullptr, $PUBLIC},
	{"setNativeCursor", "(JLjava/awt/Cursor;I)V", nullptr, $PROTECTED | $NATIVE},
	{"startDrag", "(Ljava/awt/datatransfer/Transferable;[JLjava/util/Map;)V", "(Ljava/awt/datatransfer/Transferable;[JLjava/util/Map<Ljava/lang/Long;Ljava/awt/datatransfer/DataFlavor;>;)V", $PROTECTED},
	{"startSecondaryEventLoop", "()V", nullptr, $PUBLIC},
	{}
};

#define _METHOD_INDEX_createDragSource 1
#define _METHOD_INDEX_doDragDrop 3
#define _METHOD_INDEX_setNativeCursor 5

$ClassInfo _WDragSourceContextPeer_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"sun.awt.windows.WDragSourceContextPeer",
	"sun.awt.dnd.SunDragSourceContextPeer",
	nullptr,
	_WDragSourceContextPeer_FieldInfo_,
	_WDragSourceContextPeer_MethodInfo_
};

$Object* allocate$WDragSourceContextPeer($Class* clazz) {
	return $of($alloc(WDragSourceContextPeer));
}

WDragSourceContextPeer* WDragSourceContextPeer::theInstance = nullptr;

void WDragSourceContextPeer::startSecondaryEventLoop() {
	$WToolkit::startSecondaryEventLoop();
}

void WDragSourceContextPeer::quitSecondaryEventLoop() {
	$WToolkit::quitSecondaryEventLoop();
}

void WDragSourceContextPeer::init$($DragGestureEvent* dge) {
	$SunDragSourceContextPeer::init$(dge);
}

WDragSourceContextPeer* WDragSourceContextPeer::createDragSourceContextPeer($DragGestureEvent* dge) {
	$init(WDragSourceContextPeer);
	$nc(WDragSourceContextPeer::theInstance)->setTrigger(dge);
	return WDragSourceContextPeer::theInstance;
}

void WDragSourceContextPeer::startDrag($Transferable* trans, $longs* formats, $Map* formatMap) {
	$useLocalCurrentObjectStackCache();
	int64_t nativeCtxtLocal = 0;
	$var($Component, var$0, $nc($(getTrigger()))->getComponent());
	$var($Transferable, var$1, trans);
	$var($InputEvent, var$2, $nc($(getTrigger()))->getTriggerEvent());
	nativeCtxtLocal = createDragSource(var$0, var$1, var$2, $nc($($nc($(getTrigger()))->getSourceAsDragGestureRecognizer()))->getSourceActions(), formats, formatMap);
	if (nativeCtxtLocal == 0) {
		$throwNew($InvalidDnDOperationException, "failed to create native peer"_s);
	}
	$var($ints, imageData, nullptr);
	$var($Point, op, nullptr);
	$var($Image, im, getDragImage());
	int32_t imageWidth = -1;
	int32_t imageHeight = -1;
	if (im != nullptr) {
		try {
			imageWidth = im->getWidth(nullptr);
			imageHeight = im->getHeight(nullptr);
			if (imageWidth < 0 || imageHeight < 0) {
				$throwNew($InvalidDnDOperationException, "drag image is not ready"_s);
			}
			$assign(op, getDragImageOffset());
			$var($BufferedImage, bi, $new($BufferedImage, imageWidth, imageHeight, $BufferedImage::TYPE_INT_ARGB));
			$nc($(bi->getGraphics()))->drawImage(im, 0, 0, nullptr);
			$assign(imageData, $nc(($cast($DataBufferInt, $($nc($(bi->getData()))->getDataBuffer()))))->getData());
		} catch ($Throwable& ex) {
			$throwNew($InvalidDnDOperationException, $$str({"drag image creation problem: "_s, $(ex->getMessage())}));
		}
	}
	setNativeContext(nativeCtxtLocal);
	$WDropTargetContextPeer::setCurrentJVMLocalSourceTransferable(trans);
	if (imageData != nullptr) {
		int64_t var$3 = getNativeContext();
		doDragDrop(var$3, $(getCursor()), imageData, imageWidth, imageHeight, $nc(op)->x, op->y);
	} else {
		int64_t var$4 = getNativeContext();
		doDragDrop(var$4, $(getCursor()), nullptr, -1, -1, 0, 0);
	}
}

int64_t WDragSourceContextPeer::createDragSource($Component* component, $Transferable* transferable, $InputEvent* nativeTrigger, int32_t actions, $longs* formats, $Map* formatMap) {
	int64_t $ret = 0;
	$prepareNative(WDragSourceContextPeer, createDragSource, int64_t, $Component* component, $Transferable* transferable, $InputEvent* nativeTrigger, int32_t actions, $longs* formats, $Map* formatMap);
	$ret = $invokeNative(WDragSourceContextPeer, createDragSource, component, transferable, nativeTrigger, actions, formats, formatMap);
	$finishNative();
	return $ret;
}

void WDragSourceContextPeer::doDragDrop(int64_t nativeCtxt, $Cursor* cursor, $ints* imageData, int32_t imgWidth, int32_t imgHight, int32_t offsetX, int32_t offsetY) {
	$prepareNative(WDragSourceContextPeer, doDragDrop, void, int64_t nativeCtxt, $Cursor* cursor, $ints* imageData, int32_t imgWidth, int32_t imgHight, int32_t offsetX, int32_t offsetY);
	$invokeNative(WDragSourceContextPeer, doDragDrop, nativeCtxt, cursor, imageData, imgWidth, imgHight, offsetX, offsetY);
	$finishNative();
}

void WDragSourceContextPeer::setNativeCursor(int64_t nativeCtxt, $Cursor* c, int32_t cType) {
	$prepareNative(WDragSourceContextPeer, setNativeCursor, void, int64_t nativeCtxt, $Cursor* c, int32_t cType);
	$invokeNative(WDragSourceContextPeer, setNativeCursor, nativeCtxt, c, cType);
	$finishNative();
}

void clinit$WDragSourceContextPeer($Class* class$) {
	$assignStatic(WDragSourceContextPeer::theInstance, $new(WDragSourceContextPeer, nullptr));
}

WDragSourceContextPeer::WDragSourceContextPeer() {
}

$Class* WDragSourceContextPeer::load$($String* name, bool initialize) {
	$loadClass(WDragSourceContextPeer, name, initialize, &_WDragSourceContextPeer_ClassInfo_, clinit$WDragSourceContextPeer, allocate$WDragSourceContextPeer);
	return class$;
}

$Class* WDragSourceContextPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun