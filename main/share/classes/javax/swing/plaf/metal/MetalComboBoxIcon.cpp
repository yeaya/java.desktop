#include <javax/swing/plaf/metal/MetalComboBoxIcon.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalComboBoxIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalComboBoxIcon::*)()>(&MetalComboBoxIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MetalComboBoxIcon_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalComboBoxIcon",
	"java.lang.Object",
	"javax.swing.Icon,java.io.Serializable",
	nullptr,
	_MetalComboBoxIcon_MethodInfo_
};

$Object* allocate$MetalComboBoxIcon($Class* clazz) {
	return $of($alloc(MetalComboBoxIcon));
}

int32_t MetalComboBoxIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool MetalComboBoxIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* MetalComboBoxIcon::clone() {
	 return this->$Icon::clone();
}

$String* MetalComboBoxIcon::toString() {
	 return this->$Icon::toString();
}

void MetalComboBoxIcon::finalize() {
	this->$Icon::finalize();
}

void MetalComboBoxIcon::init$() {
}

void MetalComboBoxIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($JComponent, component, $cast($JComponent, c));
	int32_t iconWidth = getIconWidth();
	$nc(g)->translate(x, y);
	g->setColor($nc(component)->isEnabled() ? $(static_cast<$Color*>($MetalLookAndFeel::getControlInfo())) : $(static_cast<$Color*>($MetalLookAndFeel::getControlShadow())));
	g->fillPolygon($$new($ints, {
		0,
		5,
		iconWidth - 5,
		iconWidth
	}), $$new($ints, {
		0,
		5,
		5,
		0
	}), 4);
	g->translate(-x, -y);
}

int32_t MetalComboBoxIcon::getIconWidth() {
	return 10;
}

int32_t MetalComboBoxIcon::getIconHeight() {
	return 5;
}

MetalComboBoxIcon::MetalComboBoxIcon() {
}

$Class* MetalComboBoxIcon::load$($String* name, bool initialize) {
	$loadClass(MetalComboBoxIcon, name, initialize, &_MetalComboBoxIcon_ClassInfo_, allocate$MetalComboBoxIcon);
	return class$;
}

$Class* MetalComboBoxIcon::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax