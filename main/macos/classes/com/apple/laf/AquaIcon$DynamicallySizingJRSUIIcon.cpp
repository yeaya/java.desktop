#include <com/apple/laf/AquaIcon$DynamicallySizingJRSUIIcon.h>

#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaIcon$JRSUIIcon.h>
#include <com/apple/laf/AquaIcon.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaUtilControlSize$SizeDescriptor.h>
#include <com/apple/laf/AquaUtilControlSize$SizeVariant.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

#undef REGULAR

using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $JRSUIState = ::apple::laf::JRSUIState;
using $AquaIcon$JRSUIIcon = ::com::apple::laf::AquaIcon$JRSUIIcon;
using $AquaUtilControlSize = ::com::apple::laf::AquaUtilControlSize;
using $AquaUtilControlSize$SizeDescriptor = ::com::apple::laf::AquaUtilControlSize$SizeDescriptor;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaIcon$DynamicallySizingJRSUIIcon_FieldInfo_[] = {
	{"sizeDescriptor", "Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;", nullptr, $PROTECTED | $FINAL, $field(AquaIcon$DynamicallySizingJRSUIIcon, sizeDescriptor)},
	{"sizeVariant", "Lcom/apple/laf/AquaUtilControlSize$SizeVariant;", nullptr, $PROTECTED, $field(AquaIcon$DynamicallySizingJRSUIIcon, sizeVariant)},
	{}
};

$MethodInfo _AquaIcon$DynamicallySizingJRSUIIcon_MethodInfo_[] = {
	{"<init>", "(Lcom/apple/laf/AquaUtilControlSize$SizeDescriptor;)V", nullptr, $PUBLIC, $method(static_cast<void(AquaIcon$DynamicallySizingJRSUIIcon::*)($AquaUtilControlSize$SizeDescriptor*)>(&AquaIcon$DynamicallySizingJRSUIIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"initJRSUIState", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaIcon$DynamicallySizingJRSUIIcon_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaIcon$DynamicallySizingJRSUIIcon", "com.apple.laf.AquaIcon", "DynamicallySizingJRSUIIcon", $STATIC | $ABSTRACT},
	{"com.apple.laf.AquaIcon$JRSUIIcon", "com.apple.laf.AquaIcon", "JRSUIIcon", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _AquaIcon$DynamicallySizingJRSUIIcon_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.apple.laf.AquaIcon$DynamicallySizingJRSUIIcon",
	"com.apple.laf.AquaIcon$JRSUIIcon",
	nullptr,
	_AquaIcon$DynamicallySizingJRSUIIcon_FieldInfo_,
	_AquaIcon$DynamicallySizingJRSUIIcon_MethodInfo_,
	nullptr,
	nullptr,
	_AquaIcon$DynamicallySizingJRSUIIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaIcon"
};

$Object* allocate$AquaIcon$DynamicallySizingJRSUIIcon($Class* clazz) {
	return $of($alloc(AquaIcon$DynamicallySizingJRSUIIcon));
}

void AquaIcon$DynamicallySizingJRSUIIcon::init$($AquaUtilControlSize$SizeDescriptor* sizeDescriptor) {
	$AquaIcon$JRSUIIcon::init$();
	$set(this, sizeDescriptor, sizeDescriptor);
	$set(this, sizeVariant, $nc(sizeDescriptor)->regular);
	initJRSUIState();
}

int32_t AquaIcon$DynamicallySizingJRSUIIcon::getIconHeight() {
	return this->sizeVariant == nullptr ? 0 : $nc(this->sizeVariant)->h;
}

int32_t AquaIcon$DynamicallySizingJRSUIIcon::getIconWidth() {
	return this->sizeVariant == nullptr ? 0 : $nc(this->sizeVariant)->w;
}

void AquaIcon$DynamicallySizingJRSUIIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$init($JRSUIConstants$Size);
	$var($JRSUIConstants$Size, size, $instanceOf($JComponent, c) ? $AquaUtilControlSize::getUserSizeFrom($cast($JComponent, c)) : $JRSUIConstants$Size::REGULAR);
	$set(this, sizeVariant, $nc(this->sizeDescriptor)->get(size));
	$nc($nc(this->painter)->state)->set(size);
	$AquaIcon$JRSUIIcon::paintIcon(c, g, x, y);
}

AquaIcon$DynamicallySizingJRSUIIcon::AquaIcon$DynamicallySizingJRSUIIcon() {
}

$Class* AquaIcon$DynamicallySizingJRSUIIcon::load$($String* name, bool initialize) {
	$loadClass(AquaIcon$DynamicallySizingJRSUIIcon, name, initialize, &_AquaIcon$DynamicallySizingJRSUIIcon_ClassInfo_, allocate$AquaIcon$DynamicallySizingJRSUIIcon);
	return class$;
}

$Class* AquaIcon$DynamicallySizingJRSUIIcon::class$ = nullptr;

		} // laf
	} // apple
} // com