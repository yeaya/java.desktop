#include <javax/swing/plaf/metal/MetalIconFactory$InternalFrameDefaultMenuIcon.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalIconFactory.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MetalIconFactory = ::javax::swing::plaf::metal::MetalIconFactory;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalIconFactory$InternalFrameDefaultMenuIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalIconFactory$InternalFrameDefaultMenuIcon::*)()>(&MetalIconFactory$InternalFrameDefaultMenuIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$InternalFrameDefaultMenuIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$InternalFrameDefaultMenuIcon", "javax.swing.plaf.metal.MetalIconFactory", "InternalFrameDefaultMenuIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$InternalFrameDefaultMenuIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$InternalFrameDefaultMenuIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_MetalIconFactory$InternalFrameDefaultMenuIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$InternalFrameDefaultMenuIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$InternalFrameDefaultMenuIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$InternalFrameDefaultMenuIcon));
}

int32_t MetalIconFactory$InternalFrameDefaultMenuIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$InternalFrameDefaultMenuIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$InternalFrameDefaultMenuIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$InternalFrameDefaultMenuIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$InternalFrameDefaultMenuIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$InternalFrameDefaultMenuIcon::init$() {
}

void MetalIconFactory$InternalFrameDefaultMenuIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($Color, windowBodyColor, $MetalLookAndFeel::getWindowBackground());
	$var($Color, titleColor, $MetalLookAndFeel::getPrimaryControl());
	$var($Color, edgeColor, $MetalLookAndFeel::getPrimaryControlDarkShadow());
	$nc(g)->translate(x, y);
	g->setColor(titleColor);
	g->fillRect(0, 0, 16, 16);
	g->setColor(windowBodyColor);
	g->fillRect(2, 6, 13, 9);
	g->drawLine(2, 2, 2, 2);
	g->drawLine(5, 2, 5, 2);
	g->drawLine(8, 2, 8, 2);
	g->drawLine(11, 2, 11, 2);
	g->setColor(edgeColor);
	g->drawRect(1, 1, 13, 13);
	g->drawLine(1, 0, 14, 0);
	g->drawLine(15, 1, 15, 14);
	g->drawLine(1, 15, 14, 15);
	g->drawLine(0, 1, 0, 14);
	g->drawLine(2, 5, 13, 5);
	g->drawLine(3, 3, 3, 3);
	g->drawLine(6, 3, 6, 3);
	g->drawLine(9, 3, 9, 3);
	g->drawLine(12, 3, 12, 3);
	g->translate(-x, -y);
}

int32_t MetalIconFactory$InternalFrameDefaultMenuIcon::getIconWidth() {
	return 16;
}

int32_t MetalIconFactory$InternalFrameDefaultMenuIcon::getIconHeight() {
	return 16;
}

MetalIconFactory$InternalFrameDefaultMenuIcon::MetalIconFactory$InternalFrameDefaultMenuIcon() {
}

$Class* MetalIconFactory$InternalFrameDefaultMenuIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$InternalFrameDefaultMenuIcon, name, initialize, &_MetalIconFactory$InternalFrameDefaultMenuIcon_ClassInfo_, allocate$MetalIconFactory$InternalFrameDefaultMenuIcon);
	return class$;
}

$Class* MetalIconFactory$InternalFrameDefaultMenuIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax