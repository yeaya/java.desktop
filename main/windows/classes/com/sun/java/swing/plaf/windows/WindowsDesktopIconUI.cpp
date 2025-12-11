#include <com/sun/java/swing/plaf/windows/WindowsDesktopIconUI.h>

#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopIconUI.h>
#include <javax/swing/plaf/basic/BasicDesktopIconUI.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

#undef CENTER

using $WindowsInternalFrameTitlePane = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DesktopIconUI = ::javax::swing::plaf::DesktopIconUI;
using $BasicDesktopIconUI = ::javax::swing::plaf::basic::BasicDesktopIconUI;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsDesktopIconUI_FieldInfo_[] = {
	{"width", "I", nullptr, $PRIVATE, $field(WindowsDesktopIconUI, width)},
	{}
};

$MethodInfo _WindowsDesktopIconUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(WindowsDesktopIconUI::*)()>(&WindowsDesktopIconUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsDesktopIconUI::createUI))},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installComponents", "()V", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PUBLIC},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _WindowsDesktopIconUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsDesktopIconUI",
	"javax.swing.plaf.basic.BasicDesktopIconUI",
	nullptr,
	_WindowsDesktopIconUI_FieldInfo_,
	_WindowsDesktopIconUI_MethodInfo_
};

$Object* allocate$WindowsDesktopIconUI($Class* clazz) {
	return $of($alloc(WindowsDesktopIconUI));
}

void WindowsDesktopIconUI::init$() {
	$BasicDesktopIconUI::init$();
}

$ComponentUI* WindowsDesktopIconUI::createUI($JComponent* c) {
	$init(WindowsDesktopIconUI);
	return $new(WindowsDesktopIconUI);
}

void WindowsDesktopIconUI::installDefaults() {
	$BasicDesktopIconUI::installDefaults();
	this->width = $UIManager::getInt("DesktopIcon.width"_s);
}

void WindowsDesktopIconUI::installUI($JComponent* c) {
	$BasicDesktopIconUI::installUI(c);
	$nc(c)->setOpaque($XPStyle::getXP() == nullptr);
}

void WindowsDesktopIconUI::uninstallUI($JComponent* c) {
	$var($WindowsInternalFrameTitlePane, thePane, $cast($WindowsInternalFrameTitlePane, this->iconPane));
	$BasicDesktopIconUI::uninstallUI(c);
	$nc(thePane)->uninstallListeners();
}

void WindowsDesktopIconUI::installComponents() {
	$set(this, iconPane, $new($WindowsInternalFrameTitlePane, this->frame));
	$nc(this->desktopIcon)->setLayout($$new($BorderLayout));
	$init($BorderLayout);
	$nc(this->desktopIcon)->add(static_cast<$Component*>(this->iconPane), $of($BorderLayout::CENTER));
	if ($XPStyle::getXP() != nullptr) {
		$nc(this->desktopIcon)->setBorder(nullptr);
	}
}

$Dimension* WindowsDesktopIconUI::getPreferredSize($JComponent* c) {
	return getMinimumSize(c);
}

$Dimension* WindowsDesktopIconUI::getMinimumSize($JComponent* c) {
	$var($Dimension, dim, $BasicDesktopIconUI::getMinimumSize(c));
	$nc(dim)->width = this->width;
	return dim;
}

WindowsDesktopIconUI::WindowsDesktopIconUI() {
}

$Class* WindowsDesktopIconUI::load$($String* name, bool initialize) {
	$loadClass(WindowsDesktopIconUI, name, initialize, &_WindowsDesktopIconUI_ClassInfo_, allocate$WindowsDesktopIconUI);
	return class$;
}

$Class* WindowsDesktopIconUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com