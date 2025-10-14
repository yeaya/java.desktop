#include <javax/swing/plaf/synth/SynthTabbedPaneUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/BorderFactory.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabbedPaneLayout.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthArrowButton.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthTabbedPaneUI$1.h>
#include <javax/swing/plaf/synth/SynthTabbedPaneUI$2.h>
#include <javax/swing/plaf/synth/SynthTabbedPaneUI$SynthScrollableTabButton.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <javax/swing/text/View.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef BOTTOM
#undef CENTER
#undef DISABLED
#undef ENABLED
#undef FOCUSED
#undef LEADING
#undef LEFT
#undef MAX_VALUE
#undef MOUSE_OVER
#undef PRESSED
#undef RIGHT
#undef SCROLL_TAB_LAYOUT
#undef SELECTED
#undef TABBED_PANE_CONTENT
#undef TABBED_PANE_TAB
#undef TABBED_PANE_TAB_AREA
#undef TEXT_FOREGROUND
#undef TOP
#undef X_AXIS

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $BorderFactory = ::javax::swing::BorderFactory;
using $Icon = ::javax::swing::Icon;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;
using $BasicTabbedPaneUI = ::javax::swing::plaf::basic::BasicTabbedPaneUI;
using $BasicTabbedPaneUI$TabbedPaneLayout = ::javax::swing::plaf::basic::BasicTabbedPaneUI$TabbedPaneLayout;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthArrowButton = ::javax::swing::plaf::synth::SynthArrowButton;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthTabbedPaneUI$1 = ::javax::swing::plaf::synth::SynthTabbedPaneUI$1;
using $SynthTabbedPaneUI$2 = ::javax::swing::plaf::synth::SynthTabbedPaneUI$2;
using $SynthTabbedPaneUI$SynthScrollableTabButton = ::javax::swing::plaf::synth::SynthTabbedPaneUI$SynthScrollableTabButton;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $View = ::javax::swing::text::View;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthTabbedPaneUI_FieldInfo_[] = {
	{"tabOverlap", "I", nullptr, $PRIVATE, $field(SynthTabbedPaneUI, tabOverlap)},
	{"extendTabsToBase", "Z", nullptr, $PRIVATE, $field(SynthTabbedPaneUI, extendTabsToBase)},
	{"tabAreaContext", "Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $field(SynthTabbedPaneUI, tabAreaContext)},
	{"tabContext", "Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $field(SynthTabbedPaneUI, tabContext)},
	{"tabContentContext", "Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $field(SynthTabbedPaneUI, tabContentContext)},
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthTabbedPaneUI, style)},
	{"tabStyle", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthTabbedPaneUI, tabStyle)},
	{"tabAreaStyle", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthTabbedPaneUI, tabAreaStyle)},
	{"tabContentStyle", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthTabbedPaneUI, tabContentStyle)},
	{"textRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(SynthTabbedPaneUI, textRect)},
	{"iconRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(SynthTabbedPaneUI, iconRect)},
	{"tabAreaBounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(SynthTabbedPaneUI, tabAreaBounds)},
	{"tabAreaStatesMatchSelectedTab", "Z", nullptr, $PRIVATE, $field(SynthTabbedPaneUI, tabAreaStatesMatchSelectedTab)},
	{"nudgeSelectedLabel", "Z", nullptr, $PRIVATE, $field(SynthTabbedPaneUI, nudgeSelectedLabel)},
	{"selectedTabIsPressed", "Z", nullptr, $PRIVATE, $field(SynthTabbedPaneUI, selectedTabIsPressed)},
	{}
};

$MethodInfo _SynthTabbedPaneUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthTabbedPaneUI::*)()>(&SynthTabbedPaneUI::init$))},
	{"access$000", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)Ljavax/swing/JTabbedPane;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTabbedPane*(*)(SynthTabbedPaneUI*)>(&SynthTabbedPaneUI::access$000))},
	{"access$100", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)Ljavax/swing/JTabbedPane;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTabbedPane*(*)(SynthTabbedPaneUI*)>(&SynthTabbedPaneUI::access$100))},
	{"access$1000", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)[I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$ints*(*)(SynthTabbedPaneUI*)>(&SynthTabbedPaneUI::access$1000))},
	{"access$1100", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(SynthTabbedPaneUI*)>(&SynthTabbedPaneUI::access$1100))},
	{"access$1200", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)Ljavax/swing/JTabbedPane;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTabbedPane*(*)(SynthTabbedPaneUI*)>(&SynthTabbedPaneUI::access$1200))},
	{"access$1300", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)[Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$RectangleArray*(*)(SynthTabbedPaneUI*)>(&SynthTabbedPaneUI::access$1300))},
	{"access$1400", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)[Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$RectangleArray*(*)(SynthTabbedPaneUI*)>(&SynthTabbedPaneUI::access$1400))},
	{"access$1500", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)[Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$RectangleArray*(*)(SynthTabbedPaneUI*)>(&SynthTabbedPaneUI::access$1500))},
	{"access$1600", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)[Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$RectangleArray*(*)(SynthTabbedPaneUI*)>(&SynthTabbedPaneUI::access$1600))},
	{"access$200", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)Ljavax/swing/JTabbedPane;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTabbedPane*(*)(SynthTabbedPaneUI*)>(&SynthTabbedPaneUI::access$200))},
	{"access$300", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)Ljavax/swing/JTabbedPane;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTabbedPane*(*)(SynthTabbedPaneUI*)>(&SynthTabbedPaneUI::access$300))},
	{"access$400", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)Ljavax/swing/JTabbedPane;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTabbedPane*(*)(SynthTabbedPaneUI*)>(&SynthTabbedPaneUI::access$400))},
	{"access$500", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)Ljavax/swing/JTabbedPane;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTabbedPane*(*)(SynthTabbedPaneUI*)>(&SynthTabbedPaneUI::access$500))},
	{"access$600", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)Ljavax/swing/JTabbedPane;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTabbedPane*(*)(SynthTabbedPaneUI*)>(&SynthTabbedPaneUI::access$600))},
	{"access$700", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)Ljavax/swing/JTabbedPane;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JTabbedPane*(*)(SynthTabbedPaneUI*)>(&SynthTabbedPaneUI::access$700))},
	{"access$800", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(SynthTabbedPaneUI*)>(&SynthTabbedPaneUI::access$800))},
	{"access$900", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;)[I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$ints*(*)(SynthTabbedPaneUI*)>(&SynthTabbedPaneUI::access$900))},
	{"calculateMaxTabHeight", "(I)I", nullptr, $PROTECTED},
	{"calculateMaxTabWidth", "(I)I", nullptr, $PROTECTED},
	{"calculateTabWidth", "(IILjava/awt/FontMetrics;)I", nullptr, $PROTECTED},
	{"createLayoutManager", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createMouseListener", "()Ljava/awt/event/MouseListener;", nullptr, $PROTECTED},
	{"createScrollButton", "(I)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthTabbedPaneUI::createUI))},
	{"ensureCurrentLayout", "()V", nullptr, $PRIVATE, $method(static_cast<void(SynthTabbedPaneUI::*)()>(&SynthTabbedPaneUI::ensureCurrentLayout))},
	{"getBaseline", "(I)I", nullptr, $PROTECTED},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthTabbedPaneUI::*)($JComponent*,int32_t)>(&SynthTabbedPaneUI::getContext))},
	{"getContext", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthTabbedPaneUI::*)($JComponent*,$Region*,int32_t)>(&SynthTabbedPaneUI::getContext))},
	{"getFontMetrics", "()Ljava/awt/FontMetrics;", nullptr, $PROTECTED},
	{"getFontMetrics", "(Ljava/awt/Font;)Ljava/awt/FontMetrics;", nullptr, $PRIVATE, $method(static_cast<$FontMetrics*(SynthTabbedPaneUI::*)($Font*)>(&SynthTabbedPaneUI::getFontMetrics))},
	{"getTabInsets", "(II)Ljava/awt/Insets;", nullptr, $PROTECTED},
	{"getTabLabelShiftX", "(IIZ)I", nullptr, $PROTECTED},
	{"getTabLabelShiftY", "(IIZ)I", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"layoutLabel", "(Ljavax/swing/plaf/synth/SynthContext;ILjava/awt/FontMetrics;ILjava/lang/String;Ljavax/swing/Icon;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Z)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTabbedPaneUI::*)($SynthContext*,int32_t,$FontMetrics*,int32_t,$String*,$Icon*,$Rectangle*,$Rectangle*,$Rectangle*,bool)>(&SynthTabbedPaneUI::layoutLabel))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintContentBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;II)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTabbedPaneUI::*)($SynthContext*,$Graphics*,int32_t,int32_t)>(&SynthTabbedPaneUI::paintContentBorder))},
	{"paintTab", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;I[Ljava/awt/Rectangle;ILjava/awt/Rectangle;Ljava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTabbedPaneUI::*)($SynthContext*,$Graphics*,int32_t,$RectangleArray*,int32_t,$Rectangle*,$Rectangle*)>(&SynthTabbedPaneUI::paintTab))},
	{"paintTabArea", "(Ljava/awt/Graphics;II)V", nullptr, $PROTECTED},
	{"paintTabArea", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IILjava/awt/Rectangle;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTabbedPaneUI::*)($SynthContext*,$Graphics*,int32_t,int32_t,$Rectangle*)>(&SynthTabbedPaneUI::paintTabArea))},
	{"paintText", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;ILjava/awt/Font;Ljava/awt/FontMetrics;ILjava/lang/String;Ljava/awt/Rectangle;Z)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTabbedPaneUI::*)($SynthContext*,$Graphics*,int32_t,$Font*,$FontMetrics*,int32_t,$String*,$Rectangle*,bool)>(&SynthTabbedPaneUI::paintText))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"scrollableTabLayoutEnabled", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(SynthTabbedPaneUI::*)()>(&SynthTabbedPaneUI::scrollableTabLayoutEnabled))},
	{"setRolloverTab", "(I)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JTabbedPane;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTabbedPaneUI::*)($JTabbedPane*)>(&SynthTabbedPaneUI::updateStyle))},
	{"updateTabContext", "(IZZZZ)V", nullptr, $PRIVATE, $method(static_cast<void(SynthTabbedPaneUI::*)(int32_t,bool,bool,bool,bool)>(&SynthTabbedPaneUI::updateTabContext))},
	{}
};

$InnerClassInfo _SynthTabbedPaneUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthTabbedPaneUI$SynthScrollableTabButton", "javax.swing.plaf.synth.SynthTabbedPaneUI", "SynthScrollableTabButton", $PRIVATE},
	{"javax.swing.plaf.synth.SynthTabbedPaneUI$2", nullptr, nullptr, 0},
	{"javax.swing.plaf.synth.SynthTabbedPaneUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthTabbedPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthTabbedPaneUI",
	"javax.swing.plaf.basic.BasicTabbedPaneUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthTabbedPaneUI_FieldInfo_,
	_SynthTabbedPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthTabbedPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthTabbedPaneUI$SynthScrollableTabButton,javax.swing.plaf.synth.SynthTabbedPaneUI$2,javax.swing.plaf.synth.SynthTabbedPaneUI$1"
};

$Object* allocate$SynthTabbedPaneUI($Class* clazz) {
	return $of($alloc(SynthTabbedPaneUI));
}

int32_t SynthTabbedPaneUI::hashCode() {
	 return this->$BasicTabbedPaneUI::hashCode();
}

bool SynthTabbedPaneUI::equals(Object$* arg0) {
	 return this->$BasicTabbedPaneUI::equals(arg0);
}

$Object* SynthTabbedPaneUI::clone() {
	 return this->$BasicTabbedPaneUI::clone();
}

$String* SynthTabbedPaneUI::toString() {
	 return this->$BasicTabbedPaneUI::toString();
}

void SynthTabbedPaneUI::finalize() {
	this->$BasicTabbedPaneUI::finalize();
}

$RectangleArray* SynthTabbedPaneUI::access$1600(SynthTabbedPaneUI* x0) {
	$init(SynthTabbedPaneUI);
	return $nc(x0)->rects;
}

$RectangleArray* SynthTabbedPaneUI::access$1500(SynthTabbedPaneUI* x0) {
	$init(SynthTabbedPaneUI);
	return $nc(x0)->rects;
}

$RectangleArray* SynthTabbedPaneUI::access$1400(SynthTabbedPaneUI* x0) {
	$init(SynthTabbedPaneUI);
	return $nc(x0)->rects;
}

$RectangleArray* SynthTabbedPaneUI::access$1300(SynthTabbedPaneUI* x0) {
	$init(SynthTabbedPaneUI);
	return $nc(x0)->rects;
}

$JTabbedPane* SynthTabbedPaneUI::access$1200(SynthTabbedPaneUI* x0) {
	$init(SynthTabbedPaneUI);
	return $nc(x0)->tabPane;
}

int32_t SynthTabbedPaneUI::access$1100(SynthTabbedPaneUI* x0) {
	$init(SynthTabbedPaneUI);
	return $nc(x0)->runCount;
}

$ints* SynthTabbedPaneUI::access$1000(SynthTabbedPaneUI* x0) {
	$init(SynthTabbedPaneUI);
	return $nc(x0)->tabRuns;
}

$ints* SynthTabbedPaneUI::access$900(SynthTabbedPaneUI* x0) {
	$init(SynthTabbedPaneUI);
	return $nc(x0)->tabRuns;
}

int32_t SynthTabbedPaneUI::access$800(SynthTabbedPaneUI* x0) {
	$init(SynthTabbedPaneUI);
	return $nc(x0)->runCount;
}

$JTabbedPane* SynthTabbedPaneUI::access$700(SynthTabbedPaneUI* x0) {
	$init(SynthTabbedPaneUI);
	return $nc(x0)->tabPane;
}

$JTabbedPane* SynthTabbedPaneUI::access$600(SynthTabbedPaneUI* x0) {
	$init(SynthTabbedPaneUI);
	return $nc(x0)->tabPane;
}

$JTabbedPane* SynthTabbedPaneUI::access$500(SynthTabbedPaneUI* x0) {
	$init(SynthTabbedPaneUI);
	return $nc(x0)->tabPane;
}

$JTabbedPane* SynthTabbedPaneUI::access$400(SynthTabbedPaneUI* x0) {
	$init(SynthTabbedPaneUI);
	return $nc(x0)->tabPane;
}

$JTabbedPane* SynthTabbedPaneUI::access$300(SynthTabbedPaneUI* x0) {
	$init(SynthTabbedPaneUI);
	return $nc(x0)->tabPane;
}

$JTabbedPane* SynthTabbedPaneUI::access$200(SynthTabbedPaneUI* x0) {
	$init(SynthTabbedPaneUI);
	return $nc(x0)->tabPane;
}

$JTabbedPane* SynthTabbedPaneUI::access$100(SynthTabbedPaneUI* x0) {
	$init(SynthTabbedPaneUI);
	return $nc(x0)->tabPane;
}

$JTabbedPane* SynthTabbedPaneUI::access$000(SynthTabbedPaneUI* x0) {
	$init(SynthTabbedPaneUI);
	return $nc(x0)->tabPane;
}

void SynthTabbedPaneUI::init$() {
	$BasicTabbedPaneUI::init$();
	this->tabOverlap = 0;
	this->extendTabsToBase = false;
	$set(this, textRect, $new($Rectangle));
	$set(this, iconRect, $new($Rectangle));
	$set(this, tabAreaBounds, $new($Rectangle));
	this->tabAreaStatesMatchSelectedTab = false;
	this->nudgeSelectedLabel = true;
	this->selectedTabIsPressed = false;
}

$ComponentUI* SynthTabbedPaneUI::createUI($JComponent* c) {
	$init(SynthTabbedPaneUI);
	return $new(SynthTabbedPaneUI);
}

bool SynthTabbedPaneUI::scrollableTabLayoutEnabled() {
	return ($nc(this->tabPane)->getTabLayoutPolicy() == $JTabbedPane::SCROLL_TAB_LAYOUT);
}

void SynthTabbedPaneUI::installDefaults() {
	updateStyle(this->tabPane);
}

void SynthTabbedPaneUI::updateStyle($JTabbedPane* c) {
	$var($SynthContext, context, getContext(c, $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		this->tabRunOverlay = $nc(this->style)->getInt(context, "TabbedPane.tabRunOverlay"_s, 0);
		this->tabOverlap = $nc(this->style)->getInt(context, "TabbedPane.tabOverlap"_s, 0);
		this->extendTabsToBase = $nc(this->style)->getBoolean(context, "TabbedPane.extendTabsToBase"_s, false);
		this->textIconGap = $nc(this->style)->getInt(context, "TabbedPane.textIconGap"_s, 0);
		$set(this, selectedTabPadInsets, $cast($Insets, $nc(this->style)->get(context, "TabbedPane.selectedTabPadInsets"_s)));
		if (this->selectedTabPadInsets == nullptr) {
			$set(this, selectedTabPadInsets, $new($Insets, 0, 0, 0, 0));
		}
		this->tabAreaStatesMatchSelectedTab = $nc(this->style)->getBoolean(context, "TabbedPane.tabAreaStatesMatchSelectedTab"_s, false);
		this->nudgeSelectedLabel = $nc(this->style)->getBoolean(context, "TabbedPane.nudgeSelectedLabel"_s, true);
		if (oldStyle != nullptr) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
	}
	$init($Region);
	$set(this, tabContext, getContext(c, $Region::TABBED_PANE_TAB, $SynthConstants::ENABLED));
	$set(this, tabStyle, $SynthLookAndFeel::updateStyle(this->tabContext, this));
	$set(this, tabInsets, $nc(this->tabStyle)->getInsets(this->tabContext, nullptr));
	$set(this, tabAreaContext, getContext(c, $Region::TABBED_PANE_TAB_AREA, $SynthConstants::ENABLED));
	$set(this, tabAreaStyle, $SynthLookAndFeel::updateStyle(this->tabAreaContext, this));
	$set(this, tabAreaInsets, $nc(this->tabAreaStyle)->getInsets(this->tabAreaContext, nullptr));
	$set(this, tabContentContext, getContext(c, $Region::TABBED_PANE_CONTENT, $SynthConstants::ENABLED));
	$set(this, tabContentStyle, $SynthLookAndFeel::updateStyle(this->tabContentContext, this));
	$set(this, contentBorderInsets, $nc(this->tabContentStyle)->getInsets(this->tabContentContext, nullptr));
}

void SynthTabbedPaneUI::installListeners() {
	$BasicTabbedPaneUI::installListeners();
	$nc(this->tabPane)->addPropertyChangeListener(this);
}

void SynthTabbedPaneUI::uninstallListeners() {
	$BasicTabbedPaneUI::uninstallListeners();
	$nc(this->tabPane)->removePropertyChangeListener(this);
}

void SynthTabbedPaneUI::uninstallDefaults() {
	$var($SynthContext, context, getContext(this->tabPane, $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	$nc(this->tabStyle)->uninstallDefaults(this->tabContext);
	$set(this, tabContext, nullptr);
	$set(this, tabStyle, nullptr);
	$nc(this->tabAreaStyle)->uninstallDefaults(this->tabAreaContext);
	$set(this, tabAreaContext, nullptr);
	$set(this, tabAreaStyle, nullptr);
	$nc(this->tabContentStyle)->uninstallDefaults(this->tabContentContext);
	$set(this, tabContentContext, nullptr);
	$set(this, tabContentStyle, nullptr);
}

$SynthContext* SynthTabbedPaneUI::getContext($JComponent* c) {
	return getContext(c, $SynthLookAndFeel::getComponentState(c));
}

$SynthContext* SynthTabbedPaneUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

$SynthContext* SynthTabbedPaneUI::getContext($JComponent* c, $Region* subregion, int32_t state) {
	$var($SynthStyle, style, nullptr);
	$init($Region);
	if (subregion == $Region::TABBED_PANE_TAB) {
		$assign(style, this->tabStyle);
	} else {
		if (subregion == $Region::TABBED_PANE_TAB_AREA) {
			$assign(style, this->tabAreaStyle);
		} else {
			if (subregion == $Region::TABBED_PANE_CONTENT) {
				$assign(style, this->tabContentStyle);
			}
		}
	}
	return $SynthContext::getContext(c, subregion, style, state);
}

$JButton* SynthTabbedPaneUI::createScrollButton(int32_t direction) {
	if ($UIManager::getBoolean("TabbedPane.useBasicArrows"_s)) {
		$var($JButton, btn, $BasicTabbedPaneUI::createScrollButton(direction));
		$nc(btn)->setBorder($($BorderFactory::createEmptyBorder()));
		return btn;
	}
	return $new($SynthTabbedPaneUI$SynthScrollableTabButton, this, direction);
}

void SynthTabbedPaneUI::propertyChange($PropertyChangeEvent* e) {
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle(this->tabPane);
	}
}

$MouseListener* SynthTabbedPaneUI::createMouseListener() {
	$var($MouseListener, delegate, $BasicTabbedPaneUI::createMouseListener());
	$var($MouseMotionListener, delegate2, $cast($MouseMotionListener, delegate));
	return $new($SynthTabbedPaneUI$1, this, delegate, delegate2);
}

int32_t SynthTabbedPaneUI::getTabLabelShiftX(int32_t tabPlacement, int32_t tabIndex, bool isSelected) {
	if (this->nudgeSelectedLabel) {
		return $BasicTabbedPaneUI::getTabLabelShiftX(tabPlacement, tabIndex, isSelected);
	} else {
		return 0;
	}
}

int32_t SynthTabbedPaneUI::getTabLabelShiftY(int32_t tabPlacement, int32_t tabIndex, bool isSelected) {
	if (this->nudgeSelectedLabel) {
		return $BasicTabbedPaneUI::getTabLabelShiftY(tabPlacement, tabIndex, isSelected);
	} else {
		return 0;
	}
}

void SynthTabbedPaneUI::update($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	$nc($($nc(context)->getPainter()))->paintTabbedPaneBackground(var$0, var$1, 0, 0, var$2, c->getHeight());
	paint(context, g);
}

int32_t SynthTabbedPaneUI::getBaseline(int32_t tab) {
	bool var$0 = $nc(this->tabPane)->getTabComponentAt(tab) != nullptr;
	if (var$0 || getTextViewForTab(tab) != nullptr) {
		return $BasicTabbedPaneUI::getBaseline(tab);
	}
	$var($String, title, $nc(this->tabPane)->getTitleAt(tab));
	$var($Font, font, $nc($($nc(this->tabContext)->getStyle()))->getFont(this->tabContext));
	$var($FontMetrics, metrics, getFontMetrics(font));
	$var($Icon, icon, getIconForTab(tab));
	$nc(this->textRect)->setBounds(0, 0, 0, 0);
	$nc(this->iconRect)->setBounds(0, 0, 0, 0);
	$nc(this->calcRect)->setBounds(0, 0, $Short::MAX_VALUE, this->maxTabHeight);
	$nc($($nc($($nc(this->tabContext)->getStyle()))->getGraphicsUtils(this->tabContext)))->layoutText(this->tabContext, metrics, title, icon, $SwingUtilities::CENTER, $SwingUtilities::CENTER, $SwingUtilities::LEADING, $SwingUtilities::CENTER, this->calcRect, this->iconRect, this->textRect, this->textIconGap);
	int32_t var$1 = $nc(this->textRect)->y + $nc(metrics)->getAscent();
	return var$1 + getBaselineOffset();
}

void SynthTabbedPaneUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintTabbedPaneBorder(context, g, x, y, w, h);
}

void SynthTabbedPaneUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthTabbedPaneUI::paint($SynthContext* context, $Graphics* g) {
	int32_t selectedIndex = $nc(this->tabPane)->getSelectedIndex();
	int32_t tabPlacement = $nc(this->tabPane)->getTabPlacement();
	ensureCurrentLayout();
	if (!scrollableTabLayoutEnabled()) {
		$var($Insets, insets, $nc(this->tabPane)->getInsets());
		int32_t x = $nc(insets)->left;
		int32_t y = insets->top;
		int32_t width = $nc(this->tabPane)->getWidth() - insets->left - insets->right;
		int32_t height = $nc(this->tabPane)->getHeight() - insets->top - insets->bottom;
		int32_t size = 0;
		switch (tabPlacement) {
		case $SwingConstants::LEFT:
			{
				width = calculateTabAreaWidth(tabPlacement, this->runCount, this->maxTabWidth);
				break;
			}
		case $SwingConstants::RIGHT:
			{
				size = calculateTabAreaWidth(tabPlacement, this->runCount, this->maxTabWidth);
				x = x + width - size;
				width = size;
				break;
			}
		case $SwingConstants::BOTTOM:
			{
				size = calculateTabAreaHeight(tabPlacement, this->runCount, this->maxTabHeight);
				y = y + height - size;
				height = size;
				break;
			}
		case $SwingConstants::TOP:
			{}
		default:
			{
				height = calculateTabAreaHeight(tabPlacement, this->runCount, this->maxTabHeight);
			}
		}
		$nc(this->tabAreaBounds)->setBounds(x, y, width, height);
		if ($nc($($nc(g)->getClipBounds()))->intersects(this->tabAreaBounds)) {
			paintTabArea(this->tabAreaContext, g, tabPlacement, selectedIndex, this->tabAreaBounds);
		}
	}
	paintContentBorder(this->tabContentContext, g, tabPlacement, selectedIndex);
}

void SynthTabbedPaneUI::paintTabArea($Graphics* g, int32_t tabPlacement, int32_t selectedIndex) {
	$var($Insets, insets, $nc(this->tabPane)->getInsets());
	int32_t x = $nc(insets)->left;
	int32_t y = insets->top;
	int32_t width = $nc(this->tabPane)->getWidth() - insets->left - insets->right;
	int32_t height = $nc(this->tabPane)->getHeight() - insets->top - insets->bottom;
	paintTabArea(this->tabAreaContext, g, tabPlacement, selectedIndex, $$new($Rectangle, x, y, width, height));
}

void SynthTabbedPaneUI::paintTabArea($SynthContext* ss, $Graphics* g, int32_t tabPlacement, int32_t selectedIndex, $Rectangle* tabAreaBounds) {
	$var($Rectangle, clipRect, $nc(g)->getClipBounds());
	if (this->tabAreaStatesMatchSelectedTab && selectedIndex >= 0) {
		int32_t var$0 = selectedIndex;
		bool var$1 = this->selectedTabIsPressed;
		bool var$2 = (getRolloverTab() == selectedIndex);
		updateTabContext(var$0, true, var$1, var$2, (getFocusIndex() == selectedIndex));
		$nc(ss)->setComponentState($nc(this->tabContext)->getComponentState());
	} else {
		$nc(ss)->setComponentState($SynthConstants::ENABLED);
	}
	$SynthLookAndFeel::updateSubregion(ss, g, tabAreaBounds);
	$nc($($nc(ss)->getPainter()))->paintTabbedPaneTabAreaBackground(ss, g, $nc(tabAreaBounds)->x, tabAreaBounds->y, tabAreaBounds->width, tabAreaBounds->height, tabPlacement);
	$nc($(ss->getPainter()))->paintTabbedPaneTabAreaBorder(ss, g, $nc(tabAreaBounds)->x, tabAreaBounds->y, tabAreaBounds->width, tabAreaBounds->height, tabPlacement);
	int32_t tabCount = $nc(this->tabPane)->getTabCount();
	$nc(this->iconRect)->setBounds(0, 0, 0, 0);
	$nc(this->textRect)->setBounds(0, 0, 0, 0);
	for (int32_t i = this->runCount - 1; i >= 0; --i) {
		int32_t start = $nc(this->tabRuns)->get(i);
		int32_t next = $nc(this->tabRuns)->get((i == this->runCount - 1) ? 0 : i + 1);
		int32_t end = (next != 0 ? next - 1 : tabCount - 1);
		for (int32_t j = start; j <= end; ++j) {
			if ($nc($nc(this->rects)->get(j))->intersects(clipRect) && selectedIndex != j) {
				paintTab(this->tabContext, g, tabPlacement, this->rects, j, this->iconRect, this->textRect);
			}
		}
	}
	if (selectedIndex >= 0) {
		if ($nc($nc(this->rects)->get(selectedIndex))->intersects(clipRect)) {
			paintTab(this->tabContext, g, tabPlacement, this->rects, selectedIndex, this->iconRect, this->textRect);
		}
	}
}

void SynthTabbedPaneUI::setRolloverTab(int32_t index) {
	int32_t oldRolloverTab = getRolloverTab();
	$BasicTabbedPaneUI::setRolloverTab(index);
	$var($Rectangle, r, nullptr);
	if (oldRolloverTab != index && this->tabAreaStatesMatchSelectedTab) {
		$nc(this->tabPane)->repaint();
	} else {
		if ((oldRolloverTab >= 0) && (oldRolloverTab < $nc(this->tabPane)->getTabCount())) {
			$assign(r, getTabBounds(this->tabPane, oldRolloverTab));
			if (r != nullptr) {
				$nc(this->tabPane)->repaint(r);
			}
		}
		if (index >= 0) {
			$assign(r, getTabBounds(this->tabPane, index));
			if (r != nullptr) {
				$nc(this->tabPane)->repaint(r);
			}
		}
	}
}

void SynthTabbedPaneUI::paintTab($SynthContext* ss, $Graphics* g, int32_t tabPlacement, $RectangleArray* rects, int32_t tabIndex, $Rectangle* iconRect, $Rectangle* textRect) {
	$var($Rectangle, tabRect, $nc(rects)->get(tabIndex));
	int32_t selectedIndex = $nc(this->tabPane)->getSelectedIndex();
	bool isSelected = selectedIndex == tabIndex;
	int32_t var$0 = tabIndex;
	bool var$1 = isSelected;
	bool var$2 = isSelected && this->selectedTabIsPressed;
	bool var$3 = (getRolloverTab() == tabIndex);
	updateTabContext(var$0, var$1, var$2, var$3, (getFocusIndex() == tabIndex));
	$SynthLookAndFeel::updateSubregion(ss, g, tabRect);
	int32_t x = $nc(tabRect)->x;
	int32_t y = tabRect->y;
	int32_t height = tabRect->height;
	int32_t width = tabRect->width;
	int32_t placement = $nc(this->tabPane)->getTabPlacement();
	if (this->extendTabsToBase && this->runCount > 1) {
		if (selectedIndex >= 0) {
			$var($Rectangle, r, rects->get(selectedIndex));
			{
				int32_t bottomY = 0;
				int32_t rightX = 0;
				int32_t topY = 0;
				int32_t leftX = 0;
				switch (placement) {
				case $SwingConstants::TOP:
					{
						bottomY = $nc(r)->y + r->height;
						height = bottomY - tabRect->y;
						break;
					}
				case $SwingConstants::LEFT:
					{
						rightX = r->x + r->width;
						width = rightX - tabRect->x;
						break;
					}
				case $SwingConstants::BOTTOM:
					{
						topY = r->y;
						height = (tabRect->y + tabRect->height) - topY;
						y = topY;
						break;
					}
				case $SwingConstants::RIGHT:
					{
						leftX = r->x;
						width = (tabRect->x + tabRect->width) - leftX;
						x = leftX;
						break;
					}
				}
			}
		}
	}
	$nc($($nc(this->tabContext)->getPainter()))->paintTabbedPaneTabBackground(this->tabContext, g, x, y, width, height, tabIndex, placement);
	$nc($($nc(this->tabContext)->getPainter()))->paintTabbedPaneTabBorder(this->tabContext, g, x, y, width, height, tabIndex, placement);
	if ($nc(this->tabPane)->getTabComponentAt(tabIndex) == nullptr) {
		$var($String, title, $nc(this->tabPane)->getTitleAt(tabIndex));
		$var($String, clippedTitle, title);
		$var($Font, font, $nc($($nc(ss)->getStyle()))->getFont(ss));
		$var($FontMetrics, metrics, $SwingUtilities2::getFontMetrics(this->tabPane, g, font));
		$var($Icon, icon, getIconForTab(tabIndex));
		layoutLabel(ss, tabPlacement, metrics, tabIndex, title, icon, tabRect, iconRect, textRect, isSelected);
		$assign(clippedTitle, $SwingUtilities2::clipStringIfNecessary(nullptr, metrics, title, $nc(textRect)->width));
		paintText(ss, g, tabPlacement, font, metrics, tabIndex, clippedTitle, textRect, isSelected);
		paintIcon(g, tabPlacement, tabIndex, icon, iconRect, isSelected);
	}
}

void SynthTabbedPaneUI::layoutLabel($SynthContext* ss, int32_t tabPlacement, $FontMetrics* metrics, int32_t tabIndex, $String* title, $Icon* icon, $Rectangle* tabRect, $Rectangle* iconRect, $Rectangle* textRect, bool isSelected) {
	$var($View, v, getTextViewForTab(tabIndex));
	if (v != nullptr) {
		$nc(this->tabPane)->putClientProperty("html"_s, v);
	}
	$nc(textRect)->x = (textRect->y = ($nc(iconRect)->x = (iconRect->y = 0)));
	$nc($($nc($($nc(ss)->getStyle()))->getGraphicsUtils(ss)))->layoutText(ss, metrics, title, icon, $SwingUtilities::CENTER, $SwingUtilities::CENTER, $SwingUtilities::LEADING, $SwingUtilities::CENTER, tabRect, iconRect, textRect, this->textIconGap);
	$nc(this->tabPane)->putClientProperty("html"_s, nullptr);
	int32_t xNudge = getTabLabelShiftX(tabPlacement, tabIndex, isSelected);
	int32_t yNudge = getTabLabelShiftY(tabPlacement, tabIndex, isSelected);
	iconRect->x += xNudge;
	iconRect->y += yNudge;
	textRect->x += xNudge;
	textRect->y += yNudge;
}

void SynthTabbedPaneUI::paintText($SynthContext* ss, $Graphics* g, int32_t tabPlacement, $Font* font, $FontMetrics* metrics, int32_t tabIndex, $String* title, $Rectangle* textRect, bool isSelected) {
	$nc(g)->setFont(font);
	$var($View, v, getTextViewForTab(tabIndex));
	if (v != nullptr) {
		v->paint(g, textRect);
	} else {
		int32_t mnemIndex = $nc(this->tabPane)->getDisplayedMnemonicIndexAt(tabIndex);
		$init($ColorType);
		g->setColor($($nc($($nc(ss)->getStyle()))->getColor(ss, $ColorType::TEXT_FOREGROUND)));
		$nc($($nc($($nc(ss)->getStyle()))->getGraphicsUtils(ss)))->paintText(ss, g, title, textRect, mnemIndex);
	}
}

void SynthTabbedPaneUI::paintContentBorder($SynthContext* ss, $Graphics* g, int32_t tabPlacement, int32_t selectedIndex) {
	int32_t width = $nc(this->tabPane)->getWidth();
	int32_t height = $nc(this->tabPane)->getHeight();
	$var($Insets, insets, $nc(this->tabPane)->getInsets());
	int32_t x = $nc(insets)->left;
	int32_t y = insets->top;
	int32_t w = width - insets->right - insets->left;
	int32_t h = height - insets->top - insets->bottom;
	switch (tabPlacement) {
	case $SwingConstants::LEFT:
		{
			x += calculateTabAreaWidth(tabPlacement, this->runCount, this->maxTabWidth);
			w -= (x - insets->left);
			break;
		}
	case $SwingConstants::RIGHT:
		{
			w -= calculateTabAreaWidth(tabPlacement, this->runCount, this->maxTabWidth);
			break;
		}
	case $SwingConstants::BOTTOM:
		{
			h -= calculateTabAreaHeight(tabPlacement, this->runCount, this->maxTabHeight);
			break;
		}
	case $SwingConstants::TOP:
		{}
	default:
		{
			y += calculateTabAreaHeight(tabPlacement, this->runCount, this->maxTabHeight);
			h -= (y - insets->top);
		}
	}
	$SynthLookAndFeel::updateSubregion(ss, g, $$new($Rectangle, x, y, w, h));
	$nc($($nc(ss)->getPainter()))->paintTabbedPaneContentBackground(ss, g, x, y, w, h);
	$nc($(ss->getPainter()))->paintTabbedPaneContentBorder(ss, g, x, y, w, h);
}

void SynthTabbedPaneUI::ensureCurrentLayout() {
	if (!$nc(this->tabPane)->isValid()) {
		$nc(this->tabPane)->validate();
	}
	if (!$nc(this->tabPane)->isValid()) {
		$var($BasicTabbedPaneUI$TabbedPaneLayout, layout, $cast($BasicTabbedPaneUI$TabbedPaneLayout, $nc(this->tabPane)->getLayout()));
		$nc(layout)->calculateLayoutInfo();
	}
}

int32_t SynthTabbedPaneUI::calculateMaxTabHeight(int32_t tabPlacement) {
	$var($FontMetrics, metrics, getFontMetrics($($nc($($nc(this->tabContext)->getStyle()))->getFont(this->tabContext))));
	int32_t tabCount = $nc(this->tabPane)->getTabCount();
	int32_t result = 0;
	int32_t fontHeight = $nc(metrics)->getHeight();
	for (int32_t i = 0; i < tabCount; ++i) {
		result = $Math::max(calculateTabHeight(tabPlacement, i, fontHeight), result);
	}
	return result;
}

int32_t SynthTabbedPaneUI::calculateTabWidth(int32_t tabPlacement, int32_t tabIndex, $FontMetrics* metrics) {
	$var($Icon, icon, getIconForTab(tabIndex));
	$var($Insets, tabInsets, getTabInsets(tabPlacement, tabIndex));
	int32_t width = $nc(tabInsets)->left + tabInsets->right;
	$var($Component, tabComponent, $nc(this->tabPane)->getTabComponentAt(tabIndex));
	if (tabComponent != nullptr) {
		width += $nc($(tabComponent->getPreferredSize()))->width;
	} else {
		if (icon != nullptr) {
			width += icon->getIconWidth() + this->textIconGap;
		}
		$var($View, v, getTextViewForTab(tabIndex));
		if (v != nullptr) {
			width += $cast(int32_t, v->getPreferredSpan($View::X_AXIS));
		} else {
			$var($String, title, $nc(this->tabPane)->getTitleAt(tabIndex));
			width += $nc($($nc($($nc(this->tabContext)->getStyle()))->getGraphicsUtils(this->tabContext)))->computeStringWidth(this->tabContext, $($nc(metrics)->getFont()), metrics, title);
		}
	}
	return width;
}

int32_t SynthTabbedPaneUI::calculateMaxTabWidth(int32_t tabPlacement) {
	$var($FontMetrics, metrics, getFontMetrics($($nc($($nc(this->tabContext)->getStyle()))->getFont(this->tabContext))));
	int32_t tabCount = $nc(this->tabPane)->getTabCount();
	int32_t result = 0;
	for (int32_t i = 0; i < tabCount; ++i) {
		result = $Math::max(calculateTabWidth(tabPlacement, i, metrics), result);
	}
	return result;
}

$Insets* SynthTabbedPaneUI::getTabInsets(int32_t tabPlacement, int32_t tabIndex) {
	updateTabContext(tabIndex, false, false, false, (getFocusIndex() == tabIndex));
	return this->tabInsets;
}

$FontMetrics* SynthTabbedPaneUI::getFontMetrics() {
	return getFontMetrics($($nc($($nc(this->tabContext)->getStyle()))->getFont(this->tabContext)));
}

$FontMetrics* SynthTabbedPaneUI::getFontMetrics($Font* font) {
	return $nc(this->tabPane)->getFontMetrics(font);
}

void SynthTabbedPaneUI::updateTabContext(int32_t index, bool selected, bool isMouseDown, bool isMouseOver, bool hasFocus) {
	int32_t state = 0;
	bool var$0 = !$nc(this->tabPane)->isEnabled();
	if (var$0 || !$nc(this->tabPane)->isEnabledAt(index)) {
		state |= $SynthConstants::DISABLED;
		if (selected) {
			state |= $SynthConstants::SELECTED;
		}
	} else if (selected) {
		state |= ($SynthConstants::ENABLED | $SynthConstants::SELECTED);
		if (isMouseOver && $UIManager::getBoolean("TabbedPane.isTabRollover"_s)) {
			state |= $SynthConstants::MOUSE_OVER;
		}
	} else if (isMouseOver) {
		state |= ($SynthConstants::ENABLED | $SynthConstants::MOUSE_OVER);
	} else {
		state = $SynthLookAndFeel::getComponentState(this->tabPane);
		state &= (uint32_t)~$SynthConstants::FOCUSED;
	}
	if (hasFocus && $nc(this->tabPane)->hasFocus()) {
		state |= $SynthConstants::FOCUSED;
	}
	if (isMouseDown) {
		state |= $SynthConstants::PRESSED;
	}
	$nc(this->tabContext)->setComponentState(state);
}

$LayoutManager* SynthTabbedPaneUI::createLayoutManager() {
	if ($nc(this->tabPane)->getTabLayoutPolicy() == $JTabbedPane::SCROLL_TAB_LAYOUT) {
		return $BasicTabbedPaneUI::createLayoutManager();
	} else {
		return $new($SynthTabbedPaneUI$2, this);
	}
}

SynthTabbedPaneUI::SynthTabbedPaneUI() {
}

$Class* SynthTabbedPaneUI::load$($String* name, bool initialize) {
	$loadClass(SynthTabbedPaneUI, name, initialize, &_SynthTabbedPaneUI_ClassInfo_, allocate$SynthTabbedPaneUI);
	return class$;
}

$Class* SynthTabbedPaneUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax