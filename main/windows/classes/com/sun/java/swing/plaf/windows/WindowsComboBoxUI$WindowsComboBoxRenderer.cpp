#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WindowsComboBoxRenderer.h>

#include <com/sun/java/swing/plaf/windows/WindowsBorders$DashedBorder.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder.h>
#include <com/sun/java/swing/plaf/windows/WindowsComboBoxUI.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Insets.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/plaf/basic/BasicComboBoxRenderer$UIResource.h>
#include <javax/swing/plaf/basic/BasicComboBoxRenderer.h>
#include <sun/swing/StringUIClientPropertyKey.h>
#include <jcpp.h>

#undef BORDER_KEY
#undef NULL_BORDER

using $WindowsBorders$DashedBorder = ::com::sun::java::swing::plaf::windows::WindowsBorders$DashedBorder;
using $WindowsComboBoxUI = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI;
using $WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder = ::com::sun::java::swing::plaf::windows::WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $LineBorder = ::javax::swing::border::LineBorder;
using $BasicComboBoxRenderer = ::javax::swing::plaf::basic::BasicComboBoxRenderer;
using $BasicComboBoxRenderer$UIResource = ::javax::swing::plaf::basic::BasicComboBoxRenderer$UIResource;
using $StringUIClientPropertyKey = ::sun::swing::StringUIClientPropertyKey;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsComboBoxUI$WindowsComboBoxRenderer_FieldInfo_[] = {
	{"BORDER_KEY", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsComboBoxUI$WindowsComboBoxRenderer, BORDER_KEY)},
	{"NULL_BORDER", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(WindowsComboBoxUI$WindowsComboBoxRenderer, NULL_BORDER)},
	{}
};

$MethodInfo _WindowsComboBoxUI$WindowsComboBoxRenderer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsComboBoxUI$WindowsComboBoxRenderer::*)()>(&WindowsComboBoxUI$WindowsComboBoxRenderer::init$))},
	{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC},
	{}
};

$InnerClassInfo _WindowsComboBoxUI$WindowsComboBoxRenderer_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxRenderer", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI", "WindowsComboBoxRenderer", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicComboBoxRenderer$UIResource", "javax.swing.plaf.basic.BasicComboBoxRenderer", "UIResource", $PUBLIC | $STATIC},
	{"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder", "com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxRenderer", "WindowsComboBoxDashedBorder", $PRIVATE},
	{}
};

$ClassInfo _WindowsComboBoxUI$WindowsComboBoxRenderer_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI$WindowsComboBoxRenderer",
	"javax.swing.plaf.basic.BasicComboBoxRenderer$UIResource",
	nullptr,
	_WindowsComboBoxUI$WindowsComboBoxRenderer_FieldInfo_,
	_WindowsComboBoxUI$WindowsComboBoxRenderer_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsComboBoxUI$WindowsComboBoxRenderer_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsComboBoxUI"
};

$Object* allocate$WindowsComboBoxUI$WindowsComboBoxRenderer($Class* clazz) {
	return $of($alloc(WindowsComboBoxUI$WindowsComboBoxRenderer));
}

$Object* WindowsComboBoxUI$WindowsComboBoxRenderer::BORDER_KEY = nullptr;
$Border* WindowsComboBoxUI$WindowsComboBoxRenderer::NULL_BORDER = nullptr;

void WindowsComboBoxUI$WindowsComboBoxRenderer::init$() {
	$useLocalCurrentObjectStackCache();
	$BasicComboBoxRenderer$UIResource::init$();
	$var($Insets, i, $nc($(getBorder()))->getBorderInsets(this));
	setBorder($$new($EmptyBorder, 0, 2, 0, $nc(i)->right));
}

$Component* WindowsComboBoxUI$WindowsComboBoxRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalCurrentObjectStackCache();
	$var($Component, rv, $BasicComboBoxRenderer$UIResource::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus));
	if ($instanceOf($JComponent, rv)) {
		$var($JComponent, component, $cast($JComponent, rv));
		if (index == -1 && isSelected) {
			$var($Border, border, $nc(component)->getBorder());
			$var($Border, dashedBorder, $new($WindowsComboBoxUI$WindowsComboBoxRenderer$WindowsComboBoxDashedBorder, this, $($nc(list)->getForeground())));
			component->setBorder(dashedBorder);
			if (component->getClientProperty(WindowsComboBoxUI$WindowsComboBoxRenderer::BORDER_KEY) == nullptr) {
				component->putClientProperty(WindowsComboBoxUI$WindowsComboBoxRenderer::BORDER_KEY, (border == nullptr) ? $of(WindowsComboBoxUI$WindowsComboBoxRenderer::NULL_BORDER) : $of(border));
			}
		} else if ($instanceOf($WindowsBorders$DashedBorder, $($nc(component)->getBorder()))) {
			$var($Object, storedBorder, component->getClientProperty(WindowsComboBoxUI$WindowsComboBoxRenderer::BORDER_KEY));
			if ($instanceOf($Border, storedBorder)) {
				component->setBorder(($equals(storedBorder, WindowsComboBoxUI$WindowsComboBoxRenderer::NULL_BORDER)) ? ($Border*)nullptr : $cast($Border, storedBorder));
			}
			component->putClientProperty(WindowsComboBoxUI$WindowsComboBoxRenderer::BORDER_KEY, nullptr);
		}
		if (index == -1) {
			$nc(component)->setOpaque(false);
			component->setForeground($($nc(list)->getForeground()));
		} else {
			$nc(component)->setOpaque(true);
		}
	}
	return rv;
}

void clinit$WindowsComboBoxUI$WindowsComboBoxRenderer($Class* class$) {
	$assignStatic(WindowsComboBoxUI$WindowsComboBoxRenderer::BORDER_KEY, $new($StringUIClientPropertyKey, "BORDER_KEY"_s));
	$assignStatic(WindowsComboBoxUI$WindowsComboBoxRenderer::NULL_BORDER, $new($EmptyBorder, 0, 0, 0, 0));
}

WindowsComboBoxUI$WindowsComboBoxRenderer::WindowsComboBoxUI$WindowsComboBoxRenderer() {
}

$Class* WindowsComboBoxUI$WindowsComboBoxRenderer::load$($String* name, bool initialize) {
	$loadClass(WindowsComboBoxUI$WindowsComboBoxRenderer, name, initialize, &_WindowsComboBoxUI$WindowsComboBoxRenderer_ClassInfo_, clinit$WindowsComboBoxUI$WindowsComboBoxRenderer, allocate$WindowsComboBoxUI$WindowsComboBoxRenderer);
	return class$;
}

$Class* WindowsComboBoxUI$WindowsComboBoxRenderer::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com