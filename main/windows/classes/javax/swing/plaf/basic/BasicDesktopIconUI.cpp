#include <javax/swing/plaf/basic/BasicDesktopIconUI.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/beans/PropertyVetoException.h>
#include <javax/swing/DefaultDesktopManager.h>
#include <javax/swing/DesktopManager.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/MouseInputAdapter.h>
#include <javax/swing/event/MouseInputListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopIconUI.h>
#include <javax/swing/plaf/basic/BasicDesktopIconUI$MouseInputHandler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <jcpp.h>

#undef CENTER
#undef MIN_VALUE
#undef TRUE

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultDesktopManager = ::javax::swing::DefaultDesktopManager;
using $DesktopManager = ::javax::swing::DesktopManager;
using $JComponent = ::javax::swing::JComponent;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $Border = ::javax::swing::border::Border;
using $MouseInputAdapter = ::javax::swing::event::MouseInputAdapter;
using $MouseInputListener = ::javax::swing::event::MouseInputListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DesktopIconUI = ::javax::swing::plaf::DesktopIconUI;
using $BasicDesktopIconUI$MouseInputHandler = ::javax::swing::plaf::basic::BasicDesktopIconUI$MouseInputHandler;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicDesktopIconUI_FieldInfo_[] = {
	{"desktopIcon", "Ljavax/swing/JInternalFrame$JDesktopIcon;", nullptr, $PROTECTED, $field(BasicDesktopIconUI, desktopIcon)},
	{"frame", "Ljavax/swing/JInternalFrame;", nullptr, $PROTECTED, $field(BasicDesktopIconUI, frame)},
	{"iconPane", "Ljavax/swing/JComponent;", nullptr, $PROTECTED, $field(BasicDesktopIconUI, iconPane)},
	{"mouseInputListener", "Ljavax/swing/event/MouseInputListener;", nullptr, 0, $field(BasicDesktopIconUI, mouseInputListener)},
	{}
};

$MethodInfo _BasicDesktopIconUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicDesktopIconUI::*)()>(&BasicDesktopIconUI::init$))},
	{"createMouseInputListener", "()Ljavax/swing/event/MouseInputListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicDesktopIconUI::createUI))},
	{"deiconize", "()V", nullptr, $PUBLIC},
	{"getInsets", "(Ljavax/swing/JComponent;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installComponents", "()V", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"uninstallComponents", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _BasicDesktopIconUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicDesktopIconUI$MouseInputHandler", "javax.swing.plaf.basic.BasicDesktopIconUI", "MouseInputHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicDesktopIconUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicDesktopIconUI",
	"javax.swing.plaf.DesktopIconUI",
	nullptr,
	_BasicDesktopIconUI_FieldInfo_,
	_BasicDesktopIconUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicDesktopIconUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicDesktopIconUI$MouseInputHandler"
};

$Object* allocate$BasicDesktopIconUI($Class* clazz) {
	return $of($alloc(BasicDesktopIconUI));
}

$ComponentUI* BasicDesktopIconUI::createUI($JComponent* c) {
	$init(BasicDesktopIconUI);
	return $new(BasicDesktopIconUI);
}

void BasicDesktopIconUI::init$() {
	$DesktopIconUI::init$();
}

void BasicDesktopIconUI::installUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$set(this, desktopIcon, $cast($JInternalFrame$JDesktopIcon, c));
	$set(this, frame, $nc(this->desktopIcon)->getInternalFrame());
	installDefaults();
	installComponents();
	$var($JInternalFrame, f, $nc(this->desktopIcon)->getInternalFrame());
	bool var$0 = $nc(f)->isIcon();
	if (var$0 && f->getParent() == nullptr) {
		$var($JDesktopPane, desktop, $nc(this->desktopIcon)->getDesktopPane());
		if (desktop != nullptr) {
			$var($DesktopManager, desktopManager, desktop->getDesktopManager());
			if ($instanceOf($DefaultDesktopManager, desktopManager)) {
				$nc(desktopManager)->iconifyFrame(f);
			}
		}
	}
	installListeners();
	$JLayeredPane::putLayer(this->desktopIcon, $JLayeredPane::getLayer(static_cast<$JComponent*>(this->frame)));
}

void BasicDesktopIconUI::uninstallUI($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	uninstallDefaults();
	uninstallComponents();
	$var($JInternalFrame, f, $nc(this->desktopIcon)->getInternalFrame());
	if ($nc(f)->isIcon()) {
		$var($JDesktopPane, desktop, $nc(this->desktopIcon)->getDesktopPane());
		if (desktop != nullptr) {
			$var($DesktopManager, desktopManager, desktop->getDesktopManager());
			if ($instanceOf($DefaultDesktopManager, desktopManager)) {
				f->putClientProperty("wasIconOnce"_s, nullptr);
				$nc(this->desktopIcon)->setLocation($Integer::MIN_VALUE, 0);
			}
		}
	}
	uninstallListeners();
	$set(this, frame, nullptr);
	$set(this, desktopIcon, nullptr);
}

void BasicDesktopIconUI::installComponents() {
	$set(this, iconPane, $new($BasicInternalFrameTitlePane, this->frame));
	$nc(this->desktopIcon)->setLayout($$new($BorderLayout));
	$init($BorderLayout);
	$nc(this->desktopIcon)->add(static_cast<$Component*>(this->iconPane), $of($BorderLayout::CENTER));
}

void BasicDesktopIconUI::uninstallComponents() {
	$nc(this->desktopIcon)->remove(static_cast<$Component*>(this->iconPane));
	$nc(this->desktopIcon)->setLayout(nullptr);
	$set(this, iconPane, nullptr);
}

void BasicDesktopIconUI::installListeners() {
	$set(this, mouseInputListener, createMouseInputListener());
	$nc(this->desktopIcon)->addMouseMotionListener(this->mouseInputListener);
	$nc(this->desktopIcon)->addMouseListener(this->mouseInputListener);
}

void BasicDesktopIconUI::uninstallListeners() {
	$nc(this->desktopIcon)->removeMouseMotionListener(this->mouseInputListener);
	$nc(this->desktopIcon)->removeMouseListener(this->mouseInputListener);
	$set(this, mouseInputListener, nullptr);
}

void BasicDesktopIconUI::installDefaults() {
	$LookAndFeel::installBorder(this->desktopIcon, "DesktopIcon.border"_s);
	$init($Boolean);
	$LookAndFeel::installProperty(this->desktopIcon, "opaque"_s, $Boolean::TRUE);
}

void BasicDesktopIconUI::uninstallDefaults() {
	$LookAndFeel::uninstallBorder(this->desktopIcon);
}

$MouseInputListener* BasicDesktopIconUI::createMouseInputListener() {
	return $new($BasicDesktopIconUI$MouseInputHandler, this);
}

$Dimension* BasicDesktopIconUI::getPreferredSize($JComponent* c) {
	return $nc($($nc(this->desktopIcon)->getLayout()))->preferredLayoutSize(this->desktopIcon);
}

$Dimension* BasicDesktopIconUI::getMinimumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, dim, $new($Dimension, $($nc(this->iconPane)->getMinimumSize())));
	$var($Border, border, $nc(this->frame)->getBorder());
	if (border != nullptr) {
		int32_t var$0 = $nc($(border->getBorderInsets(this->frame)))->bottom;
		dim->height += var$0 + $nc($(border->getBorderInsets(this->frame)))->top;
	}
	return dim;
}

$Dimension* BasicDesktopIconUI::getMaximumSize($JComponent* c) {
	return $nc(this->iconPane)->getMaximumSize();
}

$Insets* BasicDesktopIconUI::getInsets($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame, iframe, $nc(this->desktopIcon)->getInternalFrame());
	$var($Border, border, $nc(iframe)->getBorder());
	if (border != nullptr) {
		return border->getBorderInsets(iframe);
	}
	return $new($Insets, 0, 0, 0, 0);
}

void BasicDesktopIconUI::deiconize() {
	try {
		$nc(this->frame)->setIcon(false);
	} catch ($PropertyVetoException& e2) {
	}
}

BasicDesktopIconUI::BasicDesktopIconUI() {
}

$Class* BasicDesktopIconUI::load$($String* name, bool initialize) {
	$loadClass(BasicDesktopIconUI, name, initialize, &_BasicDesktopIconUI_ClassInfo_, allocate$BasicDesktopIconUI);
	return class$;
}

$Class* BasicDesktopIconUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax