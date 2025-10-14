#include <javax/swing/plaf/metal/MetalIconFactory$InternalFrameCloseIcon.h>

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

$FieldInfo _MetalIconFactory$InternalFrameCloseIcon_FieldInfo_[] = {
	{"iconSize", "I", nullptr, 0, $field(MetalIconFactory$InternalFrameCloseIcon, iconSize)},
	{}
};

$MethodInfo _MetalIconFactory$InternalFrameCloseIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(MetalIconFactory$InternalFrameCloseIcon::*)(int32_t)>(&MetalIconFactory$InternalFrameCloseIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$InternalFrameCloseIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$InternalFrameCloseIcon", "javax.swing.plaf.metal.MetalIconFactory", "InternalFrameCloseIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$InternalFrameCloseIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$InternalFrameCloseIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	_MetalIconFactory$InternalFrameCloseIcon_FieldInfo_,
	_MetalIconFactory$InternalFrameCloseIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$InternalFrameCloseIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$InternalFrameCloseIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$InternalFrameCloseIcon));
}

int32_t MetalIconFactory$InternalFrameCloseIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$InternalFrameCloseIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$InternalFrameCloseIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$InternalFrameCloseIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$InternalFrameCloseIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$InternalFrameCloseIcon::init$(int32_t size) {
	this->iconSize = 16;
	this->iconSize = size;
}

void MetalIconFactory$InternalFrameCloseIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($JButton, parentButton, $cast($JButton, c));
	$var($ButtonModel, buttonModel, $nc(parentButton)->getModel());
	$var($Color, backgroundColor, $MetalLookAndFeel::getPrimaryControl());
	$var($Color, internalBackgroundColor, $MetalLookAndFeel::getPrimaryControl());
	$var($Color, mainItemColor, $MetalLookAndFeel::getPrimaryControlDarkShadow());
	$var($Color, darkHighlightColor, $MetalLookAndFeel::getBlack());
	$var($Color, xLightHighlightColor, $MetalLookAndFeel::getWhite());
	$var($Color, boxLightHighlightColor, $MetalLookAndFeel::getWhite());
	$init($Boolean);
	if (!$equals(parentButton->getClientProperty("paintActive"_s), $Boolean::TRUE)) {
		$assign(backgroundColor, $MetalLookAndFeel::getControl());
		$assign(internalBackgroundColor, backgroundColor);
		$assign(mainItemColor, $MetalLookAndFeel::getControlDarkShadow());
		bool var$0 = $nc(buttonModel)->isPressed();
		if (var$0 && buttonModel->isArmed()) {
			$assign(internalBackgroundColor, $MetalLookAndFeel::getControlShadow());
			$assign(xLightHighlightColor, internalBackgroundColor);
			$assign(mainItemColor, darkHighlightColor);
		}
	} else {
		bool var$2 = $nc(buttonModel)->isPressed();
		if (var$2 && buttonModel->isArmed()) {
			$assign(internalBackgroundColor, $MetalLookAndFeel::getPrimaryControlShadow());
			$assign(xLightHighlightColor, internalBackgroundColor);
			$assign(mainItemColor, darkHighlightColor);
		}
	}
	int32_t oneHalf = this->iconSize / 2;
	$nc(g)->translate(x, y);
	g->setColor(backgroundColor);
	g->fillRect(0, 0, this->iconSize, this->iconSize);
	g->setColor(internalBackgroundColor);
	g->fillRect(3, 3, this->iconSize - 6, this->iconSize - 6);
	g->setColor(darkHighlightColor);
	g->drawRect(1, 1, this->iconSize - 3, this->iconSize - 3);
	g->drawRect(2, 2, this->iconSize - 5, this->iconSize - 5);
	g->setColor(boxLightHighlightColor);
	g->drawRect(2, 2, this->iconSize - 3, this->iconSize - 3);
	g->setColor(mainItemColor);
	g->drawRect(2, 2, this->iconSize - 4, this->iconSize - 4);
	g->drawLine(3, this->iconSize - 3, 3, this->iconSize - 3);
	g->drawLine(this->iconSize - 3, 3, this->iconSize - 3, 3);
	g->setColor(darkHighlightColor);
	g->drawLine(4, 5, 5, 4);
	g->drawLine(4, this->iconSize - 6, this->iconSize - 6, 4);
	g->setColor(xLightHighlightColor);
	g->drawLine(6, this->iconSize - 5, this->iconSize - 5, 6);
	g->drawLine(oneHalf, oneHalf + 2, oneHalf + 2, oneHalf);
	g->drawLine(this->iconSize - 5, this->iconSize - 5, this->iconSize - 4, this->iconSize - 5);
	g->drawLine(this->iconSize - 5, this->iconSize - 4, this->iconSize - 5, this->iconSize - 4);
	g->setColor(mainItemColor);
	g->drawLine(5, 5, this->iconSize - 6, this->iconSize - 6);
	g->drawLine(6, 5, this->iconSize - 5, this->iconSize - 6);
	g->drawLine(5, 6, this->iconSize - 6, this->iconSize - 5);
	g->drawLine(5, this->iconSize - 5, this->iconSize - 5, 5);
	g->drawLine(5, this->iconSize - 6, this->iconSize - 6, 5);
	g->translate(-x, -y);
}

int32_t MetalIconFactory$InternalFrameCloseIcon::getIconWidth() {
	return this->iconSize;
}

int32_t MetalIconFactory$InternalFrameCloseIcon::getIconHeight() {
	return this->iconSize;
}

MetalIconFactory$InternalFrameCloseIcon::MetalIconFactory$InternalFrameCloseIcon() {
}

$Class* MetalIconFactory$InternalFrameCloseIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$InternalFrameCloseIcon, name, initialize, &_MetalIconFactory$InternalFrameCloseIcon_ClassInfo_, allocate$MetalIconFactory$InternalFrameCloseIcon);
	return class$;
}

$Class* MetalIconFactory$InternalFrameCloseIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax