#include <javax/swing/plaf/metal/MetalTitlePane$SystemMenuBar.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Math.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/metal/MetalTitlePane.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JComponent = ::javax::swing::JComponent;
using $JMenuBar = ::javax::swing::JMenuBar;
using $UIManager = ::javax::swing::UIManager;
using $MetalTitlePane = ::javax::swing::plaf::metal::MetalTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalTitlePane$SystemMenuBar_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(MetalTitlePane$SystemMenuBar, this$0)},
	{}
};

$MethodInfo _MetalTitlePane$SystemMenuBar_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalTitlePane;)V", nullptr, $PRIVATE, $method(static_cast<void(MetalTitlePane$SystemMenuBar::*)($MetalTitlePane*)>(&MetalTitlePane$SystemMenuBar::init$))},
	{"getMinimumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _MetalTitlePane$SystemMenuBar_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalTitlePane$SystemMenuBar", "javax.swing.plaf.metal.MetalTitlePane", "SystemMenuBar", $PRIVATE},
	{}
};

$ClassInfo _MetalTitlePane$SystemMenuBar_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalTitlePane$SystemMenuBar",
	"javax.swing.JMenuBar",
	nullptr,
	_MetalTitlePane$SystemMenuBar_FieldInfo_,
	_MetalTitlePane$SystemMenuBar_MethodInfo_,
	nullptr,
	nullptr,
	_MetalTitlePane$SystemMenuBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalTitlePane"
};

$Object* allocate$MetalTitlePane$SystemMenuBar($Class* clazz) {
	return $of($alloc(MetalTitlePane$SystemMenuBar));
}

void MetalTitlePane$SystemMenuBar::init$($MetalTitlePane* this$0) {
	$set(this, this$0, this$0);
	$JMenuBar::init$();
}

void MetalTitlePane$SystemMenuBar::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	if (isOpaque()) {
		$nc(g)->setColor($(getBackground()));
		int32_t var$0 = getWidth();
		g->fillRect(0, 0, var$0, getHeight());
	}
	if (this->this$0->systemIcon != nullptr) {
		$nc(g)->drawImage(this->this$0->systemIcon, 0, 0, 16, 16, nullptr);
	} else {
		$var($Icon, icon, $UIManager::getIcon("InternalFrame.icon"_s));
		if (icon != nullptr) {
			icon->paintIcon(this, g, 0, 0);
		}
	}
}

$Dimension* MetalTitlePane$SystemMenuBar::getMinimumSize() {
	return getPreferredSize();
}

$Dimension* MetalTitlePane$SystemMenuBar::getPreferredSize() {
	$var($Dimension, size, $JMenuBar::getPreferredSize());
	int32_t var$0 = $Math::max(16, $nc(size)->width);
	return $new($Dimension, var$0, $Math::max($nc(size)->height, 16));
}

MetalTitlePane$SystemMenuBar::MetalTitlePane$SystemMenuBar() {
}

$Class* MetalTitlePane$SystemMenuBar::load$($String* name, bool initialize) {
	$loadClass(MetalTitlePane$SystemMenuBar, name, initialize, &_MetalTitlePane$SystemMenuBar_ClassInfo_, allocate$MetalTitlePane$SystemMenuBar);
	return class$;
}

$Class* MetalTitlePane$SystemMenuBar::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax