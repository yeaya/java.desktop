#include <javax/swing/plaf/metal/MetalDesktopIconUI.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/LayoutManager2.h>
#include <java/awt/event/ActionListener.h>
#include <java/beans/PropertyChangeListener.h>
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
#include <javax/swing/JLabel.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/border/MatteBorder.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/DesktopIconUI.h>
#include <javax/swing/plaf/basic/BasicDesktopIconUI.h>
#include <javax/swing/plaf/metal/MetalBumps.h>
#include <javax/swing/plaf/metal/MetalDesktopIconUI$1.h>
#include <javax/swing/plaf/metal/MetalDesktopIconUI$TitleListener.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef CENTER
#undef WEST

using $BorderLayout = ::java::awt::BorderLayout;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $LayoutManager = ::java::awt::LayoutManager;
using $LayoutManager2 = ::java::awt::LayoutManager2;
using $ActionListener = ::java::awt::event::ActionListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JLabel = ::javax::swing::JLabel;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $MatteBorder = ::javax::swing::border::MatteBorder;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $DesktopIconUI = ::javax::swing::plaf::DesktopIconUI;
using $BasicDesktopIconUI = ::javax::swing::plaf::basic::BasicDesktopIconUI;
using $MetalBumps = ::javax::swing::plaf::metal::MetalBumps;
using $MetalDesktopIconUI$1 = ::javax::swing::plaf::metal::MetalDesktopIconUI$1;
using $MetalDesktopIconUI$TitleListener = ::javax::swing::plaf::metal::MetalDesktopIconUI$TitleListener;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalDesktopIconUI_FieldInfo_[] = {
	{"button", "Ljavax/swing/JButton;", nullptr, 0, $field(MetalDesktopIconUI, button)},
	{"label", "Ljavax/swing/JLabel;", nullptr, 0, $field(MetalDesktopIconUI, label)},
	{"titleListener", "Ljavax/swing/plaf/metal/MetalDesktopIconUI$TitleListener;", nullptr, 0, $field(MetalDesktopIconUI, titleListener)},
	{"width", "I", nullptr, $PRIVATE, $field(MetalDesktopIconUI, width)},
	{}
};

$MethodInfo _MetalDesktopIconUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalDesktopIconUI::*)()>(&MetalDesktopIconUI::init$))},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&MetalDesktopIconUI::createUI))},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"installComponents", "()V", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"uninstallComponents", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _MetalDesktopIconUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalDesktopIconUI$TitleListener", "javax.swing.plaf.metal.MetalDesktopIconUI", "TitleListener", 0},
	{"javax.swing.plaf.metal.MetalDesktopIconUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalDesktopIconUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalDesktopIconUI",
	"javax.swing.plaf.basic.BasicDesktopIconUI",
	nullptr,
	_MetalDesktopIconUI_FieldInfo_,
	_MetalDesktopIconUI_MethodInfo_,
	nullptr,
	nullptr,
	_MetalDesktopIconUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalDesktopIconUI$TitleListener,javax.swing.plaf.metal.MetalDesktopIconUI$1"
};

$Object* allocate$MetalDesktopIconUI($Class* clazz) {
	return $of($alloc(MetalDesktopIconUI));
}

$ComponentUI* MetalDesktopIconUI::createUI($JComponent* c) {
	$init(MetalDesktopIconUI);
	return $new(MetalDesktopIconUI);
}

void MetalDesktopIconUI::init$() {
	$BasicDesktopIconUI::init$();
}

void MetalDesktopIconUI::installDefaults() {
	$BasicDesktopIconUI::installDefaults();
	$LookAndFeel::installColorsAndFont(this->desktopIcon, "DesktopIcon.background"_s, "DesktopIcon.foreground"_s, "DesktopIcon.font"_s);
	this->width = $UIManager::getInt("DesktopIcon.width"_s);
}

void MetalDesktopIconUI::installComponents() {
	$useLocalCurrentObjectStackCache();
	$set(this, frame, $nc(this->desktopIcon)->getInternalFrame());
	$var($Icon, icon, $nc(this->frame)->getFrameIcon());
	$var($String, title, $nc(this->frame)->getTitle());
	$set(this, button, $new($JButton, title, icon));
	$nc(this->button)->addActionListener($$new($MetalDesktopIconUI$1, this));
	$nc(this->button)->setFont($($nc(this->desktopIcon)->getFont()));
	$nc(this->button)->setBackground($($nc(this->desktopIcon)->getBackground()));
	$nc(this->button)->setForeground($($nc(this->desktopIcon)->getForeground()));
	int32_t buttonH = $nc($($nc(this->button)->getPreferredSize()))->height;
	int32_t var$0 = (buttonH / 3);
	int32_t var$1 = buttonH;
	$var($Color, var$2, static_cast<$Color*>($MetalLookAndFeel::getControlHighlight()));
	$var($Color, var$3, static_cast<$Color*>($MetalLookAndFeel::getControlDarkShadow()));
	$var($Icon, drag, $new($MetalBumps, var$0, var$1, var$2, var$3, $($MetalLookAndFeel::getControl())));
	$set(this, label, $new($JLabel, drag));
	$nc(this->label)->setBorder($$new($MatteBorder, 0, 2, 0, 1, $($nc(this->desktopIcon)->getBackground())));
	$nc(this->desktopIcon)->setLayout($$new($BorderLayout, 2, 0));
	$init($BorderLayout);
	$nc(this->desktopIcon)->add(static_cast<$Component*>(this->button), $of($BorderLayout::CENTER));
	$nc(this->desktopIcon)->add(static_cast<$Component*>(this->label), $of($BorderLayout::WEST));
}

void MetalDesktopIconUI::uninstallComponents() {
	$nc(this->desktopIcon)->setLayout(nullptr);
	$nc(this->desktopIcon)->remove(static_cast<$Component*>(this->label));
	$nc(this->desktopIcon)->remove(static_cast<$Component*>(this->button));
	$set(this, button, nullptr);
	$set(this, frame, nullptr);
}

void MetalDesktopIconUI::installListeners() {
	$BasicDesktopIconUI::installListeners();
	$nc($($nc(this->desktopIcon)->getInternalFrame()))->addPropertyChangeListener(($assignField(this, titleListener, $new($MetalDesktopIconUI$TitleListener, this))));
}

void MetalDesktopIconUI::uninstallListeners() {
	$nc($($nc(this->desktopIcon)->getInternalFrame()))->removePropertyChangeListener(this->titleListener);
	$set(this, titleListener, nullptr);
	$BasicDesktopIconUI::uninstallListeners();
}

$Dimension* MetalDesktopIconUI::getPreferredSize($JComponent* c) {
	return getMinimumSize(c);
}

$Dimension* MetalDesktopIconUI::getMinimumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	return $new($Dimension, this->width, $nc($($nc($($nc(this->desktopIcon)->getLayout()))->minimumLayoutSize(this->desktopIcon)))->height);
}

$Dimension* MetalDesktopIconUI::getMaximumSize($JComponent* c) {
	return getMinimumSize(c);
}

MetalDesktopIconUI::MetalDesktopIconUI() {
}

$Class* MetalDesktopIconUI::load$($String* name, bool initialize) {
	$loadClass(MetalDesktopIconUI, name, initialize, &_MetalDesktopIconUI_ClassInfo_, allocate$MetalDesktopIconUI);
	return class$;
}

$Class* MetalDesktopIconUI::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax