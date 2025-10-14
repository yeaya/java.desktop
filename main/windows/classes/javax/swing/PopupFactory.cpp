#include <javax/swing/PopupFactory.h>

#include <java/applet/Applet.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuffer.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/ClientPropertyKey.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JToolTip.h>
#include <javax/swing/Popup$HeavyWeightWindow.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory$1.h>
#include <javax/swing/PopupFactory$HeadlessPopup.h>
#include <javax/swing/PopupFactory$HeavyWeightPopup.h>
#include <javax/swing/PopupFactory$LightWeightPopup.h>
#include <javax/swing/PopupFactory$MediumWeightPopup.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/awt/EmbeddedFrame.h>
#include <sun/awt/OSInfo$OSType.h>
#include <sun/awt/OSInfo.h>
#include <sun/swing/SwingAccessor$PopupFactoryAccessor.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

#undef HEAVY_WEIGHT_POPUP
#undef LIGHT_WEIGHT_POPUP
#undef MACOSX
#undef MAX_CACHE_SIZE
#undef MEDIUM_WEIGHT_POPUP
#undef TRUE

using $Applet = ::java::applet::Applet;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ClientPropertyKey = ::javax::swing::ClientPropertyKey;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JToolTip = ::javax::swing::JToolTip;
using $Popup = ::javax::swing::Popup;
using $Popup$HeavyWeightWindow = ::javax::swing::Popup$HeavyWeightWindow;
using $PopupFactory$1 = ::javax::swing::PopupFactory$1;
using $PopupFactory$HeadlessPopup = ::javax::swing::PopupFactory$HeadlessPopup;
using $PopupFactory$HeavyWeightPopup = ::javax::swing::PopupFactory$HeavyWeightPopup;
using $PopupFactory$LightWeightPopup = ::javax::swing::PopupFactory$LightWeightPopup;
using $PopupFactory$MediumWeightPopup = ::javax::swing::PopupFactory$MediumWeightPopup;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $EmbeddedFrame = ::sun::awt::EmbeddedFrame;
using $OSInfo = ::sun::awt::OSInfo;
using $OSInfo$OSType = ::sun::awt::OSInfo$OSType;
using $SwingAccessor = ::sun::swing::SwingAccessor;
using $SwingAccessor$PopupFactoryAccessor = ::sun::swing::SwingAccessor$PopupFactoryAccessor;

namespace javax {
	namespace swing {

$FieldInfo _PopupFactory_FieldInfo_[] = {
	{"SharedInstanceKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PopupFactory, SharedInstanceKey)},
	{"MAX_CACHE_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PopupFactory, MAX_CACHE_SIZE)},
	{"LIGHT_WEIGHT_POPUP", "I", nullptr, $STATIC | $FINAL, $constField(PopupFactory, LIGHT_WEIGHT_POPUP)},
	{"MEDIUM_WEIGHT_POPUP", "I", nullptr, $STATIC | $FINAL, $constField(PopupFactory, MEDIUM_WEIGHT_POPUP)},
	{"HEAVY_WEIGHT_POPUP", "I", nullptr, $STATIC | $FINAL, $constField(PopupFactory, HEAVY_WEIGHT_POPUP)},
	{"popupType", "I", nullptr, $PRIVATE, $field(PopupFactory, popupType)},
	{}
};

$MethodInfo _PopupFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PopupFactory::*)()>(&PopupFactory::init$))},
	{"getHeadlessPopup", "(Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;", nullptr, $PRIVATE, $method(static_cast<$Popup*(PopupFactory::*)($Component*,$Component*,int32_t,int32_t)>(&PopupFactory::getHeadlessPopup))},
	{"getHeavyWeightPopup", "(Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;", nullptr, $PRIVATE, $method(static_cast<$Popup*(PopupFactory::*)($Component*,$Component*,int32_t,int32_t)>(&PopupFactory::getHeavyWeightPopup))},
	{"getLightWeightPopup", "(Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;", nullptr, $PRIVATE, $method(static_cast<$Popup*(PopupFactory::*)($Component*,$Component*,int32_t,int32_t)>(&PopupFactory::getLightWeightPopup))},
	{"getMediumWeightPopup", "(Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;", nullptr, $PRIVATE, $method(static_cast<$Popup*(PopupFactory::*)($Component*,$Component*,int32_t,int32_t)>(&PopupFactory::getMediumWeightPopup))},
	{"getPopup", "(Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"getPopup", "(Ljava/awt/Component;Ljava/awt/Component;IIZ)Ljavax/swing/Popup;", nullptr, $PROTECTED, nullptr, "java.lang.IllegalArgumentException"},
	{"getPopup", "(Ljava/awt/Component;Ljava/awt/Component;III)Ljavax/swing/Popup;", nullptr, $PRIVATE, $method(static_cast<$Popup*(PopupFactory::*)($Component*,$Component*,int32_t,int32_t,int32_t)>(&PopupFactory::getPopup))},
	{"getPopupType", "()I", nullptr, 0},
	{"getPopupType", "(Ljava/awt/Component;Ljava/awt/Component;II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(PopupFactory::*)($Component*,$Component*,int32_t,int32_t)>(&PopupFactory::getPopupType))},
	{"getSharedInstance", "()Ljavax/swing/PopupFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<PopupFactory*(*)()>(&PopupFactory::getSharedInstance))},
	{"invokerInHeavyWeightPopup", "(Ljava/awt/Component;)Z", nullptr, $PRIVATE, $method(static_cast<bool(PopupFactory::*)($Component*)>(&PopupFactory::invokerInHeavyWeightPopup))},
	{"setPopupType", "(I)V", nullptr, 0},
	{"setSharedInstance", "(Ljavax/swing/PopupFactory;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(PopupFactory*)>(&PopupFactory::setSharedInstance))},
	{}
};

$InnerClassInfo _PopupFactory_InnerClassesInfo_[] = {
	{"javax.swing.PopupFactory$MediumWeightPopup", "javax.swing.PopupFactory", "MediumWeightPopup", $PRIVATE | $STATIC},
	{"javax.swing.PopupFactory$LightWeightPopup", "javax.swing.PopupFactory", "LightWeightPopup", $PRIVATE | $STATIC},
	{"javax.swing.PopupFactory$HeadlessPopup", "javax.swing.PopupFactory", "HeadlessPopup", $PRIVATE | $STATIC},
	{"javax.swing.PopupFactory$ContainerPopup", "javax.swing.PopupFactory", "ContainerPopup", $PRIVATE | $STATIC},
	{"javax.swing.PopupFactory$HeavyWeightPopup", "javax.swing.PopupFactory", "HeavyWeightPopup", $PRIVATE | $STATIC},
	{"javax.swing.PopupFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _PopupFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.PopupFactory",
	"java.lang.Object",
	nullptr,
	_PopupFactory_FieldInfo_,
	_PopupFactory_MethodInfo_,
	nullptr,
	nullptr,
	_PopupFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.PopupFactory$MediumWeightPopup,javax.swing.PopupFactory$MediumWeightPopup$MediumWeightComponent,javax.swing.PopupFactory$LightWeightPopup,javax.swing.PopupFactory$HeadlessPopup,javax.swing.PopupFactory$ContainerPopup,javax.swing.PopupFactory$HeavyWeightPopup,javax.swing.PopupFactory$HeavyWeightPopup$1,javax.swing.PopupFactory$1"
};

$Object* allocate$PopupFactory($Class* clazz) {
	return $of($alloc(PopupFactory));
}


$Object* PopupFactory::SharedInstanceKey = nullptr;

void PopupFactory::init$() {
	this->popupType = PopupFactory::LIGHT_WEIGHT_POPUP;
}

void PopupFactory::setSharedInstance(PopupFactory* factory) {
	$init(PopupFactory);
	if (factory == nullptr) {
		$throwNew($IllegalArgumentException, "PopupFactory can not be null"_s);
	}
	$SwingUtilities::appContextPut(PopupFactory::SharedInstanceKey, factory);
}

PopupFactory* PopupFactory::getSharedInstance() {
	$init(PopupFactory);
	$var(PopupFactory, factory, $cast(PopupFactory, $SwingUtilities::appContextGet(PopupFactory::SharedInstanceKey)));
	if (factory == nullptr) {
		$assign(factory, $new(PopupFactory));
		setSharedInstance(factory);
	}
	return factory;
}

void PopupFactory::setPopupType(int32_t type) {
	this->popupType = type;
}

int32_t PopupFactory::getPopupType() {
	return this->popupType;
}

$Popup* PopupFactory::getPopup($Component* owner, $Component* contents, int32_t x, int32_t y) {
	return getPopup(owner, contents, x, y, false);
}

$Popup* PopupFactory::getPopup($Component* owner, $Component* contents, int32_t x, int32_t y, bool isHeavyWeightPopup) {
	if (contents == nullptr) {
		$throwNew($IllegalArgumentException, "Popup.getPopup must be passed non-null contents"_s);
	}
	if (isHeavyWeightPopup) {
		return getPopup(owner, contents, x, y, PopupFactory::HEAVY_WEIGHT_POPUP);
	}
	int32_t popupType = getPopupType(owner, contents, x, y);
	$var($Popup, popup, getPopup(owner, contents, x, y, popupType));
	if (popup == nullptr) {
		$assign(popup, getPopup(owner, contents, x, y, PopupFactory::HEAVY_WEIGHT_POPUP));
	}
	return popup;
}

int32_t PopupFactory::getPopupType($Component* owner, $Component* contents, int32_t ownerX, int32_t ownerY) {
	int32_t popupType = getPopupType();
	if (owner == nullptr || invokerInHeavyWeightPopup(owner)) {
		popupType = PopupFactory::HEAVY_WEIGHT_POPUP;
	} else if (popupType == PopupFactory::LIGHT_WEIGHT_POPUP && !($instanceOf($JToolTip, contents)) && !($instanceOf($JPopupMenu, contents))) {
		popupType = PopupFactory::MEDIUM_WEIGHT_POPUP;
	}
	$var($Component, c, owner);
	while (c != nullptr) {
		if ($instanceOf($JComponent, c)) {
			$init($ClientPropertyKey);
			$init($Boolean);
			if ($equals($nc(($cast($JComponent, c)))->getClientProperty($ClientPropertyKey::PopupFactory_FORCE_HEAVYWEIGHT_POPUP), $Boolean::TRUE)) {
				popupType = PopupFactory::HEAVY_WEIGHT_POPUP;
				break;
			}
		}
		$assign(c, c->getParent());
	}
	return popupType;
}

$Popup* PopupFactory::getPopup($Component* owner, $Component* contents, int32_t ownerX, int32_t ownerY, int32_t popupType) {
	$beforeCallerSensitive();
	if ($GraphicsEnvironment::isHeadless()) {
		return getHeadlessPopup(owner, contents, ownerX, ownerY);
	}
	{
		$var($Popup, popup, nullptr)
		switch (popupType) {
		case PopupFactory::LIGHT_WEIGHT_POPUP:
			{
				return getLightWeightPopup(owner, contents, ownerX, ownerY);
			}
		case PopupFactory::MEDIUM_WEIGHT_POPUP:
			{
				return getMediumWeightPopup(owner, contents, ownerX, ownerY);
			}
		case PopupFactory::HEAVY_WEIGHT_POPUP:
			{
				$assign(popup, getHeavyWeightPopup(owner, contents, ownerX, ownerY));
				$init($OSInfo$OSType);
				bool var$0 = ($equals($AccessController::doPrivileged($($OSInfo::getOSTypeAction())), $OSInfo$OSType::MACOSX)) && (owner != nullptr);
				if (var$0 && ($EmbeddedFrame::getAppletIfAncestorOf(owner) != nullptr)) {
					$nc(($cast($PopupFactory$HeavyWeightPopup, popup)))->setCacheEnabled(false);
				}
				return popup;
			}
		}
	}
	return nullptr;
}

$Popup* PopupFactory::getHeadlessPopup($Component* owner, $Component* contents, int32_t ownerX, int32_t ownerY) {
	return $PopupFactory$HeadlessPopup::getHeadlessPopup(owner, contents, ownerX, ownerY);
}

$Popup* PopupFactory::getLightWeightPopup($Component* owner, $Component* contents, int32_t ownerX, int32_t ownerY) {
	return $PopupFactory$LightWeightPopup::getLightWeightPopup(owner, contents, ownerX, ownerY);
}

$Popup* PopupFactory::getMediumWeightPopup($Component* owner, $Component* contents, int32_t ownerX, int32_t ownerY) {
	return $PopupFactory$MediumWeightPopup::getMediumWeightPopup(owner, contents, ownerX, ownerY);
}

$Popup* PopupFactory::getHeavyWeightPopup($Component* owner, $Component* contents, int32_t ownerX, int32_t ownerY) {
	if ($GraphicsEnvironment::isHeadless()) {
		return getMediumWeightPopup(owner, contents, ownerX, ownerY);
	}
	return $PopupFactory$HeavyWeightPopup::getHeavyWeightPopup(owner, contents, ownerX, ownerY);
}

bool PopupFactory::invokerInHeavyWeightPopup($Component* i) {
	if (i != nullptr) {
		$var($Container, parent, nullptr);
		for ($assign(parent, i->getParent()); parent != nullptr; $assign(parent, $nc(parent)->getParent())) {
			if ($instanceOf($Popup$HeavyWeightWindow, parent)) {
				return true;
			}
		}
	}
	return false;
}

void clinit$PopupFactory($Class* class$) {
	{
		$SwingAccessor::setPopupFactoryAccessor($$new($PopupFactory$1));
	}
	$assignStatic(PopupFactory::SharedInstanceKey, $new($StringBuffer, "PopupFactory.SharedInstanceKey"_s));
}

PopupFactory::PopupFactory() {
}

$Class* PopupFactory::load$($String* name, bool initialize) {
	$loadClass(PopupFactory, name, initialize, &_PopupFactory_ClassInfo_, clinit$PopupFactory, allocate$PopupFactory);
	return class$;
}

$Class* PopupFactory::class$ = nullptr;

	} // swing
} // javax