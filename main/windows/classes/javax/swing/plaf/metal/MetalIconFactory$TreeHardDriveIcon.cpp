#include <javax/swing/plaf/metal/MetalIconFactory$TreeHardDriveIcon.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
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

$MethodInfo _MetalIconFactory$TreeHardDriveIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalIconFactory$TreeHardDriveIcon::*)()>(&MetalIconFactory$TreeHardDriveIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$TreeHardDriveIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$TreeHardDriveIcon", "javax.swing.plaf.metal.MetalIconFactory", "TreeHardDriveIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$TreeHardDriveIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$TreeHardDriveIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_MetalIconFactory$TreeHardDriveIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$TreeHardDriveIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$TreeHardDriveIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$TreeHardDriveIcon));
}

int32_t MetalIconFactory$TreeHardDriveIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$TreeHardDriveIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$TreeHardDriveIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$TreeHardDriveIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$TreeHardDriveIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$TreeHardDriveIcon::init$() {
}

void MetalIconFactory$TreeHardDriveIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->translate(x, y);
	g->setColor($($MetalLookAndFeel::getPrimaryControlInfo()));
	g->drawLine(1, 4, 1, 5);
	g->drawLine(2, 3, 3, 3);
	g->drawLine(4, 2, 11, 2);
	g->drawLine(12, 3, 13, 3);
	g->drawLine(14, 4, 14, 5);
	g->drawLine(12, 6, 13, 6);
	g->drawLine(4, 7, 11, 7);
	g->drawLine(2, 6, 3, 6);
	g->drawLine(1, 7, 1, 8);
	g->drawLine(2, 9, 3, 9);
	g->drawLine(4, 10, 11, 10);
	g->drawLine(12, 9, 13, 9);
	g->drawLine(14, 7, 14, 8);
	g->drawLine(1, 10, 1, 11);
	g->drawLine(2, 12, 3, 12);
	g->drawLine(4, 13, 11, 13);
	g->drawLine(12, 12, 13, 12);
	g->drawLine(14, 10, 14, 11);
	g->setColor($($MetalLookAndFeel::getControlShadow()));
	g->drawLine(7, 6, 7, 6);
	g->drawLine(9, 6, 9, 6);
	g->drawLine(10, 5, 10, 5);
	g->drawLine(11, 6, 11, 6);
	g->drawLine(12, 5, 13, 5);
	g->drawLine(13, 4, 13, 4);
	g->drawLine(7, 9, 7, 9);
	g->drawLine(9, 9, 9, 9);
	g->drawLine(10, 8, 10, 8);
	g->drawLine(11, 9, 11, 9);
	g->drawLine(12, 8, 13, 8);
	g->drawLine(13, 7, 13, 7);
	g->drawLine(7, 12, 7, 12);
	g->drawLine(9, 12, 9, 12);
	g->drawLine(10, 11, 10, 11);
	g->drawLine(11, 12, 11, 12);
	g->drawLine(12, 11, 13, 11);
	g->drawLine(13, 10, 13, 10);
	g->setColor($($MetalLookAndFeel::getControlHighlight()));
	g->drawLine(4, 3, 5, 3);
	g->drawLine(7, 3, 9, 3);
	g->drawLine(11, 3, 11, 3);
	g->drawLine(2, 4, 6, 4);
	g->drawLine(8, 4, 8, 4);
	g->drawLine(2, 5, 3, 5);
	g->drawLine(4, 6, 4, 6);
	g->drawLine(2, 7, 3, 7);
	g->drawLine(2, 8, 3, 8);
	g->drawLine(4, 9, 4, 9);
	g->drawLine(2, 10, 3, 10);
	g->drawLine(2, 11, 3, 11);
	g->drawLine(4, 12, 4, 12);
	g->translate(-x, -y);
}

int32_t MetalIconFactory$TreeHardDriveIcon::getIconWidth() {
	return 16;
}

int32_t MetalIconFactory$TreeHardDriveIcon::getIconHeight() {
	return 16;
}

MetalIconFactory$TreeHardDriveIcon::MetalIconFactory$TreeHardDriveIcon() {
}

$Class* MetalIconFactory$TreeHardDriveIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$TreeHardDriveIcon, name, initialize, &_MetalIconFactory$TreeHardDriveIcon_ClassInfo_, allocate$MetalIconFactory$TreeHardDriveIcon);
	return class$;
}

$Class* MetalIconFactory$TreeHardDriveIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax