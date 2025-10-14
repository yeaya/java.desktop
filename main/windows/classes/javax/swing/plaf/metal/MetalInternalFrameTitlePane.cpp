#include <javax/swing/plaf/metal/MetalInternalFrameTitlePane.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$PropertyChangeHandler.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane$TitlePaneLayout.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/metal/MetalBumps.h>
#include <javax/swing/plaf/metal/MetalInternalFrameTitlePane$MetalPropertyChangeHandler.h>
#include <javax/swing/plaf/metal/MetalInternalFrameTitlePane$MetalTitlePaneLayout.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ERROR_MESSAGE
#undef FALSE
#undef INFORMATION_MESSAGE
#undef PLAIN_MESSAGE
#undef QUESTION_MESSAGE
#undef TRUE
#undef WARNING_MESSAGE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JMenu = ::javax::swing::JMenu;
using $JOptionPane = ::javax::swing::JOptionPane;
using $UIManager = ::javax::swing::UIManager;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $Border = ::javax::swing::border::Border;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $BasicInternalFrameTitlePane$PropertyChangeHandler = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$PropertyChangeHandler;
using $BasicInternalFrameTitlePane$TitlePaneLayout = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane$TitlePaneLayout;
using $MetalBumps = ::javax::swing::plaf::metal::MetalBumps;
using $MetalInternalFrameTitlePane$MetalPropertyChangeHandler = ::javax::swing::plaf::metal::MetalInternalFrameTitlePane$MetalPropertyChangeHandler;
using $MetalInternalFrameTitlePane$MetalTitlePaneLayout = ::javax::swing::plaf::metal::MetalInternalFrameTitlePane$MetalTitlePaneLayout;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils = ::javax::swing::plaf::metal::MetalUtils;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalInternalFrameTitlePane_FieldInfo_[] = {
	{"isPalette", "Z", nullptr, $PROTECTED, $field(MetalInternalFrameTitlePane, isPalette)},
	{"paletteCloseIcon", "Ljavax/swing/Icon;", nullptr, $PROTECTED, $field(MetalInternalFrameTitlePane, paletteCloseIcon)},
	{"paletteTitleHeight", "I", nullptr, $PROTECTED, $field(MetalInternalFrameTitlePane, paletteTitleHeight)},
	{"handyEmptyBorder", "Ljavax/swing/border/Border;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MetalInternalFrameTitlePane, handyEmptyBorder)},
	{"selectedBackgroundKey", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalInternalFrameTitlePane, selectedBackgroundKey)},
	{"selectedForegroundKey", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalInternalFrameTitlePane, selectedForegroundKey)},
	{"selectedShadowKey", "Ljava/lang/String;", nullptr, $PRIVATE, $field(MetalInternalFrameTitlePane, selectedShadowKey)},
	{"wasClosable", "Z", nullptr, $PRIVATE, $field(MetalInternalFrameTitlePane, wasClosable)},
	{"buttonsWidth", "I", nullptr, 0, $field(MetalInternalFrameTitlePane, buttonsWidth)},
	{"activeBumps", "Ljavax/swing/plaf/metal/MetalBumps;", nullptr, 0, $field(MetalInternalFrameTitlePane, activeBumps)},
	{"inactiveBumps", "Ljavax/swing/plaf/metal/MetalBumps;", nullptr, 0, $field(MetalInternalFrameTitlePane, inactiveBumps)},
	{"paletteBumps", "Ljavax/swing/plaf/metal/MetalBumps;", nullptr, 0, $field(MetalInternalFrameTitlePane, paletteBumps)},
	{"activeBumpsHighlight", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MetalInternalFrameTitlePane, activeBumpsHighlight)},
	{"activeBumpsShadow", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(MetalInternalFrameTitlePane, activeBumpsShadow)},
	{}
};

$MethodInfo _MetalInternalFrameTitlePane_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(MetalInternalFrameTitlePane::*)($JInternalFrame*)>(&MetalInternalFrameTitlePane::init$))},
	{"access$000", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$000))},
	{"access$100", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$100))},
	{"access$1000", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$1000))},
	{"access$1100", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$1100))},
	{"access$1200", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$1200))},
	{"access$1300", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$1300))},
	{"access$1400", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$1400))},
	{"access$1500", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$1500))},
	{"access$1600", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$1600))},
	{"access$1700", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$1700))},
	{"access$1800", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$1800))},
	{"access$1900", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$1900))},
	{"access$200", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$200))},
	{"access$2000", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$2000))},
	{"access$2100", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$2100))},
	{"access$2200", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$2200))},
	{"access$2300", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$2300))},
	{"access$2400", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$2400))},
	{"access$2500", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$2500))},
	{"access$2600", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$2600))},
	{"access$2700", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$2700))},
	{"access$2800", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$2800))},
	{"access$300", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$300))},
	{"access$400", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$400))},
	{"access$500", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$500))},
	{"access$600", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$600))},
	{"access$700", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$700))},
	{"access$800", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$800))},
	{"access$900", "(Ljavax/swing/plaf/metal/MetalInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(MetalInternalFrameTitlePane*)>(&MetalInternalFrameTitlePane::access$900))},
	{"addNotify", "()V", nullptr, $PUBLIC},
	{"addSubComponents", "()V", nullptr, $PROTECTED},
	{"addSystemMenuItems", "(Ljavax/swing/JMenu;)V", nullptr, $PROTECTED},
	{"assembleSystemMenu", "()V", nullptr, $PROTECTED},
	{"createButtons", "()V", nullptr, $PROTECTED},
	{"createLayout", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintPalette", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"setPalette", "(Z)V", nullptr, $PUBLIC},
	{"showSystemMenu", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"updateOptionPaneState", "()V", nullptr, $PRIVATE, $method(static_cast<void(MetalInternalFrameTitlePane::*)()>(&MetalInternalFrameTitlePane::updateOptionPaneState))},
	{}
};

$InnerClassInfo _MetalInternalFrameTitlePane_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalInternalFrameTitlePane$MetalTitlePaneLayout", "javax.swing.plaf.metal.MetalInternalFrameTitlePane", "MetalTitlePaneLayout", 0},
	{"javax.swing.plaf.metal.MetalInternalFrameTitlePane$MetalPropertyChangeHandler", "javax.swing.plaf.metal.MetalInternalFrameTitlePane", "MetalPropertyChangeHandler", 0},
	{}
};

$ClassInfo _MetalInternalFrameTitlePane_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalInternalFrameTitlePane",
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane",
	nullptr,
	_MetalInternalFrameTitlePane_FieldInfo_,
	_MetalInternalFrameTitlePane_MethodInfo_,
	nullptr,
	nullptr,
	_MetalInternalFrameTitlePane_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalInternalFrameTitlePane$MetalTitlePaneLayout,javax.swing.plaf.metal.MetalInternalFrameTitlePane$MetalPropertyChangeHandler"
};

$Object* allocate$MetalInternalFrameTitlePane($Class* clazz) {
	return $of($alloc(MetalInternalFrameTitlePane));
}

$Border* MetalInternalFrameTitlePane::handyEmptyBorder = nullptr;

$JButton* MetalInternalFrameTitlePane::access$2800(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->iconButton;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$2700(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$2600(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$2500(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JButton* MetalInternalFrameTitlePane::access$2400(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->maxButton;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$2300(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$2200(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JButton* MetalInternalFrameTitlePane::access$2100(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->closeButton;
}

$JButton* MetalInternalFrameTitlePane::access$2000(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->closeButton;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$1900(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JButton* MetalInternalFrameTitlePane::access$1800(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->closeButton;
}

$JButton* MetalInternalFrameTitlePane::access$1700(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->closeButton;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$1600(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$1500(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$1400(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$1300(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$1200(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$1100(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$1000(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$900(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$800(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$700(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$600(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$500(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$400(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* MetalInternalFrameTitlePane::access$300(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JButton* MetalInternalFrameTitlePane::access$200(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->maxButton;
}

$JButton* MetalInternalFrameTitlePane::access$100(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->closeButton;
}

$JButton* MetalInternalFrameTitlePane::access$000(MetalInternalFrameTitlePane* x0) {
	$init(MetalInternalFrameTitlePane);
	return $nc(x0)->iconButton;
}

void MetalInternalFrameTitlePane::init$($JInternalFrame* f) {
	$BasicInternalFrameTitlePane::init$(f);
	this->isPalette = false;
	this->buttonsWidth = 0;
	$var($Color, var$0, static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlHighlight()));
	$var($Color, var$1, static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlDarkShadow()));
	$set(this, activeBumps, $new($MetalBumps, 0, 0, var$0, var$1, ($UIManager::get("InternalFrame.activeTitleGradient"_s) != nullptr) ? ($Color*)nullptr : $(static_cast<$Color*>($MetalLookAndFeel::getPrimaryControl()))));
	$var($Color, var$2, static_cast<$Color*>($MetalLookAndFeel::getControlHighlight()));
	$var($Color, var$3, static_cast<$Color*>($MetalLookAndFeel::getControlDarkShadow()));
	$set(this, inactiveBumps, $new($MetalBumps, 0, 0, var$2, var$3, ($UIManager::get("InternalFrame.inactiveTitleGradient"_s) != nullptr) ? ($Color*)nullptr : $(static_cast<$Color*>($MetalLookAndFeel::getControl()))));
	$set(this, activeBumpsHighlight, $MetalLookAndFeel::getPrimaryControlHighlight());
	$set(this, activeBumpsShadow, $MetalLookAndFeel::getPrimaryControlDarkShadow());
}

void MetalInternalFrameTitlePane::addNotify() {
	$BasicInternalFrameTitlePane::addNotify();
	updateOptionPaneState();
}

void MetalInternalFrameTitlePane::installDefaults() {
	$BasicInternalFrameTitlePane::installDefaults();
	setFont($($UIManager::getFont("InternalFrame.titleFont"_s)));
	this->paletteTitleHeight = $UIManager::getInt("InternalFrame.paletteTitleHeight"_s);
	$set(this, paletteCloseIcon, $UIManager::getIcon("InternalFrame.paletteCloseIcon"_s));
	this->wasClosable = $nc(this->frame)->isClosable();
	$set(this, selectedForegroundKey, ($assignField(this, selectedBackgroundKey, nullptr)));
	if ($MetalLookAndFeel::usingOcean()) {
		setOpaque(true);
	}
}

void MetalInternalFrameTitlePane::uninstallDefaults() {
	$BasicInternalFrameTitlePane::uninstallDefaults();
	if (this->wasClosable != $nc(this->frame)->isClosable()) {
		$nc(this->frame)->setClosable(this->wasClosable);
	}
}

void MetalInternalFrameTitlePane::createButtons() {
	$BasicInternalFrameTitlePane::createButtons();
	$init($Boolean);
	$var($Boolean, paintActive, $nc(this->frame)->isSelected() ? $Boolean::TRUE : $Boolean::FALSE);
	$nc(this->iconButton)->putClientProperty("paintActive"_s, paintActive);
	$nc(this->iconButton)->setBorder(MetalInternalFrameTitlePane::handyEmptyBorder);
	$nc(this->maxButton)->putClientProperty("paintActive"_s, paintActive);
	$nc(this->maxButton)->setBorder(MetalInternalFrameTitlePane::handyEmptyBorder);
	$nc(this->closeButton)->putClientProperty("paintActive"_s, paintActive);
	$nc(this->closeButton)->setBorder(MetalInternalFrameTitlePane::handyEmptyBorder);
	$nc(this->closeButton)->setBackground($($MetalLookAndFeel::getPrimaryControlShadow()));
	if ($MetalLookAndFeel::usingOcean()) {
		$nc(this->iconButton)->setContentAreaFilled(false);
		$nc(this->maxButton)->setContentAreaFilled(false);
		$nc(this->closeButton)->setContentAreaFilled(false);
	}
}

void MetalInternalFrameTitlePane::assembleSystemMenu() {
}

void MetalInternalFrameTitlePane::addSystemMenuItems($JMenu* systemMenu) {
}

void MetalInternalFrameTitlePane::showSystemMenu() {
}

void MetalInternalFrameTitlePane::addSubComponents() {
	add(static_cast<$Component*>(this->iconButton));
	add(static_cast<$Component*>(this->maxButton));
	add(static_cast<$Component*>(this->closeButton));
}

$PropertyChangeListener* MetalInternalFrameTitlePane::createPropertyChangeListener() {
	return $new($MetalInternalFrameTitlePane$MetalPropertyChangeHandler, this);
}

$LayoutManager* MetalInternalFrameTitlePane::createLayout() {
	return $new($MetalInternalFrameTitlePane$MetalTitlePaneLayout, this);
}

void MetalInternalFrameTitlePane::paintPalette($Graphics* g) {
	bool leftToRight = $MetalUtils::isLeftToRight(this->frame);
	int32_t width = getWidth();
	int32_t height = getHeight();
	if (this->paletteBumps == nullptr) {
		$var($Color, var$0, static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlHighlight()));
		$var($Color, var$1, static_cast<$Color*>($MetalLookAndFeel::getPrimaryControlInfo()));
		$set(this, paletteBumps, $new($MetalBumps, 0, 0, var$0, var$1, $($MetalLookAndFeel::getPrimaryControlShadow())));
	}
	$var($Color, background, $MetalLookAndFeel::getPrimaryControlShadow());
	$var($Color, darkShadow, $MetalLookAndFeel::getPrimaryControlDarkShadow());
	$nc(g)->setColor(background);
	g->fillRect(0, 0, width, height);
	g->setColor(darkShadow);
	g->drawLine(0, height - 1, width, height - 1);
	int32_t xOffset = leftToRight ? 4 : this->buttonsWidth + 4;
	int32_t bumpLength = width - this->buttonsWidth - 2 * 4;
	int32_t bumpHeight = getHeight() - 4;
	$nc(this->paletteBumps)->setBumpArea(bumpLength, bumpHeight);
	$nc(this->paletteBumps)->paintIcon(this, g, xOffset, 2);
}

void MetalInternalFrameTitlePane::paintComponent($Graphics* g) {
	if (this->isPalette) {
		paintPalette(g);
		return;
	}
	bool leftToRight = $MetalUtils::isLeftToRight(this->frame);
	bool isSelected = $nc(this->frame)->isSelected();
	int32_t width = getWidth();
	int32_t height = getHeight();
	$var($Color, background, nullptr);
	$var($Color, foreground, nullptr);
	$var($Color, shadow, nullptr);
	$var($MetalBumps, bumps, nullptr);
	$var($String, gradientKey, nullptr);
	if (isSelected) {
		if (!$MetalLookAndFeel::usingOcean()) {
			$nc(this->closeButton)->setContentAreaFilled(true);
			$nc(this->maxButton)->setContentAreaFilled(true);
			$nc(this->iconButton)->setContentAreaFilled(true);
		}
		if (this->selectedBackgroundKey != nullptr) {
			$assign(background, $UIManager::getColor(this->selectedBackgroundKey));
		}
		if (background == nullptr) {
			$assign(background, $MetalLookAndFeel::getWindowTitleBackground());
		}
		if (this->selectedForegroundKey != nullptr) {
			$assign(foreground, $UIManager::getColor(this->selectedForegroundKey));
		}
		if (this->selectedShadowKey != nullptr) {
			$assign(shadow, $UIManager::getColor(this->selectedShadowKey));
		}
		if (shadow == nullptr) {
			$assign(shadow, $MetalLookAndFeel::getPrimaryControlDarkShadow());
		}
		if (foreground == nullptr) {
			$assign(foreground, $MetalLookAndFeel::getWindowTitleForeground());
		}
		$nc(this->activeBumps)->setBumpColors(this->activeBumpsHighlight, this->activeBumpsShadow, $UIManager::get("InternalFrame.activeTitleGradient"_s) != nullptr ? ($Color*)nullptr : background);
		$assign(bumps, this->activeBumps);
		$assign(gradientKey, "InternalFrame.activeTitleGradient"_s);
	} else {
		if (!$MetalLookAndFeel::usingOcean()) {
			$nc(this->closeButton)->setContentAreaFilled(false);
			$nc(this->maxButton)->setContentAreaFilled(false);
			$nc(this->iconButton)->setContentAreaFilled(false);
		}
		$assign(background, $MetalLookAndFeel::getWindowTitleInactiveBackground());
		$assign(foreground, $MetalLookAndFeel::getWindowTitleInactiveForeground());
		$assign(shadow, $MetalLookAndFeel::getControlDarkShadow());
		$assign(bumps, this->inactiveBumps);
		$assign(gradientKey, "InternalFrame.inactiveTitleGradient"_s);
	}
	if (!$MetalUtils::drawGradient(this, g, gradientKey, 0, 0, width, height, true)) {
		$nc(g)->setColor(background);
		g->fillRect(0, 0, width, height);
	}
	$nc(g)->setColor(shadow);
	g->drawLine(0, height - 1, width, height - 1);
	g->drawLine(0, 0, 0, 0);
	g->drawLine(width - 1, 0, width - 1, 0);
	int32_t titleLength = 0;
	int32_t xOffset = leftToRight ? 5 : width - 5;
	$var($String, frameTitle, $nc(this->frame)->getTitle());
	$var($Icon, icon, $nc(this->frame)->getFrameIcon());
	if (icon != nullptr) {
		if (!leftToRight) {
			xOffset -= icon->getIconWidth();
		}
		int32_t iconY = ((height / 2) - (icon->getIconHeight() / 2));
		icon->paintIcon(this->frame, g, xOffset, iconY);
		xOffset += leftToRight ? icon->getIconWidth() + 5 : -5;
	}
	if (frameTitle != nullptr) {
		$var($Font, f, getFont());
		g->setFont(f);
		$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(this->frame, g, f));
		int32_t fHeight = $nc(fm)->getHeight();
		g->setColor(foreground);
		int32_t var$0 = ((height - fm->getHeight()) / 2);
		int32_t yOffset = var$0 + fm->getAscent();
		$var($Rectangle, rect, $new($Rectangle, 0, 0, 0, 0));
		if ($nc(this->frame)->isIconifiable()) {
			$assign(rect, $nc(this->iconButton)->getBounds());
		} else if ($nc(this->frame)->isMaximizable()) {
			$assign(rect, $nc(this->maxButton)->getBounds());
		} else if ($nc(this->frame)->isClosable()) {
			$assign(rect, $nc(this->closeButton)->getBounds());
		}
		int32_t titleW = 0;
		if (leftToRight) {
			if (rect->x == 0) {
				int32_t var$1 = $nc(this->frame)->getWidth();
				rect->x = var$1 - $nc($($nc(this->frame)->getInsets()))->right - 2;
			}
			titleW = rect->x - xOffset - 4;
			$assign(frameTitle, getTitle(frameTitle, fm, titleW));
		} else {
			titleW = xOffset - rect->x - rect->width - 4;
			$assign(frameTitle, getTitle(frameTitle, fm, titleW));
			xOffset -= $SwingUtilities2::stringWidth(this->frame, fm, frameTitle);
		}
		titleLength = $SwingUtilities2::stringWidth(this->frame, fm, frameTitle);
		$SwingUtilities2::drawString(static_cast<$JComponent*>(this->frame), g, frameTitle, xOffset, yOffset);
		xOffset += leftToRight ? titleLength + 5 : -5;
	}
	int32_t bumpXOffset = 0;
	int32_t bumpLength = 0;
	if (leftToRight) {
		bumpLength = width - this->buttonsWidth - xOffset - 5;
		bumpXOffset = xOffset;
	} else {
		bumpLength = xOffset - this->buttonsWidth - 5;
		bumpXOffset = this->buttonsWidth + 5;
	}
	int32_t bumpYOffset = 3;
	int32_t bumpHeight = getHeight() - (2 * bumpYOffset);
	$nc(bumps)->setBumpArea(bumpLength, bumpHeight);
	bumps->paintIcon(this, g, bumpXOffset, bumpYOffset);
}

void MetalInternalFrameTitlePane::setPalette(bool b) {
	this->isPalette = b;
	if (this->isPalette) {
		$nc(this->closeButton)->setIcon(this->paletteCloseIcon);
		if ($nc(this->frame)->isMaximizable()) {
			remove(static_cast<$Component*>(this->maxButton));
		}
		if ($nc(this->frame)->isIconifiable()) {
			remove(static_cast<$Component*>(this->iconButton));
		}
	} else {
		$nc(this->closeButton)->setIcon(this->closeIcon);
		if ($nc(this->frame)->isMaximizable()) {
			add(static_cast<$Component*>(this->maxButton));
		}
		if ($nc(this->frame)->isIconifiable()) {
			add(static_cast<$Component*>(this->iconButton));
		}
	}
	revalidate();
	repaint();
}

void MetalInternalFrameTitlePane::updateOptionPaneState() {
	int32_t type = -2;
	bool closable = this->wasClosable;
	$var($Object, obj, $nc(this->frame)->getClientProperty("JInternalFrame.messageType"_s));
	if (obj == nullptr) {
		return;
	}
	if ($instanceOf($Integer, obj)) {
		type = $nc(($cast($Integer, obj)))->intValue();
	}
	switch (type) {
	case $JOptionPane::ERROR_MESSAGE:
		{
			$set(this, selectedBackgroundKey, "OptionPane.errorDialog.titlePane.background"_s);
			$set(this, selectedForegroundKey, "OptionPane.errorDialog.titlePane.foreground"_s);
			$set(this, selectedShadowKey, "OptionPane.errorDialog.titlePane.shadow"_s);
			closable = false;
			break;
		}
	case $JOptionPane::QUESTION_MESSAGE:
		{
			$set(this, selectedBackgroundKey, "OptionPane.questionDialog.titlePane.background"_s);
			$set(this, selectedForegroundKey, "OptionPane.questionDialog.titlePane.foreground"_s);
			$set(this, selectedShadowKey, "OptionPane.questionDialog.titlePane.shadow"_s);
			closable = false;
			break;
		}
	case $JOptionPane::WARNING_MESSAGE:
		{
			$set(this, selectedBackgroundKey, "OptionPane.warningDialog.titlePane.background"_s);
			$set(this, selectedForegroundKey, "OptionPane.warningDialog.titlePane.foreground"_s);
			$set(this, selectedShadowKey, "OptionPane.warningDialog.titlePane.shadow"_s);
			closable = false;
			break;
		}
	case $JOptionPane::INFORMATION_MESSAGE:
		{}
	case $JOptionPane::PLAIN_MESSAGE:
		{
			$set(this, selectedBackgroundKey, ($assignField(this, selectedForegroundKey, ($assignField(this, selectedShadowKey, nullptr)))));
			closable = false;
			break;
		}
	default:
		{
			$set(this, selectedBackgroundKey, ($assignField(this, selectedForegroundKey, ($assignField(this, selectedShadowKey, nullptr)))));
			break;
		}
	}
	if (closable != $nc(this->frame)->isClosable()) {
		$nc(this->frame)->setClosable(closable);
	}
}

void clinit$MetalInternalFrameTitlePane($Class* class$) {
	$assignStatic(MetalInternalFrameTitlePane::handyEmptyBorder, $new($EmptyBorder, 0, 0, 0, 0));
}

MetalInternalFrameTitlePane::MetalInternalFrameTitlePane() {
}

$Class* MetalInternalFrameTitlePane::load$($String* name, bool initialize) {
	$loadClass(MetalInternalFrameTitlePane, name, initialize, &_MetalInternalFrameTitlePane_ClassInfo_, clinit$MetalInternalFrameTitlePane, allocate$MetalInternalFrameTitlePane);
	return class$;
}

$Class* MetalInternalFrameTitlePane::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax