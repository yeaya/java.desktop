#include <javax/swing/plaf/basic/BasicTabbedPaneUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Polygon.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/ContainerListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Hashtable.h>
#include <java/util/Vector.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/ComponentInputMap.h>
#include <javax/swing/Icon.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/ComponentInputMapUIResource.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicArrowButton.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicHTML.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$Actions.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$CroppedEdge.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$Handler.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabButton.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabPanel.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabSupport.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabViewport.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabContainer.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabbedPaneLayout.h>
#include <javax/swing/plaf/basic/BasicTabbedPaneUI$TabbedPaneScrollLayout.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <javax/swing/text/View.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef BOTTOM
#undef CENTER
#undef CONSTANT_ASCENT
#undef CONSTANT_DESCENT
#undef CROP_SEGMENT
#undef DOWN
#undef EAST
#undef FALSE
#undef LEFT
#undef NEXT
#undef NORTH
#undef OTHER
#undef PAGE_DOWN
#undef PAGE_UP
#undef PREVIOUS
#undef REQUEST_FOCUS
#undef REQUEST_FOCUS_FOR_VISIBLE
#undef RIGHT
#undef SCROLL_BACKWARD
#undef SCROLL_FORWARD
#undef SCROLL_TAB_LAYOUT
#undef SELECT_FOCUSED
#undef SET_SELECTED
#undef SOUTH
#undef TOP
#undef TRAILING
#undef UP
#undef WEST
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#undef WHEN_FOCUSED
#undef WHEN_IN_FOCUSED_WINDOW
#undef X_AXIS
#undef Y_AXIS

using $RectangleArray = $Array<::java::awt::Rectangle>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Polygon = ::java::awt::Polygon;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $ContainerListener = ::java::awt::event::ContainerListener;
using $FocusListener = ::java::awt::event::FocusListener;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Hashtable = ::java::util::Hashtable;
using $Vector = ::java::util::Vector;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $ComponentInputMap = ::javax::swing::ComponentInputMap;
using $Icon = ::javax::swing::Icon;
using $InputMap = ::javax::swing::InputMap;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JPanel = ::javax::swing::JPanel;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $JViewport = ::javax::swing::JViewport;
using $KeyStroke = ::javax::swing::KeyStroke;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ComponentInputMapUIResource = ::javax::swing::plaf::ComponentInputMapUIResource;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicArrowButton = ::javax::swing::plaf::basic::BasicArrowButton;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicHTML = ::javax::swing::plaf::basic::BasicHTML;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicTabbedPaneUI$Actions = ::javax::swing::plaf::basic::BasicTabbedPaneUI$Actions;
using $BasicTabbedPaneUI$CroppedEdge = ::javax::swing::plaf::basic::BasicTabbedPaneUI$CroppedEdge;
using $BasicTabbedPaneUI$Handler = ::javax::swing::plaf::basic::BasicTabbedPaneUI$Handler;
using $BasicTabbedPaneUI$ScrollableTabButton = ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollableTabButton;
using $BasicTabbedPaneUI$ScrollableTabPanel = ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollableTabPanel;
using $BasicTabbedPaneUI$ScrollableTabSupport = ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollableTabSupport;
using $BasicTabbedPaneUI$ScrollableTabViewport = ::javax::swing::plaf::basic::BasicTabbedPaneUI$ScrollableTabViewport;
using $BasicTabbedPaneUI$TabContainer = ::javax::swing::plaf::basic::BasicTabbedPaneUI$TabContainer;
using $BasicTabbedPaneUI$TabbedPaneLayout = ::javax::swing::plaf::basic::BasicTabbedPaneUI$TabbedPaneLayout;
using $BasicTabbedPaneUI$TabbedPaneScrollLayout = ::javax::swing::plaf::basic::BasicTabbedPaneUI$TabbedPaneScrollLayout;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $View = ::javax::swing::text::View;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$CompoundAttribute _BasicTabbedPaneUI_FieldAnnotations_upKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicTabbedPaneUI_FieldAnnotations_downKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicTabbedPaneUI_FieldAnnotations_leftKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _BasicTabbedPaneUI_FieldAnnotations_rightKey[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _BasicTabbedPaneUI_FieldInfo_[] = {
	{"tabPane", "Ljavax/swing/JTabbedPane;", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, tabPane)},
	{"highlight", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, highlight)},
	{"lightHighlight", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, lightHighlight)},
	{"shadow", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, shadow)},
	{"darkShadow", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, darkShadow)},
	{"focus", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, focus)},
	{"selectedColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(BasicTabbedPaneUI, selectedColor)},
	{"textIconGap", "I", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, textIconGap)},
	{"tabRunOverlay", "I", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, tabRunOverlay)},
	{"tabInsets", "Ljava/awt/Insets;", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, tabInsets)},
	{"selectedTabPadInsets", "Ljava/awt/Insets;", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, selectedTabPadInsets)},
	{"tabAreaInsets", "Ljava/awt/Insets;", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, tabAreaInsets)},
	{"contentBorderInsets", "Ljava/awt/Insets;", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, contentBorderInsets)},
	{"tabsOverlapBorder", "Z", nullptr, $PRIVATE, $field(BasicTabbedPaneUI, tabsOverlapBorder)},
	{"tabsOpaque", "Z", nullptr, $PRIVATE, $field(BasicTabbedPaneUI, tabsOpaque)},
	{"contentOpaque", "Z", nullptr, $PRIVATE, $field(BasicTabbedPaneUI, contentOpaque)},
	{"upKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicTabbedPaneUI, upKey), _BasicTabbedPaneUI_FieldAnnotations_upKey},
	{"downKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicTabbedPaneUI, downKey), _BasicTabbedPaneUI_FieldAnnotations_downKey},
	{"leftKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicTabbedPaneUI, leftKey), _BasicTabbedPaneUI_FieldAnnotations_leftKey},
	{"rightKey", "Ljavax/swing/KeyStroke;", nullptr, $PROTECTED | $DEPRECATED, $field(BasicTabbedPaneUI, rightKey), _BasicTabbedPaneUI_FieldAnnotations_rightKey},
	{"tabRuns", "[I", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, tabRuns)},
	{"runCount", "I", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, runCount)},
	{"selectedRun", "I", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, selectedRun)},
	{"rects", "[Ljava/awt/Rectangle;", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, rects)},
	{"maxTabHeight", "I", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, maxTabHeight)},
	{"maxTabWidth", "I", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, maxTabWidth)},
	{"tabChangeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, tabChangeListener)},
	{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, propertyChangeListener)},
	{"mouseListener", "Ljava/awt/event/MouseListener;", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, mouseListener)},
	{"focusListener", "Ljava/awt/event/FocusListener;", nullptr, $PROTECTED, $field(BasicTabbedPaneUI, focusListener)},
	{"currentPadInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(BasicTabbedPaneUI, currentPadInsets)},
	{"currentTabAreaInsets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(BasicTabbedPaneUI, currentTabAreaInsets)},
	{"visibleComponent", "Ljava/awt/Component;", nullptr, $PRIVATE, $field(BasicTabbedPaneUI, visibleComponent)},
	{"htmlViews", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/swing/text/View;>;", $PRIVATE, $field(BasicTabbedPaneUI, htmlViews)},
	{"mnemonicToIndexMap", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Ljava/lang/Integer;Ljava/lang/Integer;>;", $PRIVATE, $field(BasicTabbedPaneUI, mnemonicToIndexMap)},
	{"mnemonicInputMap", "Ljavax/swing/InputMap;", nullptr, $PRIVATE, $field(BasicTabbedPaneUI, mnemonicInputMap)},
	{"tabScroller", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI$ScrollableTabSupport;", nullptr, $PRIVATE, $field(BasicTabbedPaneUI, tabScroller)},
	{"tabContainer", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI$TabContainer;", nullptr, $PRIVATE, $field(BasicTabbedPaneUI, tabContainer)},
	{"calcRect", "Ljava/awt/Rectangle;", nullptr, $PROTECTED | $TRANSIENT, $field(BasicTabbedPaneUI, calcRect)},
	{"focusIndex", "I", nullptr, $PRIVATE, $field(BasicTabbedPaneUI, focusIndex)},
	{"handler", "Ljavax/swing/plaf/basic/BasicTabbedPaneUI$Handler;", nullptr, $PRIVATE, $field(BasicTabbedPaneUI, handler)},
	{"rolloverTabIndex", "I", nullptr, $PRIVATE, $field(BasicTabbedPaneUI, rolloverTabIndex)},
	{"isRunsDirty", "Z", nullptr, $PRIVATE, $field(BasicTabbedPaneUI, isRunsDirty)},
	{"calculatedBaseline", "Z", nullptr, $PRIVATE, $field(BasicTabbedPaneUI, calculatedBaseline)},
	{"baseline", "I", nullptr, $PRIVATE, $field(BasicTabbedPaneUI, baseline)},
	{"xCropLen", "[I", nullptr, $PRIVATE | $STATIC, $staticField(BasicTabbedPaneUI, xCropLen)},
	{"yCropLen", "[I", nullptr, $PRIVATE | $STATIC, $staticField(BasicTabbedPaneUI, yCropLen)},
	{"CROP_SEGMENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicTabbedPaneUI, CROP_SEGMENT)},
	{}
};

$MethodInfo _BasicTabbedPaneUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicTabbedPaneUI::*)()>(&BasicTabbedPaneUI::init$))},
	{"addMnemonic", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI::*)(int32_t,int32_t)>(&BasicTabbedPaneUI::addMnemonic))},
	{"assureRectsCreated", "(I)V", nullptr, $PROTECTED},
	{"calculateBaseline", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI::*)()>(&BasicTabbedPaneUI::calculateBaseline))},
	{"calculateBaselineIfNecessary", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicTabbedPaneUI::*)()>(&BasicTabbedPaneUI::calculateBaselineIfNecessary))},
	{"calculateMaxTabHeight", "(I)I", nullptr, $PROTECTED},
	{"calculateMaxTabWidth", "(I)I", nullptr, $PROTECTED},
	{"calculateTabAreaHeight", "(III)I", nullptr, $PROTECTED},
	{"calculateTabAreaWidth", "(III)I", nullptr, $PROTECTED},
	{"calculateTabHeight", "(III)I", nullptr, $PROTECTED},
	{"calculateTabWidth", "(IILjava/awt/FontMetrics;)I", nullptr, $PROTECTED},
	{"createChangeListener", "()Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"createCroppedTabShape", "(ILjava/awt/Rectangle;I)Ljava/awt/Polygon;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Polygon*(*)(int32_t,$Rectangle*,int32_t)>(&BasicTabbedPaneUI::createCroppedTabShape))},
	{"createFocusListener", "()Ljava/awt/event/FocusListener;", nullptr, $PROTECTED},
	{"createHTMLVector", "()Ljava/util/Vector;", "()Ljava/util/Vector<Ljavax/swing/text/View;>;", $PRIVATE, $method(static_cast<$Vector*(BasicTabbedPaneUI::*)()>(&BasicTabbedPaneUI::createHTMLVector))},
	{"createLayoutManager", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createMouseListener", "()Ljava/awt/event/MouseListener;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createScrollButton", "(I)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicTabbedPaneUI::createUI))},
	{"ensureCurrentLayout", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI::*)()>(&BasicTabbedPaneUI::ensureCurrentLayout))},
	{"expandTabRunsArray", "()V", nullptr, $PROTECTED},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBaseline", "(I)I", nullptr, $PROTECTED},
	{"getBaselineOffset", "()I", nullptr, $PROTECTED},
	{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getClosestTab", "(II)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicTabbedPaneUI::*)(int32_t,int32_t)>(&BasicTabbedPaneUI::getClosestTab))},
	{"getContentBorderInsets", "(I)Ljava/awt/Insets;", nullptr, $PROTECTED},
	{"getFocusIndex", "()I", nullptr, $PROTECTED},
	{"getFontMetrics", "()Ljava/awt/FontMetrics;", nullptr, $PROTECTED},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicTabbedPaneUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicTabbedPaneUI$Handler*(BasicTabbedPaneUI::*)()>(&BasicTabbedPaneUI::getHandler))},
	{"getIconForTab", "(I)Ljavax/swing/Icon;", nullptr, $PROTECTED},
	{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, 0},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getNextTabIndex", "(I)I", nullptr, $PROTECTED},
	{"getNextTabIndexInRun", "(II)I", nullptr, $PROTECTED},
	{"getNextTabRun", "(I)I", nullptr, $PROTECTED},
	{"getPreviousTabIndex", "(I)I", nullptr, $PROTECTED},
	{"getPreviousTabIndexInRun", "(II)I", nullptr, $PROTECTED},
	{"getPreviousTabRun", "(I)I", nullptr, $PROTECTED},
	{"getRolloverTab", "()I", nullptr, $PROTECTED},
	{"getRunForTab", "(II)I", nullptr, $PROTECTED},
	{"getSelectedTabPadInsets", "(I)Ljava/awt/Insets;", nullptr, $PROTECTED},
	{"getTabAreaInsets", "(I)Ljava/awt/Insets;", nullptr, $PROTECTED},
	{"getTabBounds", "(Ljavax/swing/JTabbedPane;I)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getTabBounds", "(ILjava/awt/Rectangle;)Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"getTabInsets", "(II)Ljava/awt/Insets;", nullptr, $PROTECTED},
	{"getTabLabelShiftX", "(IIZ)I", nullptr, $PROTECTED},
	{"getTabLabelShiftY", "(IIZ)I", nullptr, $PROTECTED},
	{"getTabRunCount", "(Ljavax/swing/JTabbedPane;)I", nullptr, $PUBLIC},
	{"getTabRunIndent", "(II)I", nullptr, $PROTECTED},
	{"getTabRunOffset", "(IIIZ)I", nullptr, $PROTECTED},
	{"getTabRunOverlay", "(I)I", nullptr, $PROTECTED},
	{"getTextViewForTab", "(I)Ljavax/swing/text/View;", nullptr, $PROTECTED},
	{"getVisibleComponent", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"initMnemonics", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI::*)()>(&BasicTabbedPaneUI::initMnemonics))},
	{"installComponents", "()V", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installTabContainer", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI::*)()>(&BasicTabbedPaneUI::installTabContainer))},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isHorizontalTabPlacement", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicTabbedPaneUI::*)()>(&BasicTabbedPaneUI::isHorizontalTabPlacement))},
	{"lastTabInRun", "(II)I", nullptr, $PROTECTED},
	{"layoutLabel", "(ILjava/awt/FontMetrics;ILjava/lang/String;Ljavax/swing/Icon;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Z)V", nullptr, $PROTECTED},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicTabbedPaneUI::loadActionMap))},
	{"navigateSelectedTab", "(I)V", nullptr, $PROTECTED},
	{"navigateTo", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI::*)(int32_t)>(&BasicTabbedPaneUI::navigateTo))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintContentBorder", "(Ljava/awt/Graphics;II)V", nullptr, $PROTECTED},
	{"paintContentBorderBottomEdge", "(Ljava/awt/Graphics;IIIIII)V", nullptr, $PROTECTED},
	{"paintContentBorderLeftEdge", "(Ljava/awt/Graphics;IIIIII)V", nullptr, $PROTECTED},
	{"paintContentBorderRightEdge", "(Ljava/awt/Graphics;IIIIII)V", nullptr, $PROTECTED},
	{"paintContentBorderTopEdge", "(Ljava/awt/Graphics;IIIIII)V", nullptr, $PROTECTED},
	{"paintCroppedTabEdge", "(Ljava/awt/Graphics;)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI::*)($Graphics*)>(&BasicTabbedPaneUI::paintCroppedTabEdge))},
	{"paintFocusIndicator", "(Ljava/awt/Graphics;I[Ljava/awt/Rectangle;ILjava/awt/Rectangle;Ljava/awt/Rectangle;Z)V", nullptr, $PROTECTED},
	{"paintIcon", "(Ljava/awt/Graphics;IILjavax/swing/Icon;Ljava/awt/Rectangle;Z)V", nullptr, $PROTECTED},
	{"paintTab", "(Ljava/awt/Graphics;I[Ljava/awt/Rectangle;ILjava/awt/Rectangle;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintTabArea", "(Ljava/awt/Graphics;II)V", nullptr, $PROTECTED},
	{"paintTabBackground", "(Ljava/awt/Graphics;IIIIIIZ)V", nullptr, $PROTECTED},
	{"paintTabBorder", "(Ljava/awt/Graphics;IIIIIIZ)V", nullptr, $PROTECTED},
	{"paintText", "(Ljava/awt/Graphics;ILjava/awt/Font;Ljava/awt/FontMetrics;ILjava/lang/String;Ljava/awt/Rectangle;Z)V", nullptr, $PROTECTED},
	{"repaintTab", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI::*)(int32_t)>(&BasicTabbedPaneUI::repaintTab))},
	{"requestFocusForVisibleComponent", "()Z", nullptr, 0},
	{"resetMnemonics", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI::*)()>(&BasicTabbedPaneUI::resetMnemonics))},
	{"rotateInsets", "(Ljava/awt/Insets;Ljava/awt/Insets;I)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($Insets*,$Insets*,int32_t)>(&BasicTabbedPaneUI::rotateInsets))},
	{"scrollableTabLayoutEnabled", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicTabbedPaneUI::*)()>(&BasicTabbedPaneUI::scrollableTabLayoutEnabled))},
	{"selectAdjacentRunTab", "(III)V", nullptr, $PROTECTED},
	{"selectNextTab", "(I)V", nullptr, $PROTECTED},
	{"selectNextTabInRun", "(I)V", nullptr, $PROTECTED},
	{"selectPreviousTab", "(I)V", nullptr, $PROTECTED},
	{"selectPreviousTabInRun", "(I)V", nullptr, $PROTECTED},
	{"setFocusIndex", "(IZ)V", nullptr, 0},
	{"setRolloverTab", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI::*)(int32_t,int32_t)>(&BasicTabbedPaneUI::setRolloverTab))},
	{"setRolloverTab", "(I)V", nullptr, $PROTECTED},
	{"setVisibleComponent", "(Ljava/awt/Component;)V", nullptr, $PROTECTED},
	{"shouldPadTabRun", "(II)Z", nullptr, $PROTECTED},
	{"shouldRotateTabRuns", "(I)Z", nullptr, $PROTECTED},
	{"tabForCoordinate", "(Ljavax/swing/JTabbedPane;II)I", nullptr, $PUBLIC},
	{"tabForCoordinate", "(Ljavax/swing/JTabbedPane;IIZ)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicTabbedPaneUI::*)($JTabbedPane*,int32_t,int32_t,bool)>(&BasicTabbedPaneUI::tabForCoordinate))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"translatePointToTabPanel", "(IILjava/awt/Point;)Ljava/awt/Point;", nullptr, $PRIVATE, $method(static_cast<$Point*(BasicTabbedPaneUI::*)(int32_t,int32_t,$Point*)>(&BasicTabbedPaneUI::translatePointToTabPanel))},
	{"uninstallComponents", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallTabContainer", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI::*)()>(&BasicTabbedPaneUI::uninstallTabContainer))},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateMnemonics", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI::*)()>(&BasicTabbedPaneUI::updateMnemonics))},
	{"validateFocusIndex", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicTabbedPaneUI::*)()>(&BasicTabbedPaneUI::validateFocusIndex))},
	{}
};

$InnerClassInfo _BasicTabbedPaneUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$CroppedEdge", "javax.swing.plaf.basic.BasicTabbedPaneUI", "CroppedEdge", $PRIVATE},
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$TabContainer", "javax.swing.plaf.basic.BasicTabbedPaneUI", "TabContainer", $PRIVATE},
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$FocusHandler", "javax.swing.plaf.basic.BasicTabbedPaneUI", "FocusHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$MouseHandler", "javax.swing.plaf.basic.BasicTabbedPaneUI", "MouseHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$TabSelectionHandler", "javax.swing.plaf.basic.BasicTabbedPaneUI", "TabSelectionHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicTabbedPaneUI", "PropertyChangeHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$Handler", "javax.swing.plaf.basic.BasicTabbedPaneUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabButton", "javax.swing.plaf.basic.BasicTabbedPaneUI", "ScrollableTabButton", $PRIVATE},
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabPanel", "javax.swing.plaf.basic.BasicTabbedPaneUI", "ScrollableTabPanel", $PRIVATE},
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabViewport", "javax.swing.plaf.basic.BasicTabbedPaneUI", "ScrollableTabViewport", $PRIVATE},
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabSupport", "javax.swing.plaf.basic.BasicTabbedPaneUI", "ScrollableTabSupport", $PRIVATE},
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$TabbedPaneScrollLayout", "javax.swing.plaf.basic.BasicTabbedPaneUI", "TabbedPaneScrollLayout", $PRIVATE},
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$TabbedPaneLayout", "javax.swing.plaf.basic.BasicTabbedPaneUI", "TabbedPaneLayout", $PUBLIC},
	{"javax.swing.plaf.basic.BasicTabbedPaneUI$Actions", "javax.swing.plaf.basic.BasicTabbedPaneUI", "Actions", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _BasicTabbedPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicTabbedPaneUI",
	"javax.swing.plaf.TabbedPaneUI",
	"javax.swing.SwingConstants",
	_BasicTabbedPaneUI_FieldInfo_,
	_BasicTabbedPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicTabbedPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicTabbedPaneUI$CroppedEdge,javax.swing.plaf.basic.BasicTabbedPaneUI$TabContainer,javax.swing.plaf.basic.BasicTabbedPaneUI$FocusHandler,javax.swing.plaf.basic.BasicTabbedPaneUI$MouseHandler,javax.swing.plaf.basic.BasicTabbedPaneUI$TabSelectionHandler,javax.swing.plaf.basic.BasicTabbedPaneUI$PropertyChangeHandler,javax.swing.plaf.basic.BasicTabbedPaneUI$Handler,javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabButton,javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabPanel,javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabViewport,javax.swing.plaf.basic.BasicTabbedPaneUI$ScrollableTabSupport,javax.swing.plaf.basic.BasicTabbedPaneUI$TabbedPaneScrollLayout,javax.swing.plaf.basic.BasicTabbedPaneUI$TabbedPaneLayout,javax.swing.plaf.basic.BasicTabbedPaneUI$Actions"
};

$Object* allocate$BasicTabbedPaneUI($Class* clazz) {
	return $of($alloc(BasicTabbedPaneUI));
}

int32_t BasicTabbedPaneUI::hashCode() {
	 return this->$TabbedPaneUI::hashCode();
}

bool BasicTabbedPaneUI::equals(Object$* arg0) {
	 return this->$TabbedPaneUI::equals(arg0);
}

$Object* BasicTabbedPaneUI::clone() {
	 return this->$TabbedPaneUI::clone();
}

$String* BasicTabbedPaneUI::toString() {
	 return this->$TabbedPaneUI::toString();
}

void BasicTabbedPaneUI::finalize() {
	this->$TabbedPaneUI::finalize();
}

$ints* BasicTabbedPaneUI::xCropLen = nullptr;
$ints* BasicTabbedPaneUI::yCropLen = nullptr;

void BasicTabbedPaneUI::init$() {
	$TabbedPaneUI::init$();
	this->tabsOpaque = true;
	this->contentOpaque = true;
	$set(this, tabRuns, $new($ints, 10));
	this->runCount = 0;
	this->selectedRun = -1;
	$set(this, rects, $new($RectangleArray, 0));
	$set(this, currentPadInsets, $new($Insets, 0, 0, 0, 0));
	$set(this, currentTabAreaInsets, $new($Insets, 0, 0, 0, 0));
	$set(this, calcRect, $new($Rectangle, 0, 0, 0, 0));
}

$ComponentUI* BasicTabbedPaneUI::createUI($JComponent* c) {
	$init(BasicTabbedPaneUI);
	return $new(BasicTabbedPaneUI);
}

void BasicTabbedPaneUI::loadActionMap($LazyActionMap* map) {
	$init(BasicTabbedPaneUI);
	$init($BasicTabbedPaneUI$Actions);
	$nc(map)->put($$new($BasicTabbedPaneUI$Actions, $BasicTabbedPaneUI$Actions::NEXT));
	map->put($$new($BasicTabbedPaneUI$Actions, $BasicTabbedPaneUI$Actions::PREVIOUS));
	map->put($$new($BasicTabbedPaneUI$Actions, $BasicTabbedPaneUI$Actions::RIGHT));
	map->put($$new($BasicTabbedPaneUI$Actions, $BasicTabbedPaneUI$Actions::LEFT));
	map->put($$new($BasicTabbedPaneUI$Actions, $BasicTabbedPaneUI$Actions::UP));
	map->put($$new($BasicTabbedPaneUI$Actions, $BasicTabbedPaneUI$Actions::DOWN));
	map->put($$new($BasicTabbedPaneUI$Actions, $BasicTabbedPaneUI$Actions::PAGE_UP));
	map->put($$new($BasicTabbedPaneUI$Actions, $BasicTabbedPaneUI$Actions::PAGE_DOWN));
	map->put($$new($BasicTabbedPaneUI$Actions, $BasicTabbedPaneUI$Actions::REQUEST_FOCUS));
	map->put($$new($BasicTabbedPaneUI$Actions, $BasicTabbedPaneUI$Actions::REQUEST_FOCUS_FOR_VISIBLE));
	map->put($$new($BasicTabbedPaneUI$Actions, $BasicTabbedPaneUI$Actions::SET_SELECTED));
	map->put($$new($BasicTabbedPaneUI$Actions, $BasicTabbedPaneUI$Actions::SELECT_FOCUSED));
	map->put($$new($BasicTabbedPaneUI$Actions, $BasicTabbedPaneUI$Actions::SCROLL_FORWARD));
	map->put($$new($BasicTabbedPaneUI$Actions, $BasicTabbedPaneUI$Actions::SCROLL_BACKWARD));
}

void BasicTabbedPaneUI::installUI($JComponent* c) {
	$set(this, tabPane, $cast($JTabbedPane, c));
	this->calculatedBaseline = false;
	this->rolloverTabIndex = -1;
	this->focusIndex = -1;
	$nc(c)->setLayout($(createLayoutManager()));
	installComponents();
	installDefaults();
	installListeners();
	installKeyboardActions();
}

void BasicTabbedPaneUI::uninstallUI($JComponent* c) {
	uninstallKeyboardActions();
	uninstallListeners();
	uninstallDefaults();
	uninstallComponents();
	$nc(c)->setLayout(nullptr);
	$set(this, tabPane, nullptr);
}

$LayoutManager* BasicTabbedPaneUI::createLayoutManager() {
	if ($nc(this->tabPane)->getTabLayoutPolicy() == $JTabbedPane::SCROLL_TAB_LAYOUT) {
		return $new($BasicTabbedPaneUI$TabbedPaneScrollLayout, this);
	} else {
		return $new($BasicTabbedPaneUI$TabbedPaneLayout, this);
	}
}

bool BasicTabbedPaneUI::scrollableTabLayoutEnabled() {
	return ($instanceOf($BasicTabbedPaneUI$TabbedPaneScrollLayout, $($nc(this->tabPane)->getLayout())));
}

void BasicTabbedPaneUI::installComponents() {
	if (scrollableTabLayoutEnabled()) {
		if (this->tabScroller == nullptr) {
			$set(this, tabScroller, $new($BasicTabbedPaneUI$ScrollableTabSupport, this, $nc(this->tabPane)->getTabPlacement()));
			$nc(this->tabPane)->add(static_cast<$Component*>($nc(this->tabScroller)->viewport));
		}
	}
	installTabContainer();
}

void BasicTabbedPaneUI::installTabContainer() {
	for (int32_t i = 0; i < $nc(this->tabPane)->getTabCount(); ++i) {
		$var($Component, tabComponent, $nc(this->tabPane)->getTabComponentAt(i));
		if (tabComponent != nullptr) {
			if (this->tabContainer == nullptr) {
				$set(this, tabContainer, $new($BasicTabbedPaneUI$TabContainer, this));
			}
			$nc(this->tabContainer)->add(tabComponent);
		}
	}
	if (this->tabContainer == nullptr) {
		return;
	}
	if (scrollableTabLayoutEnabled()) {
		$nc($nc(this->tabScroller)->tabPanel)->add(static_cast<$Component*>(this->tabContainer));
	} else {
		$nc(this->tabPane)->add(static_cast<$Component*>(this->tabContainer));
	}
}

$JButton* BasicTabbedPaneUI::createScrollButton(int32_t direction) {
	if (direction != $SwingConstants::SOUTH && direction != $SwingConstants::NORTH && direction != $SwingConstants::EAST && direction != $SwingConstants::WEST) {
		$throwNew($IllegalArgumentException, "Direction must be one of: SOUTH, NORTH, EAST or WEST"_s);
	}
	return $new($BasicTabbedPaneUI$ScrollableTabButton, this, direction);
}

void BasicTabbedPaneUI::uninstallComponents() {
	uninstallTabContainer();
	if (scrollableTabLayoutEnabled()) {
		$nc(this->tabPane)->remove(static_cast<$Component*>($nc(this->tabScroller)->viewport));
		$nc(this->tabPane)->remove(static_cast<$Component*>($nc(this->tabScroller)->scrollForwardButton));
		$nc(this->tabPane)->remove(static_cast<$Component*>($nc(this->tabScroller)->scrollBackwardButton));
		$set(this, tabScroller, nullptr);
	}
}

void BasicTabbedPaneUI::uninstallTabContainer() {
	if (this->tabContainer == nullptr) {
		return;
	}
	$nc(this->tabContainer)->notifyTabbedPane = false;
	$nc(this->tabContainer)->removeAll();
	if (scrollableTabLayoutEnabled()) {
		$nc(this->tabContainer)->remove(static_cast<$Component*>($nc(this->tabScroller)->croppedEdge));
		$nc($nc(this->tabScroller)->tabPanel)->remove(static_cast<$Component*>(this->tabContainer));
	} else {
		$nc(this->tabPane)->remove(static_cast<$Component*>(this->tabContainer));
	}
	$set(this, tabContainer, nullptr);
}

void BasicTabbedPaneUI::installDefaults() {
	$LookAndFeel::installColorsAndFont(this->tabPane, "TabbedPane.background"_s, "TabbedPane.foreground"_s, "TabbedPane.font"_s);
	$set(this, highlight, $UIManager::getColor("TabbedPane.light"_s));
	$set(this, lightHighlight, $UIManager::getColor("TabbedPane.highlight"_s));
	$set(this, shadow, $UIManager::getColor("TabbedPane.shadow"_s));
	$set(this, darkShadow, $UIManager::getColor("TabbedPane.darkShadow"_s));
	$set(this, focus, $UIManager::getColor("TabbedPane.focus"_s));
	$set(this, selectedColor, $UIManager::getColor("TabbedPane.selected"_s));
	this->textIconGap = $UIManager::getInt("TabbedPane.textIconGap"_s);
	$set(this, tabInsets, $UIManager::getInsets("TabbedPane.tabInsets"_s));
	$set(this, selectedTabPadInsets, $UIManager::getInsets("TabbedPane.selectedTabPadInsets"_s));
	$set(this, tabAreaInsets, $UIManager::getInsets("TabbedPane.tabAreaInsets"_s));
	this->tabsOverlapBorder = $UIManager::getBoolean("TabbedPane.tabsOverlapBorder"_s);
	$set(this, contentBorderInsets, $UIManager::getInsets("TabbedPane.contentBorderInsets"_s));
	this->tabRunOverlay = $UIManager::getInt("TabbedPane.tabRunOverlay"_s);
	this->tabsOpaque = $UIManager::getBoolean("TabbedPane.tabsOpaque"_s);
	this->contentOpaque = $UIManager::getBoolean("TabbedPane.contentOpaque"_s);
	$var($Object, opaque, $UIManager::get("TabbedPane.opaque"_s));
	if (opaque == nullptr) {
		$init($Boolean);
		$assign(opaque, $Boolean::FALSE);
	}
	$LookAndFeel::installProperty(this->tabPane, "opaque"_s, opaque);
	if (this->tabInsets == nullptr) {
		$set(this, tabInsets, $new($Insets, 0, 4, 1, 4));
	}
	if (this->selectedTabPadInsets == nullptr) {
		$set(this, selectedTabPadInsets, $new($Insets, 2, 2, 2, 1));
	}
	if (this->tabAreaInsets == nullptr) {
		$set(this, tabAreaInsets, $new($Insets, 3, 2, 0, 2));
	}
	if (this->contentBorderInsets == nullptr) {
		$set(this, contentBorderInsets, $new($Insets, 2, 2, 3, 3));
	}
}

void BasicTabbedPaneUI::uninstallDefaults() {
	$set(this, highlight, nullptr);
	$set(this, lightHighlight, nullptr);
	$set(this, shadow, nullptr);
	$set(this, darkShadow, nullptr);
	$set(this, focus, nullptr);
	$set(this, tabInsets, nullptr);
	$set(this, selectedTabPadInsets, nullptr);
	$set(this, tabAreaInsets, nullptr);
	$set(this, contentBorderInsets, nullptr);
}

void BasicTabbedPaneUI::installListeners() {
	if (($assignField(this, propertyChangeListener, createPropertyChangeListener())) != nullptr) {
		$nc(this->tabPane)->addPropertyChangeListener(this->propertyChangeListener);
	}
	if (($assignField(this, tabChangeListener, createChangeListener())) != nullptr) {
		$nc(this->tabPane)->addChangeListener(this->tabChangeListener);
	}
	if (($assignField(this, mouseListener, createMouseListener())) != nullptr) {
		$nc(this->tabPane)->addMouseListener(this->mouseListener);
	}
	$nc(this->tabPane)->addMouseMotionListener($(getHandler()));
	if (($assignField(this, focusListener, createFocusListener())) != nullptr) {
		$nc(this->tabPane)->addFocusListener(this->focusListener);
	}
	$nc(this->tabPane)->addContainerListener($(getHandler()));
	if ($nc(this->tabPane)->getTabCount() > 0) {
		$set(this, htmlViews, createHTMLVector());
	}
}

void BasicTabbedPaneUI::uninstallListeners() {
	if (this->mouseListener != nullptr) {
		$nc(this->tabPane)->removeMouseListener(this->mouseListener);
		$set(this, mouseListener, nullptr);
	}
	$nc(this->tabPane)->removeMouseMotionListener($(getHandler()));
	if (this->focusListener != nullptr) {
		$nc(this->tabPane)->removeFocusListener(this->focusListener);
		$set(this, focusListener, nullptr);
	}
	$nc(this->tabPane)->removeContainerListener($(getHandler()));
	if (this->htmlViews != nullptr) {
		$nc(this->htmlViews)->removeAllElements();
		$set(this, htmlViews, nullptr);
	}
	if (this->tabChangeListener != nullptr) {
		$nc(this->tabPane)->removeChangeListener(this->tabChangeListener);
		$set(this, tabChangeListener, nullptr);
	}
	if (this->propertyChangeListener != nullptr) {
		$nc(this->tabPane)->removePropertyChangeListener(this->propertyChangeListener);
		$set(this, propertyChangeListener, nullptr);
	}
	$set(this, handler, nullptr);
}

$MouseListener* BasicTabbedPaneUI::createMouseListener() {
	return getHandler();
}

$FocusListener* BasicTabbedPaneUI::createFocusListener() {
	return getHandler();
}

$ChangeListener* BasicTabbedPaneUI::createChangeListener() {
	return getHandler();
}

$PropertyChangeListener* BasicTabbedPaneUI::createPropertyChangeListener() {
	return getHandler();
}

$BasicTabbedPaneUI$Handler* BasicTabbedPaneUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicTabbedPaneUI$Handler, this));
	}
	return this->handler;
}

void BasicTabbedPaneUI::installKeyboardActions() {
	$var($InputMap, km, getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$SwingUtilities::replaceUIInputMap(this->tabPane, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, km);
	$assign(km, getInputMap($JComponent::WHEN_FOCUSED));
	$SwingUtilities::replaceUIInputMap(this->tabPane, $JComponent::WHEN_FOCUSED, km);
	$LazyActionMap::installLazyActionMap(this->tabPane, BasicTabbedPaneUI::class$, "TabbedPane.actionMap"_s);
	updateMnemonics();
}

$InputMap* BasicTabbedPaneUI::getInputMap(int32_t condition) {
	if (condition == $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT) {
		return $cast($InputMap, $DefaultLookup::get(this->tabPane, this, "TabbedPane.ancestorInputMap"_s));
	} else if (condition == $JComponent::WHEN_FOCUSED) {
		return $cast($InputMap, $DefaultLookup::get(this->tabPane, this, "TabbedPane.focusInputMap"_s));
	}
	return nullptr;
}

void BasicTabbedPaneUI::uninstallKeyboardActions() {
	$SwingUtilities::replaceUIActionMap(this->tabPane, nullptr);
	$SwingUtilities::replaceUIInputMap(this->tabPane, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, nullptr);
	$SwingUtilities::replaceUIInputMap(this->tabPane, $JComponent::WHEN_FOCUSED, nullptr);
	$SwingUtilities::replaceUIInputMap(this->tabPane, $JComponent::WHEN_IN_FOCUSED_WINDOW, nullptr);
	$set(this, mnemonicToIndexMap, nullptr);
	$set(this, mnemonicInputMap, nullptr);
}

void BasicTabbedPaneUI::updateMnemonics() {
	resetMnemonics();
	for (int32_t counter = $nc(this->tabPane)->getTabCount() - 1; counter >= 0; --counter) {
		int32_t mnemonic = $nc(this->tabPane)->getMnemonicAt(counter);
		if (mnemonic > 0) {
			addMnemonic(counter, mnemonic);
		}
	}
}

void BasicTabbedPaneUI::resetMnemonics() {
	if (this->mnemonicToIndexMap != nullptr) {
		$nc(this->mnemonicToIndexMap)->clear();
		$nc(this->mnemonicInputMap)->clear();
	}
}

void BasicTabbedPaneUI::addMnemonic(int32_t index, int32_t mnemonic) {
	if (this->mnemonicToIndexMap == nullptr) {
		initMnemonics();
	}
	$nc(this->mnemonicInputMap)->put($($KeyStroke::getKeyStroke(mnemonic, $BasicLookAndFeel::getFocusAcceleratorKeyMask())), "setSelectedIndex"_s);
	$nc(this->mnemonicInputMap)->put($($KeyStroke::getKeyStroke(mnemonic, $SwingUtilities2::setAltGraphMask($BasicLookAndFeel::getFocusAcceleratorKeyMask()))), "setSelectedIndex"_s);
	$var($Object, var$0, $of($Integer::valueOf(mnemonic)));
	$nc(this->mnemonicToIndexMap)->put(var$0, $($Integer::valueOf(index)));
}

void BasicTabbedPaneUI::initMnemonics() {
	$set(this, mnemonicToIndexMap, $new($Hashtable));
	$set(this, mnemonicInputMap, $new($ComponentInputMapUIResource, this->tabPane));
	$nc(this->mnemonicInputMap)->setParent($($SwingUtilities::getUIInputMap(this->tabPane, $JComponent::WHEN_IN_FOCUSED_WINDOW)));
	$SwingUtilities::replaceUIInputMap(this->tabPane, $JComponent::WHEN_IN_FOCUSED_WINDOW, this->mnemonicInputMap);
}

void BasicTabbedPaneUI::setRolloverTab(int32_t x, int32_t y) {
	setRolloverTab(tabForCoordinate(this->tabPane, x, y, false));
}

void BasicTabbedPaneUI::setRolloverTab(int32_t index) {
	this->rolloverTabIndex = index;
}

int32_t BasicTabbedPaneUI::getRolloverTab() {
	return this->rolloverTabIndex;
}

$Dimension* BasicTabbedPaneUI::getMinimumSize($JComponent* c) {
	return nullptr;
}

$Dimension* BasicTabbedPaneUI::getMaximumSize($JComponent* c) {
	return nullptr;
}

int32_t BasicTabbedPaneUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$TabbedPaneUI::getBaseline(c, width, height);
	int32_t baseline = calculateBaselineIfNecessary();
	if (baseline != -1) {
		int32_t placement = $nc(this->tabPane)->getTabPlacement();
		$var($Insets, insets, $nc(this->tabPane)->getInsets());
		$var($Insets, tabAreaInsets, getTabAreaInsets(placement));
		switch (placement) {
		case $JTabbedPane::TOP:
			{
				baseline += $nc(insets)->top + $nc(tabAreaInsets)->top;
				return baseline;
			}
		case $JTabbedPane::BOTTOM:
			{
				baseline = height - $nc(insets)->bottom - $nc(tabAreaInsets)->bottom - this->maxTabHeight + baseline;
				return baseline;
			}
		case $JTabbedPane::LEFT:
			{}
		case $JTabbedPane::RIGHT:
			{
				baseline += $nc(insets)->top + $nc(tabAreaInsets)->top;
				return baseline;
			}
		}
	}
	return -1;
}

$Component$BaselineResizeBehavior* BasicTabbedPaneUI::getBaselineResizeBehavior($JComponent* c) {
	$TabbedPaneUI::getBaselineResizeBehavior(c);
	switch ($nc(this->tabPane)->getTabPlacement()) {
	case $JTabbedPane::LEFT:
		{}
	case $JTabbedPane::RIGHT:
		{}
	case $JTabbedPane::TOP:
		{
			$init($Component$BaselineResizeBehavior);
			return $Component$BaselineResizeBehavior::CONSTANT_ASCENT;
		}
	case $JTabbedPane::BOTTOM:
		{
			$init($Component$BaselineResizeBehavior);
			return $Component$BaselineResizeBehavior::CONSTANT_DESCENT;
		}
	}
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::OTHER;
}

int32_t BasicTabbedPaneUI::getBaseline(int32_t tab) {
	if ($nc(this->tabPane)->getTabComponentAt(tab) != nullptr) {
		int32_t offset = getBaselineOffset();
		if (offset != 0) {
			return -1;
		}
		$var($Component, c, $nc(this->tabPane)->getTabComponentAt(tab));
		$var($Dimension, pref, $nc(c)->getPreferredSize());
		$var($Insets, tabInsets, getTabInsets($nc(this->tabPane)->getTabPlacement(), tab));
		int32_t cellHeight = this->maxTabHeight - $nc(tabInsets)->top - tabInsets->bottom;
		return c->getBaseline($nc(pref)->width, pref->height) + (cellHeight - $nc(pref)->height) / 2 + tabInsets->top;
	} else {
		$var($View, view, getTextViewForTab(tab));
		if (view != nullptr) {
			int32_t viewHeight = $cast(int32_t, view->getPreferredSpan($View::Y_AXIS));
			int32_t baseline = $BasicHTML::getHTMLBaseline(view, $cast(int32_t, view->getPreferredSpan($View::X_AXIS)), viewHeight);
			if (baseline >= 0) {
				return this->maxTabHeight / 2 - viewHeight / 2 + baseline + getBaselineOffset();
			}
			return -1;
		}
	}
	$var($FontMetrics, metrics, getFontMetrics());
	int32_t fontHeight = $nc(metrics)->getHeight();
	int32_t fontBaseline = metrics->getAscent();
	return this->maxTabHeight / 2 - fontHeight / 2 + fontBaseline + getBaselineOffset();
}

int32_t BasicTabbedPaneUI::getBaselineOffset() {
	switch ($nc(this->tabPane)->getTabPlacement()) {
	case $JTabbedPane::TOP:
		{
			if ($nc(this->tabPane)->getTabCount() > 1) {
				return 1;
			} else {
				return -1;
			}
		}
	case $JTabbedPane::BOTTOM:
		{
			if ($nc(this->tabPane)->getTabCount() > 1) {
				return -1;
			} else {
				return 1;
			}
		}
	default:
		{
			return (this->maxTabHeight % 2);
		}
	}
}

int32_t BasicTabbedPaneUI::calculateBaselineIfNecessary() {
	if (!this->calculatedBaseline) {
		this->calculatedBaseline = true;
		this->baseline = -1;
		if ($nc(this->tabPane)->getTabCount() > 0) {
			calculateBaseline();
		}
	}
	return this->baseline;
}

void BasicTabbedPaneUI::calculateBaseline() {
	int32_t tabCount = $nc(this->tabPane)->getTabCount();
	int32_t tabPlacement = $nc(this->tabPane)->getTabPlacement();
	this->maxTabHeight = calculateMaxTabHeight(tabPlacement);
	this->baseline = getBaseline(0);
	if (isHorizontalTabPlacement()) {
		for (int32_t i = 1; i < tabCount; ++i) {
			if (getBaseline(i) != this->baseline) {
				this->baseline = -1;
				break;
			}
		}
	} else {
		$var($FontMetrics, fontMetrics, getFontMetrics());
		int32_t fontHeight = $nc(fontMetrics)->getHeight();
		int32_t height = calculateTabHeight(tabPlacement, 0, fontHeight);
		for (int32_t i = 1; i < tabCount; ++i) {
			int32_t newHeight = calculateTabHeight(tabPlacement, i, fontHeight);
			if (height != newHeight) {
				this->baseline = -1;
				break;
			}
		}
	}
}

void BasicTabbedPaneUI::paint($Graphics* g, $JComponent* c) {
	int32_t selectedIndex = $nc(this->tabPane)->getSelectedIndex();
	int32_t tabPlacement = $nc(this->tabPane)->getTabPlacement();
	ensureCurrentLayout();
	if (this->tabsOverlapBorder) {
		paintContentBorder(g, tabPlacement, selectedIndex);
	}
	if (!scrollableTabLayoutEnabled()) {
		paintTabArea(g, tabPlacement, selectedIndex);
	}
	if (!this->tabsOverlapBorder) {
		paintContentBorder(g, tabPlacement, selectedIndex);
	}
}

void BasicTabbedPaneUI::paintTabArea($Graphics* g, int32_t tabPlacement, int32_t selectedIndex) {
	int32_t tabCount = $nc(this->tabPane)->getTabCount();
	$var($Rectangle, iconRect, $new($Rectangle));
	$var($Rectangle, textRect, $new($Rectangle));
	$var($Rectangle, clipRect, $nc(g)->getClipBounds());
	for (int32_t i = this->runCount - 1; i >= 0; --i) {
		int32_t start = $nc(this->tabRuns)->get(i);
		int32_t next = $nc(this->tabRuns)->get((i == this->runCount - 1) ? 0 : i + 1);
		int32_t end = (next != 0 ? next - 1 : tabCount - 1);
		for (int32_t j = start; j <= end; ++j) {
			if (j != selectedIndex && $nc($nc(this->rects)->get(j))->intersects(clipRect)) {
				paintTab(g, tabPlacement, this->rects, j, iconRect, textRect);
			}
		}
	}
	if (selectedIndex >= 0 && $nc($nc(this->rects)->get(selectedIndex))->intersects(clipRect)) {
		paintTab(g, tabPlacement, this->rects, selectedIndex, iconRect, textRect);
	}
}

void BasicTabbedPaneUI::paintTab($Graphics* g, int32_t tabPlacement, $RectangleArray* rects, int32_t tabIndex, $Rectangle* iconRect, $Rectangle* textRect) {
	$var($Rectangle, tabRect, $nc(rects)->get(tabIndex));
	int32_t selectedIndex = $nc(this->tabPane)->getSelectedIndex();
	bool isSelected = selectedIndex == tabIndex;
	if (this->tabsOpaque || $nc(this->tabPane)->isOpaque()) {
		paintTabBackground(g, tabPlacement, tabIndex, $nc(tabRect)->x, tabRect->y, tabRect->width, tabRect->height, isSelected);
	}
	paintTabBorder(g, tabPlacement, tabIndex, $nc(tabRect)->x, tabRect->y, tabRect->width, tabRect->height, isSelected);
	$var($String, title, $nc(this->tabPane)->getTitleAt(tabIndex));
	$var($Font, font, $nc(this->tabPane)->getFont());
	$var($FontMetrics, metrics, $SwingUtilities2::getFontMetrics(this->tabPane, g, font));
	$var($Icon, icon, getIconForTab(tabIndex));
	layoutLabel(tabPlacement, metrics, tabIndex, title, icon, tabRect, iconRect, textRect, isSelected);
	if ($nc(this->tabPane)->getTabComponentAt(tabIndex) == nullptr) {
		$var($String, clippedTitle, title);
		bool var$2 = scrollableTabLayoutEnabled();
		bool var$1 = var$2 && $nc($nc(this->tabScroller)->croppedEdge)->isParamsSet();
		bool var$0 = var$1 && $nc($nc(this->tabScroller)->croppedEdge)->getTabIndex() == tabIndex;
		if (var$0 && isHorizontalTabPlacement()) {
			int32_t var$3 = $nc($nc(this->tabScroller)->croppedEdge)->getCropline() - ($nc(textRect)->x - $nc(tabRect)->x);
			int32_t availTextWidth = var$3 - $nc($nc(this->tabScroller)->croppedEdge)->getCroppedSideWidth();
			$assign(clippedTitle, $SwingUtilities2::clipStringIfNecessary(nullptr, metrics, title, availTextWidth));
		} else {
			bool var$5 = !scrollableTabLayoutEnabled();
			if (var$5 && isHorizontalTabPlacement()) {
				$assign(clippedTitle, $SwingUtilities2::clipStringIfNecessary(nullptr, metrics, title, $nc(textRect)->width));
			}
		}
		paintText(g, tabPlacement, font, metrics, tabIndex, clippedTitle, textRect, isSelected);
		paintIcon(g, tabPlacement, tabIndex, icon, iconRect, isSelected);
	}
	paintFocusIndicator(g, tabPlacement, rects, tabIndex, iconRect, textRect, isSelected);
}

bool BasicTabbedPaneUI::isHorizontalTabPlacement() {
	bool var$0 = $nc(this->tabPane)->getTabPlacement() == $SwingConstants::TOP;
	return var$0 || $nc(this->tabPane)->getTabPlacement() == $SwingConstants::BOTTOM;
}

$Polygon* BasicTabbedPaneUI::createCroppedTabShape(int32_t tabPlacement, $Rectangle* tabRect, int32_t cropline) {
	$init(BasicTabbedPaneUI);
	int32_t rlen = 0;
	int32_t start = 0;
	int32_t end = 0;
	int32_t ostart = 0;
	switch (tabPlacement) {
	case $SwingConstants::LEFT:
		{}
	case $SwingConstants::RIGHT:
		{
			rlen = $nc(tabRect)->width;
			start = $nc(tabRect)->x;
			end = $nc(tabRect)->x + tabRect->width;
			ostart = $nc(tabRect)->y + tabRect->height;
			break;
		}
	case $SwingConstants::TOP:
		{}
	case $SwingConstants::BOTTOM:
		{}
	default:
		{
			rlen = $nc(tabRect)->height;
			start = $nc(tabRect)->y;
			end = $nc(tabRect)->y + tabRect->height;
			ostart = $nc(tabRect)->x + tabRect->width;
		}
	}
	int32_t rcnt = $div(rlen, BasicTabbedPaneUI::CROP_SEGMENT);
	if ($mod(rlen, BasicTabbedPaneUI::CROP_SEGMENT) > 0) {
		++rcnt;
	}
	int32_t npts = 2 + (rcnt * 8);
	$var($ints, xp, $new($ints, npts));
	$var($ints, yp, $new($ints, npts));
	int32_t pcnt = 0;
	xp->set(pcnt, ostart);
	yp->set(pcnt++, end);
	xp->set(pcnt, ostart);
	yp->set(pcnt++, start);
	for (int32_t i = 0; i < rcnt; ++i) {
		for (int32_t j = 0; j < $nc(BasicTabbedPaneUI::xCropLen)->length; ++j) {
			xp->set(pcnt, cropline - $nc(BasicTabbedPaneUI::xCropLen)->get(j));
			yp->set(pcnt, start + (i * BasicTabbedPaneUI::CROP_SEGMENT) + $nc(BasicTabbedPaneUI::yCropLen)->get(j));
			if (yp->get(pcnt) >= end) {
				yp->set(pcnt, end);
				++pcnt;
				break;
			}
			++pcnt;
		}
	}
	if (tabPlacement == $JTabbedPane::TOP || tabPlacement == $JTabbedPane::BOTTOM) {
		return $new($Polygon, xp, yp, pcnt);
	} else {
		return $new($Polygon, yp, xp, pcnt);
	}
}

void BasicTabbedPaneUI::paintCroppedTabEdge($Graphics* g) {
	int32_t tabIndex = $nc($nc(this->tabScroller)->croppedEdge)->getTabIndex();
	int32_t cropline = $nc($nc(this->tabScroller)->croppedEdge)->getCropline();
	int32_t x = 0;
	int32_t y = 0;
	{
		int32_t xx = 0;
		int32_t yy = 0;
		switch ($nc(this->tabPane)->getTabPlacement()) {
		case $SwingConstants::LEFT:
			{}
		case $SwingConstants::RIGHT:
			{
				x = $nc($nc(this->rects)->get(tabIndex))->x;
				y = cropline;
				xx = x;
				$nc(g)->setColor(this->shadow);
				while (xx <= x + $nc($nc(this->rects)->get(tabIndex))->width) {
					for (int32_t i = 0; i < $nc(BasicTabbedPaneUI::xCropLen)->length; i += 2) {
						$nc(g)->drawLine(xx + $nc(BasicTabbedPaneUI::yCropLen)->get(i), y - $nc(BasicTabbedPaneUI::xCropLen)->get(i), xx + $nc(BasicTabbedPaneUI::yCropLen)->get(i + 1) - 1, y - $nc(BasicTabbedPaneUI::xCropLen)->get(i + 1));
					}
					xx += BasicTabbedPaneUI::CROP_SEGMENT;
				}
				break;
			}
		case $SwingConstants::TOP:
			{}
		case $SwingConstants::BOTTOM:
			{}
		default:
			{
				x = cropline;
				y = $nc($nc(this->rects)->get(tabIndex))->y;
				yy = y;
				$nc(g)->setColor(this->shadow);
				while (yy <= y + $nc($nc(this->rects)->get(tabIndex))->height) {
					for (int32_t i = 0; i < $nc(BasicTabbedPaneUI::xCropLen)->length; i += 2) {
						$nc(g)->drawLine(x - $nc(BasicTabbedPaneUI::xCropLen)->get(i), yy + $nc(BasicTabbedPaneUI::yCropLen)->get(i), x - $nc(BasicTabbedPaneUI::xCropLen)->get(i + 1), yy + $nc(BasicTabbedPaneUI::yCropLen)->get(i + 1) - 1);
					}
					yy += BasicTabbedPaneUI::CROP_SEGMENT;
				}
			}
		}
	}
}

void BasicTabbedPaneUI::layoutLabel(int32_t tabPlacement, $FontMetrics* metrics, int32_t tabIndex, $String* title, $Icon* icon, $Rectangle* tabRect, $Rectangle* iconRect, $Rectangle* textRect, bool isSelected) {
	$nc(textRect)->x = (textRect->y = ($nc(iconRect)->x = (iconRect->y = 0)));
	$var($View, v, getTextViewForTab(tabIndex));
	if (v != nullptr) {
		$nc(this->tabPane)->putClientProperty("html"_s, v);
	}
	$SwingUtilities::layoutCompoundLabel(this->tabPane, metrics, title, icon, $SwingUtilities::CENTER, $SwingUtilities::CENTER, $SwingUtilities::CENTER, $SwingUtilities::TRAILING, tabRect, iconRect, textRect, this->textIconGap);
	$nc(this->tabPane)->putClientProperty("html"_s, nullptr);
	int32_t xNudge = getTabLabelShiftX(tabPlacement, tabIndex, isSelected);
	int32_t yNudge = getTabLabelShiftY(tabPlacement, tabIndex, isSelected);
	iconRect->x += xNudge;
	iconRect->y += yNudge;
	textRect->x += xNudge;
	textRect->y += yNudge;
}

void BasicTabbedPaneUI::paintIcon($Graphics* g, int32_t tabPlacement, int32_t tabIndex, $Icon* icon, $Rectangle* iconRect, bool isSelected) {
	if (icon != nullptr) {
		$var($Shape, oldClip, $nc(g)->getClip());
		$nc(($cast($Graphics2D, g)))->clip(iconRect);
		icon->paintIcon(this->tabPane, g, $nc(iconRect)->x, iconRect->y);
		g->setClip(oldClip);
	}
}

void BasicTabbedPaneUI::paintText($Graphics* g, int32_t tabPlacement, $Font* font, $FontMetrics* metrics, int32_t tabIndex, $String* title, $Rectangle* textRect, bool isSelected) {
	$nc(g)->setFont(font);
	$var($View, v, getTextViewForTab(tabIndex));
	if (v != nullptr) {
		v->paint(g, textRect);
	} else {
		int32_t mnemIndex = $nc(this->tabPane)->getDisplayedMnemonicIndexAt(tabIndex);
		bool var$0 = $nc(this->tabPane)->isEnabled();
		if (var$0 && $nc(this->tabPane)->isEnabledAt(tabIndex)) {
			$var($Color, fg, $nc(this->tabPane)->getForegroundAt(tabIndex));
			if (isSelected && ($instanceOf($UIResource, fg))) {
				$var($Color, selectedFG, $UIManager::getColor("TabbedPane.selectedForeground"_s));
				if (selectedFG != nullptr) {
					$assign(fg, selectedFG);
				}
			}
			g->setColor(fg);
			$SwingUtilities2::drawStringUnderlineCharAt(this->tabPane, g, title, mnemIndex, $nc(textRect)->x, textRect->y + $nc(metrics)->getAscent());
		} else {
			g->setColor($($nc($($nc(this->tabPane)->getBackgroundAt(tabIndex)))->brighter()));
			$SwingUtilities2::drawStringUnderlineCharAt(this->tabPane, g, title, mnemIndex, $nc(textRect)->x, textRect->y + $nc(metrics)->getAscent());
			g->setColor($($nc($($nc(this->tabPane)->getBackgroundAt(tabIndex)))->darker()));
			$SwingUtilities2::drawStringUnderlineCharAt(this->tabPane, g, title, mnemIndex, $nc(textRect)->x - 1, textRect->y + $nc(metrics)->getAscent() - 1);
		}
	}
}

int32_t BasicTabbedPaneUI::getTabLabelShiftX(int32_t tabPlacement, int32_t tabIndex, bool isSelected) {
	$var($Rectangle, tabRect, $nc(this->rects)->get(tabIndex));
	$var($String, propKey, isSelected ? "selectedLabelShift"_s : "labelShift"_s);
	int32_t nudge = $DefaultLookup::getInt(this->tabPane, this, $$str({"TabbedPane."_s, propKey}), 1);
	switch (tabPlacement) {
	case $SwingConstants::LEFT:
		{
			return nudge;
		}
	case $SwingConstants::RIGHT:
		{
			return -nudge;
		}
	case $SwingConstants::BOTTOM:
		{}
	case $SwingConstants::TOP:
		{}
	default:
		{
			return $nc(tabRect)->width % 2;
		}
	}
}

int32_t BasicTabbedPaneUI::getTabLabelShiftY(int32_t tabPlacement, int32_t tabIndex, bool isSelected) {
	$var($Rectangle, tabRect, $nc(this->rects)->get(tabIndex));
	int32_t nudge = (isSelected ? $DefaultLookup::getInt(this->tabPane, this, "TabbedPane.selectedLabelShift"_s, -1) : $DefaultLookup::getInt(this->tabPane, this, "TabbedPane.labelShift"_s, 1));
	switch (tabPlacement) {
	case $SwingConstants::BOTTOM:
		{
			return -nudge;
		}
	case $SwingConstants::LEFT:
		{}
	case $SwingConstants::RIGHT:
		{
			return $nc(tabRect)->height % 2;
		}
	case $SwingConstants::TOP:
		{}
	default:
		{
			return nudge;
		}
	}
}

void BasicTabbedPaneUI::paintFocusIndicator($Graphics* g, int32_t tabPlacement, $RectangleArray* rects, int32_t tabIndex, $Rectangle* iconRect, $Rectangle* textRect, bool isSelected) {
	$var($Rectangle, tabRect, $nc(rects)->get(tabIndex));
	if ($nc(this->tabPane)->hasFocus() && isSelected) {
		int32_t x = 0;
		int32_t y = 0;
		int32_t w = 0;
		int32_t h = 0;
		$nc(g)->setColor(this->focus);
		switch (tabPlacement) {
		case $SwingConstants::LEFT:
			{
				x = $nc(tabRect)->x + 3;
				y = $nc(tabRect)->y + 3;
				w = $nc(tabRect)->width - 5;
				h = $nc(tabRect)->height - 6;
				break;
			}
		case $SwingConstants::RIGHT:
			{
				x = $nc(tabRect)->x + 2;
				y = $nc(tabRect)->y + 3;
				w = $nc(tabRect)->width - 5;
				h = $nc(tabRect)->height - 6;
				break;
			}
		case $SwingConstants::BOTTOM:
			{
				x = $nc(tabRect)->x + 3;
				y = $nc(tabRect)->y + 2;
				w = $nc(tabRect)->width - 6;
				h = $nc(tabRect)->height - 5;
				break;
			}
		case $SwingConstants::TOP:
			{}
		default:
			{
				x = $nc(tabRect)->x + 3;
				y = $nc(tabRect)->y + 3;
				w = $nc(tabRect)->width - 6;
				h = $nc(tabRect)->height - 5;
			}
		}
		$BasicGraphicsUtils::drawDashedRect(g, x, y, w, h);
	}
}

void BasicTabbedPaneUI::paintTabBorder($Graphics* g, int32_t tabPlacement, int32_t tabIndex, int32_t x, int32_t y, int32_t w, int32_t h, bool isSelected) {
	$nc(g)->setColor(this->lightHighlight);
	switch (tabPlacement) {
	case $SwingConstants::LEFT:
		{
			g->drawLine(x + 1, y + h - 2, x + 1, y + h - 2);
			g->drawLine(x, y + 2, x, y + h - 3);
			g->drawLine(x + 1, y + 1, x + 1, y + 1);
			g->drawLine(x + 2, y, x + w - 1, y);
			g->setColor(this->shadow);
			g->drawLine(x + 2, y + h - 2, x + w - 1, y + h - 2);
			g->setColor(this->darkShadow);
			g->drawLine(x + 2, y + h - 1, x + w - 1, y + h - 1);
			break;
		}
	case $SwingConstants::RIGHT:
		{
			g->drawLine(x, y, x + w - 3, y);
			g->setColor(this->shadow);
			g->drawLine(x, y + h - 2, x + w - 3, y + h - 2);
			g->drawLine(x + w - 2, y + 2, x + w - 2, y + h - 3);
			g->setColor(this->darkShadow);
			g->drawLine(x + w - 2, y + 1, x + w - 2, y + 1);
			g->drawLine(x + w - 2, y + h - 2, x + w - 2, y + h - 2);
			g->drawLine(x + w - 1, y + 2, x + w - 1, y + h - 3);
			g->drawLine(x, y + h - 1, x + w - 3, y + h - 1);
			break;
		}
	case $SwingConstants::BOTTOM:
		{
			g->drawLine(x, y, x, y + h - 3);
			g->drawLine(x + 1, y + h - 2, x + 1, y + h - 2);
			g->setColor(this->shadow);
			g->drawLine(x + 2, y + h - 2, x + w - 3, y + h - 2);
			g->drawLine(x + w - 2, y, x + w - 2, y + h - 3);
			g->setColor(this->darkShadow);
			g->drawLine(x + 2, y + h - 1, x + w - 3, y + h - 1);
			g->drawLine(x + w - 2, y + h - 2, x + w - 2, y + h - 2);
			g->drawLine(x + w - 1, y, x + w - 1, y + h - 3);
			break;
		}
	case $SwingConstants::TOP:
		{}
	default:
		{
			g->drawLine(x, y + 2, x, y + h - 1);
			g->drawLine(x + 1, y + 1, x + 1, y + 1);
			g->drawLine(x + 2, y, x + w - 3, y);
			g->setColor(this->shadow);
			g->drawLine(x + w - 2, y + 2, x + w - 2, y + h - 1);
			g->setColor(this->darkShadow);
			g->drawLine(x + w - 1, y + 2, x + w - 1, y + h - 1);
			g->drawLine(x + w - 2, y + 1, x + w - 2, y + 1);
		}
	}
}

void BasicTabbedPaneUI::paintTabBackground($Graphics* g, int32_t tabPlacement, int32_t tabIndex, int32_t x, int32_t y, int32_t w, int32_t h, bool isSelected) {
	$nc(g)->setColor(!isSelected || this->selectedColor == nullptr ? $($nc(this->tabPane)->getBackgroundAt(tabIndex)) : this->selectedColor);
	switch (tabPlacement) {
	case $SwingConstants::LEFT:
		{
			g->fillRect(x + 1, y + 1, w - 1, h - 3);
			break;
		}
	case $SwingConstants::RIGHT:
		{
			g->fillRect(x, y + 1, w - 2, h - 3);
			break;
		}
	case $SwingConstants::BOTTOM:
		{
			g->fillRect(x + 1, y, w - 3, h - 1);
			break;
		}
	case $SwingConstants::TOP:
		{}
	default:
		{
			g->fillRect(x + 1, y + 1, w - 3, h - 1);
		}
	}
}

void BasicTabbedPaneUI::paintContentBorder($Graphics* g, int32_t tabPlacement, int32_t selectedIndex) {
	int32_t width = $nc(this->tabPane)->getWidth();
	int32_t height = $nc(this->tabPane)->getHeight();
	$var($Insets, insets, $nc(this->tabPane)->getInsets());
	$var($Insets, tabAreaInsets, getTabAreaInsets(tabPlacement));
	int32_t x = $nc(insets)->left;
	int32_t y = insets->top;
	int32_t w = width - insets->right - insets->left;
	int32_t h = height - insets->top - insets->bottom;
	switch (tabPlacement) {
	case $SwingConstants::LEFT:
		{
			x += calculateTabAreaWidth(tabPlacement, this->runCount, this->maxTabWidth);
			if (this->tabsOverlapBorder) {
				x -= $nc(tabAreaInsets)->right;
			}
			w -= (x - insets->left);
			break;
		}
	case $SwingConstants::RIGHT:
		{
			w -= calculateTabAreaWidth(tabPlacement, this->runCount, this->maxTabWidth);
			if (this->tabsOverlapBorder) {
				w += $nc(tabAreaInsets)->left;
			}
			break;
		}
	case $SwingConstants::BOTTOM:
		{
			h -= calculateTabAreaHeight(tabPlacement, this->runCount, this->maxTabHeight);
			if (this->tabsOverlapBorder) {
				h += $nc(tabAreaInsets)->top;
			}
			break;
		}
	case $SwingConstants::TOP:
		{}
	default:
		{
			y += calculateTabAreaHeight(tabPlacement, this->runCount, this->maxTabHeight);
			if (this->tabsOverlapBorder) {
				y -= $nc(tabAreaInsets)->bottom;
			}
			h -= (y - insets->top);
		}
	}
	bool var$0 = $nc(this->tabPane)->getTabCount() > 0;
	if (var$0 && (this->contentOpaque || $nc(this->tabPane)->isOpaque())) {
		$var($Color, color, $UIManager::getColor("TabbedPane.contentAreaColor"_s));
		if (color != nullptr) {
			$nc(g)->setColor(color);
		} else if (this->selectedColor == nullptr || selectedIndex == -1) {
			$nc(g)->setColor($($nc(this->tabPane)->getBackground()));
		} else {
			$nc(g)->setColor(this->selectedColor);
		}
		$nc(g)->fillRect(x, y, w, h);
	}
	paintContentBorderTopEdge(g, tabPlacement, selectedIndex, x, y, w, h);
	paintContentBorderLeftEdge(g, tabPlacement, selectedIndex, x, y, w, h);
	paintContentBorderBottomEdge(g, tabPlacement, selectedIndex, x, y, w, h);
	paintContentBorderRightEdge(g, tabPlacement, selectedIndex, x, y, w, h);
}

void BasicTabbedPaneUI::paintContentBorderTopEdge($Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($Rectangle, selRect, selectedIndex < 0 ? ($Rectangle*)nullptr : getTabBounds(selectedIndex, this->calcRect));
	$nc(g)->setColor(this->lightHighlight);
	if (tabPlacement != $SwingConstants::TOP || selectedIndex < 0 || ($nc(selRect)->y + selRect->height + 1 < y) || ($nc(selRect)->x < x || $nc(selRect)->x > x + w)) {
		g->drawLine(x, y, x + w - 2, y);
	} else {
		g->drawLine(x, y, selRect->x - 1, y);
		if (selRect->x + selRect->width < x + w - 2) {
			g->drawLine(selRect->x + selRect->width, y, x + w - 2, y);
		} else {
			g->setColor(this->shadow);
			g->drawLine(x + w - 2, y, x + w - 2, y);
		}
	}
}

void BasicTabbedPaneUI::paintContentBorderLeftEdge($Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($Rectangle, selRect, selectedIndex < 0 ? ($Rectangle*)nullptr : getTabBounds(selectedIndex, this->calcRect));
	$nc(g)->setColor(this->lightHighlight);
	if (tabPlacement != $SwingConstants::LEFT || selectedIndex < 0 || ($nc(selRect)->x + selRect->width + 1 < x) || ($nc(selRect)->y < y || $nc(selRect)->y > y + h)) {
		g->drawLine(x, y, x, y + h - 2);
	} else {
		g->drawLine(x, y, x, selRect->y - 1);
		if (selRect->y + selRect->height < y + h - 2) {
			g->drawLine(x, selRect->y + selRect->height, x, y + h - 2);
		}
	}
}

void BasicTabbedPaneUI::paintContentBorderBottomEdge($Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($Rectangle, selRect, selectedIndex < 0 ? ($Rectangle*)nullptr : getTabBounds(selectedIndex, this->calcRect));
	$nc(g)->setColor(this->shadow);
	if (tabPlacement != $SwingConstants::BOTTOM || selectedIndex < 0 || ($nc(selRect)->y - 1 > h) || ($nc(selRect)->x < x || $nc(selRect)->x > x + w)) {
		g->drawLine(x + 1, y + h - 2, x + w - 2, y + h - 2);
		g->setColor(this->darkShadow);
		g->drawLine(x, y + h - 1, x + w - 1, y + h - 1);
	} else {
		g->drawLine(x + 1, y + h - 2, selRect->x - 1, y + h - 2);
		g->setColor(this->darkShadow);
		g->drawLine(x, y + h - 1, selRect->x - 1, y + h - 1);
		if (selRect->x + selRect->width < x + w - 2) {
			g->setColor(this->shadow);
			g->drawLine(selRect->x + selRect->width, y + h - 2, x + w - 2, y + h - 2);
			g->setColor(this->darkShadow);
			g->drawLine(selRect->x + selRect->width, y + h - 1, x + w - 1, y + h - 1);
		}
	}
}

void BasicTabbedPaneUI::paintContentBorderRightEdge($Graphics* g, int32_t tabPlacement, int32_t selectedIndex, int32_t x, int32_t y, int32_t w, int32_t h) {
	$var($Rectangle, selRect, selectedIndex < 0 ? ($Rectangle*)nullptr : getTabBounds(selectedIndex, this->calcRect));
	$nc(g)->setColor(this->shadow);
	if (tabPlacement != $SwingConstants::RIGHT || selectedIndex < 0 || ($nc(selRect)->x - 1 > w) || ($nc(selRect)->y < y || $nc(selRect)->y > y + h)) {
		g->drawLine(x + w - 2, y + 1, x + w - 2, y + h - 3);
		g->setColor(this->darkShadow);
		g->drawLine(x + w - 1, y, x + w - 1, y + h - 1);
	} else {
		g->drawLine(x + w - 2, y + 1, x + w - 2, selRect->y - 1);
		g->setColor(this->darkShadow);
		g->drawLine(x + w - 1, y, x + w - 1, selRect->y - 1);
		if (selRect->y + selRect->height < y + h - 2) {
			g->setColor(this->shadow);
			g->drawLine(x + w - 2, selRect->y + selRect->height, x + w - 2, y + h - 2);
			g->setColor(this->darkShadow);
			g->drawLine(x + w - 1, selRect->y + selRect->height, x + w - 1, y + h - 2);
		}
	}
}

void BasicTabbedPaneUI::ensureCurrentLayout() {
	if (!$nc(this->tabPane)->isValid()) {
		$nc(this->tabPane)->validate();
	}
	if (!$nc(this->tabPane)->isValid()) {
		$var($BasicTabbedPaneUI$TabbedPaneLayout, layout, $cast($BasicTabbedPaneUI$TabbedPaneLayout, $nc(this->tabPane)->getLayout()));
		$nc(layout)->calculateLayoutInfo();
	}
}

$Rectangle* BasicTabbedPaneUI::getTabBounds($JTabbedPane* pane, int32_t i) {
	ensureCurrentLayout();
	$var($Rectangle, tabRect, $new($Rectangle));
	return getTabBounds(i, tabRect);
}

int32_t BasicTabbedPaneUI::getTabRunCount($JTabbedPane* pane) {
	ensureCurrentLayout();
	return this->runCount;
}

int32_t BasicTabbedPaneUI::tabForCoordinate($JTabbedPane* pane, int32_t x, int32_t y) {
	return tabForCoordinate(pane, x, y, true);
}

int32_t BasicTabbedPaneUI::tabForCoordinate($JTabbedPane* pane, int32_t x, int32_t y, bool validateIfNecessary) {
	if (validateIfNecessary) {
		ensureCurrentLayout();
	}
	if (this->isRunsDirty) {
		return -1;
	}
	$var($Point, p, $new($Point, x, y));
	if (scrollableTabLayoutEnabled()) {
		translatePointToTabPanel(x, y, p);
		$var($Rectangle, viewRect, $nc($nc(this->tabScroller)->viewport)->getViewRect());
		if (!$nc(viewRect)->contains(p)) {
			return -1;
		}
	}
	int32_t tabCount = $nc(this->tabPane)->getTabCount();
	for (int32_t i = 0; i < tabCount; ++i) {
		if ($nc($nc(this->rects)->get(i))->contains(p->x, p->y)) {
			return i;
		}
	}
	return -1;
}

$Rectangle* BasicTabbedPaneUI::getTabBounds(int32_t tabIndex, $Rectangle* dest) {
	$nc(dest)->width = $nc($nc(this->rects)->get(tabIndex))->width;
	dest->height = $nc($nc(this->rects)->get(tabIndex))->height;
	if (scrollableTabLayoutEnabled()) {
		$var($Point, vpp, $nc($nc(this->tabScroller)->viewport)->getLocation());
		$var($Point, viewp, $nc($nc(this->tabScroller)->viewport)->getViewPosition());
		dest->x = $nc($nc(this->rects)->get(tabIndex))->x + $nc(vpp)->x - $nc(viewp)->x;
		dest->y = $nc($nc(this->rects)->get(tabIndex))->y + vpp->y - viewp->y;
	} else {
		dest->x = $nc($nc(this->rects)->get(tabIndex))->x;
		dest->y = $nc($nc(this->rects)->get(tabIndex))->y;
	}
	return dest;
}

int32_t BasicTabbedPaneUI::getClosestTab(int32_t x, int32_t y) {
	int32_t min = 0;
	int32_t tabCount = $Math::min($nc(this->rects)->length, $nc(this->tabPane)->getTabCount());
	int32_t max = tabCount;
	int32_t tabPlacement = $nc(this->tabPane)->getTabPlacement();
	bool useX = (tabPlacement == $SwingConstants::TOP || tabPlacement == $SwingConstants::BOTTOM);
	int32_t want = (useX) ? x : y;
	while (min != max) {
		int32_t current = (max + min) / 2;
		int32_t minLoc = 0;
		int32_t maxLoc = 0;
		if (useX) {
			minLoc = $nc($nc(this->rects)->get(current))->x;
			maxLoc = minLoc + $nc($nc(this->rects)->get(current))->width;
		} else {
			minLoc = $nc($nc(this->rects)->get(current))->y;
			maxLoc = minLoc + $nc($nc(this->rects)->get(current))->height;
		}
		if (want < minLoc) {
			max = current;
			if (min == max) {
				return $Math::max(0, current - 1);
			}
		} else if (want >= maxLoc) {
			min = current;
			if (max - min <= 1) {
				return $Math::max(current + 1, tabCount - 1);
			}
		} else {
			return current;
		}
	}
	return min;
}

$Point* BasicTabbedPaneUI::translatePointToTabPanel(int32_t srcx, int32_t srcy, $Point* dest) {
	$var($Point, vpp, $nc($nc(this->tabScroller)->viewport)->getLocation());
	$var($Point, viewp, $nc($nc(this->tabScroller)->viewport)->getViewPosition());
	$nc(dest)->x = srcx - $nc(vpp)->x + $nc(viewp)->x;
	dest->y = srcy - vpp->y + viewp->y;
	return dest;
}

$Component* BasicTabbedPaneUI::getVisibleComponent() {
	return this->visibleComponent;
}

void BasicTabbedPaneUI::setVisibleComponent($Component* component) {
	bool var$0 = this->visibleComponent != nullptr && this->visibleComponent != component && $equals($nc(this->visibleComponent)->getParent(), this->tabPane);
	if (var$0 && $nc(this->visibleComponent)->isVisible()) {
		$nc(this->visibleComponent)->setVisible(false);
	}
	if (component != nullptr && !component->isVisible()) {
		component->setVisible(true);
	}
	$set(this, visibleComponent, component);
}

void BasicTabbedPaneUI::assureRectsCreated(int32_t tabCount) {
	int32_t rectArrayLen = $nc(this->rects)->length;
	if (tabCount != rectArrayLen) {
		$var($RectangleArray, tempRectArray, $new($RectangleArray, tabCount));
		$System::arraycopy(this->rects, 0, tempRectArray, 0, $Math::min(rectArrayLen, tabCount));
		$set(this, rects, tempRectArray);
		for (int32_t rectIndex = rectArrayLen; rectIndex < tabCount; ++rectIndex) {
			$nc(this->rects)->set(rectIndex, $$new($Rectangle));
		}
	}
}

void BasicTabbedPaneUI::expandTabRunsArray() {
	int32_t rectLen = $nc(this->tabRuns)->length;
	$var($ints, newArray, $new($ints, rectLen + 10));
	$System::arraycopy(this->tabRuns, 0, newArray, 0, this->runCount);
	$set(this, tabRuns, newArray);
}

int32_t BasicTabbedPaneUI::getRunForTab(int32_t tabCount, int32_t tabIndex) {
	for (int32_t i = 0; i < this->runCount; ++i) {
		int32_t first = $nc(this->tabRuns)->get(i);
		int32_t last = lastTabInRun(tabCount, i);
		if (tabIndex >= first && tabIndex <= last) {
			return i;
		}
	}
	return 0;
}

int32_t BasicTabbedPaneUI::lastTabInRun(int32_t tabCount, int32_t run) {
	if (this->runCount == 1) {
		return tabCount - 1;
	}
	int32_t nextRun = (run == this->runCount - 1 ? 0 : run + 1);
	if ($nc(this->tabRuns)->get(nextRun) == 0) {
		return tabCount - 1;
	}
	return $nc(this->tabRuns)->get(nextRun) - 1;
}

int32_t BasicTabbedPaneUI::getTabRunOverlay(int32_t tabPlacement) {
	return this->tabRunOverlay;
}

int32_t BasicTabbedPaneUI::getTabRunIndent(int32_t tabPlacement, int32_t run) {
	return 0;
}

bool BasicTabbedPaneUI::shouldPadTabRun(int32_t tabPlacement, int32_t run) {
	return this->runCount > 1;
}

bool BasicTabbedPaneUI::shouldRotateTabRuns(int32_t tabPlacement) {
	return true;
}

$Icon* BasicTabbedPaneUI::getIconForTab(int32_t tabIndex) {
	bool var$0 = !$nc(this->tabPane)->isEnabled();
	return (var$0 || !$nc(this->tabPane)->isEnabledAt(tabIndex)) ? $nc(this->tabPane)->getDisabledIconAt(tabIndex) : $nc(this->tabPane)->getIconAt(tabIndex);
}

$View* BasicTabbedPaneUI::getTextViewForTab(int32_t tabIndex) {
	if (this->htmlViews != nullptr) {
		return $cast($View, $nc(this->htmlViews)->elementAt(tabIndex));
	}
	return nullptr;
}

int32_t BasicTabbedPaneUI::calculateTabHeight(int32_t tabPlacement, int32_t tabIndex, int32_t fontHeight) {
	int32_t height = 0;
	$var($Component, c, $nc(this->tabPane)->getTabComponentAt(tabIndex));
	if (c != nullptr) {
		height = $nc($(c->getPreferredSize()))->height;
	} else {
		$var($View, v, getTextViewForTab(tabIndex));
		if (v != nullptr) {
			height += $cast(int32_t, v->getPreferredSpan($View::Y_AXIS));
		} else {
			height += fontHeight;
		}
		$var($Icon, icon, getIconForTab(tabIndex));
		if (icon != nullptr) {
			height = $Math::max(height, icon->getIconHeight());
		}
	}
	$var($Insets, tabInsets, getTabInsets(tabPlacement, tabIndex));
	height += $nc(tabInsets)->top + tabInsets->bottom + 2;
	return height;
}

int32_t BasicTabbedPaneUI::calculateMaxTabHeight(int32_t tabPlacement) {
	$var($FontMetrics, metrics, getFontMetrics());
	int32_t tabCount = $nc(this->tabPane)->getTabCount();
	int32_t result = 0;
	int32_t fontHeight = $nc(metrics)->getHeight();
	for (int32_t i = 0; i < tabCount; ++i) {
		result = $Math::max(calculateTabHeight(tabPlacement, i, fontHeight), result);
	}
	return result;
}

int32_t BasicTabbedPaneUI::calculateTabWidth(int32_t tabPlacement, int32_t tabIndex, $FontMetrics* metrics) {
	$var($Insets, tabInsets, getTabInsets(tabPlacement, tabIndex));
	int32_t width = $nc(tabInsets)->left + tabInsets->right + 3;
	$var($Component, tabComponent, $nc(this->tabPane)->getTabComponentAt(tabIndex));
	if (tabComponent != nullptr) {
		width += $nc($(tabComponent->getPreferredSize()))->width;
	} else {
		$var($Icon, icon, getIconForTab(tabIndex));
		if (icon != nullptr) {
			width += icon->getIconWidth() + this->textIconGap;
		}
		$var($View, v, getTextViewForTab(tabIndex));
		if (v != nullptr) {
			width += $cast(int32_t, v->getPreferredSpan($View::X_AXIS));
		} else {
			$var($String, title, $nc(this->tabPane)->getTitleAt(tabIndex));
			width += $SwingUtilities2::stringWidth(this->tabPane, metrics, title);
		}
	}
	return width;
}

int32_t BasicTabbedPaneUI::calculateMaxTabWidth(int32_t tabPlacement) {
	$var($FontMetrics, metrics, getFontMetrics());
	int32_t tabCount = $nc(this->tabPane)->getTabCount();
	int32_t result = 0;
	for (int32_t i = 0; i < tabCount; ++i) {
		result = $Math::max(calculateTabWidth(tabPlacement, i, metrics), result);
	}
	return result;
}

int32_t BasicTabbedPaneUI::calculateTabAreaHeight(int32_t tabPlacement, int32_t horizRunCount, int32_t maxTabHeight) {
	$var($Insets, tabAreaInsets, getTabAreaInsets(tabPlacement));
	int32_t tabRunOverlay = getTabRunOverlay(tabPlacement);
	return (horizRunCount > 0 ? horizRunCount * (maxTabHeight - tabRunOverlay) + tabRunOverlay + $nc(tabAreaInsets)->top + tabAreaInsets->bottom : 0);
}

int32_t BasicTabbedPaneUI::calculateTabAreaWidth(int32_t tabPlacement, int32_t vertRunCount, int32_t maxTabWidth) {
	$var($Insets, tabAreaInsets, getTabAreaInsets(tabPlacement));
	int32_t tabRunOverlay = getTabRunOverlay(tabPlacement);
	return (vertRunCount > 0 ? vertRunCount * (maxTabWidth - tabRunOverlay) + tabRunOverlay + $nc(tabAreaInsets)->left + tabAreaInsets->right : 0);
}

$Insets* BasicTabbedPaneUI::getTabInsets(int32_t tabPlacement, int32_t tabIndex) {
	return this->tabInsets;
}

$Insets* BasicTabbedPaneUI::getSelectedTabPadInsets(int32_t tabPlacement) {
	rotateInsets(this->selectedTabPadInsets, this->currentPadInsets, tabPlacement);
	return this->currentPadInsets;
}

$Insets* BasicTabbedPaneUI::getTabAreaInsets(int32_t tabPlacement) {
	rotateInsets(this->tabAreaInsets, this->currentTabAreaInsets, tabPlacement);
	return this->currentTabAreaInsets;
}

$Insets* BasicTabbedPaneUI::getContentBorderInsets(int32_t tabPlacement) {
	return this->contentBorderInsets;
}

$FontMetrics* BasicTabbedPaneUI::getFontMetrics() {
	$var($Font, font, $nc(this->tabPane)->getFont());
	return $nc(this->tabPane)->getFontMetrics(font);
}

void BasicTabbedPaneUI::navigateSelectedTab(int32_t direction) {
	int32_t tabPlacement = $nc(this->tabPane)->getTabPlacement();
	int32_t current = $DefaultLookup::getBoolean(this->tabPane, this, "TabbedPane.selectionFollowsFocus"_s, true) ? $nc(this->tabPane)->getSelectedIndex() : getFocusIndex();
	int32_t tabCount = $nc(this->tabPane)->getTabCount();
	bool leftToRight = $BasicGraphicsUtils::isLeftToRight(this->tabPane);
	if (tabCount <= 0) {
		return;
	}
	int32_t offset = 0;
	switch (tabPlacement) {
	case $SwingConstants::LEFT:
		{}
	case $SwingConstants::RIGHT:
		{
			switch (direction) {
			case $SwingConstants::NEXT:
				{
					selectNextTab(current);
					break;
				}
			case $SwingConstants::PREVIOUS:
				{
					selectPreviousTab(current);
					break;
				}
			case $SwingConstants::NORTH:
				{
					selectPreviousTabInRun(current);
					break;
				}
			case $SwingConstants::SOUTH:
				{
					selectNextTabInRun(current);
					break;
				}
			case $SwingConstants::WEST:
				{
					offset = getTabRunOffset(tabPlacement, tabCount, current, false);
					selectAdjacentRunTab(tabPlacement, current, offset);
					break;
				}
			case $SwingConstants::EAST:
				{
					offset = getTabRunOffset(tabPlacement, tabCount, current, true);
					selectAdjacentRunTab(tabPlacement, current, offset);
					break;
				}
			default:
				{}
			}
			break;
		}
	case $SwingConstants::BOTTOM:
		{}
	case $SwingConstants::TOP:
		{}
	default:
		{
			switch (direction) {
			case $SwingConstants::NEXT:
				{
					selectNextTab(current);
					break;
				}
			case $SwingConstants::PREVIOUS:
				{
					selectPreviousTab(current);
					break;
				}
			case $SwingConstants::NORTH:
				{
					offset = getTabRunOffset(tabPlacement, tabCount, current, false);
					selectAdjacentRunTab(tabPlacement, current, offset);
					break;
				}
			case $SwingConstants::SOUTH:
				{
					offset = getTabRunOffset(tabPlacement, tabCount, current, true);
					selectAdjacentRunTab(tabPlacement, current, offset);
					break;
				}
			case $SwingConstants::EAST:
				{
					if (leftToRight) {
						selectNextTabInRun(current);
					} else {
						selectPreviousTabInRun(current);
					}
					break;
				}
			case $SwingConstants::WEST:
				{
					if (leftToRight) {
						selectPreviousTabInRun(current);
					} else {
						selectNextTabInRun(current);
					}
					break;
				}
			default:
				{}
			}
		}
	}
}

void BasicTabbedPaneUI::selectNextTabInRun(int32_t current) {
	int32_t tabCount = $nc(this->tabPane)->getTabCount();
	int32_t tabIndex = getNextTabIndexInRun(tabCount, current);
	while (tabIndex != current && !$nc(this->tabPane)->isEnabledAt(tabIndex)) {
		tabIndex = getNextTabIndexInRun(tabCount, tabIndex);
	}
	navigateTo(tabIndex);
}

void BasicTabbedPaneUI::selectPreviousTabInRun(int32_t current) {
	int32_t tabCount = $nc(this->tabPane)->getTabCount();
	int32_t tabIndex = getPreviousTabIndexInRun(tabCount, current);
	while (tabIndex != current && !$nc(this->tabPane)->isEnabledAt(tabIndex)) {
		tabIndex = getPreviousTabIndexInRun(tabCount, tabIndex);
	}
	navigateTo(tabIndex);
}

void BasicTabbedPaneUI::selectNextTab(int32_t current) {
	int32_t tabIndex = getNextTabIndex(current);
	while (tabIndex != current && !$nc(this->tabPane)->isEnabledAt(tabIndex)) {
		tabIndex = getNextTabIndex(tabIndex);
	}
	navigateTo(tabIndex);
}

void BasicTabbedPaneUI::selectPreviousTab(int32_t current) {
	int32_t tabIndex = getPreviousTabIndex(current);
	while (tabIndex != current && !$nc(this->tabPane)->isEnabledAt(tabIndex)) {
		tabIndex = getPreviousTabIndex(tabIndex);
	}
	navigateTo(tabIndex);
}

void BasicTabbedPaneUI::selectAdjacentRunTab(int32_t tabPlacement, int32_t tabIndex, int32_t offset) {
	if (this->runCount < 2) {
		return;
	}
	int32_t newIndex = 0;
	$var($Rectangle, r, $nc(this->rects)->get(tabIndex));
	switch (tabPlacement) {
	case $SwingConstants::LEFT:
		{}
	case $SwingConstants::RIGHT:
		{
			newIndex = tabForCoordinate(this->tabPane, $nc(r)->x + r->width / 2 + offset, r->y + r->height / 2);
			break;
		}
	case $SwingConstants::BOTTOM:
		{}
	case $SwingConstants::TOP:
		{}
	default:
		{
			newIndex = tabForCoordinate(this->tabPane, $nc(r)->x + r->width / 2, r->y + r->height / 2 + offset);
		}
	}
	if (newIndex != -1) {
		while (!$nc(this->tabPane)->isEnabledAt(newIndex) && newIndex != tabIndex) {
			newIndex = getNextTabIndex(newIndex);
		}
		navigateTo(newIndex);
	}
}

void BasicTabbedPaneUI::navigateTo(int32_t index) {
	if ($DefaultLookup::getBoolean(this->tabPane, this, "TabbedPane.selectionFollowsFocus"_s, true)) {
		$nc(this->tabPane)->setSelectedIndex(index);
	} else {
		setFocusIndex(index, true);
	}
}

void BasicTabbedPaneUI::setFocusIndex(int32_t index, bool repaint) {
	if (repaint && !this->isRunsDirty) {
		repaintTab(this->focusIndex);
		this->focusIndex = index;
		repaintTab(this->focusIndex);
	} else {
		this->focusIndex = index;
	}
}

void BasicTabbedPaneUI::repaintTab(int32_t index) {
	if (!this->isRunsDirty && index >= 0 && index < $nc(this->tabPane)->getTabCount()) {
		$nc(this->tabPane)->repaint($(getTabBounds(this->tabPane, index)));
	}
}

void BasicTabbedPaneUI::validateFocusIndex() {
	if (this->focusIndex >= $nc(this->tabPane)->getTabCount()) {
		setFocusIndex($nc(this->tabPane)->getSelectedIndex(), false);
	}
}

int32_t BasicTabbedPaneUI::getFocusIndex() {
	return this->focusIndex;
}

int32_t BasicTabbedPaneUI::getTabRunOffset(int32_t tabPlacement, int32_t tabCount, int32_t tabIndex, bool forward) {
	int32_t run = getRunForTab(tabCount, tabIndex);
	int32_t offset = 0;
	switch (tabPlacement) {
	case $SwingConstants::LEFT:
		{
			{
				if (run == 0) {
					offset = (forward ? -(calculateTabAreaWidth(tabPlacement, this->runCount, this->maxTabWidth) - this->maxTabWidth) : -this->maxTabWidth);
				} else if (run == this->runCount - 1) {
					offset = (forward ? this->maxTabWidth : calculateTabAreaWidth(tabPlacement, this->runCount, this->maxTabWidth) - this->maxTabWidth);
				} else {
					offset = (forward ? this->maxTabWidth : -this->maxTabWidth);
				}
				break;
			}
		}
	case $SwingConstants::RIGHT:
		{
			{
				if (run == 0) {
					offset = (forward ? this->maxTabWidth : calculateTabAreaWidth(tabPlacement, this->runCount, this->maxTabWidth) - this->maxTabWidth);
				} else if (run == this->runCount - 1) {
					offset = (forward ? -(calculateTabAreaWidth(tabPlacement, this->runCount, this->maxTabWidth) - this->maxTabWidth) : -this->maxTabWidth);
				} else {
					offset = (forward ? this->maxTabWidth : -this->maxTabWidth);
				}
				break;
			}
		}
	case $SwingConstants::BOTTOM:
		{
			{
				if (run == 0) {
					offset = (forward ? this->maxTabHeight : calculateTabAreaHeight(tabPlacement, this->runCount, this->maxTabHeight) - this->maxTabHeight);
				} else if (run == this->runCount - 1) {
					offset = (forward ? -(calculateTabAreaHeight(tabPlacement, this->runCount, this->maxTabHeight) - this->maxTabHeight) : -this->maxTabHeight);
				} else {
					offset = (forward ? this->maxTabHeight : -this->maxTabHeight);
				}
				break;
			}
		}
	case $SwingConstants::TOP:
		{}
	default:
		{
			{
				if (run == 0) {
					offset = (forward ? -(calculateTabAreaHeight(tabPlacement, this->runCount, this->maxTabHeight) - this->maxTabHeight) : -this->maxTabHeight);
				} else if (run == this->runCount - 1) {
					offset = (forward ? this->maxTabHeight : calculateTabAreaHeight(tabPlacement, this->runCount, this->maxTabHeight) - this->maxTabHeight);
				} else {
					offset = (forward ? this->maxTabHeight : -this->maxTabHeight);
				}
			}
		}
	}
	return offset;
}

int32_t BasicTabbedPaneUI::getPreviousTabIndex(int32_t base) {
	int32_t tabIndex = (base - 1 >= 0 ? base - 1 : $nc(this->tabPane)->getTabCount() - 1);
	return (tabIndex >= 0 ? tabIndex : 0);
}

int32_t BasicTabbedPaneUI::getNextTabIndex(int32_t base) {
	return $mod((base + 1), $nc(this->tabPane)->getTabCount());
}

int32_t BasicTabbedPaneUI::getNextTabIndexInRun(int32_t tabCount, int32_t base) {
	if (this->runCount < 2) {
		return getNextTabIndex(base);
	}
	int32_t currentRun = getRunForTab(tabCount, base);
	int32_t next = getNextTabIndex(base);
	if (next == $nc(this->tabRuns)->get(getNextTabRun(currentRun))) {
		return $nc(this->tabRuns)->get(currentRun);
	}
	return next;
}

int32_t BasicTabbedPaneUI::getPreviousTabIndexInRun(int32_t tabCount, int32_t base) {
	if (this->runCount < 2) {
		return getPreviousTabIndex(base);
	}
	int32_t currentRun = getRunForTab(tabCount, base);
	if (base == $nc(this->tabRuns)->get(currentRun)) {
		int32_t previous = $nc(this->tabRuns)->get(getNextTabRun(currentRun)) - 1;
		return (previous != -1 ? previous : tabCount - 1);
	}
	return getPreviousTabIndex(base);
}

int32_t BasicTabbedPaneUI::getPreviousTabRun(int32_t baseRun) {
	int32_t runIndex = (baseRun - 1 >= 0 ? baseRun - 1 : this->runCount - 1);
	return (runIndex >= 0 ? runIndex : 0);
}

int32_t BasicTabbedPaneUI::getNextTabRun(int32_t baseRun) {
	return $mod((baseRun + 1), this->runCount);
}

void BasicTabbedPaneUI::rotateInsets($Insets* topInsets, $Insets* targetInsets, int32_t targetPlacement) {
	$init(BasicTabbedPaneUI);
	switch (targetPlacement) {
	case $SwingConstants::LEFT:
		{
			$nc(targetInsets)->top = $nc(topInsets)->left;
			$nc(targetInsets)->left = $nc(topInsets)->top;
			$nc(targetInsets)->bottom = $nc(topInsets)->right;
			$nc(targetInsets)->right = $nc(topInsets)->bottom;
			break;
		}
	case $SwingConstants::BOTTOM:
		{
			$nc(targetInsets)->top = $nc(topInsets)->bottom;
			$nc(targetInsets)->left = $nc(topInsets)->left;
			$nc(targetInsets)->bottom = $nc(topInsets)->top;
			$nc(targetInsets)->right = $nc(topInsets)->right;
			break;
		}
	case $SwingConstants::RIGHT:
		{
			$nc(targetInsets)->top = $nc(topInsets)->left;
			$nc(targetInsets)->left = $nc(topInsets)->bottom;
			$nc(targetInsets)->bottom = $nc(topInsets)->right;
			$nc(targetInsets)->right = $nc(topInsets)->top;
			break;
		}
	case $SwingConstants::TOP:
		{}
	default:
		{
			$nc(targetInsets)->top = $nc(topInsets)->top;
			$nc(targetInsets)->left = $nc(topInsets)->left;
			$nc(targetInsets)->bottom = $nc(topInsets)->bottom;
			$nc(targetInsets)->right = $nc(topInsets)->right;
		}
	}
}

bool BasicTabbedPaneUI::requestFocusForVisibleComponent() {
	return $SwingUtilities2::tabbedPaneChangeFocusTo($(getVisibleComponent()));
}

$Vector* BasicTabbedPaneUI::createHTMLVector() {
	$var($Vector, htmlViews, $new($Vector));
	int32_t count = $nc(this->tabPane)->getTabCount();
	if (count > 0) {
		for (int32_t i = 0; i < count; ++i) {
			$var($String, title, $nc(this->tabPane)->getTitleAt(i));
			if ($BasicHTML::isHTMLString(title)) {
				htmlViews->addElement($($BasicHTML::createHTMLView(this->tabPane, title)));
			} else {
				htmlViews->addElement(nullptr);
			}
		}
	}
	return htmlViews;
}

void clinit$BasicTabbedPaneUI($Class* class$) {
	$assignStatic(BasicTabbedPaneUI::xCropLen, $new($ints, {
		1,
		1,
		0,
		0,
		1,
		1,
		2,
		2
	}));
	$assignStatic(BasicTabbedPaneUI::yCropLen, $new($ints, {
		0,
		3,
		3,
		6,
		6,
		9,
		9,
		12
	}));
}

BasicTabbedPaneUI::BasicTabbedPaneUI() {
}

$Class* BasicTabbedPaneUI::load$($String* name, bool initialize) {
	$loadClass(BasicTabbedPaneUI, name, initialize, &_BasicTabbedPaneUI_ClassInfo_, clinit$BasicTabbedPaneUI, allocate$BasicTabbedPaneUI);
	return class$;
}

$Class* BasicTabbedPaneUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax