#include <javax/swing/plaf/basic/BasicIconFactory$CheckBoxMenuItemIcon.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
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

$MethodInfo _BasicIconFactory$CheckBoxMenuItemIcon_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicIconFactory$CheckBoxMenuItemIcon::*)()>(&BasicIconFactory$CheckBoxMenuItemIcon::init$))},
	{"getIconHeight", "()I", nullptr, $PUBLIC},
	{"getIconWidth", "()I", nullptr, $PUBLIC},
	{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicIconFactory$CheckBoxMenuItemIcon_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicIconFactory$CheckBoxMenuItemIcon", "javax.swing.plaf.basic.BasicIconFactory", "CheckBoxMenuItemIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicIconFactory$CheckBoxMenuItemIcon_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicIconFactory$CheckBoxMenuItemIcon",
	"java.lang.Object",
	"javax.swing.Icon,javax.swing.plaf.UIResource,java.io.Serializable",
	nullptr,
	_BasicIconFactory$CheckBoxMenuItemIcon_MethodInfo_,
	nullptr,
	nullptr,
	_BasicIconFactory$CheckBoxMenuItemIcon_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicIconFactory"
};

$Object* allocate$BasicIconFactory$CheckBoxMenuItemIcon($Class* clazz) {
	return $of($alloc(BasicIconFactory$CheckBoxMenuItemIcon));
}

int32_t BasicIconFactory$CheckBoxMenuItemIcon::hashCode() {
	 return this->$Icon::hashCode();
}

bool BasicIconFactory$CheckBoxMenuItemIcon::equals(Object$* arg0) {
	 return this->$Icon::equals(arg0);
}

$Object* BasicIconFactory$CheckBoxMenuItemIcon::clone() {
	 return this->$Icon::clone();
}

$String* BasicIconFactory$CheckBoxMenuItemIcon::toString() {
	 return this->$Icon::toString();
}

void BasicIconFactory$CheckBoxMenuItemIcon::finalize() {
	this->$Icon::finalize();
}

void BasicIconFactory$CheckBoxMenuItemIcon::init$() {
}

void BasicIconFactory$CheckBoxMenuItemIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	$var($AbstractButton, b, $cast($AbstractButton, c));
	$var($ButtonModel, model, $nc(b)->getModel());
	bool isSelected = $nc(model)->isSelected();
	if (isSelected) {
		$nc(g)->drawLine(x + 7, y + 1, x + 7, y + 3);
		g->drawLine(x + 6, y + 2, x + 6, y + 4);
		g->drawLine(x + 5, y + 3, x + 5, y + 5);
		g->drawLine(x + 4, y + 4, x + 4, y + 6);
		g->drawLine(x + 3, y + 5, x + 3, y + 7);
		g->drawLine(x + 2, y + 4, x + 2, y + 6);
		g->drawLine(x + 1, y + 3, x + 1, y + 5);
	}
}

int32_t BasicIconFactory$CheckBoxMenuItemIcon::getIconWidth() {
	return 9;
}

int32_t BasicIconFactory$CheckBoxMenuItemIcon::getIconHeight() {
	return 9;
}

BasicIconFactory$CheckBoxMenuItemIcon::BasicIconFactory$CheckBoxMenuItemIcon() {
}

$Class* BasicIconFactory$CheckBoxMenuItemIcon::load$($String* name, bool initialize) {
	$loadClass(BasicIconFactory$CheckBoxMenuItemIcon, name, initialize, &_BasicIconFactory$CheckBoxMenuItemIcon_ClassInfo_, allocate$BasicIconFactory$CheckBoxMenuItemIcon);
	return class$;
}

$Class* BasicIconFactory$CheckBoxMenuItemIcon::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax