#include <com/apple/laf/AquaFocus$FocusedIcon.h>

#include <com/apple/laf/AquaFocus$FocusedIcon$1.h>
#include <com/apple/laf/AquaFocus$FocusedIcon$2.h>
#include <com/apple/laf/AquaFocus.h>
#include <com/apple/laf/AquaUtils$Painter.h>
#include <com/apple/laf/AquaUtils$ShadowBorder.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $AquaFocus$FocusedIcon$1 = ::com::apple::laf::AquaFocus$FocusedIcon$1;
using $AquaFocus$FocusedIcon$2 = ::com::apple::laf::AquaFocus$FocusedIcon$2;
using $AquaUtils$Painter = ::com::apple::laf::AquaUtils$Painter;
using $AquaUtils$ShadowBorder = ::com::apple::laf::AquaUtils$ShadowBorder;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaFocus$FocusedIcon_FieldInfo_[] = {
	{"icon", "Ljavax/swing/Icon;", nullptr, $FINAL, $field(AquaFocus$FocusedIcon, icon)},
	{"slack", "I", nullptr, $FINAL, $field(AquaFocus$FocusedIcon, slack)},
	{}
};

$MethodInfo _AquaFocus$FocusedIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/Icon;I)V", nullptr, $PUBLIC, $method(static_cast<void(AquaFocus$FocusedIcon::*)($Icon*,int32_t)>(&AquaFocus$FocusedIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaFocus$FocusedIcon_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaFocus$FocusedIcon", "com.apple.laf.AquaFocus", "FocusedIcon", $STATIC},
	{"com.apple.laf.AquaUtils$ShadowBorder", "com.apple.laf.AquaUtils", "ShadowBorder", $STATIC},
	{"com.apple.laf.AquaFocus$FocusedIcon$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaFocus$FocusedIcon$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaFocus$FocusedIcon_ClassInfo_ = {
	$ACC_SUPER,
	"com.apple.laf.AquaFocus$FocusedIcon",
	"com.apple.laf.AquaUtils$ShadowBorder",
	"javax.swing.Icon",
	_AquaFocus$FocusedIcon_FieldInfo_,
	_AquaFocus$FocusedIcon_MethodInfo_,
	nullptr,
	nullptr,
	_AquaFocus$FocusedIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.apple.laf.AquaFocus"
};

$Object* allocate$AquaFocus$FocusedIcon($Class* clazz) {
	return $of($alloc(AquaFocus$FocusedIcon));
}

int32_t AquaFocus$FocusedIcon::hashCode() {
	 return this->$AquaUtils$ShadowBorder::hashCode();
}

bool AquaFocus$FocusedIcon::equals(Object$* arg0) {
	 return this->$AquaUtils$ShadowBorder::equals(arg0);
}

$Object* AquaFocus$FocusedIcon::clone() {
	 return this->$AquaUtils$ShadowBorder::clone();
}

$String* AquaFocus$FocusedIcon::toString() {
	 return this->$AquaUtils$ShadowBorder::toString();
}

void AquaFocus$FocusedIcon::finalize() {
	this->$AquaUtils$ShadowBorder::finalize();
}

void AquaFocus$FocusedIcon::init$($Icon* icon, int32_t slack) {
	$useLocalCurrentObjectStackCache();
	$var($AquaUtils$Painter, var$0, static_cast<$AquaUtils$Painter*>($new($AquaFocus$FocusedIcon$1, slack, icon)));
	$AquaUtils$ShadowBorder::init$(var$0, $$new($AquaFocus$FocusedIcon$2, icon), slack, slack, 0.0f, 1.8f, 7);
	$set(this, icon, icon);
	this->slack = slack;
}

int32_t AquaFocus$FocusedIcon::getIconHeight() {
	return $nc(this->icon)->getIconHeight() + this->slack + this->slack;
}

int32_t AquaFocus$FocusedIcon::getIconWidth() {
	return $nc(this->icon)->getIconWidth() + this->slack + this->slack;
}

void AquaFocus$FocusedIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($Component, var$0, c);
	$var($Graphics, var$1, g);
	int32_t var$2 = x;
	int32_t var$3 = y;
	int32_t var$4 = getIconWidth();
	paintBorder(var$0, var$1, var$2, var$3, var$4, getIconHeight());
	$nc(this->icon)->paintIcon(c, g, x + this->slack, y + this->slack);
}

AquaFocus$FocusedIcon::AquaFocus$FocusedIcon() {
}

$Class* AquaFocus$FocusedIcon::load$($String* name, bool initialize) {
	$loadClass(AquaFocus$FocusedIcon, name, initialize, &_AquaFocus$FocusedIcon_ClassInfo_, allocate$AquaFocus$FocusedIcon);
	return class$;
}

$Class* AquaFocus$FocusedIcon::class$ = nullptr;

		} // laf
	} // apple
} // com