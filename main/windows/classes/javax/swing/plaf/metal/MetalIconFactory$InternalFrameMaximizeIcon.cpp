#include <javax/swing/plaf/metal/MetalIconFactory$InternalFrameMaximizeIcon.h>

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

$FieldInfo _MetalIconFactory$InternalFrameMaximizeIcon_FieldInfo_[] = {
	{"iconSize", "I", nullptr, $PROTECTED, $field(MetalIconFactory$InternalFrameMaximizeIcon, iconSize)},
	{}
};

$MethodInfo _MetalIconFactory$InternalFrameMaximizeIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(MetalIconFactory$InternalFrameMaximizeIcon::*)(int32_t)>(&MetalIconFactory$InternalFrameMaximizeIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$InternalFrameMaximizeIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$InternalFrameMaximizeIcon", "javax.swing.plaf.metal.MetalIconFactory", "InternalFrameMaximizeIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$InternalFrameMaximizeIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$InternalFrameMaximizeIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	_MetalIconFactory$InternalFrameMaximizeIcon_FieldInfo_,
	_MetalIconFactory$InternalFrameMaximizeIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$InternalFrameMaximizeIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$InternalFrameMaximizeIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$InternalFrameMaximizeIcon));
}

int32_t MetalIconFactory$InternalFrameMaximizeIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$InternalFrameMaximizeIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$InternalFrameMaximizeIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$InternalFrameMaximizeIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$InternalFrameMaximizeIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$InternalFrameMaximizeIcon::init$(int32_t size) {
	this->iconSize = 16;
	this->iconSize = size;
}

void MetalIconFactory$InternalFrameMaximizeIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
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
	g->fillRect(3, 7, this->iconSize - 10, this->iconSize - 10);
	g->setColor(ulLightHighlightColor);
	g->drawRect(3, 7, this->iconSize - 10, this->iconSize - 10);
	g->setColor(lrLightHighlightColor);
	g->drawRect(2, 6, this->iconSize - 7, this->iconSize - 7);
	g->setColor(darkHighlightColor);
	g->drawRect(1, 5, this->iconSize - 7, this->iconSize - 7);
	g->drawRect(2, 6, this->iconSize - 9, this->iconSize - 9);
	g->setColor(mainItemColor);
	g->drawRect(2, 6, this->iconSize - 8, this->iconSize - 8);
	g->setColor(darkHighlightColor);
	g->drawLine(3, this->iconSize - 5, this->iconSize - 9, 7);
	g->drawLine(this->iconSize - 6, 4, this->iconSize - 5, 3);
	g->drawLine(this->iconSize - 7, 1, this->iconSize - 7, 2);
	g->drawLine(this->iconSize - 6, 1, this->iconSize - 2, 1);
	g->setColor(ulLightHighlightColor);
	g->drawLine(5, this->iconSize - 4, this->iconSize - 8, 9);
	g->setColor(lrLightHighlightColor);
	g->drawLine(this->iconSize - 6, 3, this->iconSize - 4, 5);
	g->drawLine(this->iconSize - 4, 5, this->iconSize - 4, 6);
	g->drawLine(this->iconSize - 2, 7, this->iconSize - 1, 7);
	g->drawLine(this->iconSize - 1, 2, this->iconSize - 1, 6);
	g->setColor(mainItemColor);
	g->drawLine(3, this->iconSize - 4, this->iconSize - 3, 2);
	g->drawLine(3, this->iconSize - 3, this->iconSize - 2, 2);
	g->drawLine(4, this->iconSize - 3, 5, this->iconSize - 3);
	g->drawLine(this->iconSize - 7, 8, this->iconSize - 7, 9);
	g->drawLine(this->iconSize - 6, 2, this->iconSize - 4, 2);
	g->drawRect(this->iconSize - 3, 3, 1, 3);
	g->translate(-x, -y);
}

int32_t MetalIconFactory$InternalFrameMaximizeIcon::getIconWidth() {
	return this->iconSize;
}

int32_t MetalIconFactory$InternalFrameMaximizeIcon::getIconHeight() {
	return this->iconSize;
}

MetalIconFactory$InternalFrameMaximizeIcon::MetalIconFactory$InternalFrameMaximizeIcon() {
}

$Class* MetalIconFactory$InternalFrameMaximizeIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$InternalFrameMaximizeIcon, name, initialize, &_MetalIconFactory$InternalFrameMaximizeIcon_ClassInfo_, allocate$MetalIconFactory$InternalFrameMaximizeIcon);
	return class$;
}

$Class* MetalIconFactory$InternalFrameMaximizeIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax