#include <com/apple/laf/AquaFocus.h>

#include <com/apple/laf/AquaFocus$Drawable.h>
#include <com/apple/laf/AquaFocus$FocusedIcon.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $AquaFocus$Drawable = ::com::apple::laf::AquaFocus$Drawable;
using $AquaFocus$FocusedIcon = ::com::apple::laf::AquaFocus$FocusedIcon;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace apple {
		namespace laf {

$MethodInfo _AquaFocus_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaFocus::*)()>(&AquaFocus::init$))},
	{"createFocusedIcon", "(Ljavax/swing/Icon;Ljava/awt/Component;I)Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)($Icon*,$Component*,int32_t)>(&AquaFocus::createFocusedIcon))},
	{"paintFocus", "(Ljava/awt/Graphics;Lcom/apple/laf/AquaFocus$Drawable;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Graphics*,$AquaFocus$Drawable*)>(&AquaFocus::paintFocus))},
	{}
};

$InnerClassInfo _AquaFocus_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFocus$FocusedIcon", "com.apple.laf.AquaFocus", "FocusedIcon", $STATIC},
	{"com.apple.laf.AquaFocus$Drawable", "com.apple.laf.AquaFocus", "Drawable", $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _AquaFocus_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaFocus",
	"java.lang.Object",
	nullptr,
	nullptr,
	_AquaFocus_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFocus_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFocus$FocusedIcon,com.apple.laf.AquaFocus$FocusedIcon$2,com.apple.laf.AquaFocus$FocusedIcon$1,com.apple.laf.AquaFocus$Drawable"
};

$Object* allocate$AquaFocus($Class* clazz) {
	return $of($alloc(AquaFocus));
}

void AquaFocus::init$() {
}

bool AquaFocus::paintFocus($Graphics* g, $AquaFocus$Drawable* drawable) {
	return false;
}

$Icon* AquaFocus::createFocusedIcon($Icon* tmpIcon, $Component* c, int32_t slack) {
	return $new($AquaFocus$FocusedIcon, tmpIcon, slack);
}

AquaFocus::AquaFocus() {
}

$Class* AquaFocus::load$($String* name, bool initialize) {
	$loadClass(AquaFocus, name, initialize, &_AquaFocus_ClassInfo_, allocate$AquaFocus);
	return class$;
}

$Class* AquaFocus::class$ = nullptr;

		} // laf
	} // apple
} // com