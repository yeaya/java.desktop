#include <com/apple/laf/AquaUtilControlSize.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaBorder.h>
#include <com/apple/laf/AquaFonts.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$PropertySizeListener.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <com/apple/laf/AquaUtils$RecyclableSingletonFromDefaultConstructor.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/UIResource.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef CLIENT_PROPERTY_KEY
#undef LARGE
#undef MINI
#undef REGULAR
#undef SMALL
#undef SYSTEM_PROPERTY_KEY

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaBorder = ::com::apple::laf::AquaBorder;
using $AquaFonts = ::com::apple::laf::AquaFonts;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaUtilControlSize$PropertySizeListener = ::com::apple::laf::AquaUtilControlSize$PropertySizeListener;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $AquaUtils$RecyclableSingletonFromDefaultConstructor = ::com::apple::laf::AquaUtils$RecyclableSingletonFromDefaultConstructor;
using $Component = ::java::awt::Component;
using $Font = ::java::awt::Font;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $JComponent = ::javax::swing::JComponent;
using $Border = ::javax::swing::border::Border;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaUtilControlSize_FieldInfo_[] = {
	{"CLIENT_PROPERTY_KEY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AquaUtilControlSize, CLIENT_PROPERTY_KEY)},
	{"SYSTEM_PROPERTY_KEY", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AquaUtilControlSize, SYSTEM_PROPERTY_KEY)},
	{"sizeListener", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Lcom/apple/laf/AquaUtilControlSize$PropertySizeListener;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaUtilControlSize, sizeListener)},
	{"defaultSize", "Lapple/laf/JRSUIConstants$Size;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(AquaUtilControlSize, defaultSize)},
	{}
};

$MethodInfo _AquaUtilControlSize_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaUtilControlSize::*)()>(&AquaUtilControlSize::init$))},
	{"addSizePropertyListener", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($JComponent*)>(&AquaUtilControlSize::addSizePropertyListener))},
	{"applyBorderForSize", "(Ljavax/swing/JComponent;Lapple/laf/JRSUIConstants$Size;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($JComponent*,$JRSUIConstants$Size*)>(&AquaUtilControlSize::applyBorderForSize))},
	{"applySizeForControl", "(Ljavax/swing/JComponent;Lcom/apple/laf/AquaPainter;)Lapple/laf/JRSUIConstants$Size;", "(Ljavax/swing/JComponent;Lcom/apple/laf/AquaPainter<+Lapple/laf/JRSUIState;>;)Lapple/laf/JRSUIConstants$Size;", $PROTECTED | $STATIC, $method(static_cast<$JRSUIConstants$Size*(*)($JComponent*,$AquaPainter*)>(&AquaUtilControlSize::applySizeForControl))},
	{"getDefaultSize", "()Lapple/laf/JRSUIConstants$Size;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JRSUIConstants$Size*(*)()>(&AquaUtilControlSize::getDefaultSize))},
	{"getFontForSize", "(Ljava/awt/Component;Lapple/laf/JRSUIConstants$Size;)Ljava/awt/Font;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Font*(*)($Component*,$JRSUIConstants$Size*)>(&AquaUtilControlSize::getFontForSize))},
	{"getSizeFromString", "(Ljava/lang/String;)Lapple/laf/JRSUIConstants$Size;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JRSUIConstants$Size*(*)($String*)>(&AquaUtilControlSize::getSizeFromString))},
	{"getSizeListener", "()Lcom/apple/laf/AquaUtilControlSize$PropertySizeListener;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$AquaUtilControlSize$PropertySizeListener*(*)()>(&AquaUtilControlSize::getSizeListener))},
	{"getUserSizeFrom", "(Ljavax/swing/JComponent;)Lapple/laf/JRSUIConstants$Size;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$JRSUIConstants$Size*(*)($JComponent*)>(&AquaUtilControlSize::getUserSizeFrom))},
	{"removeSizePropertyListener", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($JComponent*)>(&AquaUtilControlSize::removeSizePropertyListener))},
	{}
};

$InnerClassInfo _AquaUtilControlSize_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaUtilControlSize$SizeVariant", "com.apple.laf.AquaUtilControlSize", "SizeVariant", $PUBLIC | $STATIC},
	{"com.apple.laf.AquaUtilControlSize$SizeDescriptor", "com.apple.laf.AquaUtilControlSize", "SizeDescriptor", $PUBLIC | $STATIC},
	{"com.apple.laf.AquaUtilControlSize$PropertySizeListener", "com.apple.laf.AquaUtilControlSize", "PropertySizeListener", $PROTECTED | $STATIC},
	{"com.apple.laf.AquaUtilControlSize$Sizeable", "com.apple.laf.AquaUtilControlSize", "Sizeable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaUtilControlSize_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaUtilControlSize",
	"java.lang.Object",
	nullptr,
	_AquaUtilControlSize_FieldInfo_,
	_AquaUtilControlSize_MethodInfo_,
	nullptr,
	nullptr,
	_AquaUtilControlSize_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaUtilControlSize$SizeVariant,com.apple.laf.AquaUtilControlSize$SizeDescriptor,com.apple.laf.AquaUtilControlSize$PropertySizeListener,com.apple.laf.AquaUtilControlSize$Sizeable"
};

$Object* allocate$AquaUtilControlSize($Class* clazz) {
	return $of($alloc(AquaUtilControlSize));
}

$String* AquaUtilControlSize::CLIENT_PROPERTY_KEY = nullptr;
$String* AquaUtilControlSize::SYSTEM_PROPERTY_KEY = nullptr;
$AquaUtils$RecyclableSingleton* AquaUtilControlSize::sizeListener = nullptr;
$JRSUIConstants$Size* AquaUtilControlSize::defaultSize = nullptr;

void AquaUtilControlSize::init$() {
}

$AquaUtilControlSize$PropertySizeListener* AquaUtilControlSize::getSizeListener() {
	$init(AquaUtilControlSize);
	return $cast($AquaUtilControlSize$PropertySizeListener, $nc(AquaUtilControlSize::sizeListener)->get());
}

void AquaUtilControlSize::addSizePropertyListener($JComponent* c) {
	$init(AquaUtilControlSize);
	$useLocalCurrentObjectStackCache();
	$nc(c)->addPropertyChangeListener(AquaUtilControlSize::CLIENT_PROPERTY_KEY, $(getSizeListener()));
	$AquaUtilControlSize$PropertySizeListener::applyComponentSize(c, $(c->getClientProperty(AquaUtilControlSize::CLIENT_PROPERTY_KEY)));
}

void AquaUtilControlSize::removeSizePropertyListener($JComponent* c) {
	$init(AquaUtilControlSize);
	$nc(c)->removePropertyChangeListener(AquaUtilControlSize::CLIENT_PROPERTY_KEY, $(getSizeListener()));
}

$JRSUIConstants$Size* AquaUtilControlSize::getSizeFromString($String* name) {
	$init(AquaUtilControlSize);
	if ("regular"_s->equalsIgnoreCase(name)) {
		$init($JRSUIConstants$Size);
		return $JRSUIConstants$Size::REGULAR;
	}
	if ("small"_s->equalsIgnoreCase(name)) {
		$init($JRSUIConstants$Size);
		return $JRSUIConstants$Size::SMALL;
	}
	if ("mini"_s->equalsIgnoreCase(name)) {
		$init($JRSUIConstants$Size);
		return $JRSUIConstants$Size::MINI;
	}
	if ("large"_s->equalsIgnoreCase(name)) {
		$init($JRSUIConstants$Size);
		return $JRSUIConstants$Size::LARGE;
	}
	return nullptr;
}

$JRSUIConstants$Size* AquaUtilControlSize::getDefaultSize() {
	$init(AquaUtilControlSize);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($String, sizeProperty, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($GetPropertyAction, AquaUtilControlSize::SYSTEM_PROPERTY_KEY)))));
	$var($JRSUIConstants$Size, size, getSizeFromString(sizeProperty));
	if (size != nullptr) {
		return size;
	}
	$init($JRSUIConstants$Size);
	return $JRSUIConstants$Size::REGULAR;
}

$JRSUIConstants$Size* AquaUtilControlSize::getUserSizeFrom($JComponent* c) {
	$init(AquaUtilControlSize);
	$useLocalCurrentObjectStackCache();
	$var($Object, sizeProp, $nc(c)->getClientProperty(AquaUtilControlSize::CLIENT_PROPERTY_KEY));
	if (sizeProp == nullptr) {
		return AquaUtilControlSize::defaultSize;
	}
	$var($JRSUIConstants$Size, size, getSizeFromString($($nc($of(sizeProp))->toString())));
	if (size == nullptr) {
		$init($JRSUIConstants$Size);
		return $JRSUIConstants$Size::REGULAR;
	}
	return size;
}

$JRSUIConstants$Size* AquaUtilControlSize::applySizeForControl($JComponent* c, $AquaPainter* painter) {
	$init(AquaUtilControlSize);
	$useLocalCurrentObjectStackCache();
	$var($JRSUIConstants$Size, sizeFromUser, getUserSizeFrom(c));
	$init($JRSUIConstants$Size);
	$var($JRSUIConstants$Size, size, sizeFromUser == nullptr ? $JRSUIConstants$Size::REGULAR : sizeFromUser);
	$nc($nc(painter)->state)->set(size);
	return size;
}

$Font* AquaUtilControlSize::getFontForSize($Component* c, $JRSUIConstants$Size* size) {
	$init(AquaUtilControlSize);
	$useLocalCurrentObjectStackCache();
	$var($Font, initialFont, $nc(c)->getFont());
	if (size == nullptr || !($instanceOf($UIResource, initialFont))) {
		return initialFont;
	}
	$init($JRSUIConstants$Size);
	if (size == $JRSUIConstants$Size::MINI) {
		return $nc(initialFont)->deriveFont($nc($($AquaFonts::getMiniControlTextFont()))->getSize2D());
	}
	if (size == $JRSUIConstants$Size::SMALL) {
		return $nc(initialFont)->deriveFont($nc($($AquaFonts::getSmallControlTextFont()))->getSize2D());
	}
	return $nc(initialFont)->deriveFont($nc($($AquaFonts::getControlTextFont()))->getSize2D());
}

void AquaUtilControlSize::applyBorderForSize($JComponent* c, $JRSUIConstants$Size* size) {
	$init(AquaUtilControlSize);
	$useLocalCurrentObjectStackCache();
	$var($Border, border, $nc(c)->getBorder());
	if (!($instanceOf($AquaBorder, border))) {
		return;
	}
	$var($AquaBorder, aquaBorder, $cast($AquaBorder, border));
	if ($nc($nc(aquaBorder)->sizeVariant)->size == size) {
		return;
	}
	$var($AquaBorder, derivedBorder, $nc(aquaBorder)->deriveBorderForSize(size));
	if (derivedBorder == nullptr) {
		return;
	}
	c->setBorder(derivedBorder);
}

void clinit$AquaUtilControlSize($Class* class$) {
	$assignStatic(AquaUtilControlSize::CLIENT_PROPERTY_KEY, "JComponent.sizeVariant"_s);
	$assignStatic(AquaUtilControlSize::SYSTEM_PROPERTY_KEY, "swing.component.sizevariant"_s);
	$load($AquaUtilControlSize$PropertySizeListener);
	$assignStatic(AquaUtilControlSize::sizeListener, $new($AquaUtils$RecyclableSingletonFromDefaultConstructor, $AquaUtilControlSize$PropertySizeListener::class$));
	$assignStatic(AquaUtilControlSize::defaultSize, AquaUtilControlSize::getDefaultSize());
}

AquaUtilControlSize::AquaUtilControlSize() {
}

$Class* AquaUtilControlSize::load$($String* name, bool initialize) {
	$loadClass(AquaUtilControlSize, name, initialize, &_AquaUtilControlSize_ClassInfo_, clinit$AquaUtilControlSize, allocate$AquaUtilControlSize);
	return class$;
}

$Class* AquaUtilControlSize::class$ = nullptr;

		} // laf
	} // apple
} // com