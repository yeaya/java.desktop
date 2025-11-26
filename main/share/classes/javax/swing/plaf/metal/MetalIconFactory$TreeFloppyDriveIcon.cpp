#include <javax/swing/plaf/metal/MetalIconFactory$TreeFloppyDriveIcon.h>

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

$MethodInfo _MetalIconFactory$TreeFloppyDriveIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalIconFactory$TreeFloppyDriveIcon::*)()>(&MetalIconFactory$TreeFloppyDriveIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$TreeFloppyDriveIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$TreeFloppyDriveIcon", "javax.swing.plaf.metal.MetalIconFactory", "TreeFloppyDriveIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$TreeFloppyDriveIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$TreeFloppyDriveIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_MetalIconFactory$TreeFloppyDriveIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$TreeFloppyDriveIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$TreeFloppyDriveIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$TreeFloppyDriveIcon));
}

int32_t MetalIconFactory$TreeFloppyDriveIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$TreeFloppyDriveIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$TreeFloppyDriveIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$TreeFloppyDriveIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$TreeFloppyDriveIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$TreeFloppyDriveIcon::init$() {
}

void MetalIconFactory$TreeFloppyDriveIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->translate(x, y);
	g->setColor($($MetalLookAndFeel::getPrimaryControl()));
	g->fillRect(2, 2, 12, 12);
	g->setColor($($MetalLookAndFeel::getPrimaryControlInfo()));
	g->drawLine(1, 1, 13, 1);
	g->drawLine(14, 2, 14, 14);
	g->drawLine(1, 14, 14, 14);
	g->drawLine(1, 1, 1, 14);
	g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
	g->fillRect(5, 2, 6, 5);
	g->drawLine(4, 8, 11, 8);
	g->drawLine(3, 9, 3, 13);
	g->drawLine(12, 9, 12, 13);
	g->setColor($($MetalLookAndFeel::getPrimaryControlHighlight()));
	g->fillRect(8, 3, 2, 3);
	g->fillRect(4, 9, 8, 5);
	g->setColor($($MetalLookAndFeel::getPrimaryControlShadow()));
	g->drawLine(5, 10, 9, 10);
	g->drawLine(5, 12, 8, 12);
	g->translate(-x, -y);
}

int32_t MetalIconFactory$TreeFloppyDriveIcon::getIconWidth() {
	return 16;
}

int32_t MetalIconFactory$TreeFloppyDriveIcon::getIconHeight() {
	return 16;
}

MetalIconFactory$TreeFloppyDriveIcon::MetalIconFactory$TreeFloppyDriveIcon() {
}

$Class* MetalIconFactory$TreeFloppyDriveIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$TreeFloppyDriveIcon, name, initialize, &_MetalIconFactory$TreeFloppyDriveIcon_ClassInfo_, allocate$MetalIconFactory$TreeFloppyDriveIcon);
	return class$;
}

$Class* MetalIconFactory$TreeFloppyDriveIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax