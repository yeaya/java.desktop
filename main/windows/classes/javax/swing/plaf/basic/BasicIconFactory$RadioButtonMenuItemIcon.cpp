#include <javax/swing/plaf/basic/BasicIconFactory$RadioButtonMenuItemIcon.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/plaf/basic/BasicIconFactory.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $ButtonModel = ::javax::swing::ButtonModel;
using $Icon = ::javax::swing::Icon;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicIconFactory = ::javax::swing::plaf::basic::BasicIconFactory;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _BasicIconFactory$RadioButtonMenuItemIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicIconFactory$RadioButtonMenuItemIcon::*)()>(&BasicIconFactory$RadioButtonMenuItemIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicIconFactory$RadioButtonMenuItemIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicIconFactory$RadioButtonMenuItemIcon", "javax.swing.plaf.basic.BasicIconFactory", "RadioButtonMenuItemIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicIconFactory$RadioButtonMenuItemIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicIconFactory$RadioButtonMenuItemIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_BasicIconFactory$RadioButtonMenuItemIcon_MethodInfo_,
	nullptr,
	nullptr,
	_BasicIconFactory$RadioButtonMenuItemIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicIconFactory"
};

$Object* allocate$BasicIconFactory$RadioButtonMenuItemIcon($Class* clazz) {
	return $of($alloc(BasicIconFactory$RadioButtonMenuItemIcon));
}

int32_t BasicIconFactory$RadioButtonMenuItemIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool BasicIconFactory$RadioButtonMenuItemIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* BasicIconFactory$RadioButtonMenuItemIcon::clone() {
	 return this->$Icon::clone();
}

$String* BasicIconFactory$RadioButtonMenuItemIcon::toString() {
	 return this->$Icon::toString();
}

void BasicIconFactory$RadioButtonMenuItemIcon::finalize() {
	this->$Icon::finalize();
}

void BasicIconFactory$RadioButtonMenuItemIcon::init$() {
}

void BasicIconFactory$RadioButtonMenuItemIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	if (b->isSelected() == true) {
		int32_t var$0 = x + 1;
		int32_t var$1 = y + 1;
		int32_t var$2 = getIconWidth();
		$nc(g)->fillOval(var$0, var$1, var$2, getIconHeight());
	}
}

int32_t BasicIconFactory$RadioButtonMenuItemIcon::getIconWidth() {
	return 6;
}

int32_t BasicIconFactory$RadioButtonMenuItemIcon::getIconHeight() {
	return 6;
}

BasicIconFactory$RadioButtonMenuItemIcon::BasicIconFactory$RadioButtonMenuItemIcon() {
}

$Class* BasicIconFactory$RadioButtonMenuItemIcon::load$($String* name, bool initialize) {
	$loadClass(BasicIconFactory$RadioButtonMenuItemIcon, name, initialize, &_BasicIconFactory$RadioButtonMenuItemIcon_ClassInfo_, allocate$BasicIconFactory$RadioButtonMenuItemIcon);
	return class$;
}

$Class* BasicIconFactory$RadioButtonMenuItemIcon::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax