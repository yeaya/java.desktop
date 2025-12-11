#include <com/sun/java/swing/plaf/motif/MotifIconFactory.h>

#include <com/sun/java/swing/plaf/motif/MotifIconFactory$CheckBoxIcon.h>
#include <com/sun/java/swing/plaf/motif/MotifIconFactory$MenuArrowIcon.h>
#include <com/sun/java/swing/plaf/motif/MotifIconFactory$MenuItemArrowIcon.h>
#include <com/sun/java/swing/plaf/motif/MotifIconFactory$RadioButtonIcon.h>
#include <javax/swing/Icon.h>
#include <jcpp.h>

using $MotifIconFactory$CheckBoxIcon = ::com::sun::java::swing::plaf::motif::MotifIconFactory$CheckBoxIcon;
using $MotifIconFactory$MenuArrowIcon = ::com::sun::java::swing::plaf::motif::MotifIconFactory$MenuArrowIcon;
using $MotifIconFactory$MenuItemArrowIcon = ::com::sun::java::swing::plaf::motif::MotifIconFactory$MenuItemArrowIcon;
using $MotifIconFactory$RadioButtonIcon = ::com::sun::java::swing::plaf::motif::MotifIconFactory$RadioButtonIcon;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifIconFactory_FieldInfo_[] = {
	{"checkBoxIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MotifIconFactory, checkBoxIcon)},
	{"radioButtonIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MotifIconFactory, radioButtonIcon)},
	{"menuItemCheckIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MotifIconFactory, menuItemCheckIcon)},
	{"menuItemArrowIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MotifIconFactory, menuItemArrowIcon)},
	{"menuArrowIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(MotifIconFactory, menuArrowIcon)},
	{}
};

$MethodInfo _MotifIconFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifIconFactory::*)()>(&MotifIconFactory::init$))},
	{"getCheckBoxIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MotifIconFactory::getCheckBoxIcon))},
	{"getMenuArrowIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MotifIconFactory::getMenuArrowIcon))},
	{"getMenuItemArrowIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MotifIconFactory::getMenuItemArrowIcon))},
	{"getMenuItemCheckIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MotifIconFactory::getMenuItemCheckIcon))},
	{"getRadioButtonIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&MotifIconFactory::getRadioButtonIcon))},
	{}
};

$InnerClassInfo _MotifIconFactory_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifIconFactory$MenuArrowIcon", "com.sun.java.swing.plaf.motif.MotifIconFactory", "MenuArrowIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.motif.MotifIconFactory$MenuItemArrowIcon", "com.sun.java.swing.plaf.motif.MotifIconFactory", "MenuItemArrowIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.motif.MotifIconFactory$MenuItemCheckIcon", "com.sun.java.swing.plaf.motif.MotifIconFactory", "MenuItemCheckIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.motif.MotifIconFactory$RadioButtonIcon", "com.sun.java.swing.plaf.motif.MotifIconFactory", "RadioButtonIcon", $PRIVATE | $STATIC},
	{"com.sun.java.swing.plaf.motif.MotifIconFactory$CheckBoxIcon", "com.sun.java.swing.plaf.motif.MotifIconFactory", "CheckBoxIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MotifIconFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifIconFactory",
	"java.lang.Object",
	"java.io.Serializable",
	_MotifIconFactory_FieldInfo_,
	_MotifIconFactory_MethodInfo_,
	nullptr,
	nullptr,
	_MotifIconFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifIconFactory$MenuArrowIcon,com.sun.java.swing.plaf.motif.MotifIconFactory$MenuItemArrowIcon,com.sun.java.swing.plaf.motif.MotifIconFactory$MenuItemCheckIcon,com.sun.java.swing.plaf.motif.MotifIconFactory$RadioButtonIcon,com.sun.java.swing.plaf.motif.MotifIconFactory$CheckBoxIcon"
};

$Object* allocate$MotifIconFactory($Class* clazz) {
	return $of($alloc(MotifIconFactory));
}

$Icon* MotifIconFactory::checkBoxIcon = nullptr;
$Icon* MotifIconFactory::radioButtonIcon = nullptr;
$Icon* MotifIconFactory::menuItemCheckIcon = nullptr;
$Icon* MotifIconFactory::menuItemArrowIcon = nullptr;
$Icon* MotifIconFactory::menuArrowIcon = nullptr;

void MotifIconFactory::init$() {
}

$Icon* MotifIconFactory::getMenuItemCheckIcon() {
	$init(MotifIconFactory);
	return nullptr;
}

$Icon* MotifIconFactory::getMenuItemArrowIcon() {
	$init(MotifIconFactory);
	if (MotifIconFactory::menuItemArrowIcon == nullptr) {
		$assignStatic(MotifIconFactory::menuItemArrowIcon, $new($MotifIconFactory$MenuItemArrowIcon));
	}
	return MotifIconFactory::menuItemArrowIcon;
}

$Icon* MotifIconFactory::getMenuArrowIcon() {
	$init(MotifIconFactory);
	if (MotifIconFactory::menuArrowIcon == nullptr) {
		$assignStatic(MotifIconFactory::menuArrowIcon, $new($MotifIconFactory$MenuArrowIcon));
	}
	return MotifIconFactory::menuArrowIcon;
}

$Icon* MotifIconFactory::getCheckBoxIcon() {
	$init(MotifIconFactory);
	if (MotifIconFactory::checkBoxIcon == nullptr) {
		$assignStatic(MotifIconFactory::checkBoxIcon, $new($MotifIconFactory$CheckBoxIcon));
	}
	return MotifIconFactory::checkBoxIcon;
}

$Icon* MotifIconFactory::getRadioButtonIcon() {
	$init(MotifIconFactory);
	if (MotifIconFactory::radioButtonIcon == nullptr) {
		$assignStatic(MotifIconFactory::radioButtonIcon, $new($MotifIconFactory$RadioButtonIcon));
	}
	return MotifIconFactory::radioButtonIcon;
}

MotifIconFactory::MotifIconFactory() {
}

$Class* MotifIconFactory::load$($String* name, bool initialize) {
	$loadClass(MotifIconFactory, name, initialize, &_MotifIconFactory_ClassInfo_, allocate$MotifIconFactory);
	return class$;
}

$Class* MotifIconFactory::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com