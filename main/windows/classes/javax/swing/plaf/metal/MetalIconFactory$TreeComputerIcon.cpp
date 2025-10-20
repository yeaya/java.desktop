#include <javax/swing/plaf/metal/MetalIconFactory$TreeComputerIcon.h>

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

$MethodInfo _MetalIconFactory$TreeComputerIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalIconFactory$TreeComputerIcon::*)()>(&MetalIconFactory$TreeComputerIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$TreeComputerIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$TreeComputerIcon", "javax.swing.plaf.metal.MetalIconFactory", "TreeComputerIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$TreeComputerIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$TreeComputerIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_MetalIconFactory$TreeComputerIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$TreeComputerIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$TreeComputerIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$TreeComputerIcon));
}

int32_t MetalIconFactory$TreeComputerIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$TreeComputerIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$TreeComputerIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$TreeComputerIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$TreeComputerIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$TreeComputerIcon::init$() {
}

void MetalIconFactory$TreeComputerIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->translate(x, y);
	g->setColor($($MetalLookAndFeel::getPrimaryControl()));
	g->fillRect(5, 4, 6, 4);
	g->setColor($($MetalLookAndFeel::getPrimaryControlInfo()));
	g->drawLine(2, 2, 2, 8);
	g->drawLine(13, 2, 13, 8);
	g->drawLine(3, 1, 12, 1);
	g->drawLine(12, 9, 12, 9);
	g->drawLine(3, 9, 3, 9);
	g->drawLine(4, 4, 4, 7);
	g->drawLine(5, 3, 10, 3);
	g->drawLine(11, 4, 11, 7);
	g->drawLine(5, 8, 10, 8);
	g->drawLine(1, 10, 14, 10);
	g->drawLine(14, 10, 14, 14);
	g->drawLine(1, 14, 14, 14);
	g->drawLine(1, 10, 1, 14);
	g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
	g->drawLine(6, 12, 8, 12);
	g->drawLine(10, 12, 12, 12);
	g->translate(-x, -y);
}

int32_t MetalIconFactory$TreeComputerIcon::getIconWidth() {
	return 16;
}

int32_t MetalIconFactory$TreeComputerIcon::getIconHeight() {
	return 16;
}

MetalIconFactory$TreeComputerIcon::MetalIconFactory$TreeComputerIcon() {
}

$Class* MetalIconFactory$TreeComputerIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$TreeComputerIcon, name, initialize, &_MetalIconFactory$TreeComputerIcon_ClassInfo_, allocate$MetalIconFactory$TreeComputerIcon);
	return class$;
}

$Class* MetalIconFactory$TreeComputerIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax