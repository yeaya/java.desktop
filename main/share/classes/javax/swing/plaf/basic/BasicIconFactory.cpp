#include <javax/swing/plaf/basic/BasicIconFactory.h>

#include <javax/swing/Icon.h>
#include <javax/swing/plaf/basic/BasicIconFactory$CheckBoxIcon.h>
#include <javax/swing/plaf/basic/BasicIconFactory$CheckBoxMenuItemIcon.h>
#include <javax/swing/plaf/basic/BasicIconFactory$EmptyFrameIcon.h>
#include <javax/swing/plaf/basic/BasicIconFactory$MenuArrowIcon.h>
#include <javax/swing/plaf/basic/BasicIconFactory$MenuItemArrowIcon.h>
#include <javax/swing/plaf/basic/BasicIconFactory$MenuItemCheckIcon.h>
#include <javax/swing/plaf/basic/BasicIconFactory$RadioButtonIcon.h>
#include <javax/swing/plaf/basic/BasicIconFactory$RadioButtonMenuItemIcon.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $BasicIconFactory$CheckBoxIcon = ::javax::swing::plaf::basic::BasicIconFactory$CheckBoxIcon;
using $BasicIconFactory$CheckBoxMenuItemIcon = ::javax::swing::plaf::basic::BasicIconFactory$CheckBoxMenuItemIcon;
using $BasicIconFactory$EmptyFrameIcon = ::javax::swing::plaf::basic::BasicIconFactory$EmptyFrameIcon;
using $BasicIconFactory$MenuArrowIcon = ::javax::swing::plaf::basic::BasicIconFactory$MenuArrowIcon;
using $BasicIconFactory$MenuItemArrowIcon = ::javax::swing::plaf::basic::BasicIconFactory$MenuItemArrowIcon;
using $BasicIconFactory$MenuItemCheckIcon = ::javax::swing::plaf::basic::BasicIconFactory$MenuItemCheckIcon;
using $BasicIconFactory$RadioButtonIcon = ::javax::swing::plaf::basic::BasicIconFactory$RadioButtonIcon;
using $BasicIconFactory$RadioButtonMenuItemIcon = ::javax::swing::plaf::basic::BasicIconFactory$RadioButtonMenuItemIcon;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicIconFactory_FieldInfo_[] = {
	{"frame_icon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(BasicIconFactory, frame_icon)},
	{"checkBoxIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(BasicIconFactory, checkBoxIcon)},
	{"radioButtonIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(BasicIconFactory, radioButtonIcon)},
	{"checkBoxMenuItemIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(BasicIconFactory, checkBoxMenuItemIcon)},
	{"radioButtonMenuItemIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(BasicIconFactory, radioButtonMenuItemIcon)},
	{"menuItemCheckIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(BasicIconFactory, menuItemCheckIcon)},
	{"menuItemArrowIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(BasicIconFactory, menuItemArrowIcon)},
	{"menuArrowIcon", "Ljavax/swing/Icon;", nullptr, $PRIVATE | $STATIC, $staticField(BasicIconFactory, menuArrowIcon)},
	{}
};

$MethodInfo _BasicIconFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicIconFactory::*)()>(&BasicIconFactory::init$))},
	{"createEmptyFrameIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&BasicIconFactory::createEmptyFrameIcon))},
	{"getCheckBoxIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&BasicIconFactory::getCheckBoxIcon))},
	{"getCheckBoxMenuItemIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&BasicIconFactory::getCheckBoxMenuItemIcon))},
	{"getMenuArrowIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&BasicIconFactory::getMenuArrowIcon))},
	{"getMenuItemArrowIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&BasicIconFactory::getMenuItemArrowIcon))},
	{"getMenuItemCheckIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&BasicIconFactory::getMenuItemCheckIcon))},
	{"getRadioButtonIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&BasicIconFactory::getRadioButtonIcon))},
	{"getRadioButtonMenuItemIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Icon*(*)()>(&BasicIconFactory::getRadioButtonMenuItemIcon))},
	{}
};

$InnerClassInfo _BasicIconFactory_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicIconFactory$MenuArrowIcon", "javax.swing.plaf.basic.BasicIconFactory", "MenuArrowIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicIconFactory$MenuItemArrowIcon", "javax.swing.plaf.basic.BasicIconFactory", "MenuItemArrowIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicIconFactory$MenuItemCheckIcon", "javax.swing.plaf.basic.BasicIconFactory", "MenuItemCheckIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicIconFactory$RadioButtonMenuItemIcon", "javax.swing.plaf.basic.BasicIconFactory", "RadioButtonMenuItemIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicIconFactory$CheckBoxMenuItemIcon", "javax.swing.plaf.basic.BasicIconFactory", "CheckBoxMenuItemIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicIconFactory$RadioButtonIcon", "javax.swing.plaf.basic.BasicIconFactory", "RadioButtonIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicIconFactory$CheckBoxIcon", "javax.swing.plaf.basic.BasicIconFactory", "CheckBoxIcon", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicIconFactory$EmptyFrameIcon", "javax.swing.plaf.basic.BasicIconFactory", "EmptyFrameIcon", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicIconFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicIconFactory",
	"java.lang.Object",
	"java.io.Serializable",
	_BasicIconFactory_FieldInfo_,
	_BasicIconFactory_MethodInfo_,
	nullptr,
	nullptr,
	_BasicIconFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicIconFactory$MenuArrowIcon,javax.swing.plaf.basic.BasicIconFactory$MenuItemArrowIcon,javax.swing.plaf.basic.BasicIconFactory$MenuItemCheckIcon,javax.swing.plaf.basic.BasicIconFactory$RadioButtonMenuItemIcon,javax.swing.plaf.basic.BasicIconFactory$CheckBoxMenuItemIcon,javax.swing.plaf.basic.BasicIconFactory$RadioButtonIcon,javax.swing.plaf.basic.BasicIconFactory$CheckBoxIcon,javax.swing.plaf.basic.BasicIconFactory$EmptyFrameIcon"
};

$Object* allocate$BasicIconFactory($Class* clazz) {
	return $of($alloc(BasicIconFactory));
}

$Icon* BasicIconFactory::frame_icon = nullptr;
$Icon* BasicIconFactory::checkBoxIcon = nullptr;
$Icon* BasicIconFactory::radioButtonIcon = nullptr;
$Icon* BasicIconFactory::checkBoxMenuItemIcon = nullptr;
$Icon* BasicIconFactory::radioButtonMenuItemIcon = nullptr;
$Icon* BasicIconFactory::menuItemCheckIcon = nullptr;
$Icon* BasicIconFactory::menuItemArrowIcon = nullptr;
$Icon* BasicIconFactory::menuArrowIcon = nullptr;

void BasicIconFactory::init$() {
}

$Icon* BasicIconFactory::getMenuItemCheckIcon() {
	$init(BasicIconFactory);
	if (BasicIconFactory::menuItemCheckIcon == nullptr) {
		$assignStatic(BasicIconFactory::menuItemCheckIcon, $new($BasicIconFactory$MenuItemCheckIcon));
	}
	return BasicIconFactory::menuItemCheckIcon;
}

$Icon* BasicIconFactory::getMenuItemArrowIcon() {
	$init(BasicIconFactory);
	if (BasicIconFactory::menuItemArrowIcon == nullptr) {
		$assignStatic(BasicIconFactory::menuItemArrowIcon, $new($BasicIconFactory$MenuItemArrowIcon));
	}
	return BasicIconFactory::menuItemArrowIcon;
}

$Icon* BasicIconFactory::getMenuArrowIcon() {
	$init(BasicIconFactory);
	if (BasicIconFactory::menuArrowIcon == nullptr) {
		$assignStatic(BasicIconFactory::menuArrowIcon, $new($BasicIconFactory$MenuArrowIcon));
	}
	return BasicIconFactory::menuArrowIcon;
}

$Icon* BasicIconFactory::getCheckBoxIcon() {
	$init(BasicIconFactory);
	if (BasicIconFactory::checkBoxIcon == nullptr) {
		$assignStatic(BasicIconFactory::checkBoxIcon, $new($BasicIconFactory$CheckBoxIcon));
	}
	return BasicIconFactory::checkBoxIcon;
}

$Icon* BasicIconFactory::getRadioButtonIcon() {
	$init(BasicIconFactory);
	if (BasicIconFactory::radioButtonIcon == nullptr) {
		$assignStatic(BasicIconFactory::radioButtonIcon, $new($BasicIconFactory$RadioButtonIcon));
	}
	return BasicIconFactory::radioButtonIcon;
}

$Icon* BasicIconFactory::getCheckBoxMenuItemIcon() {
	$init(BasicIconFactory);
	if (BasicIconFactory::checkBoxMenuItemIcon == nullptr) {
		$assignStatic(BasicIconFactory::checkBoxMenuItemIcon, $new($BasicIconFactory$CheckBoxMenuItemIcon));
	}
	return BasicIconFactory::checkBoxMenuItemIcon;
}

$Icon* BasicIconFactory::getRadioButtonMenuItemIcon() {
	$init(BasicIconFactory);
	if (BasicIconFactory::radioButtonMenuItemIcon == nullptr) {
		$assignStatic(BasicIconFactory::radioButtonMenuItemIcon, $new($BasicIconFactory$RadioButtonMenuItemIcon));
	}
	return BasicIconFactory::radioButtonMenuItemIcon;
}

$Icon* BasicIconFactory::createEmptyFrameIcon() {
	$init(BasicIconFactory);
	if (BasicIconFactory::frame_icon == nullptr) {
		$assignStatic(BasicIconFactory::frame_icon, $new($BasicIconFactory$EmptyFrameIcon));
	}
	return BasicIconFactory::frame_icon;
}

BasicIconFactory::BasicIconFactory() {
}

$Class* BasicIconFactory::load$($String* name, bool initialize) {
	$loadClass(BasicIconFactory, name, initialize, &_BasicIconFactory_ClassInfo_, allocate$BasicIconFactory);
	return class$;
}

$Class* BasicIconFactory::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax