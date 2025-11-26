#include <sun/awt/AWTAccessor$ComponentAccessor.h>

#include <java/awt/AWTEvent.h>
#include <java/awt/BufferCapabilities.h>
#include <java/awt/Color.h>
#include <java/awt/Container.h>
#include <java/awt/Cursor.h>
#include <java/awt/Font.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/FocusEvent$Cause.h>
#include <java/awt/image/BufferStrategy.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/security/AccessControlContext.h>
#include <sun/awt/AWTAccessor.h>
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
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AWTAccessor = ::sun::awt::AWTAccessor;
using $AppContext = ::sun::awt::AppContext;
using $RequestFocusController = ::sun::awt::RequestFocusController;

namespace sun {
	namespace awt {

$MethodInfo _AWTAccessor$ComponentAccessor_MethodInfo_[] = {
	{"canBeFocusOwner", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"createBufferStrategy", "(Ljava/awt/Component;ILjava/awt/BufferCapabilities;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.awt.AWTException"},
	{"getAccessControlContext", "(Ljava/awt/Component;)Ljava/security/AccessControlContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"getAppContext", "(Ljava/awt/Component;)Lsun/awt/AppContext;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBackground", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBackgroundEraseDisabled", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getBounds", "(Ljava/awt/Component;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBufferStrategy", "(Ljava/awt/Component;)Ljava/awt/image/BufferStrategy;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCursor", "(Ljava/awt/Component;)Ljava/awt/Cursor;", nullptr, $PUBLIC | $ABSTRACT},
	{"getFont", "(Ljava/awt/Component;)Ljava/awt/Font;", nullptr, $PUBLIC | $ABSTRACT},
	{"getForeground", "(Ljava/awt/Component;)Ljava/awt/Color;", nullptr, $PUBLIC | $ABSTRACT},
	{"getHeight", "(Ljava/awt/Component;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getIgnoreRepaint", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getLocation", "(Ljava/awt/Component;)Ljava/awt/Point;", nullptr, $PUBLIC | $ABSTRACT},
	{"getParent", "(Ljava/awt/Component;)Ljava/awt/Container;", nullptr, $PUBLIC | $ABSTRACT},
	{"getPeer", "(Ljava/awt/Component;)Ljava/awt/peer/ComponentPeer;", "<T::Ljava/awt/peer/ComponentPeer;>(Ljava/awt/Component;)TT;", $PUBLIC | $ABSTRACT},
	{"getWidth", "(Ljava/awt/Component;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getX", "(Ljava/awt/Component;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"getY", "(Ljava/awt/Component;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"isDisplayable", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isEnabled", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isLightweight", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"isVisible", "(Ljava/awt/Component;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"processEvent", "(Ljava/awt/Component;Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"requestFocus", "(Ljava/awt/Component;Ljava/awt/event/FocusEvent$Cause;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"revalidateSynchronously", "(Ljava/awt/Component;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setAppContext", "(Ljava/awt/Component;Lsun/awt/AppContext;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setBackground", "(Ljava/awt/Component;Ljava/awt/Color;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setBackgroundEraseDisabled", "(Ljava/awt/Component;Z)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setGraphicsConfiguration", "(Ljava/awt/Component;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setLocation", "(Ljava/awt/Component;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setParent", "(Ljava/awt/Component;Ljava/awt/Container;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setPeer", "(Ljava/awt/Component;Ljava/awt/peer/ComponentPeer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setRequestFocusController", "(Lsun/awt/RequestFocusController;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setSize", "(Ljava/awt/Component;II)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _AWTAccessor$ComponentAccessor_InnerClassesInfo_[] = {
	{"sun.awt.AWTAccessor$ComponentAccessor", "sun.awt.AWTAccessor", "ComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AWTAccessor$ComponentAccessor_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"sun.awt.AWTAccessor$ComponentAccessor",
	nullptr,
	nullptr,
	nullptr,
	_AWTAccessor$ComponentAccessor_MethodInfo_,
	nullptr,
	nullptr,
	_AWTAccessor$ComponentAccessor_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.awt.AWTAccessor"
};

$Object* allocate$AWTAccessor$ComponentAccessor($Class* clazz) {
	return $of($alloc(AWTAccessor$ComponentAccessor));
}

$Class* AWTAccessor$ComponentAccessor::load$($String* name, bool initialize) {
	$loadClass(AWTAccessor$ComponentAccessor, name, initialize, &_AWTAccessor$ComponentAccessor_ClassInfo_, allocate$AWTAccessor$ComponentAccessor);
	return class$;
}

$Class* AWTAccessor$ComponentAccessor::class$ = nullptr;

	} // awt
} // sun