#include <javax/swing/plaf/metal/OceanTheme$IFIcon.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/IconUIResource.h>
#include <javax/swing/plaf/metal/OceanTheme.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $IconUIResource = ::javax::swing::plaf::IconUIResource;
using $OceanTheme = ::javax::swing::plaf::metal::OceanTheme;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _OceanTheme$IFIcon_FieldInfo_[] = {
	{"pressed", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(OceanTheme$IFIcon, pressed)},
	{}
};

$MethodInfo _OceanTheme$IFIcon_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/Icon;Ljavax/swing/Icon;)V", nullptr, $PUBLIC, $method(static_cast<void(OceanTheme$IFIcon::*)($Icon*,$Icon*)>(&OceanTheme$IFIcon::init$))},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _OceanTheme$IFIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.OceanTheme$IFIcon", "javax.swing.plaf.metal.OceanTheme", "IFIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _OceanTheme$IFIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.OceanTheme$IFIcon",
	"javax.swing.plaf.IconUIResource",
	nullptr,
	_OceanTheme$IFIcon_FieldInfo_,
	_OceanTheme$IFIcon_MethodInfo_,
	nullptr,
	nullptr,
	_OceanTheme$IFIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.OceanTheme"
};

$Object* allocate$OceanTheme$IFIcon($Class* clazz) {
	return $of($alloc(OceanTheme$IFIcon));
}

void OceanTheme$IFIcon::init$($Icon* normal, $Icon* pressed) {
	$IconUIResource::init$(normal);
	$set(this, pressed, pressed);
}

void OceanTheme$IFIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($ButtonModel, model, $nc(($cast($AbstractButton, c)))->getModel());
	bool var$0 = $nc(model)->isPressed();
	if (var$0 && model->isArmed()) {
		$nc(this->pressed)->paintIcon(c, g, x, y);
	} else {
		$IconUIResource::paintIcon(c, g, x, y);
	}
}

OceanTheme$IFIcon::OceanTheme$IFIcon() {
}

$Class* OceanTheme$IFIcon::load$($String* name, bool initialize) {
	$loadClass(OceanTheme$IFIcon, name, initialize, &_OceanTheme$IFIcon_ClassInfo_, allocate$OceanTheme$IFIcon);
	return class$;
}

$Class* OceanTheme$IFIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax