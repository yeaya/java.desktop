#include <javax/swing/plaf/basic/DefaultMenuLayout.h>

#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <sun/swing/MenuItemLayoutHelper.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BoxLayout = ::javax::swing::BoxLayout;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $UIResource = ::javax::swing::plaf::UIResource;
using $MenuItemLayoutHelper = ::sun::swing::MenuItemLayoutHelper;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _DefaultMenuLayout_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/awt/Container;I)V", nullptr, $PUBLIC, $method(static_cast<void(DefaultMenuLayout::*)($Container*,int32_t)>(&DefaultMenuLayout::init$))},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DefaultMenuLayout_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.DefaultMenuLayout",
	"javax.swing.BoxLayout",
	"javax.swing.plaf.UIResource",
	nullptr,
	_DefaultMenuLayout_MethodInfo_
};

$Object* allocate$DefaultMenuLayout($Class* clazz) {
	return $of($alloc(DefaultMenuLayout));
}

int32_t DefaultMenuLayout::hashCode() {
	 return this->$BoxLayout::hashCode();
}

bool DefaultMenuLayout::equals(Object$* arg0) {
	 return this->$BoxLayout::equals(arg0);
}

$Object* DefaultMenuLayout::clone() {
	 return this->$BoxLayout::clone();
}

$String* DefaultMenuLayout::toString() {
	 return this->$BoxLayout::toString();
}

void DefaultMenuLayout::finalize() {
	this->$BoxLayout::finalize();
}

void DefaultMenuLayout::init$($Container* target, int32_t axis) {
	$BoxLayout::init$(target, axis);
}

$Dimension* DefaultMenuLayout::preferredLayoutSize($Container* target) {
	if ($instanceOf($JPopupMenu, target)) {
		$var($JPopupMenu, popupMenu, $cast($JPopupMenu, target));
		$MenuItemLayoutHelper::clearUsedClientProperties(popupMenu);
		if ($nc(popupMenu)->getComponentCount() == 0) {
			return $new($Dimension, 0, 0);
		}
	}
	$BoxLayout::invalidateLayout(target);
	return $BoxLayout::preferredLayoutSize(target);
}

DefaultMenuLayout::DefaultMenuLayout() {
}

$Class* DefaultMenuLayout::load$($String* name, bool initialize) {
	$loadClass(DefaultMenuLayout, name, initialize, &_DefaultMenuLayout_ClassInfo_, allocate$DefaultMenuLayout);
	return class$;
}

$Class* DefaultMenuLayout::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax