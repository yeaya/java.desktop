#include <sun/awt/LightweightFrame.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Frame.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/dnd/DragGestureEvent.h>
#include <java/awt/dnd/DragGestureListener.h>
#include <java/awt/dnd/DragGestureRecognizer.h>
#include <java/awt/dnd/DragSource.h>
#include <java/awt/dnd/DropTarget.h>
#include <java/awt/dnd/peer/DragSourceContextPeer.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/awt/peer/FramePeer.h>
#include <java/awt/peer/WindowPeer.h>
#include <java/util/List.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $MenuBar = ::java::awt::MenuBar;
using $MenuComponent = ::java::awt::MenuComponent;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $FramePeer = ::java::awt::peer::FramePeer;
using $WindowPeer = ::java::awt::peer::WindowPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $RuntimeException = ::java::lang::RuntimeException;
using $List = ::java::util::List;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

$NamedAttribute LightweightFrame_Attribute_var$0[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _LightweightFrame_MethodAnnotations_getScaleFactor9[] = {
	{"Ljava/lang/Deprecated;", LightweightFrame_Attribute_var$0},
	{}
};

$NamedAttribute LightweightFrame_Attribute_var$1[] = {
	{"since", 's', "9"},
	{}
};

$CompoundAttribute _LightweightFrame_MethodAnnotations_notifyDisplayChanged14[] = {
	{"Ljava/lang/Deprecated;", LightweightFrame_Attribute_var$1},
	{}
};

$FieldInfo _LightweightFrame_FieldInfo_[] = {
	{"hostX", "I", nullptr, $PRIVATE, $field(LightweightFrame, hostX)},
	{"hostY", "I", nullptr, $PRIVATE, $field(LightweightFrame, hostY)},
	{"hostW", "I", nullptr, $PRIVATE, $field(LightweightFrame, hostW)},
	{"hostH", "I", nullptr, $PRIVATE, $field(LightweightFrame, hostH)},
	{}
};

$MethodInfo _LightweightFrame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LightweightFrame::*)()>(&LightweightFrame::init$))},
	{"addDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"createDragGestureRecognizer", "(Ljava/lang/Class;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)Ljava/awt/dnd/DragGestureRecognizer;", "<T:Ljava/awt/dnd/DragGestureRecognizer;>(Ljava/lang/Class<TT;>;Ljava/awt/dnd/DragSource;Ljava/awt/Component;ILjava/awt/dnd/DragGestureListener;)TT;", $PUBLIC | $ABSTRACT},
	{"createDragSourceContextPeer", "(Ljava/awt/dnd/DragGestureEvent;)Ljava/awt/dnd/peer/DragSourceContextPeer;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.dnd.InvalidDnDOperationException"},
	{"emulateActivation", "(Z)V", nullptr, $PUBLIC},
	{"getGraphics", "()Ljava/awt/Graphics;", nullptr, $PUBLIC},
	{"getHostBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getParent", "()Ljava/awt/Container;", nullptr, $PUBLIC | $FINAL},
	{"getScaleFactor", "()I", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _LightweightFrame_MethodAnnotations_getScaleFactor9},
	{"getScaleFactorX", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"getScaleFactorY", "()D", nullptr, $PUBLIC | $ABSTRACT},
	{"grabFocus", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"isResizable", "()Z", nullptr, $PUBLIC | $FINAL},
	{"notifyDisplayChanged", "(I)V", nullptr, $PUBLIC | $ABSTRACT | $DEPRECATED, nullptr, nullptr, nullptr, _LightweightFrame_MethodAnnotations_notifyDisplayChanged14},
	{"notifyDisplayChanged", "(DD)V", nullptr, $PUBLIC | $ABSTRACT},
	{"remove", "(Ljava/awt/MenuComponent;)V", nullptr, $PUBLIC | $FINAL},
	{"removeDropTarget", "(Ljava/awt/dnd/DropTarget;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setHostBounds", "(IIII)V", nullptr, $PUBLIC},
	{"setIconImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC | $FINAL},
	{"setIconImages", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljava/awt/Image;>;)V", $PUBLIC | $FINAL},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC | $FINAL},
	{"setPeer", "(Ljava/awt/peer/FramePeer;)V", nullptr, $PRIVATE, $method(static_cast<void(LightweightFrame::*)($FramePeer*)>(&LightweightFrame::setPeer))},
	{"setResizable", "(Z)V", nullptr, $PUBLIC | $FINAL},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL},
	{"toBack", "()V", nullptr, $PUBLIC | $FINAL},
	{"toFront", "()V", nullptr, $PUBLIC | $FINAL},
	{"ungrabFocus", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _LightweightFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.LightweightFrame",
	"java.awt.Frame",
	nullptr,
	_LightweightFrame_FieldInfo_,
	_LightweightFrame_MethodInfo_
};

$Object* allocate$LightweightFrame($Class* clazz) {
	return $of($alloc(LightweightFrame));
}

void LightweightFrame::init$() {
	$Frame::init$();
	setUndecorated(true);
	setResizable(true);
	setEnabled(true);
}

$Container* LightweightFrame::getParent() {
	return nullptr;
}

$Graphics* LightweightFrame::getGraphics() {
	return nullptr;
}

bool LightweightFrame::isResizable() {
	return true;
}

void LightweightFrame::setTitle($String* title) {
}

void LightweightFrame::setIconImage($Image* image) {
}

void LightweightFrame::setIconImages($List* icons) {
}

void LightweightFrame::setMenuBar($MenuBar* mb) {
}

void LightweightFrame::setResizable(bool resizable) {
}

void LightweightFrame::remove($MenuComponent* m) {
}

void LightweightFrame::toFront() {
}

void LightweightFrame::toBack() {
}

void LightweightFrame::addNotify() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		if (!isDisplayable()) {
			$var($SunToolkit, stk, $cast($SunToolkit, $Toolkit::getDefaultToolkit()));
			try {
				setPeer($($nc(stk)->createLightweightFrame(this)));
			} catch ($Exception& e) {
				$throwNew($RuntimeException, static_cast<$Throwable*>(e));
			}
		}
		$Frame::addNotify();
	}
}

void LightweightFrame::setPeer($FramePeer* p) {
	$nc($($AWTAccessor::getComponentAccessor()))->setPeer(this, p);
}

void LightweightFrame::emulateActivation(bool activate) {
	$useLocalCurrentObjectStackCache();
	$var($FramePeer, peer, $cast($FramePeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this)));
	$nc(peer)->emulateActivation(activate);
}

$Rectangle* LightweightFrame::getHostBounds() {
	if (this->hostX == 0 && this->hostY == 0 && this->hostW == 0 && this->hostH == 0) {
		return getBounds();
	}
	return $new($Rectangle, this->hostX, this->hostY, this->hostW, this->hostH);
}

void LightweightFrame::setHostBounds(int32_t x, int32_t y, int32_t w, int32_t h) {
	this->hostX = x;
	this->hostY = y;
	this->hostW = w;
	this->hostH = h;
}

LightweightFrame::LightweightFrame() {
}

$Class* LightweightFrame::load$($String* name, bool initialize) {
	$loadClass(LightweightFrame, name, initialize, &_LightweightFrame_ClassInfo_, allocate$LightweightFrame);
	return class$;
}

$Class* LightweightFrame::class$ = nullptr;

	} // awt
} // sun