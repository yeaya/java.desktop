#include <java/awt/Component$1.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Font.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/image/BufferStrategy.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/LightweightPeer.h>
#include <java/security/AccessControlContext.h>
#include <sun/awt/AppContext.h>
#include <sun/awt/RequestFocusController.h>
#include <jcpp.h>

using $AWTEvent = ::java::awt::AWTEvent;
using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Cursor = ::java::awt::Cursor;
using $Font = ::java::awt::Font;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $FocusEvent$Cause = ::java::awt::event::FocusEvent$Cause;
using $BufferStrategy = ::java::awt::image::BufferStrategy;
using $ComponentPeer = ::java::awt::peer::ComponentPeer;
using $LightweightPeer = ::java::awt::peer::LightweightPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AppContext = ::sun::awt::AppContext;
using $RequestFocusController = ::sun::awt::RequestFocusController;

namespace java {
	namespace awt {

$MethodInfo _Component$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Component$1::*)()>(&Component$1::init$))},
	{"canBeFocusOwner", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{"createBufferStrategy", "(Ljava/awt/Component;ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC, nullptr, "java.awt.AWTException"},
	{"getAccessControlContext", "(Ljava/awt/Component;)Ljava/security/AccessControlContext;", nullptr, $PUBLIC},
	{"getAppContext", "(Ljava/awt/Component;)Lsun/awt/AppContext;", nullptr, $PUBLIC},
	{"getBackground", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getBackgroundEraseDisabled", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{"getBounds", "(Ljava/awt/Component;)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getBufferStrategy", "(Ljava/awt/Component;)Ljava/awt/image/BufferStrategy;", nullptr, $PUBLIC},
	{"getCursor", "(Ljava/awt/Component;)Ljava/awt/Cursor;", nullptr, $PUBLIC},
	{"getFont", "(Ljava/awt/Component;)Ljava/awt/Font;", nullptr, $PUBLIC},
	{"getForeground", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PUBLIC},
	{"getHeight", "(Ljava/awt/Component;)I", nullptr, $PUBLIC},
	{"getIgnoreRepaint", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{"getLocation", "(Ljava/awt/Component;)Ljava/awt/Point;", nullptr, $PUBLIC},
	{"getParent", "(Ljava/awt/Component;)Ljava/awt/Container;", nullptr, $PUBLIC},
	{"getPeer", "(Ljava/awt/Component;)Ljava/awt/peer/ComponentPeer;", "<T::Ljava/awt/peer/ComponentPeer;>(Ljava/awt/Component;)TT;", $PUBLIC},
	{"getWidth", "(Ljava/awt/Component;)I", nullptr, $PUBLIC},
	{"getX", "(Ljava/awt/Component;)I", nullptr, $PUBLIC},
	{"getY", "(Ljava/awt/Component;)I", nullptr, $PUBLIC},
	{"isDisplayable", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{"isEnabled", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{"isLightweight", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{"isVisible", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC},
	{"processEvent", "(Ljava/awt/Component;Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC},
	{"requestFocus", "(Ljava/awt/Component;Ljava/awt/event/FocusEvent$Cause;)V", nullptr, $PUBLIC},
	{"revalidateSynchronously", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"setAppContext", "(Ljava/awt/Component;Lsun/awt/AppContext;)V", nullptr, $PUBLIC},
	{"setBackground", "(Ljava/awt/Component;Ljava/awt/Color;)V", nullptr, $PUBLIC},
	{"setBackgroundEraseDisabled", "(Ljava/awt/Component;Z)V", nullptr, $PUBLIC},
	{"setGraphicsConfiguration", "(Ljava/awt/Component;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC},
	{"setLocation", "(Ljava/awt/Component;II)V", nullptr, $PUBLIC},
	{"setParent", "(Ljava/awt/Component;Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"setPeer", "(Ljava/awt/Component;Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC},
	{"setRequestFocusController", "(Lsun/awt/RequestFocusController;)V", nullptr, $PUBLIC},
	{"setSize", "(Ljava/awt/Component;II)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Component$1_EnclosingMethodInfo_ = {
	"java.awt.Component",
	nullptr,
	nullptr
};

$InnerClassInfo _Component$1_InnerClassesInfo_[] = {
	{"java.awt.Component$1", nullptr, nullptr, 0},
	{"sun.awt.AWTAccessor$ComponentAccessor", "sun.awt.AWTAccessor", "ComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Component$1_ClassInfo_ = {
	$ACC_SUPER,
	"java.awt.Component$1",
	"java.lang.Object",
	"sun.awt.AWTAccessor$ComponentAccessor",
	nullptr,
	_Component$1_MethodInfo_,
	nullptr,
	&_Component$1_EnclosingMethodInfo_,
	_Component$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"java.awt.Component"
};

$Object* allocate$Component$1($Class* clazz) {
	return $of($alloc(Component$1));
}

void Component$1::init$() {
}

void Component$1::setBackgroundEraseDisabled($Component* comp, bool disabled) {
	$nc(comp)->backgroundEraseDisabled = disabled;
}

bool Component$1::getBackgroundEraseDisabled($Component* comp) {
	return $nc(comp)->backgroundEraseDisabled;
}

$Rectangle* Component$1::getBounds($Component* comp) {
	return $new($Rectangle, $nc(comp)->x, comp->y, comp->width, comp->height);
}

void Component$1::setGraphicsConfiguration($Component* comp, $GraphicsConfiguration* gc) {
	$nc(comp)->setGraphicsConfiguration(gc);
}

void Component$1::requestFocus($Component* comp, $FocusEvent$Cause* cause) {
	$nc(comp)->requestFocus(cause);
}

bool Component$1::canBeFocusOwner($Component* comp) {
	return $nc(comp)->canBeFocusOwner();
}

bool Component$1::isVisible($Component* comp) {
	return $nc(comp)->isVisible_NoClientCode();
}

void Component$1::setRequestFocusController($RequestFocusController* requestController) {
	$Component::setRequestFocusController(requestController);
}

$AppContext* Component$1::getAppContext($Component* comp) {
	return $nc(comp)->appContext;
}

void Component$1::setAppContext($Component* comp, $AppContext* appContext) {
	$set($nc(comp), appContext, appContext);
}

$Container* Component$1::getParent($Component* comp) {
	return $nc(comp)->getParent_NoClientCode();
}

void Component$1::setParent($Component* comp, $Container* parent) {
	$set($nc(comp), parent, parent);
}

void Component$1::setSize($Component* comp, int32_t width, int32_t height) {
	$nc(comp)->width = width;
	comp->height = height;
}

$Point* Component$1::getLocation($Component* comp) {
	return $nc(comp)->location_NoClientCode();
}

void Component$1::setLocation($Component* comp, int32_t x, int32_t y) {
	$nc(comp)->x = x;
	comp->y = y;
}

bool Component$1::isEnabled($Component* comp) {
	return $nc(comp)->isEnabledImpl();
}

bool Component$1::isDisplayable($Component* comp) {
	return $nc(comp)->peer != nullptr;
}

$Cursor* Component$1::getCursor($Component* comp) {
	return $nc(comp)->getCursor_NoClientCode();
}

$ComponentPeer* Component$1::getPeer($Component* comp) {
	return $nc(comp)->peer;
}

void Component$1::setPeer($Component* comp, $ComponentPeer* peer) {
	$set($nc(comp), peer, peer);
}

bool Component$1::isLightweight($Component* comp) {
	return ($instanceOf($LightweightPeer, $nc(comp)->peer));
}

bool Component$1::getIgnoreRepaint($Component* comp) {
	return $nc(comp)->ignoreRepaint;
}

int32_t Component$1::getWidth($Component* comp) {
	return $nc(comp)->width;
}

int32_t Component$1::getHeight($Component* comp) {
	return $nc(comp)->height;
}

int32_t Component$1::getX($Component* comp) {
	return $nc(comp)->x;
}

int32_t Component$1::getY($Component* comp) {
	return $nc(comp)->y;
}

$Color* Component$1::getForeground($Component* comp) {
	return $nc(comp)->foreground;
}

$Color* Component$1::getBackground($Component* comp) {
	return $nc(comp)->background;
}

void Component$1::setBackground($Component* comp, $Color* background) {
	$set($nc(comp), background, background);
}

$Font* Component$1::getFont($Component* comp) {
	return $nc(comp)->getFont_NoClientCode();
}

void Component$1::processEvent($Component* comp, $AWTEvent* e) {
	$nc(comp)->processEvent(e);
}

$AccessControlContext* Component$1::getAccessControlContext($Component* comp) {
	return $nc(comp)->getAccessControlContext();
}

void Component$1::revalidateSynchronously($Component* comp) {
	$nc(comp)->revalidateSynchronously();
}

void Component$1::createBufferStrategy($Component* comp, int32_t numBuffers, $BufferCapabilities* caps) {
	$nc(comp)->createBufferStrategy(numBuffers, caps);
}

$BufferStrategy* Component$1::getBufferStrategy($Component* comp) {
	return $nc(comp)->getBufferStrategy();
}

Component$1::Component$1() {
}

$Class* Component$1::load$($String* name, bool initialize) {
	$loadClass(Component$1, name, initialize, &_Component$1_ClassInfo_, allocate$Component$1);
	return class$;
}

$Class* Component$1::class$ = nullptr;

	} // awt
} // java