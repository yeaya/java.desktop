#include <javax/swing/plaf/metal/MetalIconFactory$FileChooserHomeFolderIcon.h>

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

$MethodInfo _MetalIconFactory$FileChooserHomeFolderIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalIconFactory$FileChooserHomeFolderIcon::*)()>(&MetalIconFactory$FileChooserHomeFolderIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$FileChooserHomeFolderIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$FileChooserHomeFolderIcon", "javax.swing.plaf.metal.MetalIconFactory", "FileChooserHomeFolderIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$FileChooserHomeFolderIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$FileChooserHomeFolderIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_MetalIconFactory$FileChooserHomeFolderIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$FileChooserHomeFolderIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$FileChooserHomeFolderIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$FileChooserHomeFolderIcon));
}

int32_t MetalIconFactory$FileChooserHomeFolderIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$FileChooserHomeFolderIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$FileChooserHomeFolderIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$FileChooserHomeFolderIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$FileChooserHomeFolderIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$FileChooserHomeFolderIcon::init$() {
}

void MetalIconFactory$FileChooserHomeFolderIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$nc(g)->translate(x, y);
	g->setColor($($MetalLookAndFeel::getPrimaryControlInfo()));
	g->drawLine(8, 1, 1, 8);
	g->drawLine(8, 1, 15, 8);
	g->drawLine(11, 2, 11, 3);
	g->drawLine(12, 2, 12, 4);
	g->drawLine(3, 7, 3, 15);
	g->drawLine(13, 7, 13, 15);
	g->drawLine(4, 15, 12, 15);
	g->drawLine(6, 9, 6, 14);
	g->drawLine(10, 9, 10, 14);
	g->drawLine(7, 9, 9, 9);
	g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
	g->fillRect(8, 2, 1, 1);
	g->fillRect(7, 3, 3, 1);
	g->fillRect(6, 4, 5, 1);
	g->fillRect(5, 5, 7, 1);
	g->fillRect(4, 6, 9, 2);
	g->drawLine(9, 12, 9, 12);
	g->setColor($($MetalLookAndFeel::getPrimaryControl()));
	g->drawLine(4, 8, 12, 8);
	g->fillRect(4, 9, 2, 6);
	g->fillRect(11, 9, 2, 6);
	g->translate(-x, -y);
}

int32_t MetalIconFactory$FileChooserHomeFolderIcon::getIconWidth() {
	return 18;
}

int32_t MetalIconFactory$FileChooserHomeFolderIcon::getIconHeight() {
	return 18;
}

MetalIconFactory$FileChooserHomeFolderIcon::MetalIconFactory$FileChooserHomeFolderIcon() {
}

$Class* MetalIconFactory$FileChooserHomeFolderIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$FileChooserHomeFolderIcon, name, initialize, &_MetalIconFactory$FileChooserHomeFolderIcon_ClassInfo_, allocate$MetalIconFactory$FileChooserHomeFolderIcon);
	return class$;
}

$Class* MetalIconFactory$FileChooserHomeFolderIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax