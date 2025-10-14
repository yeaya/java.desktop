#include <javax/swing/plaf/metal/MetalIconFactory$FileChooserListViewIcon.h>

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

$MethodInfo _MetalIconFactory$FileChooserListViewIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalIconFactory$FileChooserListViewIcon::*)()>(&MetalIconFactory$FileChooserListViewIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$FileChooserListViewIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$FileChooserListViewIcon", "javax.swing.plaf.metal.MetalIconFactory", "FileChooserListViewIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$FileChooserListViewIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$FileChooserListViewIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_MetalIconFactory$FileChooserListViewIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$FileChooserListViewIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$FileChooserListViewIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$FileChooserListViewIcon));
}

int32_t MetalIconFactory$FileChooserListViewIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$FileChooserListViewIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$FileChooserListViewIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$FileChooserListViewIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$FileChooserListViewIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$FileChooserListViewIcon::init$() {
}

void MetalIconFactory$FileChooserListViewIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$nc(g)->translate(x, y);
	g->setColor($($MetalLookAndFeel::getPrimaryControlInfo()));
	g->drawLine(2, 2, 5, 2);
	g->drawLine(2, 3, 2, 7);
	g->drawLine(3, 7, 6, 7);
	g->drawLine(6, 6, 6, 3);
	g->drawLine(10, 2, 13, 2);
	g->drawLine(10, 3, 10, 7);
	g->drawLine(11, 7, 14, 7);
	g->drawLine(14, 6, 14, 3);
	g->drawLine(2, 10, 5, 10);
	g->drawLine(2, 11, 2, 15);
	g->drawLine(3, 15, 6, 15);
	g->drawLine(6, 14, 6, 11);
	g->drawLine(10, 10, 13, 10);
	g->drawLine(10, 11, 10, 15);
	g->drawLine(11, 15, 14, 15);
	g->drawLine(14, 14, 14, 11);
	g->drawLine(8, 5, 8, 5);
	g->drawLine(16, 5, 16, 5);
	g->drawLine(8, 13, 8, 13);
	g->drawLine(16, 13, 16, 13);
	g->setColor($($MetalLookAndFeel::getPrimaryControl()));
	g->drawRect(3, 3, 2, 3);
	g->drawRect(11, 3, 2, 3);
	g->drawRect(3, 11, 2, 3);
	g->drawRect(11, 11, 2, 3);
	g->setColor($($MetalLookAndFeel::getPrimaryControlHighlight()));
	g->drawLine(4, 4, 4, 5);
	g->drawLine(12, 4, 12, 5);
	g->drawLine(4, 12, 4, 13);
	g->drawLine(12, 12, 12, 13);
	g->translate(-x, -y);
}

int32_t MetalIconFactory$FileChooserListViewIcon::getIconWidth() {
	return 18;
}

int32_t MetalIconFactory$FileChooserListViewIcon::getIconHeight() {
	return 18;
}

MetalIconFactory$FileChooserListViewIcon::MetalIconFactory$FileChooserListViewIcon() {
}

$Class* MetalIconFactory$FileChooserListViewIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$FileChooserListViewIcon, name, initialize, &_MetalIconFactory$FileChooserListViewIcon_ClassInfo_, allocate$MetalIconFactory$FileChooserListViewIcon);
	return class$;
}

$Class* MetalIconFactory$FileChooserListViewIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax