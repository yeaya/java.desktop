#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI.h>

#include <com/sun/java/swing/plaf/motif/MotifBorders$FrameBorder.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$DesktopIconActionListener.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$DesktopIconMouseListener.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton.h>
#include <com/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconLabel.h>
#include <com/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopIconUI.h>
#include <javax/swing/plaf/basic/BasicDesktopIconUI.h>
#include <jcpp.h>

#undef CENTER
#undef LABEL_DIVIDER
#undef LABEL_HEIGHT
#undef PLAIN
#undef SANS_SERIF
#undef SOUTH

using $MotifBorders$FrameBorder = ::com::sun::java::swing::plaf::motif::MotifBorders$FrameBorder;
using $MotifDesktopIconUI$DesktopIconActionListener = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$DesktopIconActionListener;
using $MotifDesktopIconUI$DesktopIconMouseListener = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$DesktopIconMouseListener;
using $MotifDesktopIconUI$IconButton = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconButton;
using $MotifDesktopIconUI$IconLabel = ::com::sun::java::swing::plaf::motif::MotifDesktopIconUI$IconLabel;
using $MotifInternalFrameTitlePane = ::com::sun::java::swing::plaf::motif::MotifInternalFrameTitlePane;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionListener = ::java::awt::event::ActionListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventListener = ::java::util::EventListener;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JPanel = ::javax::swing::JPanel;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DesktopIconUI = ::javax::swing::plaf::DesktopIconUI;
using $BasicDesktopIconUI = ::javax::swing::plaf::basic::BasicDesktopIconUI;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace motif {

$FieldInfo _MotifDesktopIconUI_FieldInfo_[] = {
	{"desktopIconActionListener", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI$DesktopIconActionListener;", nullptr, $PROTECTED, $field(MotifDesktopIconUI, desktopIconActionListener)},
	{"desktopIconMouseListener", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI$DesktopIconMouseListener;", nullptr, $PROTECTED, $field(MotifDesktopIconUI, desktopIconMouseListener)},
	{"defaultIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(MotifDesktopIconUI, defaultIcon)},
	{"iconButton", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton;", nullptr, $PROTECTED, $field(MotifDesktopIconUI, iconButton)},
	{"iconLabel", "Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconLabel;", nullptr, $PROTECTED, $field(MotifDesktopIconUI, iconLabel)},
	{"sysMenuTitlePane", "Lcom/sun/java/swing/plaf/motif/MotifInternalFrameTitlePane;", nullptr, $PRIVATE, $field(MotifDesktopIconUI, sysMenuTitlePane)},
	{"systemMenu", "Ljavax/swing/JPopupMenu;", nullptr, 0, $field(MotifDesktopIconUI, systemMenu)},
	{"mml", "Ljava/util/EventListener;", nullptr, 0, $field(MotifDesktopIconUI, mml)},
	{"LABEL_HEIGHT", "I", nullptr, $STATIC | $FINAL, $constField(MotifDesktopIconUI, LABEL_HEIGHT)},
	{"LABEL_DIVIDER", "I", nullptr, $STATIC | $FINAL, $constField(MotifDesktopIconUI, LABEL_DIVIDER)},
	{"defaultTitleFont", "Ljava/awt/Font;", nullptr, $STATIC | $FINAL, $staticField(MotifDesktopIconUI, defaultTitleFont)},
	{}
};

$MethodInfo _MotifDesktopIconUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MotifDesktopIconUI::*)()>(&MotifDesktopIconUI::init$))},
	{"createDesktopIconActionListener", "()Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI$DesktopIconActionListener;", nullptr, $PROTECTED},
	{"createDesktopIconMouseListener", "()Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI$DesktopIconMouseListener;", nullptr, $PROTECTED},
	{"createIconButton", "(Ljavax/swing/Icon;)Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconButton;", nullptr, $PROTECTED},
	{"createIconLabel", "(Ljavax/swing/JInternalFrame;)Lcom/sun/java/swing/plaf/motif/MotifDesktopIconUI$IconLabel;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MotifDesktopIconUI::createUI))},
	{"getDefaultIcon", "()Ljavax/swing/Icon;", nullptr, $PUBLIC},
	{"getDesktopIcon", "()Ljavax/swing/JInternalFrame$JDesktopIcon;", nullptr, 0},
	{"getFrame", "()Ljavax/swing/JInternalFrame;", nullptr, 0},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"hideSystemMenu", "()V", nullptr, $PROTECTED},
	{"installComponents", "()V", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"setDefaultIcon", "(Ljavax/swing/Icon;)V", nullptr, $PUBLIC},
	{"setDesktopIcon", "(Ljavax/swing/JInternalFrame$JDesktopIcon;)V", nullptr, 0},
	{"setFrame", "(Ljavax/swing/JInternalFrame;)V", nullptr, 0},
	{"showSystemMenu", "()V", nullptr, $PROTECTED},
	{"uninstallComponents", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MotifDesktopIconUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$DesktopIconMouseListener", "com.sun.java.swing.plaf.motif.MotifDesktopIconUI", "DesktopIconMouseListener", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$DesktopIconActionListener", "com.sun.java.swing.plaf.motif.MotifDesktopIconUI", "DesktopIconActionListener", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton", "com.sun.java.swing.plaf.motif.MotifDesktopIconUI", "IconButton", $PROTECTED},
	{"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconLabel", "com.sun.java.swing.plaf.motif.MotifDesktopIconUI", "IconLabel", $PROTECTED},
	{}
};

$ClassInfo _MotifDesktopIconUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI",
	"javax.swing.plaf.basic.BasicDesktopIconUI",
	nullptr,
	_MotifDesktopIconUI_FieldInfo_,
	_MotifDesktopIconUI_MethodInfo_,
	nullptr,
	nullptr,
	_MotifDesktopIconUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.motif.MotifDesktopIconUI$DesktopIconMouseListener,com.sun.java.swing.plaf.motif.MotifDesktopIconUI$DesktopIconActionListener,com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton,com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton$2,com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconButton$1,com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconLabel,com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconLabel$2,com.sun.java.swing.plaf.motif.MotifDesktopIconUI$IconLabel$1"
};

$Object* allocate$MotifDesktopIconUI($Class* clazz) {
	return $of($alloc(MotifDesktopIconUI));
}

$Font* MotifDesktopIconUI::defaultTitleFont = nullptr;

$ComponentUI* MotifDesktopIconUI::createUI($JComponent* c) {
	$init(MotifDesktopIconUI);
	return $new(MotifDesktopIconUI);
}

void MotifDesktopIconUI::init$() {
	$BasicDesktopIconUI::init$();
}

void MotifDesktopIconUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	$BasicDesktopIconUI::installDefaults();
	setDefaultIcon($($UIManager::getIcon("DesktopIcon.icon"_s)));
	$set(this, iconButton, createIconButton(this->defaultIcon));
	$set(this, sysMenuTitlePane, $new($MotifInternalFrameTitlePane, this->frame));
	$set(this, systemMenu, $nc(this->sysMenuTitlePane)->getSystemMenu());
	$var($MotifBorders$FrameBorder, border, $new($MotifBorders$FrameBorder, this->desktopIcon));
	$nc(this->desktopIcon)->setLayout($$new($BorderLayout));
	$nc(this->iconButton)->setBorder(border);
	$init($BorderLayout);
	$nc(this->desktopIcon)->add(static_cast<$Component*>(this->iconButton), $of($BorderLayout::CENTER));
	$set(this, iconLabel, createIconLabel(this->frame));
	$nc(this->iconLabel)->setBorder(border);
	$nc(this->desktopIcon)->add(static_cast<$Component*>(this->iconLabel), $of($BorderLayout::SOUTH));
	$nc(this->desktopIcon)->setSize($($nc(this->desktopIcon)->getPreferredSize()));
	$nc(this->desktopIcon)->validate();
	$JLayeredPane::putLayer(this->desktopIcon, $JLayeredPane::getLayer(static_cast<$JComponent*>(this->frame)));
}

void MotifDesktopIconUI::installComponents() {
}

void MotifDesktopIconUI::uninstallComponents() {
}

void MotifDesktopIconUI::installListeners() {
	$BasicDesktopIconUI::installListeners();
	$set(this, desktopIconActionListener, createDesktopIconActionListener());
	$set(this, desktopIconMouseListener, createDesktopIconMouseListener());
	$nc(this->iconButton)->addActionListener(this->desktopIconActionListener);
	$nc(this->iconButton)->addMouseListener(this->desktopIconMouseListener);
	$nc(this->iconLabel)->addMouseListener(this->desktopIconMouseListener);
}

$JInternalFrame$JDesktopIcon* MotifDesktopIconUI::getDesktopIcon() {
	return this->desktopIcon;
}

void MotifDesktopIconUI::setDesktopIcon($JInternalFrame$JDesktopIcon* d) {
	$set(this, desktopIcon, d);
}

$JInternalFrame* MotifDesktopIconUI::getFrame() {
	return this->frame;
}

void MotifDesktopIconUI::setFrame($JInternalFrame* f) {
	$set(this, frame, f);
}

void MotifDesktopIconUI::showSystemMenu() {
	$nc(this->systemMenu)->show(this->iconButton, 0, $nc($(getDesktopIcon()))->getHeight());
}

void MotifDesktopIconUI::hideSystemMenu() {
	$nc(this->systemMenu)->setVisible(false);
}

$MotifDesktopIconUI$IconLabel* MotifDesktopIconUI::createIconLabel($JInternalFrame* frame) {
	return $new($MotifDesktopIconUI$IconLabel, this, frame);
}

$MotifDesktopIconUI$IconButton* MotifDesktopIconUI::createIconButton($Icon* i) {
	return $new($MotifDesktopIconUI$IconButton, this, i);
}

$MotifDesktopIconUI$DesktopIconActionListener* MotifDesktopIconUI::createDesktopIconActionListener() {
	return $new($MotifDesktopIconUI$DesktopIconActionListener, this);
}

$MotifDesktopIconUI$DesktopIconMouseListener* MotifDesktopIconUI::createDesktopIconMouseListener() {
	return $new($MotifDesktopIconUI$DesktopIconMouseListener, this);
}

void MotifDesktopIconUI::uninstallDefaults() {
	$BasicDesktopIconUI::uninstallDefaults();
	$nc(this->desktopIcon)->setLayout(nullptr);
	$nc(this->desktopIcon)->remove(static_cast<$Component*>(this->iconButton));
	$nc(this->desktopIcon)->remove(static_cast<$Component*>(this->iconLabel));
}

void MotifDesktopIconUI::uninstallListeners() {
	$BasicDesktopIconUI::uninstallListeners();
	$nc(this->iconButton)->removeActionListener(this->desktopIconActionListener);
	$nc(this->iconButton)->removeMouseListener(this->desktopIconMouseListener);
	$nc(this->sysMenuTitlePane)->uninstallListeners();
}

$Dimension* MotifDesktopIconUI::getMinimumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($JInternalFrame, iframe, $nc(this->desktopIcon)->getInternalFrame());
	int32_t w = $nc(this->defaultIcon)->getIconWidth();
	int32_t h = $nc(this->defaultIcon)->getIconHeight() + MotifDesktopIconUI::LABEL_HEIGHT + MotifDesktopIconUI::LABEL_DIVIDER;
	$var($Border, border, $nc(iframe)->getBorder());
	if (border != nullptr) {
		int32_t var$0 = $nc($(border->getBorderInsets(iframe)))->left;
		w += var$0 + $nc($(border->getBorderInsets(iframe)))->right;
		int32_t var$1 = $nc($(border->getBorderInsets(iframe)))->bottom;
		h += var$1 + $nc($(border->getBorderInsets(iframe)))->top;
	}
	return $new($Dimension, w, h);
}

$Dimension* MotifDesktopIconUI::getPreferredSize($JComponent* c) {
	return getMinimumSize(c);
}

$Dimension* MotifDesktopIconUI::getMaximumSize($JComponent* c) {
	return getMinimumSize(c);
}

$Icon* MotifDesktopIconUI::getDefaultIcon() {
	return this->defaultIcon;
}

void MotifDesktopIconUI::setDefaultIcon($Icon* newIcon) {
	$set(this, defaultIcon, newIcon);
}

void clinit$MotifDesktopIconUI($Class* class$) {
	$init($Font);
	$assignStatic(MotifDesktopIconUI::defaultTitleFont, $new($Font, $Font::SANS_SERIF, $Font::PLAIN, 12));
}

MotifDesktopIconUI::MotifDesktopIconUI() {
}

$Class* MotifDesktopIconUI::load$($String* name, bool initialize) {
	$loadClass(MotifDesktopIconUI, name, initialize, &_MotifDesktopIconUI_ClassInfo_, clinit$MotifDesktopIconUI, allocate$MotifDesktopIconUI);
	return class$;
}

$Class* MotifDesktopIconUI::class$ = nullptr;

					} // motif
				} // plaf
			} // swing
		} // java
	} // sun
} // com