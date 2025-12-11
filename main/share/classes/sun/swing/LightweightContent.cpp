#include <sun/swing/LightweightContent.h>

#include <java/awt/Component.h>
#include <java/awt/Cursor.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/dnd/peer/DragSourceContextPeer.h>
#include <java/lang/Math.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Cursor = ::java::awt::Cursor;
using $DragGestureEvent = ::java::awt::dnd::DragGestureEvent;
using $DragGestureListener = ::java::awt::dnd::DragGestureListener;
using $DragGestureRecognizer = ::java::awt::dnd::DragGestureRecognizer;
using $DragSource = ::java::awt::dnd::DragSource;
using $DropTarget = ::java::awt::dnd::DropTarget;
using $DragSourceContextPeer = ::java::awt::dnd::peer::DragSourceContextPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace sun {
	namespace swing {

$NamedAttribute LightweightContent_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _LightweightContent_MethodAnnotations_imageBufferReset6[] = {
	{"Ljava/lang/Deprecated;", LightweightContent_Attribute_var$0},
	{}
};

$MethodInfo _LightweightContent_MethodInfo_[] = {
	{"addDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"createDragGestureRecognizer", "(Ljava/lang/Class;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)Ljava/awt/dnd/DragGestureRecognizer;", "<T:Ljava/awt/dnd/DragGestureRecognizer;>(Ljava/lang/Class<TT;>;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)TT;", $PUBLIC},
	{"createDragSourceContextPeer", "(Ljava/awt/dnd/DragGestureEvent;)Ljava/awt/dnd/peer/DragSourceContextPeer;", nullptr, $PUBLIC, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"focusGrabbed", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"focusUngrabbed", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"getComponent", "()Ljavax/swing/JComponent;", nullptr, $PUBLIC | $ABSTRACT},
	{"imageBufferReset", "([IIIIIII)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _LightweightContent_MethodAnnotations_imageBufferReset6},
	{"imageBufferReset", "([IIIIIIDD)V", nullptr, $PUBLIC},
	{"imageBufferReset", "([IIIIII)V", nullptr, $PUBLIC},
	{"imageReshaped", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"imageUpdated", "(IIII)V", nullptr, $PUBLIC | $ABSTRACT},
	{"maximumSizeChanged", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"minimumSizeChanged", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"paintLock", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"paintUnlock", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"preferredSizeChanged", "(II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"removeDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC},
	{"setCursor", "(Ljava/awt/Cursor;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _LightweightContent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.swing.LightweightContent",
	nullptr,
	nullptr,
	nullptr,
	_LightweightContent_MethodInfo_
};

$Object* allocate$LightweightContent($Class* clazz) {
	return $of($alloc(LightweightContent));
}

void LightweightContent::imageBufferReset($ints* data, int32_t x, int32_t y, int32_t width, int32_t height, int32_t linestride, int32_t scale) {
	imageBufferReset(data, x, y, width, height, linestride);
}

void LightweightContent::imageBufferReset($ints* data, int32_t x, int32_t y, int32_t width, int32_t height, int32_t linestride, double scaleX, double scaleY) {
	imageBufferReset(data, x, y, width, height, linestride, (int32_t)$Math::round(scaleX));
}

void LightweightContent::imageBufferReset($ints* data, int32_t x, int32_t y, int32_t width, int32_t height, int32_t linestride) {
	imageBufferReset(data, x, y, width, height, linestride, 1);
}

void LightweightContent::setCursor($Cursor* cursor) {
}

$DragGestureRecognizer* LightweightContent::createDragGestureRecognizer($Class* abstractRecognizerClass, $DragSource* ds, $Component* c, int32_t srcActions, $DragGestureListener* dgl) {
	return nullptr;
}

$DragSourceContextPeer* LightweightContent::createDragSourceContextPeer($DragGestureEvent* dge) {
	return nullptr;
}

void LightweightContent::addDropTarget($DropTarget* dt) {
}

void LightweightContent::removeDropTarget($DropTarget* dt) {
}

$Class* LightweightContent::load$($String* name, bool initialize) {
	$loadClass(LightweightContent, name, initialize, &_LightweightContent_ClassInfo_, allocate$LightweightContent);
	return class$;
}

$Class* LightweightContent::class$ = nullptr;

	} // swing
} // sun