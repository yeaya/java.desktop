#include <java/awt/Frame.h>

#include <java/awt/Color.h>
#include <java/awt/Component$AccessibleAWTComponent.h>
#include <java/awt/Component.h>
#include <java/awt/Container$AccessibleAWTContainer.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Frame$1.h>
#include <java/awt/Frame$AccessibleAWTFrame.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/Image.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window$AccessibleAWTWindow.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/ContainerPeer.h>
#include <java/awt/peer/FramePeer.h>
#include <java/awt/peer/WindowPeer.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/OptionalDataException.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Float.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/AWTAccessor$FrameAccessor.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/ComponentFactory.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef CROSSHAIR_CURSOR
#undef DEFAULT_CURSOR
#undef E_RESIZE_CURSOR
#undef HAND_CURSOR
#undef ICONIFIED
#undef MAXIMIZED_BOTH
#undef MAXIMIZED_HORIZ
#undef MAXIMIZED_VERT
#undef MOVE_CURSOR
#undef NE_RESIZE_CURSOR
#undef NORMAL
#undef NW_RESIZE_CURSOR
#undef N_RESIZE_CURSOR
#undef SE_RESIZE_CURSOR
#undef SW_RESIZE_CURSOR
#undef S_RESIZE_CURSOR
#undef TEXT_CURSOR
#undef WAIT_CURSOR
#undef W_RESIZE_CURSOR

using $FrameArray = $Array<::java::awt::Frame>;
using $WindowArray = $Array<::java::awt::Window>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$AccessibleAWTComponent = ::java::awt::Component$AccessibleAWTComponent;
using $Container = ::java::awt::Container;
using $Container$AccessibleAWTContainer = ::java::awt::Container$AccessibleAWTContainer;
using $Cursor = ::java::awt::Cursor;
using $Frame$1 = ::java::awt::Frame$1;
using $Frame$AccessibleAWTFrame = ::java::awt::Frame$AccessibleAWTFrame;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $Image = ::java::awt::Image;
using $MenuBar = ::java::awt::MenuBar;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuContainer = ::java::awt::MenuContainer;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Toolkit = ::java::awt::Toolkit;
using $Window = ::java::awt::Window;
using $Window$AccessibleAWTWindow = ::java::awt::Window$AccessibleAWTWindow;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $ContainerPeer = ::java::awt::peer::ContainerPeer;
using $FramePeer = ::java::awt::peer::FramePeer;
using $WindowPeer = ::java::awt::peer::WindowPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $OptionalDataException = ::java::io::OptionalDataException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Vector = ::java::util::Vector;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AWTAccessor$FrameAccessor = ::sun::awt::AWTAccessor$FrameAccessor;
using $ComponentFactory = ::sun::awt::ComponentFactory;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace java {
	namespace awt {

$CompoundAttribute _Frame_FieldAnnotations_DEFAULT_CURSOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Frame_FieldAnnotations_CROSSHAIR_CURSOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Frame_FieldAnnotations_TEXT_CURSOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Frame_FieldAnnotations_WAIT_CURSOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Frame_FieldAnnotations_SW_RESIZE_CURSOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Frame_FieldAnnotations_SE_RESIZE_CURSOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Frame_FieldAnnotations_NW_RESIZE_CURSOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Frame_FieldAnnotations_NE_RESIZE_CURSOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Frame_FieldAnnotations_N_RESIZE_CURSOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Frame_FieldAnnotations_S_RESIZE_CURSOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Frame_FieldAnnotations_W_RESIZE_CURSOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Frame_FieldAnnotations_E_RESIZE_CURSOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Frame_FieldAnnotations_HAND_CURSOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Frame_FieldAnnotations_MOVE_CURSOR[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Frame_MethodAnnotations_getCursorType7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Frame_MethodAnnotations_setCursor26[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Frame_FieldInfo_[] = {
	{"DEFAULT_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Frame, DEFAULT_CURSOR), _Frame_FieldAnnotations_DEFAULT_CURSOR},
	{"CROSSHAIR_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Frame, CROSSHAIR_CURSOR), _Frame_FieldAnnotations_CROSSHAIR_CURSOR},
	{"TEXT_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Frame, TEXT_CURSOR), _Frame_FieldAnnotations_TEXT_CURSOR},
	{"WAIT_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Frame, WAIT_CURSOR), _Frame_FieldAnnotations_WAIT_CURSOR},
	{"SW_RESIZE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Frame, SW_RESIZE_CURSOR), _Frame_FieldAnnotations_SW_RESIZE_CURSOR},
	{"SE_RESIZE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Frame, SE_RESIZE_CURSOR), _Frame_FieldAnnotations_SE_RESIZE_CURSOR},
	{"NW_RESIZE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Frame, NW_RESIZE_CURSOR), _Frame_FieldAnnotations_NW_RESIZE_CURSOR},
	{"NE_RESIZE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Frame, NE_RESIZE_CURSOR), _Frame_FieldAnnotations_NE_RESIZE_CURSOR},
	{"N_RESIZE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Frame, N_RESIZE_CURSOR), _Frame_FieldAnnotations_N_RESIZE_CURSOR},
	{"S_RESIZE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Frame, S_RESIZE_CURSOR), _Frame_FieldAnnotations_S_RESIZE_CURSOR},
	{"W_RESIZE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Frame, W_RESIZE_CURSOR), _Frame_FieldAnnotations_W_RESIZE_CURSOR},
	{"E_RESIZE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Frame, E_RESIZE_CURSOR), _Frame_FieldAnnotations_E_RESIZE_CURSOR},
	{"HAND_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Frame, HAND_CURSOR), _Frame_FieldAnnotations_HAND_CURSOR},
	{"MOVE_CURSOR", "I", nullptr, $PUBLIC | $STATIC | $FINAL | $DEPRECATED, $constField(Frame, MOVE_CURSOR), _Frame_FieldAnnotations_MOVE_CURSOR},
	{"NORMAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Frame, NORMAL)},
	{"ICONIFIED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Frame, ICONIFIED)},
	{"MAXIMIZED_HORIZ", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Frame, MAXIMIZED_HORIZ)},
	{"MAXIMIZED_VERT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Frame, MAXIMIZED_VERT)},
	{"MAXIMIZED_BOTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Frame, MAXIMIZED_BOTH)},
	{"maximizedBounds", "Ljava/awt/Rectangle;", nullptr, 0, $field(Frame, maximizedBounds)},
	{"title", "Ljava/lang/String;", nullptr, 0, $field(Frame, title)},
	{"menuBar", "Ljava/awt/MenuBar;", nullptr, 0, $field(Frame, menuBar)},
	{"resizable", "Z", nullptr, 0, $field(Frame, resizable)},
	{"undecorated", "Z", nullptr, 0, $field(Frame, undecorated)},
	{"mbManagement", "Z", nullptr, 0, $field(Frame, mbManagement)},
	{"state", "I", nullptr, $PRIVATE, $field(Frame, state)},
	{"ownedWindows", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/awt/Window;>;", 0, $field(Frame, ownedWindows)},
	{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Frame, base)},
	{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(Frame, nameCounter)},
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Frame, serialVersionUID)},
	{"frameSerializedDataVersion", "I", nullptr, $PRIVATE, $field(Frame, frameSerializedDataVersion)},
	{}
};

$MethodInfo _Frame_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Frame::*)()>(&Frame::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(static_cast<void(Frame::*)($GraphicsConfiguration*)>(&Frame::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Frame::*)($String*)>(&Frame::init$)), "java.awt.HeadlessException"},
	{"<init>", "(Ljava/lang/String;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(static_cast<void(Frame::*)($String*,$GraphicsConfiguration*)>(&Frame::init$))},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"constructComponentName", "()Ljava/lang/String;", nullptr, 0},
	{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC},
	{"getCursorType", "()I", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Frame_MethodAnnotations_getCursorType7},
	{"getExtendedState", "()I", nullptr, $PUBLIC},
	{"getFrames", "()[Ljava/awt/Frame;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$FrameArray*(*)()>(&Frame::getFrames))},
	{"getIconImage", "()Ljava/awt/Image;", nullptr, $PUBLIC},
	{"getMaximizedBounds", "()Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getMenuBar", "()Ljava/awt/MenuBar;", nullptr, $PUBLIC},
	{"getState", "()I", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"getTitle", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"init", "(Ljava/lang/String;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PRIVATE, $method(static_cast<void(Frame::*)($String*,$GraphicsConfiguration*)>(&Frame::init))},
	{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $method(static_cast<void(*)()>(&Frame::initIDs))},
	{"isFrameStateSupported", "(I)Z", nullptr, $PRIVATE, $method(static_cast<bool(Frame::*)(int32_t)>(&Frame::isFrameStateSupported))},
	{"isResizable", "()Z", nullptr, $PUBLIC},
	{"isUndecorated", "()Z", nullptr, $PUBLIC},
	{"paramString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"postProcessKeyEvent", "(Ljava/awt/event/KeyEvent;)V", nullptr, 0},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Frame::*)($ObjectInputStream*)>(&Frame::readObject)), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
	{"remove", "(Ljava/awt/MenuComponent;)V", nullptr, $PUBLIC},
	{"removeNotify", "()V", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setCursor", "(I)V", nullptr, $PUBLIC | $DEPRECATED, nullptr, nullptr, nullptr, _Frame_MethodAnnotations_setCursor26},
	{"setExtendedState", "(I)V", nullptr, $PUBLIC},
	{"setIconImage", "(Ljava/awt/Image;)V", nullptr, $PUBLIC},
	{"setMaximizedBounds", "(Ljava/awt/Rectangle;)V", nullptr, $PUBLIC},
	{"setMenuBar", "(Ljava/awt/MenuBar;)V", nullptr, $PUBLIC},
	{"setOpacity", "(F)V", nullptr, $PUBLIC},
	{"setResizable", "(Z)V", nullptr, $PUBLIC},
	{"setShape", "(Ljava/awt/Shape;)V", nullptr, $PUBLIC},
	{"setState", "(I)V", nullptr, $PUBLIC | $SYNCHRONIZED},
	{"setTitle", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setUndecorated", "(Z)V", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(Frame::*)($ObjectOutputStream*)>(&Frame::writeObject)), "java.io.IOException"},
	{}
};

#define _METHOD_INDEX_initIDs 16

$InnerClassInfo _Frame_InnerClassesInfo_[] = {
	{"java.awt.Frame$AccessibleAWTFrame", "java.awt.Frame", "AccessibleAWTFrame", $PROTECTED},
	{"java.awt.Frame$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Frame_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"java.awt.Frame",
	"java.awt.Window",
	nullptr,
	_Frame_FieldInfo_,
	_Frame_MethodInfo_,
	nullptr,
	nullptr,
	_Frame_InnerClassesInfo_,
	nullptr,
	nullptr,
	"java.awt.Frame$AccessibleAWTFrame,java.awt.Frame$1"
};

$Object* allocate$Frame($Class* clazz) {
	return $of($alloc(Frame));
}

$String* Frame::base = nullptr;
int32_t Frame::nameCounter = 0;

void Frame::init$() {
	Frame::init$(""_s);
}

void Frame::init$($GraphicsConfiguration* gc) {
	Frame::init$(""_s, gc);
}

void Frame::init$($String* title) {
	$Window::init$();
	$set(this, title, "Untitled"_s);
	this->resizable = true;
	this->undecorated = false;
	this->mbManagement = false;
	this->state = Frame::NORMAL;
	this->frameSerializedDataVersion = 1;
	init(title, nullptr);
}

void Frame::init$($String* title, $GraphicsConfiguration* gc) {
	$Window::init$(gc);
	$set(this, title, "Untitled"_s);
	this->resizable = true;
	this->undecorated = false;
	this->mbManagement = false;
	this->state = Frame::NORMAL;
	this->frameSerializedDataVersion = 1;
	init(title, gc);
}

void Frame::init($String* title, $GraphicsConfiguration* gc) {
	$set(this, title, title);
	$SunToolkit::checkAndSetPolicy(this);
}

$String* Frame::constructComponentName() {
	$useLocalCurrentObjectStackCache();
	$synchronized(Frame::class$) {
		$var($String, var$0, Frame::base);
		return $concat(var$0, $$str(Frame::nameCounter++));
	}
}

void Frame::addNotify() {
	$useLocalCurrentObjectStackCache();
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $nc($(getComponentFactory()))->createFrame(this));
		}
		$var($FramePeer, p, $cast($FramePeer, this->peer));
		$var($MenuBar, menuBar, this->menuBar);
		if (menuBar != nullptr) {
			this->mbManagement = true;
			menuBar->addNotify();
			$nc(p)->setMenuBar(menuBar);
		}
		$nc(p)->setMaximizedBounds(this->maximizedBounds);
		$Window::addNotify();
	}
}

$String* Frame::getTitle() {
	return this->title;
}

void Frame::setTitle($String* title$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, title, title$renamed);
	$var($String, oldTitle, this->title);
	if (title == nullptr) {
		$assign(title, ""_s);
	}
	$synchronized(this) {
		$set(this, title, title);
		$var($FramePeer, peer, $cast($FramePeer, this->peer));
		if (peer != nullptr) {
			peer->setTitle(title);
		}
	}
	firePropertyChange("title"_s, $of(oldTitle), $of(title));
}

$Image* Frame::getIconImage() {
	$var($List, icons, this->icons);
	if (icons != nullptr) {
		if (icons->size() > 0) {
			return $cast($Image, icons->get(0));
		}
	}
	return nullptr;
}

void Frame::setIconImage($Image* image) {
	$Window::setIconImage(image);
}

$MenuBar* Frame::getMenuBar() {
	return this->menuBar;
}

void Frame::setMenuBar($MenuBar* mb) {
	$synchronized(getTreeLock()) {
		if (this->menuBar == mb) {
			return;
		}
		if ((mb != nullptr) && (mb->parent != nullptr)) {
			$nc(mb->parent)->remove(mb);
		}
		if (this->menuBar != nullptr) {
			remove(static_cast<$MenuComponent*>(this->menuBar));
		}
		$set(this, menuBar, mb);
		if (this->menuBar != nullptr) {
			$set($nc(this->menuBar), parent, this);
			$var($FramePeer, peer, $cast($FramePeer, this->peer));
			if (peer != nullptr) {
				this->mbManagement = true;
				$nc(this->menuBar)->addNotify();
				invalidateIfValid();
				peer->setMenuBar(this->menuBar);
			}
		}
	}
}

bool Frame::isResizable() {
	return this->resizable;
}

void Frame::setResizable(bool resizable) {
	bool oldResizable = this->resizable;
	bool testvalid = false;
	$synchronized(this) {
		this->resizable = resizable;
		$var($FramePeer, peer, $cast($FramePeer, this->peer));
		if (peer != nullptr) {
			peer->setResizable(resizable);
			testvalid = true;
		}
	}
	if (testvalid) {
		invalidateIfValid();
	}
	firePropertyChange("resizable"_s, oldResizable, resizable);
}

void Frame::setState(int32_t state) {
	$synchronized(this) {
		int32_t current = getExtendedState();
		if (state == Frame::ICONIFIED && ((int32_t)(current & (uint32_t)Frame::ICONIFIED)) == 0) {
			setExtendedState(current | Frame::ICONIFIED);
		} else if (state == Frame::NORMAL && ((int32_t)(current & (uint32_t)Frame::ICONIFIED)) != 0) {
			setExtendedState((int32_t)(current & (uint32_t)~Frame::ICONIFIED));
		}
	}
}

void Frame::setExtendedState(int32_t state) {
	if (!isFrameStateSupported(state)) {
		return;
	}
	$synchronized(getObjectLock()) {
		this->state = state;
	}
	$var($FramePeer, peer, $cast($FramePeer, this->peer));
	if (peer != nullptr) {
		peer->setState(state);
	}
}

bool Frame::isFrameStateSupported(int32_t state) {
	$useLocalCurrentObjectStackCache();
	if (!$nc($(getToolkit()))->isFrameStateSupported(state)) {
		if ((((int32_t)(state & (uint32_t)Frame::ICONIFIED)) != 0) && !$nc($(getToolkit()))->isFrameStateSupported(Frame::ICONIFIED)) {
			return false;
		} else {
			state &= (uint32_t)~Frame::ICONIFIED;
		}
		return $nc($(getToolkit()))->isFrameStateSupported(state);
	}
	return true;
}

int32_t Frame::getState() {
	$synchronized(this) {
		return ((int32_t)(getExtendedState() & (uint32_t)Frame::ICONIFIED)) != 0 ? Frame::ICONIFIED : Frame::NORMAL;
	}
}

int32_t Frame::getExtendedState() {
	$synchronized(getObjectLock()) {
		return this->state;
	}
}

void Frame::setMaximizedBounds($Rectangle* bounds) {
	$synchronized(getObjectLock()) {
		$set(this, maximizedBounds, bounds);
	}
	$var($FramePeer, peer, $cast($FramePeer, this->peer));
	if (peer != nullptr) {
		peer->setMaximizedBounds(bounds);
	}
}

$Rectangle* Frame::getMaximizedBounds() {
	$synchronized(getObjectLock()) {
		return this->maximizedBounds;
	}
}

void Frame::setUndecorated(bool undecorated) {
	$synchronized(getTreeLock()) {
		if (isDisplayable()) {
			$throwNew($IllegalComponentStateException, "The frame is displayable."_s);
		}
		if (!undecorated) {
			if (getOpacity() < 1.0f) {
				$throwNew($IllegalComponentStateException, "The frame is not opaque"_s);
			}
			if (getShape() != nullptr) {
				$throwNew($IllegalComponentStateException, "The frame does not have a default shape"_s);
			}
			$var($Color, bg, getBackground());
			if ((bg != nullptr) && (bg->getAlpha() < 255)) {
				$throwNew($IllegalComponentStateException, "The frame background color is not opaque"_s);
			}
		}
		this->undecorated = undecorated;
	}
}

bool Frame::isUndecorated() {
	return this->undecorated;
}

void Frame::setOpacity(float opacity) {
	$synchronized(getTreeLock()) {
		if ((opacity < 1.0f) && !isUndecorated()) {
			$throwNew($IllegalComponentStateException, "The frame is decorated"_s);
		}
		$Window::setOpacity(opacity);
	}
}

void Frame::setShape($Shape* shape) {
	$synchronized(getTreeLock()) {
		if ((shape != nullptr) && !isUndecorated()) {
			$throwNew($IllegalComponentStateException, "The frame is decorated"_s);
		}
		$Window::setShape(shape);
	}
}

void Frame::setBackground($Color* bgColor) {
	$synchronized(getTreeLock()) {
		bool var$0 = (bgColor != nullptr) && (bgColor->getAlpha() < 255);
		if (var$0 && !isUndecorated()) {
			$throwNew($IllegalComponentStateException, "The frame is decorated"_s);
		}
		$Window::setBackground(bgColor);
	}
}

void Frame::remove($MenuComponent* m) {
	if (m == nullptr) {
		return;
	}
	$synchronized(getTreeLock()) {
		if ($equals(m, this->menuBar)) {
			$set(this, menuBar, nullptr);
			$var($FramePeer, peer, $cast($FramePeer, this->peer));
			if (peer != nullptr) {
				this->mbManagement = true;
				invalidateIfValid();
				peer->setMenuBar(nullptr);
				$nc(m)->removeNotify();
			}
			$set($nc(m), parent, nullptr);
		} else {
			$Window::remove(m);
		}
	}
}

void Frame::removeNotify() {
	$synchronized(getTreeLock()) {
		$var($FramePeer, peer, $cast($FramePeer, this->peer));
		if (peer != nullptr) {
			getState();
			if (this->menuBar != nullptr) {
				this->mbManagement = true;
				peer->setMenuBar(nullptr);
				$nc(this->menuBar)->removeNotify();
			}
		}
		$Window::removeNotify();
	}
}

void Frame::postProcessKeyEvent($KeyEvent* e) {
	if (this->menuBar != nullptr && $nc(this->menuBar)->handleShortcut(e)) {
		$nc(e)->consume();
		return;
	}
	$Window::postProcessKeyEvent(e);
}

$String* Frame::paramString() {
	$useLocalCurrentObjectStackCache();
	$var($String, str, $Window::paramString());
	if (this->title != nullptr) {
		$plusAssign(str, $$str({",title="_s, this->title}));
	}
	if (this->resizable) {
		$plusAssign(str, ",resizable"_s);
	}
	int32_t state = getExtendedState();
	if (state == Frame::NORMAL) {
		$plusAssign(str, ",normal"_s);
	} else {
		if (((int32_t)(state & (uint32_t)Frame::ICONIFIED)) != 0) {
			$plusAssign(str, ",iconified"_s);
		}
		if (((int32_t)(state & (uint32_t)Frame::MAXIMIZED_BOTH)) == Frame::MAXIMIZED_BOTH) {
			$plusAssign(str, ",maximized"_s);
		} else if (((int32_t)(state & (uint32_t)Frame::MAXIMIZED_HORIZ)) != 0) {
			$plusAssign(str, ",maximized_horiz"_s);
		} else if (((int32_t)(state & (uint32_t)Frame::MAXIMIZED_VERT)) != 0) {
			$plusAssign(str, ",maximized_vert"_s);
		}
	}
	return str;
}

void Frame::setCursor(int32_t cursorType) {
	if (cursorType < Frame::DEFAULT_CURSOR || cursorType > Frame::MOVE_CURSOR) {
		$throwNew($IllegalArgumentException, "illegal cursor type"_s);
	}
	setCursor($($Cursor::getPredefinedCursor(cursorType)));
}

int32_t Frame::getCursorType() {
	return ($nc($(getCursor()))->getType());
}

$FrameArray* Frame::getFrames() {
	$init(Frame);
	$useLocalCurrentObjectStackCache();
	$var($WindowArray, allWindows, $Window::getWindows());
	int32_t frameCount = 0;
	{
		$var($WindowArray, arr$, allWindows);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Window, w, arr$->get(i$));
			{
				if ($instanceOf(Frame, w)) {
					++frameCount;
				}
			}
		}
	}
	$var($FrameArray, frames, $new($FrameArray, frameCount));
	int32_t c = 0;
	{
		$var($WindowArray, arr$, allWindows);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Window, w, arr$->get(i$));
			{
				if ($instanceOf(Frame, w)) {
					frames->set(c++, $cast(Frame, w));
				}
			}
		}
	}
	return frames;
}

void Frame::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
	if (this->icons != nullptr && $nc(this->icons)->size() > 0) {
		$var($Image, icon1, $cast($Image, $nc(this->icons)->get(0)));
		if ($instanceOf($Serializable, icon1)) {
			s->writeObject(icon1);
			return;
		}
	}
	s->writeObject(nullptr);
}

void Frame::readObject($ObjectInputStream* s) {
	$useLocalCurrentObjectStackCache();
	$nc(s)->defaultReadObject();
	try {
		$var($Image, icon, $cast($Image, s->readObject()));
		if (this->icons == nullptr) {
			$set(this, icons, $new($ArrayList));
			$nc(this->icons)->add(icon);
		}
	} catch ($OptionalDataException&) {
		$var($OptionalDataException, e, $catch());
		if (!e->eof) {
			$throw(e);
		}
	}
	if (this->menuBar != nullptr) {
		$set($nc(this->menuBar), parent, this);
	}
	if (this->ownedWindows != nullptr) {
		for (int32_t i = 0; i < $nc(this->ownedWindows)->size(); ++i) {
			connectOwnedWindow($cast($Window, $($nc(this->ownedWindows)->elementAt(i))));
		}
		$set(this, ownedWindows, nullptr);
	}
}

void Frame::initIDs() {
	$init(Frame);
	$prepareNativeStatic(Frame, initIDs, void);
	$invokeNativeStatic(Frame, initIDs);
	$finishNativeStatic();
}

$AccessibleContext* Frame::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($Frame$AccessibleAWTFrame, this));
	}
	return this->accessibleContext;
}

void clinit$Frame($Class* class$) {
	$assignStatic(Frame::base, "frame"_s);
	Frame::nameCounter = 0;
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			Frame::initIDs();
		}
	}
	{
		$AWTAccessor::setFrameAccessor($$new($Frame$1));
	}
}

Frame::Frame() {
}

$Class* Frame::load$($String* name, bool initialize) {
	$loadClass(Frame, name, initialize, &_Frame_ClassInfo_, clinit$Frame, allocate$Frame);
	return class$;
}

$Class* Frame::class$ = nullptr;

	} // awt
} // java