#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameUI.h>

#include <com/sun/java/swing/plaf/windows/WindowsDesktopManager.h>
#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameTitlePane.h>
#include <com/sun/java/swing/plaf/windows/WindowsInternalFrameUI$XPBorder.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InternalFrameUI.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/basic/BasicInternalFrameUI.h>
#include <jcpp.h>

#undef FALSE
#undef TRUE

using $WindowsDesktopManager = ::com::sun::java::swing::plaf::windows::WindowsDesktopManager;
using $WindowsInternalFrameTitlePane = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameTitlePane;
using $WindowsInternalFrameUI$XPBorder = ::com::sun::java::swing::plaf::windows::WindowsInternalFrameUI$XPBorder;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultDesktopManager = ::javax::swing::DefaultDesktopManager;
using $DesktopManager = ::javax::swing::DesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $InternalFrameUI = ::javax::swing::plaf::InternalFrameUI;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameUI = ::javax::swing::plaf::basic::BasicInternalFrameUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsInternalFrameUI_FieldInfo_[] = {
	{"xp", "Lcom/sun/java/swing/plaf/windows/XPStyle;", nullptr, 0, $field(WindowsInternalFrameUI, xp)},
	{}
};

$MethodInfo _WindowsInternalFrameUI_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsInternalFrameUI::*)($JInternalFrame*)>(&WindowsInternalFrameUI::init$))},
	{"access$000", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(WindowsInternalFrameUI*)>(&WindowsInternalFrameUI::access$000))},
	{"access$100", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(WindowsInternalFrameUI*)>(&WindowsInternalFrameUI::access$100))},
	{"access$200", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameUI;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(WindowsInternalFrameUI*)>(&WindowsInternalFrameUI::access$200))},
	{"access$300", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameUI;)Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$BasicInternalFrameTitlePane*(*)(WindowsInternalFrameUI*)>(&WindowsInternalFrameUI::access$300))},
	{"access$400", "(Lcom/sun/java/swing/plaf/windows/WindowsInternalFrameUI;)Ljavax/swing/plaf/basic/BasicInternalFrameTitlePane;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$BasicInternalFrameTitlePane*(*)(WindowsInternalFrameUI*)>(&WindowsInternalFrameUI::access$400))},
	{"createDesktopManager", "()Ljavax/swing/DesktopManager;", nullptr, $PROTECTED},
	{"createNorthPane", "(Ljavax/swing/JInternalFrame;)Ljavax/swing/JComponent;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsInternalFrameUI::createUI))},
	{"installDefaults", "()V", nullptr, $PUBLIC},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsInternalFrameUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsInternalFrameUI$XPBorder", "com.sun.java.swing.plaf.windows.WindowsInternalFrameUI", "XPBorder", $PRIVATE},
	{}
};

$ClassInfo _WindowsInternalFrameUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameUI",
	"javax.swing.plaf.basic.BasicInternalFrameUI",
	nullptr,
	_WindowsInternalFrameUI_FieldInfo_,
	_WindowsInternalFrameUI_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsInternalFrameUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsInternalFrameUI$XPBorder"
};

$Object* allocate$WindowsInternalFrameUI($Class* clazz) {
	return $of($alloc(WindowsInternalFrameUI));
}

$BasicInternalFrameTitlePane* WindowsInternalFrameUI::access$400(WindowsInternalFrameUI* x0) {
	$init(WindowsInternalFrameUI);
	return $nc(x0)->titlePane;
}

$BasicInternalFrameTitlePane* WindowsInternalFrameUI::access$300(WindowsInternalFrameUI* x0) {
	$init(WindowsInternalFrameUI);
	return $nc(x0)->titlePane;
}

$JInternalFrame* WindowsInternalFrameUI::access$200(WindowsInternalFrameUI* x0) {
	$init(WindowsInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* WindowsInternalFrameUI::access$100(WindowsInternalFrameUI* x0) {
	$init(WindowsInternalFrameUI);
	return $nc(x0)->frame;
}

$JInternalFrame* WindowsInternalFrameUI::access$000(WindowsInternalFrameUI* x0) {
	$init(WindowsInternalFrameUI);
	return $nc(x0)->frame;
}

void WindowsInternalFrameUI::installDefaults() {
	$BasicInternalFrameUI::installDefaults();
	if (this->xp != nullptr) {
		$nc(this->frame)->setBorder($$new($WindowsInternalFrameUI$XPBorder, this));
	} else {
		$nc(this->frame)->setBorder($($UIManager::getBorder("InternalFrame.border"_s)));
	}
}

void WindowsInternalFrameUI::installUI($JComponent* c) {
	$BasicInternalFrameUI::installUI(c);
	$init($Boolean);
	$LookAndFeel::installProperty(c, "opaque"_s, this->xp == nullptr ? $Boolean::TRUE : $Boolean::FALSE);
}

void WindowsInternalFrameUI::uninstallDefaults() {
	$nc(this->frame)->setBorder(nullptr);
	$BasicInternalFrameUI::uninstallDefaults();
}

$ComponentUI* WindowsInternalFrameUI::createUI($JComponent* b) {
	$init(WindowsInternalFrameUI);
	return $new(WindowsInternalFrameUI, $cast($JInternalFrame, b));
}

void WindowsInternalFrameUI::init$($JInternalFrame* w) {
	$BasicInternalFrameUI::init$(w);
	$set(this, xp, $XPStyle::getXP());
}

$DesktopManager* WindowsInternalFrameUI::createDesktopManager() {
	return $new($WindowsDesktopManager);
}

$JComponent* WindowsInternalFrameUI::createNorthPane($JInternalFrame* w) {
	$set(this, titlePane, $new($WindowsInternalFrameTitlePane, w));
	return this->titlePane;
}

WindowsInternalFrameUI::WindowsInternalFrameUI() {
}

$Class* WindowsInternalFrameUI::load$($String* name, bool initialize) {
	$loadClass(WindowsInternalFrameUI, name, initialize, &_WindowsInternalFrameUI_ClassInfo_, allocate$WindowsInternalFrameUI);
	return class$;
}

$Class* WindowsInternalFrameUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com