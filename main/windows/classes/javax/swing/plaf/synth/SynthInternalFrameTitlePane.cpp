#include <javax/swing/plaf/synth/SynthInternalFrameTitlePane.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JInternalFrame$JDesktopIcon.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JSeparator.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicInternalFrameTitlePane.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthInternalFrameTitlePane$1.h>
#include <javax/swing/plaf/synth/SynthInternalFrameTitlePane$JPopupMenuUIResource.h>
#include <javax/swing/plaf/synth/SynthInternalFrameTitlePane$SynthTitlePaneLayout.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef CENTER
#undef ENABLED
#undef FRAME_ICON_PROPERTY
#undef LEADING
#undef SCALE_SMOOTH
#undef SELECTED
#undef TEXT_FOREGROUND
#undef TRAILING

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $EventObject = ::java::util::EventObject;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JInternalFrame$JDesktopIcon = ::javax::swing::JInternalFrame$JDesktopIcon;
using $JMenuItem = ::javax::swing::JMenuItem;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JSeparator = ::javax::swing::JSeparator;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicInternalFrameTitlePane = ::javax::swing::plaf::basic::BasicInternalFrameTitlePane;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthInternalFrameTitlePane$1 = ::javax::swing::plaf::synth::SynthInternalFrameTitlePane$1;
using $SynthInternalFrameTitlePane$JPopupMenuUIResource = ::javax::swing::plaf::synth::SynthInternalFrameTitlePane$JPopupMenuUIResource;
using $SynthInternalFrameTitlePane$SynthTitlePaneLayout = ::javax::swing::plaf::synth::SynthInternalFrameTitlePane$SynthTitlePaneLayout;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthInternalFrameTitlePane_FieldInfo_[] = {
	{"systemPopupMenu", "Ljavax/swing/JPopupMenu;", nullptr, $PROTECTED, $field(SynthInternalFrameTitlePane, systemPopupMenu)},
	{"menuButton", "Ljavax/swing/JButton;", nullptr, $PROTECTED, $field(SynthInternalFrameTitlePane, menuButton)},
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthInternalFrameTitlePane, style)},
	{"titleSpacing", "I", nullptr, $PRIVATE, $field(SynthInternalFrameTitlePane, titleSpacing)},
	{"buttonSpacing", "I", nullptr, $PRIVATE, $field(SynthInternalFrameTitlePane, buttonSpacing)},
	{"titleAlignment", "I", nullptr, $PRIVATE, $field(SynthInternalFrameTitlePane, titleAlignment)},
	{}
};

$MethodInfo _SynthInternalFrameTitlePane_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JInternalFrame;)V", nullptr, $PUBLIC, $method(static_cast<void(SynthInternalFrameTitlePane::*)($JInternalFrame*)>(&SynthInternalFrameTitlePane::init$))},
	{"access$000", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$000))},
	{"access$100", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$100))},
	{"access$1000", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$1000))},
	{"access$1100", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$1100))},
	{"access$1200", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$1200))},
	{"access$1300", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$1300))},
	{"access$1400", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$1400))},
	{"access$1500", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$1500))},
	{"access$1600", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$1600))},
	{"access$1700", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$1700))},
	{"access$1800", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$1800))},
	{"access$1900", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$1900))},
	{"access$200", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$200))},
	{"access$2000", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$2000))},
	{"access$300", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$300))},
	{"access$400", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$400))},
	{"access$500", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$500))},
	{"access$600", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JButton;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JButton*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$600))},
	{"access$700", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$700))},
	{"access$800", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$800))},
	{"access$900", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)Ljavax/swing/JInternalFrame;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JInternalFrame*(*)(SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane::access$900))},
	{"addSubComponents", "()V", nullptr, $PROTECTED},
	{"addSystemMenuItems", "(Ljavax/swing/JPopupMenu;)V", nullptr, $PROTECTED},
	{"assembleSystemMenu", "()V", nullptr, $PROTECTED},
	{"createLayout", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createNoFocusButton", "()Ljavax/swing/JButton;", nullptr, $PRIVATE, $method(static_cast<$JButton*(SynthInternalFrameTitlePane::*)()>(&SynthInternalFrameTitlePane::createNoFocusButton))},
	{"getButtonMnemonic", "(Ljava/lang/String;)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*)>(&SynthInternalFrameTitlePane::getButtonMnemonic))},
	{"getComponentState", "(Ljavax/swing/JComponent;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthInternalFrameTitlePane::*)($JComponent*)>(&SynthInternalFrameTitlePane::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getRegion", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/Region;", nullptr, $PRIVATE, $method(static_cast<$Region*(SynthInternalFrameTitlePane::*)($JComponent*)>(&SynthInternalFrameTitlePane::getRegion))},
	{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"showSystemMenu", "()V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"updateMenuIcon", "()V", nullptr, $PRIVATE, $method(static_cast<void(SynthInternalFrameTitlePane::*)()>(&SynthInternalFrameTitlePane::updateMenuIcon))},
	{"updateStyle", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthInternalFrameTitlePane::*)($JComponent*)>(&SynthInternalFrameTitlePane::updateStyle))},
	{}
};

$InnerClassInfo _SynthInternalFrameTitlePane_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthInternalFrameTitlePane$SynthTitlePaneLayout", "javax.swing.plaf.synth.SynthInternalFrameTitlePane", "SynthTitlePaneLayout", 0},
	{"javax.swing.plaf.synth.SynthInternalFrameTitlePane$JPopupMenuUIResource", "javax.swing.plaf.synth.SynthInternalFrameTitlePane", "JPopupMenuUIResource", $PRIVATE | $STATIC},
	{"javax.swing.plaf.synth.SynthInternalFrameTitlePane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthInternalFrameTitlePane_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthInternalFrameTitlePane",
	"javax.swing.plaf.basic.BasicInternalFrameTitlePane",
	"javax.swing.plaf.synth.SynthUI,java.beans.PropertyChangeListener",
	_SynthInternalFrameTitlePane_FieldInfo_,
	_SynthInternalFrameTitlePane_MethodInfo_,
	nullptr,
	nullptr,
	_SynthInternalFrameTitlePane_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthInternalFrameTitlePane$SynthTitlePaneLayout,javax.swing.plaf.synth.SynthInternalFrameTitlePane$JPopupMenuUIResource,javax.swing.plaf.synth.SynthInternalFrameTitlePane$1"
};

$Object* allocate$SynthInternalFrameTitlePane($Class* clazz) {
	return $of($alloc(SynthInternalFrameTitlePane));
}

$String* SynthInternalFrameTitlePane::toString() {
	 return this->$BasicInternalFrameTitlePane::toString();
}

int32_t SynthInternalFrameTitlePane::hashCode() {
	 return this->$BasicInternalFrameTitlePane::hashCode();
}

bool SynthInternalFrameTitlePane::equals(Object$* arg0) {
	 return this->$BasicInternalFrameTitlePane::equals(arg0);
}

$Object* SynthInternalFrameTitlePane::clone() {
	 return this->$BasicInternalFrameTitlePane::clone();
}

void SynthInternalFrameTitlePane::finalize() {
	this->$BasicInternalFrameTitlePane::finalize();
}

$JButton* SynthInternalFrameTitlePane::access$2000(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->iconButton;
}

$JInternalFrame* SynthInternalFrameTitlePane::access$1900(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JButton* SynthInternalFrameTitlePane::access$1800(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->maxButton;
}

$JInternalFrame* SynthInternalFrameTitlePane::access$1700(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JButton* SynthInternalFrameTitlePane::access$1600(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->closeButton;
}

$JInternalFrame* SynthInternalFrameTitlePane::access$1500(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JButton* SynthInternalFrameTitlePane::access$1400(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->iconButton;
}

$JInternalFrame* SynthInternalFrameTitlePane::access$1300(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JButton* SynthInternalFrameTitlePane::access$1200(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->maxButton;
}

$JInternalFrame* SynthInternalFrameTitlePane::access$1100(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JButton* SynthInternalFrameTitlePane::access$1000(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->closeButton;
}

$JInternalFrame* SynthInternalFrameTitlePane::access$900(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* SynthInternalFrameTitlePane::access$800(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* SynthInternalFrameTitlePane::access$700(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JButton* SynthInternalFrameTitlePane::access$600(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->iconButton;
}

$JInternalFrame* SynthInternalFrameTitlePane::access$500(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JButton* SynthInternalFrameTitlePane::access$400(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->maxButton;
}

$JInternalFrame* SynthInternalFrameTitlePane::access$300(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JButton* SynthInternalFrameTitlePane::access$200(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->closeButton;
}

$JInternalFrame* SynthInternalFrameTitlePane::access$100(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->frame;
}

$JInternalFrame* SynthInternalFrameTitlePane::access$000(SynthInternalFrameTitlePane* x0) {
	$init(SynthInternalFrameTitlePane);
	return $nc(x0)->frame;
}

void SynthInternalFrameTitlePane::init$($JInternalFrame* f) {
	$BasicInternalFrameTitlePane::init$(f);
}

$String* SynthInternalFrameTitlePane::getUIClassID() {
	return "InternalFrameTitlePaneUI"_s;
}

$SynthContext* SynthInternalFrameTitlePane::getContext($JComponent* c) {
	return getContext(c, getComponentState(c));
}

$SynthContext* SynthInternalFrameTitlePane::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

$Region* SynthInternalFrameTitlePane::getRegion($JComponent* c) {
	return $SynthLookAndFeel::getRegion(c);
}

int32_t SynthInternalFrameTitlePane::getComponentState($JComponent* c) {
	if (this->frame != nullptr) {
		if ($nc(this->frame)->isSelected()) {
			return $SynthConstants::SELECTED;
		}
	}
	return $SynthLookAndFeel::getComponentState(c);
}

void SynthInternalFrameTitlePane::addSubComponents() {
	$nc(this->menuButton)->setName("InternalFrameTitlePane.menuButton"_s);
	$nc(this->iconButton)->setName("InternalFrameTitlePane.iconifyButton"_s);
	$nc(this->maxButton)->setName("InternalFrameTitlePane.maximizeButton"_s);
	$nc(this->closeButton)->setName("InternalFrameTitlePane.closeButton"_s);
	add(static_cast<$Component*>(this->menuButton));
	add(static_cast<$Component*>(this->iconButton));
	add(static_cast<$Component*>(this->maxButton));
	add(static_cast<$Component*>(this->closeButton));
}

void SynthInternalFrameTitlePane::installListeners() {
	$BasicInternalFrameTitlePane::installListeners();
	$nc(this->frame)->addPropertyChangeListener(this);
	addPropertyChangeListener(this);
}

void SynthInternalFrameTitlePane::uninstallListeners() {
	$nc(this->frame)->removePropertyChangeListener(this);
	removePropertyChangeListener(this);
	$BasicInternalFrameTitlePane::uninstallListeners();
}

void SynthInternalFrameTitlePane::updateStyle($JComponent* c) {
	$var($SynthContext, context, getContext(this, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		$set(this, maxIcon, $nc(this->style)->getIcon(context, "InternalFrameTitlePane.maximizeIcon"_s));
		$set(this, minIcon, $nc(this->style)->getIcon(context, "InternalFrameTitlePane.minimizeIcon"_s));
		$set(this, iconIcon, $nc(this->style)->getIcon(context, "InternalFrameTitlePane.iconifyIcon"_s));
		$set(this, closeIcon, $nc(this->style)->getIcon(context, "InternalFrameTitlePane.closeIcon"_s));
		this->titleSpacing = $nc(this->style)->getInt(context, "InternalFrameTitlePane.titleSpacing"_s, 2);
		this->buttonSpacing = $nc(this->style)->getInt(context, "InternalFrameTitlePane.buttonSpacing"_s, 2);
		$var($String, alignString, $cast($String, $nc(this->style)->get(context, "InternalFrameTitlePane.titleAlignment"_s)));
		this->titleAlignment = $SwingConstants::LEADING;
		if (alignString != nullptr) {
			$assign(alignString, alignString->toUpperCase());
			if (alignString->equals("TRAILING"_s)) {
				this->titleAlignment = $SwingConstants::TRAILING;
			} else if (alignString->equals("CENTER"_s)) {
				this->titleAlignment = $SwingConstants::CENTER;
			}
		}
	}
}

void SynthInternalFrameTitlePane::installDefaults() {
	$BasicInternalFrameTitlePane::installDefaults();
	updateStyle(this);
}

void SynthInternalFrameTitlePane::uninstallDefaults() {
	$var($SynthContext, context, getContext(this, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	$var($JInternalFrame$JDesktopIcon, di, $nc(this->frame)->getDesktopIcon());
	if (di != nullptr && di->getComponentPopupMenu() == this->systemPopupMenu) {
		di->setComponentPopupMenu(nullptr);
	}
	$BasicInternalFrameTitlePane::uninstallDefaults();
}

void SynthInternalFrameTitlePane::assembleSystemMenu() {
	$set(this, systemPopupMenu, $new($SynthInternalFrameTitlePane$JPopupMenuUIResource));
	addSystemMenuItems(this->systemPopupMenu);
	enableActions();
	$set(this, menuButton, createNoFocusButton());
	updateMenuIcon();
	$nc(this->menuButton)->addMouseListener($$new($SynthInternalFrameTitlePane$1, this));
	$var($JPopupMenu, p, $nc(this->frame)->getComponentPopupMenu());
	if (p == nullptr || $instanceOf($UIResource, p)) {
		$nc(this->frame)->setComponentPopupMenu(this->systemPopupMenu);
	}
	if ($nc(this->frame)->getDesktopIcon() != nullptr) {
		$assign(p, $nc($($nc(this->frame)->getDesktopIcon()))->getComponentPopupMenu());
		if (p == nullptr || $instanceOf($UIResource, p)) {
			$nc($($nc(this->frame)->getDesktopIcon()))->setComponentPopupMenu(this->systemPopupMenu);
		}
	}
	setInheritsPopupMenu(true);
}

void SynthInternalFrameTitlePane::addSystemMenuItems($JPopupMenu* menu) {
	$var($JMenuItem, mi, $nc(menu)->add(this->restoreAction));
	$nc(mi)->setMnemonic(getButtonMnemonic("restore"_s));
	$assign(mi, menu->add(this->moveAction));
	mi->setMnemonic(getButtonMnemonic("move"_s));
	$assign(mi, menu->add(this->sizeAction));
	mi->setMnemonic(getButtonMnemonic("size"_s));
	$assign(mi, menu->add(this->iconifyAction));
	mi->setMnemonic(getButtonMnemonic("minimize"_s));
	$assign(mi, menu->add(this->maximizeAction));
	mi->setMnemonic(getButtonMnemonic("maximize"_s));
	menu->add(static_cast<$Component*>($$new($JSeparator)));
	$assign(mi, menu->add(this->closeAction));
	mi->setMnemonic(getButtonMnemonic("close"_s));
}

int32_t SynthInternalFrameTitlePane::getButtonMnemonic($String* button) {
	$init(SynthInternalFrameTitlePane);
	try {
		return $Integer::parseInt($($UIManager::getString($$str({"InternalFrameTitlePane."_s, button, "Button.mnemonic"_s}))));
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, e, $catch());
		return -1;
	}
	$shouldNotReachHere();
}

void SynthInternalFrameTitlePane::showSystemMenu() {
	$var($Insets, insets, $nc(this->frame)->getInsets());
	if (!$nc(this->frame)->isIcon()) {
		$var($Component, var$0, static_cast<$Component*>(this->frame));
		int32_t var$1 = $nc(this->menuButton)->getX();
		int32_t var$2 = getY();
		$nc(this->systemPopupMenu)->show(var$0, var$1, var$2 + getHeight());
	} else {
		$var($Component, var$3, static_cast<$Component*>(this->menuButton));
		int32_t var$4 = getX() - $nc(insets)->left - insets->right;
		int32_t var$5 = getY();
		$nc(this->systemPopupMenu)->show(var$3, var$4, var$5 - $nc($($nc(this->systemPopupMenu)->getPreferredSize()))->height - insets->bottom - insets->top);
	}
}

void SynthInternalFrameTitlePane::paintComponent($Graphics* g) {
	$var($SynthContext, context, getContext(this));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = getWidth();
	$nc($($nc(context)->getPainter()))->paintInternalFrameTitlePaneBackground(var$0, var$1, 0, 0, var$2, getHeight());
	paint(context, g);
}

void SynthInternalFrameTitlePane::paint($SynthContext* context, $Graphics* g) {
	$var($String, title, $nc(this->frame)->getTitle());
	if (title != nullptr) {
		$var($SynthStyle, style, $nc(context)->getStyle());
		$init($ColorType);
		$nc(g)->setColor($($nc(style)->getColor(context, $ColorType::TEXT_FOREGROUND)));
		g->setFont($($nc(style)->getFont(context)));
		$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(static_cast<$JComponent*>(this->frame), g));
		int32_t var$2 = getHeight();
		int32_t var$1 = var$2 + $nc(fm)->getAscent();
		int32_t var$0 = var$1 - fm->getLeading();
		int32_t baseline = (var$0 - fm->getDescent()) / 2;
		$var($JButton, lastButton, nullptr);
		if ($nc(this->frame)->isIconifiable()) {
			$assign(lastButton, this->iconButton);
		} else if ($nc(this->frame)->isMaximizable()) {
			$assign(lastButton, this->maxButton);
		} else if ($nc(this->frame)->isClosable()) {
			$assign(lastButton, this->closeButton);
		}
		int32_t maxX = 0;
		int32_t minX = 0;
		bool ltr = $SynthLookAndFeel::isLeftToRight(this->frame);
		int32_t titleAlignment = this->titleAlignment;
		if (ltr) {
			if (lastButton != nullptr) {
				maxX = lastButton->getX() - this->titleSpacing;
			} else {
				int32_t var$3 = $nc(this->frame)->getWidth();
				maxX = var$3 - $nc($($nc(this->frame)->getInsets()))->right - this->titleSpacing;
			}
			int32_t var$4 = $nc(this->menuButton)->getX();
			minX = var$4 + $nc(this->menuButton)->getWidth() + this->titleSpacing;
		} else {
			if (lastButton != nullptr) {
				int32_t var$5 = lastButton->getX();
				minX = var$5 + lastButton->getWidth() + this->titleSpacing;
			} else {
				minX = $nc($($nc(this->frame)->getInsets()))->left + this->titleSpacing;
			}
			maxX = $nc(this->menuButton)->getX() - this->titleSpacing;
			if (titleAlignment == $SwingConstants::LEADING) {
				titleAlignment = $SwingConstants::TRAILING;
			} else if (titleAlignment == $SwingConstants::TRAILING) {
				titleAlignment = $SwingConstants::LEADING;
			}
		}
		$var($String, clippedTitle, getTitle(title, fm, maxX - minX));
		if (clippedTitle == title) {
			if (titleAlignment == $SwingConstants::TRAILING) {
				minX = maxX - $nc($($nc(style)->getGraphicsUtils(context)))->computeStringWidth(context, $(g->getFont()), fm, title);
			} else if (titleAlignment == $SwingConstants::CENTER) {
				int32_t width = $nc($($nc(style)->getGraphicsUtils(context)))->computeStringWidth(context, $(g->getFont()), fm, title);
				minX = $Math::max(minX, (getWidth() - width) / 2);
				minX = $Math::min(maxX - width, minX);
			}
		}
		$nc($($nc(style)->getGraphicsUtils(context)))->paintText(context, g, clippedTitle, minX, baseline - fm->getAscent(), -1);
	}
}

void SynthInternalFrameTitlePane::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintInternalFrameTitlePaneBorder(context, g, x, y, w, h);
}

$LayoutManager* SynthInternalFrameTitlePane::createLayout() {
	$var($SynthContext, context, getContext(this));
	$var($LayoutManager, lm, $cast($LayoutManager, $nc(this->style)->get(context, "InternalFrameTitlePane.titlePaneLayout"_s)));
	return (lm != nullptr) ? lm : static_cast<$LayoutManager*>($new($SynthInternalFrameTitlePane$SynthTitlePaneLayout, this));
}

void SynthInternalFrameTitlePane::propertyChange($PropertyChangeEvent* evt) {
	if ($equals($nc(evt)->getSource(), this)) {
		if ($SynthLookAndFeel::shouldUpdateStyle(evt)) {
			updateStyle(this);
		}
	} else {
		$init($JInternalFrame);
		if (evt->getPropertyName() == $JInternalFrame::FRAME_ICON_PROPERTY) {
			updateMenuIcon();
		}
	}
}

void SynthInternalFrameTitlePane::updateMenuIcon() {
	$var($Icon, frameIcon, $nc(this->frame)->getFrameIcon());
	$var($SynthContext, context, getContext(this));
	if (frameIcon != nullptr) {
		$var($Dimension, maxSize, $cast($Dimension, $nc($($nc(context)->getStyle()))->get(context, "InternalFrameTitlePane.maxFrameIconSize"_s)));
		int32_t maxWidth = 16;
		int32_t maxHeight = 16;
		if (maxSize != nullptr) {
			maxWidth = maxSize->width;
			maxHeight = maxSize->height;
		}
		bool var$0 = frameIcon->getIconWidth() > maxWidth;
		if ((var$0 || frameIcon->getIconHeight() > maxHeight) && ($instanceOf($ImageIcon, frameIcon))) {
			$assign(frameIcon, $new($ImageIcon, $($nc($($nc(($cast($ImageIcon, frameIcon)))->getImage()))->getScaledInstance(maxWidth, maxHeight, $Image::SCALE_SMOOTH))));
		}
	}
	$nc(this->menuButton)->setIcon(frameIcon);
}

$JButton* SynthInternalFrameTitlePane::createNoFocusButton() {
	$var($JButton, button, $new($JButton));
	button->setFocusable(false);
	button->setMargin($$new($Insets, 0, 0, 0, 0));
	return button;
}

SynthInternalFrameTitlePane::SynthInternalFrameTitlePane() {
}

$Class* SynthInternalFrameTitlePane::load$($String* name, bool initialize) {
	$loadClass(SynthInternalFrameTitlePane, name, initialize, &_SynthInternalFrameTitlePane_ClassInfo_, allocate$SynthInternalFrameTitlePane);
	return class$;
}

$Class* SynthInternalFrameTitlePane::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax