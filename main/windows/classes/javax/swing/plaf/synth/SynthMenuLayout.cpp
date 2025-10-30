#include <javax/swing/plaf/synth/SynthMenuLayout.h>

#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/plaf/basic/DefaultMenuLayout.h>
#include <javax/swing/plaf/synth/SynthMenuItemLayoutHelper.h>
#include <sun/swing/StringUIClientPropertyKey.h>
#include <jcpp.h>

#undef MAX_ACC_OR_ARROW_WIDTH

using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $DefaultMenuLayout = ::javax::swing::plaf::basic::DefaultMenuLayout;
using $SynthMenuItemLayoutHelper = ::javax::swing::plaf::synth::SynthMenuItemLayoutHelper;
using $StringUIClientPropertyKey = ::sun::swing::StringUIClientPropertyKey;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$MethodInfo _SynthMenuLayout_MethodInfo_[] = {
	{"<init>", "(Ljava/awt/Container;I)V", nullptr, $PUBLIC, $method(static_cast<void(SynthMenuLayout::*)($Container*,int32_t)>(&SynthMenuLayout::init$))},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SynthMenuLayout_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthMenuLayout",
	"javax.swing.plaf.basic.DefaultMenuLayout",
	nullptr,
	nullptr,
	_SynthMenuLayout_MethodInfo_
};

$Object* allocate$SynthMenuLayout($Class* clazz) {
	return $of($alloc(SynthMenuLayout));
}

void SynthMenuLayout::init$($Container* target, int32_t axis) {
	$DefaultMenuLayout::init$(target, axis);
}

$Dimension* SynthMenuLayout::preferredLayoutSize($Container* target) {
	if ($instanceOf($JPopupMenu, target)) {
		$var($JPopupMenu, popupMenu, $cast($JPopupMenu, target));
		$init($SynthMenuItemLayoutHelper);
		$nc(popupMenu)->putClientProperty($SynthMenuItemLayoutHelper::MAX_ACC_OR_ARROW_WIDTH, nullptr);
	}
	return $DefaultMenuLayout::preferredLayoutSize(target);
}

SynthMenuLayout::SynthMenuLayout() {
}

$Class* SynthMenuLayout::load$($String* name, bool initialize) {
	$loadClass(SynthMenuLayout, name, initialize, &_SynthMenuLayout_ClassInfo_, allocate$SynthMenuLayout);
	return class$;
}

$Class* SynthMenuLayout::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax