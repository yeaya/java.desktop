#include <javax/swing/plaf/metal/MetalIconFactory$FileChooserNewFolderIcon.h>

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

$MethodInfo _MetalIconFactory$FileChooserNewFolderIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalIconFactory$FileChooserNewFolderIcon::*)()>(&MetalIconFactory$FileChooserNewFolderIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalIconFactory$FileChooserNewFolderIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalIconFactory$FileChooserNewFolderIcon", "javax.swing.plaf.metal.MetalIconFactory", "FileChooserNewFolderIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalIconFactory$FileChooserNewFolderIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalIconFactory$FileChooserNewFolderIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_MetalIconFactory$FileChooserNewFolderIcon_MethodInfo_,
	nullptr,
	nullptr,
	_MetalIconFactory$FileChooserNewFolderIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalIconFactory"
};

$Object* allocate$MetalIconFactory$FileChooserNewFolderIcon($Class* clazz) {
	return $of($alloc(MetalIconFactory$FileChooserNewFolderIcon));
}

int32_t MetalIconFactory$FileChooserNewFolderIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalIconFactory$FileChooserNewFolderIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalIconFactory$FileChooserNewFolderIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalIconFactory$FileChooserNewFolderIcon::toString() {
	 return this->$Icon::toString();
}

void MetalIconFactory$FileChooserNewFolderIcon::finalize() {
	this->$Icon::finalize();
}

void MetalIconFactory$FileChooserNewFolderIcon::init$() {
}

void MetalIconFactory$FileChooserNewFolderIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->translate(x, y);
	g->setColor($($MetalLookAndFeel::getPrimaryControl()));
	g->fillRect(3, 5, 12, 9);
	g->setColor($($MetalLookAndFeel::getPrimaryControlInfo()));
	g->drawLine(1, 6, 1, 14);
	g->drawLine(2, 14, 15, 14);
	g->drawLine(15, 13, 15, 5);
	g->drawLine(2, 5, 9, 5);
	g->drawLine(10, 6, 14, 6);
	g->setColor($($MetalLookAndFeel::getPrimaryControlHighlight()));
	g->drawLine(2, 6, 2, 13);
	g->drawLine(3, 6, 9, 6);
	g->drawLine(10, 7, 14, 7);
	g->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
	g->drawLine(11, 3, 15, 3);
	g->drawLine(10, 4, 15, 4);
	g->translate(-x, -y);
}

int32_t MetalIconFactory$FileChooserNewFolderIcon::getIconWidth() {
	return 18;
}

int32_t MetalIconFactory$FileChooserNewFolderIcon::getIconHeight() {
	return 18;
}

MetalIconFactory$FileChooserNewFolderIcon::MetalIconFactory$FileChooserNewFolderIcon() {
}

$Class* MetalIconFactory$FileChooserNewFolderIcon::load$($String* name, bool initialize) {
	$loadClass(MetalIconFactory$FileChooserNewFolderIcon, name, initialize, &_MetalIconFactory$FileChooserNewFolderIcon_ClassInfo_, allocate$MetalIconFactory$FileChooserNewFolderIcon);
	return class$;
}

$Class* MetalIconFactory$FileChooserNewFolderIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax