#include <javax/swing/plaf/metal/MetalIconFactory$FileChooserUpFolderIcon.h>

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

$MethodInfo _MetalIconFactory$FileChooserUpFolderIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalIconFactory$FileChooserUpFolderIcon::*)()>(&MetalIconFactory$FileChooserUpFolderIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$FileChooserUpFolderIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$FileChooserUpFolderIcon", "javax.swing.plaf.metal.MetalIconFactory", "FileChooserUpFolderIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$FileChooserUpFolderIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$FileChooserUpFolderIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_MetalIconFactory$FileChooserUpFolderIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$FileChooserUpFolderIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$FileChooserUpFolderIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$FileChooserUpFolderIcon));
}

int32_t MetalIconFactory$FileChooserUpFolderIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$FileChooserUpFolderIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$FileChooserUpFolderIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$FileChooserUpFolderIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$FileChooserUpFolderIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$FileChooserUpFolderIcon::init$() {
}

void MetalIconFactory$FileChooserUpFolderIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$nc(g)->translate(x, y);
	g->setColor($($MetalLookAndFeel::getPrimaryControl()));
	g->fillRect(3, 5, 12, 9);
	g->setColor($($MetalLookAndFeel::getPrimaryControlInfo()));
	g->drawLine(1, 6, 1, 14);
	g->drawLine(2, 14, 15, 14);
	g->drawLine(15, 13, 15, 5);
	g->drawLine(2, 5, 9, 5);
	g->drawLine(10, 6, 14, 6);
	g->drawLine(8, 13, 8, 16);
	g->drawLine(8, 9, 8, 9);
	g->drawLine(7, 10, 9, 10);
	g->drawLine(6, 11, 10, 11);
	g->drawLine(5, 12, 11, 12);
	g->setColor($($MetalLookAndFeel::getPrimaryControlHighlight()));
	g->drawLine(2, 6, 2, 13);
	g->drawLine(3, 6, 9, 6);
	g->drawLine(10, 7, 14, 7);
	g->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
	g->drawLine(11, 3, 15, 3);
	g->drawLine(10, 4, 15, 4);
	g->translate(-x, -y);
}

int32_t MetalIconFactory$FileChooserUpFolderIcon::getIconWidth() {
	return 18;
}

int32_t MetalIconFactory$FileChooserUpFolderIcon::getIconHeight() {
	return 18;
}

MetalIconFactory$FileChooserUpFolderIcon::MetalIconFactory$FileChooserUpFolderIcon() {
}

$Class* MetalIconFactory$FileChooserUpFolderIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$FileChooserUpFolderIcon, name, initialize, &_MetalIconFactory$FileChooserUpFolderIcon_ClassInfo_, allocate$MetalIconFactory$FileChooserUpFolderIcon);
	return class$;
}

$Class* MetalIconFactory$FileChooserUpFolderIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax