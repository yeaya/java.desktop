#include <javax/swing/plaf/metal/MetalIconFactory$InternalFrameMinimizeIcon.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Boolean.h>
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
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef TRUE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalIconFactory = ::javax::swing::plaf::metal::MetalIconFactory;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalIconFactory$InternalFrameMinimizeIcon_FieldInfo_[] = {
	{"iconSize", "I", nullptr, 0, $field(MetalIconFactory$InternalFrameMinimizeIcon, iconSize)},
	{}
};

$MethodInfo _MetalIconFactory$InternalFrameMinimizeIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(MetalIconFactory$InternalFrameMinimizeIcon::*)(int32_t)>(&MetalIconFactory$InternalFrameMinimizeIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$InternalFrameMinimizeIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$InternalFrameMinimizeIcon", "javax.swing.plaf.metal.MetalIconFactory", "InternalFrameMinimizeIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$InternalFrameMinimizeIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$InternalFrameMinimizeIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	_MetalIconFactory$InternalFrameMinimizeIcon_FieldInfo_,
	_MetalIconFactory$InternalFrameMinimizeIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$InternalFrameMinimizeIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$InternalFrameMinimizeIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$InternalFrameMinimizeIcon));
}

int32_t MetalIconFactory$InternalFrameMinimizeIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$InternalFrameMinimizeIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$InternalFrameMinimizeIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$InternalFrameMinimizeIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$InternalFrameMinimizeIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$InternalFrameMinimizeIcon::init$(int32_t size) {
	this->iconSize = 16;
	this->iconSize = size;
}

void MetalIconFactory$InternalFrameMinimizeIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($JButton, parentButton, $cast($JButton, c));
	$var($ButtonModel, buttonModel, $nc(parentButton)->getModel());
	$var($Color, backgroundColor, $MetalLookAndFeel::getPrimaryControl());
	$var($Color, internalBackgroundColor, $MetalLookAndFeel::getPrimaryControl());
	$var($Color, mainItemColor, $MetalLookAndFeel::getPrimaryControlDarkShadow());
	$var($Color, darkHighlightColor, $MetalLookAndFeel::getBlack());
	$var($Color, ulLightHighlightColor, $MetalLookAndFeel::getWhite());
	$var($Color, lrLightHighlightColor, $MetalLookAndFeel::getWhite());
	$init($Boolean);
	if (!$equals(parentButton->getClientProperty("paintActive"_s), $Boolean::TRUE)) {
		$assign(backgroundColor, $MetalLookAndFeel::getControl());
		$assign(internalBackgroundColor, backgroundColor);
		$assign(mainItemColor, $MetalLookAndFeel::getControlDarkShadow());
		bool var$0 = $nc(buttonModel)->isPressed();
		if (var$0 && buttonModel->isArmed()) {
			$assign(internalBackgroundColor, $MetalLookAndFeel::getControlShadow());
			$assign(ulLightHighlightColor, internalBackgroundColor);
			$assign(mainItemColor, darkHighlightColor);
		}
	} else {
		bool var$2 = $nc(buttonModel)->isPressed();
		if (var$2 && buttonModel->isArmed()) {
			$assign(internalBackgroundColor, $MetalLookAndFeel::getPrimaryControlShadow());
			$assign(ulLightHighlightColor, internalBackgroundColor);
			$assign(mainItemColor, darkHighlightColor);
		}
	}
	$nc(g)->translate(x, y);
	g->setColor(backgroundColor);
	g->fillRect(0, 0, this->iconSize, this->iconSize);
	g->setColor(internalBackgroundColor);
	g->fillRect(4, 11, this->iconSize - 13, this->iconSize - 13);
	g->setColor(lrLightHighlightColor);
	g->drawRect(2, 10, this->iconSize - 10, this->iconSize - 11);
	g->setColor(ulLightHighlightColor);
	g->drawRect(3, 10, this->iconSize - 12, this->iconSize - 12);
	g->setColor(darkHighlightColor);
	g->drawRect(1, 8, this->iconSize - 10, this->iconSize - 10);
	g->drawRect(2, 9, this->iconSize - 12, this->iconSize - 12);
	g->setColor(mainItemColor);
	g->drawRect(2, 9, this->iconSize - 11, this->iconSize - 11);
	g->drawLine(this->iconSize - 10, 10, this->iconSize - 10, 10);
	g->drawLine(3, this->iconSize - 3, 3, this->iconSize - 3);
	g->setColor(mainItemColor);
	g->fillRect(this->iconSize - 7, 3, 3, 5);
	g->drawLine(this->iconSize - 6, 5, this->iconSize - 3, 2);
	g->drawLine(this->iconSize - 6, 6, this->iconSize - 2, 2);
	g->drawLine(this->iconSize - 6, 7, this->iconSize - 3, 7);
	g->setColor(darkHighlightColor);
	g->drawLine(this->iconSize - 8, 2, this->iconSize - 7, 2);
	g->drawLine(this->iconSize - 8, 3, this->iconSize - 8, 7);
	g->drawLine(this->iconSize - 6, 4, this->iconSize - 3, 1);
	g->drawLine(this->iconSize - 4, 6, this->iconSize - 3, 6);
	g->setColor(lrLightHighlightColor);
	g->drawLine(this->iconSize - 6, 3, this->iconSize - 6, 3);
	g->drawLine(this->iconSize - 4, 5, this->iconSize - 2, 3);
	g->drawLine(this->iconSize - 7, 8, this->iconSize - 3, 8);
	g->drawLine(this->iconSize - 2, 8, this->iconSize - 2, 7);
	g->translate(-x, -y);
}

int32_t MetalIconFactory$InternalFrameMinimizeIcon::getIconWidth() {
	return this->iconSize;
}

int32_t MetalIconFactory$InternalFrameMinimizeIcon::getIconHeight() {
	return this->iconSize;
}

MetalIconFactory$InternalFrameMinimizeIcon::MetalIconFactory$InternalFrameMinimizeIcon() {
}

$Class* MetalIconFactory$InternalFrameMinimizeIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$InternalFrameMinimizeIcon, name, initialize, &_MetalIconFactory$InternalFrameMinimizeIcon_ClassInfo_, allocate$MetalIconFactory$InternalFrameMinimizeIcon);
	return class$;
}

$Class* MetalIconFactory$InternalFrameMinimizeIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax