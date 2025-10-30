#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$3.h>

#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI.h>
#include <com/sun/java/swing/plaf/windows/WindowsGraphicsUtils.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI$ComboBoxLayoutManager.h>
#include <javax/swing/plaf/basic/BasicComboBoxUI.h>
#include <jcpp.h>

using $WindowsComboBoxUI = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI;
using $WindowsGraphicsUtils = ::com::sun::java::swing::plaf::windows::WindowsGraphicsUtils;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JComboBox = ::javax::swing::JComboBox;
using $JComponent = ::javax::swing::JComponent;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $BasicComboBoxUI = ::javax::swing::plaf::basic::BasicComboBoxUI;
using $BasicComboBoxUI$ComboBoxLayoutManager = ::javax::swing::plaf::basic::BasicComboBoxUI$ComboBoxLayoutManager;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsComboBoxUI$3_FieldInfo_[] = {
	{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsComboBoxUI$3, this$0)},
	{}
};

$MethodInfo _WindowsComboBoxUI$3_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsComboBoxUI;)V", nullptr, 0, $method(static_cast<void(WindowsComboBoxUI$3::*)($WindowsComboBoxUI*)>(&WindowsComboBoxUI$3::init$))},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _WindowsComboBoxUI$3_EnclosingMethodInfo_ = {
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI",
	"createLayoutManager",
	"()Ljava/awt/LayoutManager;"
};

$InnerClassInfo _WindowsComboBoxUI$3_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$3", nullptr, nullptr, 0},
	{"javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager", "javax.swing.plaf.basic.BasicComboBoxUI", "ComboBoxLayoutManager", $PUBLIC},
	{}
};

$ClassInfo _WindowsComboBoxUI$3_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$3",
	"javax.swing.plaf.basic.BasicComboBoxUI$ComboBoxLayoutManager",
	nullptr,
	_WindowsComboBoxUI$3_FieldInfo_,
	_WindowsComboBoxUI$3_MethodInfo_,
	nullptr,
	&_WindowsComboBoxUI$3_EnclosingMethodInfo_,
	_WindowsComboBoxUI$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI"
};

$Object* allocate$WindowsComboBoxUI$3($Class* clazz) {
	return $of($alloc(WindowsComboBoxUI$3));
}

void WindowsComboBoxUI$3::init$($WindowsComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$BasicComboBoxUI$ComboBoxLayoutManager::init$(this$0);
}

void WindowsComboBoxUI$3::layoutContainer($Container* parent) {
	$useLocalCurrentObjectStackCache();
	$BasicComboBoxUI$ComboBoxLayoutManager::layoutContainer(parent);
	bool var$0 = $XPStyle::getXP() != nullptr;
	if (var$0 && $WindowsComboBoxUI::access$500(this->this$0) != nullptr) {
		$var($Dimension, d, $nc(parent)->getSize());
		$var($Insets, insets, $WindowsComboBoxUI::access$600(this->this$0));
		int32_t borderInsetsCorrection = 0;
		if ($instanceOf($EmptyBorder, $($nc(($cast($JComboBox, parent)))->getBorder()))) {
			borderInsetsCorrection = 1;
		}
		int32_t var$1 = $WindowsGraphicsUtils::isLeftToRight($cast($JComboBox, parent)) ? ($nc(d)->width - ($nc(insets)->right - borderInsetsCorrection) - $nc($($nc($($WindowsComboBoxUI::access$700(this->this$0)))->getPreferredSize()))->width) : insets->left - borderInsetsCorrection;
		int32_t var$2 = insets->top - borderInsetsCorrection;
		$nc($($WindowsComboBoxUI::access$900(this->this$0)))->setBounds(var$1, var$2, $nc($($nc($($WindowsComboBoxUI::access$800(this->this$0)))->getPreferredSize()))->width, d->height - (insets->top - borderInsetsCorrection) - (insets->bottom - borderInsetsCorrection));
	}
}

WindowsComboBoxUI$3::WindowsComboBoxUI$3() {
}

$Class* WindowsComboBoxUI$3::load$($String* name, bool initialize) {
	$loadClass(WindowsComboBoxUI$3, name, initialize, &_WindowsComboBoxUI$3_ClassInfo_, allocate$WindowsComboBoxUI$3);
	return class$;
}

$Class* WindowsComboBoxUI$3::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com