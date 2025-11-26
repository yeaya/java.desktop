#include <sun/awt/EmbeddedFrame.h>

#include <java/applet/Applet.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/AWTKeyStroke.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Dialog.h>
#include <java/awt/Dimension.h>
#include <java/awt/FocusTraversalPolicy.h>
#include <java/awt/Frame.h>
#include <java/awt/Image.h>
#include <java/awt/KeyEventDispatcher.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/event/ComponentEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/FramePeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <sun/awt/AWTAccessor$ComponentAccessor.h>
#include <sun/awt/AWTAccessor$KeyboardFocusManagerAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/EmbeddedFrame$NullEmbeddedFramePeer.h>
#include <sun/awt/NullComponentPeer.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef BACKWARD
#undef BACKWARD_TRAVERSAL_KEYS
#undef DEFAULT_CURSOR
#undef FORWARD
#undef FORWARD_TRAVERSAL_KEYS
#undef KEY_TYPED
#undef TRUE

using $Applet = ::java::applet::Applet;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTKeyStroke = ::java::awt::AWTKeyStroke;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Dialog = ::java::awt::Dialog;
using $Dimension = ::java::awt::Dimension;
using $FocusTraversalPolicy = ::java::awt::FocusTraversalPolicy;
using $Frame = ::java::awt::Frame;
using $Image = ::java::awt::Image;
using $KeyEventDispatcher = ::java::awt::KeyEventDispatcher;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $MenuBar = ::java::awt::MenuBar;
using $MenuComponent = ::java::awt::MenuComponent;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $ComponentEvent = ::java::awt::event::ComponentEvent;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $FramePeer = ::java::awt::peer::FramePeer;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $EventObject = ::java::util::EventObject;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$ComponentAccessor = ::sun::awt::AWTAccessor$ComponentAccessor;
using $AWTAccessor$KeyboardFocusManagerAccessor = ::sun::awt::AWTAccessor$KeyboardFocusManagerAccessor;
using $EmbeddedFrame$NullEmbeddedFramePeer = ::sun::awt::EmbeddedFrame$NullEmbeddedFramePeer;
using $NullComponentPeer = ::sun::awt::NullComponentPeer;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace sun {
	namespace awt {

$CompoundAttribute _EmbeddedFrame_MethodAnnotations_init$2[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$NamedAttribute EmbeddedFrame_Attribute_var$0[] = {
	{"since", 's', "9"},
	{"forRemoval", 'Z', "true"},
	{}
};

$CompoundAttribute _EmbeddedFrame_MethodAnnotations_getAppletIfAncestorOf8[] = {
	{"Ljava/lang/Deprecated;", EmbeddedFrame_Attribute_var$0},
	{}
};

$FieldInfo _EmbeddedFrame_FieldInfo_[] = {
	{"isCursorAllowed", "Z", nullptr, $PRIVATE, $field(EmbeddedFrame, isCursorAllowed$)},
	{"supportsXEmbed", "Z", nullptr, $PRIVATE, $field(EmbeddedFrame, supportsXEmbed$)},
	{"appletKFM", "Ljava/awt/KeyboardFocusManager;", nullptr, $PRIVATE, $field(EmbeddedFrame, appletKFM)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EmbeddedFrame, serialVersionUID)},
	{"FORWARD", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(EmbeddedFrame, FORWARD)},
	{"BACKWARD", "Z", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(EmbeddedFrame, BACKWARD)},
	{}
};

$MethodInfo _EmbeddedFrame_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Z)V", nullptr, $PROTECTED, $method(static_cast<void(EmbeddedFrame::*)(bool)>(&EmbeddedFrame::init$))},
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(EmbeddedFrame::*)()>(&EmbeddedFrame::init$))},
	{"<init>", "(I)V", nullptr, $PROTECTED | $DEPRECATED, $method(static_cast<void(EmbeddedFrame::*)(int32_t)>(&EmbeddedFrame::init$)), nullptr, nullptr, _EmbeddedFrame_MethodAnnotations_init$2},
	{"<init>", "(J)V", nullptr, $PROTECTED, $method(static_cast<void(EmbeddedFrame::*)(int64_t)>(&EmbeddedFrame::init$))},
	{"<init>", "(JZ)V", nullptr, $PROTECTED, $method(static_cast<void(EmbeddedFrame::*)(int64_t,bool)>(&EmbeddedFrame::init$))},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"addTraversingOutListeners", "(Ljava/awt/KeyboardFocusManager;)V", nullptr, $PRIVATE, $method(static_cast<void(EmbeddedFrame::*)($KeyboardFocusManager*)>(&EmbeddedFrame::addTraversingOutListeners))},
	{"dispatchKeyEvent", "(Ljava/awt/event/KeyEvent;)Z", nullptr, $PUBLIC},
	{"getAppletIfAncestorOf", "(Ljava/awt/Component;)Ljava/applet/Applet;", nullptr, $PUBLIC | $STATIC | $DEPRECATED, $method(static_cast<$Applet*(*)($Component*)>(&EmbeddedFrame::getAppletIfAncestorOf)), nullptr, nullptr, _EmbeddedFrame_MethodAnnotations_getAppletIfAncestorOf8},
	{"getBoundsPrivate", "()Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"getCursor", "()Ljava/awt/Cursor;", nullptr, $PUBLIC},
	{"getLocationPrivate", "()Ljava/awt/Point;", nullptr, $PROTECTED},
	{"getParent", "()Ljava/awt/Container;", nullptr, $PUBLIC},
	{"hide", "()V", nullptr, $PUBLIC},
	{"isCursorAllowed", "()Z", nullptr, $PUBLIC},
	{"isResizable", "()Z", nullptr, $PUBLIC},
	{"notifyModalBlocked", "(Ljava/awt/Dialog;Z)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"registerAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"registerListeners", "()V", nullptr, $PUBLIC},
	{"remove", "(Ljava/awt/MenuComponent;)V", nullptr, $PUBLIC},
	{"removeTraversingOutListeners", "(Ljava/awt/KeyboardFocusManager;)V", nullptr, $PRIVATE, $method(static_cast<void(EmbeddedFrame::*)($KeyboardFocusManager*)>(&EmbeddedFrame::removeTraversingOutListeners))},
	{"setBoundsPrivate", "(IIII)V", nullptr, $PROTECTED},
	{"setCursorAllowed", "(Z)V", nullptr, $PUBLIC},
	{"setIconImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"setIconImages", "(Ljava/util/List;)V", "(Ljava/util/List<+Ljava/awt/Image;>;)V", $PUBLIC},
	{"setLocationPrivate", "(II)V", nullptr, $PROTECTED},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC},
	{"setPeer", "(Ljava/awt/peer/ComponentPeer;)V", nullptr, $PROTECTED},
	{"setResizable", "(Z)V", nullptr, $PUBLIC},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"show", "()V", nullptr, $PUBLIC},
	{"supportsXEmbed", "()Z", nullptr, $PUBLIC},
	{"synthesizeWindowActivation", "(Z)V", nullptr, $PUBLIC},
	{"toBack", "()V", nullptr, $PUBLIC},
	{"toFront", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"traverseIn", "(Z)Z", nullptr, $PUBLIC},
	{"traverseOut", "(Z)Z", nullptr, $PROTECTED},
	{"unregisterAccelerator", "(Ljava/awt/AWTKeyStroke;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _EmbeddedFrame_InnerClassesInfo_[] = {
	{"sun.awt.EmbeddedFrame$NullEmbeddedFramePeer", "sun.awt.EmbeddedFrame", "NullEmbeddedFramePeer", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _EmbeddedFrame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.awt.EmbeddedFrame",
	"java.awt.Frame",
	"java.awt.KeyEventDispatcher,java.beans.PropertyChangeListener",
	_EmbeddedFrame_FieldInfo_,
	_EmbeddedFrame_MethodInfo_,
	nullptr,
	nullptr,
	_EmbeddedFrame_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.awt.EmbeddedFrame$NullEmbeddedFramePeer"
};

$Object* allocate$EmbeddedFrame($Class* clazz) {
	return $of($alloc(EmbeddedFrame));
}

$String* EmbeddedFrame::toString() {
	 return this->$Frame::toString();
}

int32_t EmbeddedFrame::hashCode() {
	 return this->$Frame::hashCode();
}

bool EmbeddedFrame::equals(Object$* arg0) {
	 return this->$Frame::equals(arg0);
}

$Object* EmbeddedFrame::clone() {
	 return this->$Frame::clone();
}

void EmbeddedFrame::finalize() {
	this->$Frame::finalize();
}

bool EmbeddedFrame::supportsXEmbed() {
	return this->supportsXEmbed$ && $SunToolkit::needsXEmbed();
}

void EmbeddedFrame::init$(bool supportsXEmbed) {
	EmbeddedFrame::init$((int64_t)0, supportsXEmbed);
}

void EmbeddedFrame::init$() {
	EmbeddedFrame::init$((int64_t)0);
}

void EmbeddedFrame::init$(int32_t handle) {
	EmbeddedFrame::init$((int64_t)handle);
}

void EmbeddedFrame::init$(int64_t handle) {
	EmbeddedFrame::init$(handle, false);
}

void EmbeddedFrame::init$(int64_t handle, bool supportsXEmbed) {
	$Frame::init$();
	this->isCursorAllowed$ = true;
	this->supportsXEmbed$ = false;
	this->supportsXEmbed$ = supportsXEmbed;
	registerListeners();
}

$Container* EmbeddedFrame::getParent() {
	return nullptr;
}

void EmbeddedFrame::propertyChange($PropertyChangeEvent* evt) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($($nc(evt)->getPropertyName()))->equals("managingFocus"_s)) {
		return;
	}
	$init($Boolean);
	if ($equals($nc(evt)->getNewValue(), $Boolean::TRUE)) {
		return;
	}
	removeTraversingOutListeners($cast($KeyboardFocusManager, $($nc(evt)->getSource())));
	$set(this, appletKFM, $KeyboardFocusManager::getCurrentKeyboardFocusManager());
	if (isVisible()) {
		addTraversingOutListeners(this->appletKFM);
	}
}

void EmbeddedFrame::addTraversingOutListeners($KeyboardFocusManager* kfm) {
	$nc(kfm)->addKeyEventDispatcher(this);
	kfm->addPropertyChangeListener("managingFocus"_s, this);
}

void EmbeddedFrame::removeTraversingOutListeners($KeyboardFocusManager* kfm) {
	$nc(kfm)->removeKeyEventDispatcher(this);
	kfm->removePropertyChangeListener("managingFocus"_s, this);
}

void EmbeddedFrame::registerListeners() {
	if (this->appletKFM != nullptr) {
		removeTraversingOutListeners(this->appletKFM);
	}
	$set(this, appletKFM, $KeyboardFocusManager::getCurrentKeyboardFocusManager());
	if (isVisible()) {
		addTraversingOutListeners(this->appletKFM);
	}
}

void EmbeddedFrame::show() {
	if (this->appletKFM != nullptr) {
		addTraversingOutListeners(this->appletKFM);
	}
	$Frame::show();
}

void EmbeddedFrame::hide() {
	if (this->appletKFM != nullptr) {
		removeTraversingOutListeners(this->appletKFM);
	}
	$Frame::hide();
}

bool EmbeddedFrame::dispatchKeyEvent($KeyEvent* e) {
	$useLocalCurrentObjectStackCache();
	$var($Container, currentRoot, $nc($($AWTAccessor::getKeyboardFocusManagerAccessor()))->getCurrentFocusCycleRoot());
	if (!$equals(this, currentRoot)) {
		return false;
	}
	if ($nc(e)->getID() == $KeyEvent::KEY_TYPED) {
		return false;
	}
	bool var$0 = !getFocusTraversalKeysEnabled();
	if (var$0 || $nc(e)->isConsumed()) {
		return false;
	}
	$var($AWTKeyStroke, stroke, $AWTKeyStroke::getAWTKeyStrokeForEvent(e));
	$var($Set, toTest, nullptr);
	$var($Component, currentFocused, $nc(e)->getComponent());
	$assign(toTest, getFocusTraversalKeys($KeyboardFocusManager::FORWARD_TRAVERSAL_KEYS));
	if ($nc(toTest)->contains(stroke)) {
		$var($Component, last, $nc($(getFocusTraversalPolicy()))->getLastComponent(this));
		if (currentFocused == last || last == nullptr) {
			if (traverseOut(EmbeddedFrame::FORWARD)) {
				e->consume();
				return true;
			}
		}
	}
	$assign(toTest, getFocusTraversalKeys($KeyboardFocusManager::BACKWARD_TRAVERSAL_KEYS));
	if ($nc(toTest)->contains(stroke)) {
		$var($Component, first, $nc($(getFocusTraversalPolicy()))->getFirstComponent(this));
		if (currentFocused == first || first == nullptr) {
			if (traverseOut(EmbeddedFrame::BACKWARD)) {
				e->consume();
				return true;
			}
		}
	}
	return false;
}

bool EmbeddedFrame::traverseIn(bool direction) {
	$useLocalCurrentObjectStackCache();
	$var($Component, comp, nullptr);
	if (direction == EmbeddedFrame::FORWARD) {
		$assign(comp, $nc($(getFocusTraversalPolicy()))->getFirstComponent(this));
	} else {
		$assign(comp, $nc($(getFocusTraversalPolicy()))->getLastComponent(this));
	}
	if (comp != nullptr) {
		$nc($($AWTAccessor::getKeyboardFocusManagerAccessor()))->setMostRecentFocusOwner(this, comp);
		synthesizeWindowActivation(true);
	}
	return (nullptr != comp);
}

bool EmbeddedFrame::traverseOut(bool direction) {
	return false;
}

void EmbeddedFrame::setTitle($String* title) {
}

void EmbeddedFrame::setIconImage($Image* image) {
}

void EmbeddedFrame::setIconImages($List* icons) {
}

void EmbeddedFrame::setMenuBar($MenuBar* mb) {
}

void EmbeddedFrame::setResizable(bool resizable) {
}

void EmbeddedFrame::remove($MenuComponent* m) {
}

bool EmbeddedFrame::isResizable() {
	return true;
}

void EmbeddedFrame::addNotify() {
	$synchronized(getTreeLock()) {
		if (!isDisplayable()) {
			setPeer(static_cast<$ComponentPeer*>(static_cast<$LightweightPeer*>(static_cast<$NullComponentPeer*>($$new($EmbeddedFrame$NullEmbeddedFramePeer)))));
		}
		$Frame::addNotify();
	}
}

void EmbeddedFrame::setCursorAllowed(bool isCursorAllowed) {
	$useLocalCurrentObjectStackCache();
	this->isCursorAllowed$ = isCursorAllowed;
	$var($FramePeer, peer, $cast($FramePeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this)));
	$nc(peer)->updateCursorImmediately();
}

bool EmbeddedFrame::isCursorAllowed() {
	return this->isCursorAllowed$;
}

$Cursor* EmbeddedFrame::getCursor() {
	return (this->isCursorAllowed$) ? $Frame::getCursor() : $Cursor::getPredefinedCursor($Cursor::DEFAULT_CURSOR);
}

void EmbeddedFrame::setPeer($ComponentPeer* p) {
	$nc($($AWTAccessor::getComponentAccessor()))->setPeer(this, p);
}

void EmbeddedFrame::synthesizeWindowActivation(bool doActivate) {
}

void EmbeddedFrame::setLocationPrivate(int32_t x, int32_t y) {
	$var($Dimension, size, getSize());
	setBoundsPrivate(x, y, $nc(size)->width, size->height);
}

$Point* EmbeddedFrame::getLocationPrivate() {
	$var($Rectangle, bounds, getBoundsPrivate());
	return $new($Point, $nc(bounds)->x, bounds->y);
}

void EmbeddedFrame::setBoundsPrivate(int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$var($FramePeer, peer, $cast($FramePeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this)));
	if (peer != nullptr) {
		peer->setBoundsPrivate(x, y, width, height);
	}
}

$Rectangle* EmbeddedFrame::getBoundsPrivate() {
	$useLocalCurrentObjectStackCache();
	$var($FramePeer, peer, $cast($FramePeer, $nc($($AWTAccessor::getComponentAccessor()))->getPeer(this)));
	if (peer != nullptr) {
		return peer->getBoundsPrivate();
	} else {
		return getBounds();
	}
}

void EmbeddedFrame::toFront() {
}

void EmbeddedFrame::toBack() {
}

$Applet* EmbeddedFrame::getAppletIfAncestorOf($Component* comp) {
	$init(EmbeddedFrame);
	$useLocalCurrentObjectStackCache();
	$var($Container, parent, $nc(comp)->getParent());
	$var($Applet, applet, nullptr);
	while (parent != nullptr && !($instanceOf(EmbeddedFrame, parent))) {
		if ($instanceOf($Applet, parent)) {
			$assign(applet, $cast($Applet, parent));
		}
		$assign(parent, parent->getParent());
	}
	return parent == nullptr ? ($Applet*)nullptr : applet;
}

void EmbeddedFrame::notifyModalBlocked($Dialog* blocker, bool blocked) {
}

EmbeddedFrame::EmbeddedFrame() {
}

$Class* EmbeddedFrame::load$($String* name, bool initialize) {
	$loadClass(EmbeddedFrame, name, initialize, &_EmbeddedFrame_ClassInfo_, allocate$EmbeddedFrame);
	return class$;
}

$Class* EmbeddedFrame::class$ = nullptr;

	} // awt
} // sun