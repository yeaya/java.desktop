#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$SystemMenuBar.h>

#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InternalFrameUI.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <sun/swing/DefaultLookup.h>
#include <jcpp.h>

#undef SCALE_SMOOTH

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JMenuBar = ::javax::swing::JMenuBar;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $InternalFrameUI = ::javax::swing::plaf::InternalFrameUI;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $DefaultLookup = ::sun::swing::DefaultLookup;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicInternalFrameTitlePane$SystemMenuBar_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(BasicInternalFrameTitlePane$SystemMenuBar, this$0)},
	{}
};

$MethodInfo _BasicInternalFrameTitlePane$SystemMenuBar_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicInternalFrameTitlePane$SystemMenuBar::*)($BasicInternalFrameTitlePane*)>(&BasicInternalFrameTitlePane$SystemMenuBar::init$))},
	{"isFocusTraversable", "()Z", nullptr, $PUBLIC},
	{"isOpaque", "()Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"requestFocus", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicInternalFrameTitlePane$SystemMenuBar_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicInternalFrameTitlePane$SystemMenuBar", "javax.swing.plaf.basic.BasicInternalFrameTitlePane", "SystemMenuBar", $PUBLIC},
	{}
};

$ClassInfo _BasicInternalFrameTitlePane$SystemMenuBar_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane$SystemMenuBar",
	"javax.swing.JMenuBar",
	nullptr,
	_BasicInternalFrameTitlePane$SystemMenuBar_FieldInfo_,
	_BasicInternalFrameTitlePane$SystemMenuBar_MethodInfo_,
	nullptr,
	nullptr,
	_BasicInternalFrameTitlePane$SystemMenuBar_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane"
};

$Object* allocate$BasicInternalFrameTitlePane$SystemMenuBar($Class* clazz) {
	return $of($alloc(BasicInternalFrameTitlePane$SystemMenuBar));
}

void BasicInternalFrameTitlePane$SystemMenuBar::init$($BasicInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$JMenuBar::init$();
}

bool BasicInternalFrameTitlePane$SystemMenuBar::isFocusTraversable() {
	return false;
}

void BasicInternalFrameTitlePane$SystemMenuBar::requestFocus() {
}

void BasicInternalFrameTitlePane$SystemMenuBar::paint($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Icon, icon, $nc(this->this$0->frame)->getFrameIcon());
	if (icon == nullptr) {
		$assign(icon, $cast($Icon, $DefaultLookup::get(this->this$0->frame, $($nc(this->this$0->frame)->getUI()), "InternalFrame.icon"_s)));
	}
	if (icon != nullptr) {
		bool var$0 = $instanceOf($ImageIcon, icon);
		if (var$0) {
			bool var$1 = icon->getIconWidth() > 16;
			var$0 = (var$1 || icon->getIconHeight() > 16);
		}
		if (var$0) {
			$var($Image, img, $nc(($cast($ImageIcon, icon)))->getImage());
			$nc(($cast($ImageIcon, icon)))->setImage($($nc(img)->getScaledInstance(16, 16, $Image::SCALE_SMOOTH)));
		}
		icon->paintIcon(this, g, 0, 0);
	}
}

bool BasicInternalFrameTitlePane$SystemMenuBar::isOpaque() {
	return true;
}

BasicInternalFrameTitlePane$SystemMenuBar::BasicInternalFrameTitlePane$SystemMenuBar() {
}

$Class* BasicInternalFrameTitlePane$SystemMenuBar::load$($String* name, bool initialize) {
	$loadClass(BasicInternalFrameTitlePane$SystemMenuBar, name, initialize, &_BasicInternalFrameTitlePane$SystemMenuBar_ClassInfo_, allocate$BasicInternalFrameTitlePane$SystemMenuBar);
	return class$;
}

$Class* BasicInternalFrameTitlePane$SystemMenuBar::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax