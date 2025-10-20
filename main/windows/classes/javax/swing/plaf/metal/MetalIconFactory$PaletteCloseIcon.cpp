#include <javax/swing/plaf/metal/MetalIconFactory$PaletteCloseIcon.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalIconFactory = ::javax::swing::plaf::metal::MetalIconFactory;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalIconFactory$PaletteCloseIcon_FieldInfo_[] = {
	{"iconSize", "I", nullptr, 0, $field(MetalIconFactory$PaletteCloseIcon, iconSize)},
	{}
};

$MethodInfo _MetalIconFactory$PaletteCloseIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalIconFactory$PaletteCloseIcon::*)()>(&MetalIconFactory$PaletteCloseIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$PaletteCloseIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$PaletteCloseIcon", "javax.swing.plaf.metal.MetalIconFactory", "PaletteCloseIcon", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$PaletteCloseIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$PaletteCloseIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	_MetalIconFactory$PaletteCloseIcon_FieldInfo_,
	_MetalIconFactory$PaletteCloseIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$PaletteCloseIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$PaletteCloseIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$PaletteCloseIcon));
}

int32_t MetalIconFactory$PaletteCloseIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$PaletteCloseIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$PaletteCloseIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$PaletteCloseIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$PaletteCloseIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$PaletteCloseIcon::init$() {
	this->iconSize = 7;
}

void MetalIconFactory$PaletteCloseIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($JButton, parentButton, $cast($JButton, c));
	$var($ButtonModel, buttonModel, $nc(parentButton)->getModel());
	$var($Color, back, nullptr);
	$var($Color, highlight, $MetalLookAndFeel::getPrimaryControlHighlight());
	$var($Color, shadow, $MetalLookAndFeel::getPrimaryControlInfo());
	bool var$0 = $nc(buttonModel)->isPressed();
	if (var$0 && buttonModel->isArmed()) {
		$assign(back, shadow);
	} else {
		$assign(back, $MetalLookAndFeel::getPrimaryControlDarkShadow());
	}
	$nc(g)->translate(x, y);
	g->setColor(back);
	g->drawLine(0, 1, 5, 6);
	g->drawLine(1, 0, 6, 5);
	g->drawLine(1, 1, 6, 6);
	g->drawLine(6, 1, 1, 6);
	g->drawLine(5, 0, 0, 5);
	g->drawLine(5, 1, 1, 5);
	g->setColor(highlight);
	g->drawLine(6, 2, 5, 3);
	g->drawLine(2, 6, 3, 5);
	g->drawLine(6, 6, 6, 6);
	g->translate(-x, -y);
}

int32_t MetalIconFactory$PaletteCloseIcon::getIconWidth() {
	return this->iconSize;
}

int32_t MetalIconFactory$PaletteCloseIcon::getIconHeight() {
	return this->iconSize;
}

MetalIconFactory$PaletteCloseIcon::MetalIconFactory$PaletteCloseIcon() {
}

$Class* MetalIconFactory$PaletteCloseIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$PaletteCloseIcon, name, initialize, &_MetalIconFactory$PaletteCloseIcon_ClassInfo_, allocate$MetalIconFactory$PaletteCloseIcon);
	return class$;
}

$Class* MetalIconFactory$PaletteCloseIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax