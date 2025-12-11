#include <com/apple/laf/AquaTabbedPaneUI.h>

#include <apple/laf/JRSUIConstants$BooleanValue.h>
#include <apple/laf/JRSUIConstants$Direction.h>
#include <apple/laf/JRSUIConstants$Focused.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$SegmentLeadingSeparator.h>
#include <apple/laf/JRSUIConstants$SegmentPosition.h>
#include <apple/laf/JRSUIConstants$SegmentTrailingSeparator.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIState.h>
#include <apple/laf/JRSUIStateFactory.h>
#include <apple/laf/JRSUIUtils$TabbedPane.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaGroupBorder.h>
#include <com/apple/laf/AquaIcon$CachingScalingIcon.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout.h>
#include <com/apple/laf/AquaTabbedPaneCopyFromBasicUI.h>
#include <com/apple/laf/AquaTabbedPaneTabState.h>
#include <com/apple/laf/AquaTabbedPaneUI$1.h>
#include <com/apple/laf/AquaTabbedPaneUI$2.h>
#include <com/apple/laf/AquaTabbedPaneUI$AlterRects.h>
#include <com/apple/laf/AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout.h>
#include <com/apple/laf/AquaTabbedPaneUI$FocusHandler.h>
#include <com/apple/laf/AquaTabbedPaneUI$MouseHandler.h>
#include <com/apple/laf/AquaTabbedPaneUI$TabbedPanePropertyChangeHandler.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/geom/AffineTransform.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Math.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/MouseInputAdapter.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/text/View.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ACTIVE
#undef BOTTOM
#undef DISABLED
#undef EAST
#undef FIRST
#undef INACTIVE
#undef LAST
#undef LEFT
#undef MIDDLE
#undef NO
#undef NORTH
#undef ONLY
#undef PI
#undef PRESSED
#undef RIGHT
#undef SMALL
#undef SOUTH
#undef TAB_BORDER_INSET
#undef TOP
#undef TRUE
#undef WEST
#undef YES

using $AquaTabbedPaneUI$AlterRectsArray = $Array<::com::apple::laf::AquaTabbedPaneUI$AlterRects>;
using $JRSUIConstants$BooleanValue = ::apple::laf::JRSUIConstants$BooleanValue;
using $JRSUIConstants$Direction = ::apple::laf::JRSUIConstants$Direction;
using $JRSUIConstants$Focused = ::apple::laf::JRSUIConstants$Focused;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$SegmentLeadingSeparator = ::apple::laf::JRSUIConstants$SegmentLeadingSeparator;
using $JRSUIConstants$SegmentPosition = ::apple::laf::JRSUIConstants$SegmentPosition;
using $JRSUIConstants$SegmentTrailingSeparator = ::apple::laf::JRSUIConstants$SegmentTrailingSeparator;
using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIState = ::apple::laf::JRSUIState;
using $JRSUIStateFactory = ::apple::laf::JRSUIStateFactory;
using $JRSUIUtils$TabbedPane = ::apple::laf::JRSUIUtils$TabbedPane;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaGroupBorder = ::com::apple::laf::AquaGroupBorder;
using $AquaIcon$CachingScalingIcon = ::com::apple::laf::AquaIcon$CachingScalingIcon;
using $AquaImageFactory = ::com::apple::laf::AquaImageFactory;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaTabbedPaneCopyFromBasicUI = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI;
using $AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$PropertyChangeHandler;
using $AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout = ::com::apple::laf::AquaTabbedPaneCopyFromBasicUI$TabbedPaneLayout;
using $AquaTabbedPaneTabState = ::com::apple::laf::AquaTabbedPaneTabState;
using $AquaTabbedPaneUI$1 = ::com::apple::laf::AquaTabbedPaneUI$1;
using $AquaTabbedPaneUI$2 = ::com::apple::laf::AquaTabbedPaneUI$2;
using $AquaTabbedPaneUI$AlterRects = ::com::apple::laf::AquaTabbedPaneUI$AlterRects;
using $AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout = ::com::apple::laf::AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout;
using $AquaTabbedPaneUI$FocusHandler = ::com::apple::laf::AquaTabbedPaneUI$FocusHandler;
using $AquaTabbedPaneUI$MouseHandler = ::com::apple::laf::AquaTabbedPaneUI$MouseHandler;
using $AquaTabbedPaneUI$TabbedPanePropertyChangeHandler = ::com::apple::laf::AquaTabbedPaneUI$TabbedPanePropertyChangeHandler;
using $AquaUtils = ::com::apple::laf::AquaUtils;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusListener = ::java::awt::event::FocusListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $AffineTransform = ::java::awt::geom::AffineTransform;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JTabbedPane = ::javax::swing::JTabbedPane;
using $SwingConstants = ::javax::swing::SwingConstants;
using $UIManager = ::javax::swing::UIManager;
using $Border = ::javax::swing::border::Border;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $MouseInputAdapter = ::javax::swing::event::MouseInputAdapter;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $View = ::javax::swing::text::View;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaTabbedPaneUI_FieldInfo_[] = {
	{"kSmallTabHeight", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaTabbedPaneUI, kSmallTabHeight)},
	{"kLargeTabHeight", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaTabbedPaneUI, kLargeTabHeight)},
	{"kMaxIconSize", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaTabbedPaneUI, kMaxIconSize)},
	{"kNinetyDegrees", "D", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AquaTabbedPaneUI, kNinetyDegrees)},
	{"currentContentDrawingInsets", "Ljava/awt/Insets;", nullptr, $PROTECTED | $FINAL, $field(AquaTabbedPaneUI, currentContentDrawingInsets)},
	{"currentContentBorderInsets", "Ljava/awt/Insets;", nullptr, $PROTECTED | $FINAL, $field(AquaTabbedPaneUI, currentContentBorderInsets)},
	{"contentDrawingInsets", "Ljava/awt/Insets;", nullptr, $PROTECTED | $FINAL, $field(AquaTabbedPaneUI, contentDrawingInsets)},
	{"pressedTab", "I", nullptr, $PROTECTED, $field(AquaTabbedPaneUI, pressedTab)},
	{"popupSelectionChanged", "Z", nullptr, $PROTECTED, $field(AquaTabbedPaneUI, popupSelectionChanged)},
	{"isDefaultFocusReceiver", "Ljava/lang/Boolean;", nullptr, $PROTECTED, $field(AquaTabbedPaneUI, isDefaultFocusReceiver)},
	{"hasAvoidedFirstFocus", "Z", nullptr, $PROTECTED, $field(AquaTabbedPaneUI, hasAvoidedFirstFocus)},
	{"visibleTabState", "Lcom/apple/laf/AquaTabbedPaneTabState;", nullptr, $PROTECTED | $FINAL, $field(AquaTabbedPaneUI, visibleTabState)},
	{"painter", "Lcom/apple/laf/AquaPainter;", "Lcom/apple/laf/AquaPainter<Lapple/laf/JRSUIState;>;", $PROTECTED | $FINAL, $field(AquaTabbedPaneUI, painter)},
	{"fContentRect", "Ljava/awt/Rectangle;", nullptr, $FINAL, $field(AquaTabbedPaneUI, fContentRect)},
	{"fIconRect", "Ljava/awt/Rectangle;", nullptr, $FINAL, $field(AquaTabbedPaneUI, fIconRect)},
	{"fTextRect", "Ljava/awt/Rectangle;", nullptr, $FINAL, $field(AquaTabbedPaneUI, fTextRect)},
	{"alterRects", "[Lcom/apple/laf/AquaTabbedPaneUI$AlterRects;", nullptr, $STATIC, $staticField(AquaTabbedPaneUI, alterRects)},
	{"TAB_BORDER_INSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaTabbedPaneUI, TAB_BORDER_INSET)},
	{}
};

$MethodInfo _AquaTabbedPaneUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaTabbedPaneUI::*)()>(&AquaTabbedPaneUI::init$))},
	{"assureRectsCreated", "(I)V", nullptr, $PROTECTED},
	{"calculateTabHeight", "(III)I", nullptr, $PROTECTED},
	{"createChangeListener", "()Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"createFocusListener", "()Ljava/awt/event/FocusListener;", nullptr, $PROTECTED},
	{"createLayoutManager", "()Ljava/awt/LayoutManager;", nullptr, $PROTECTED},
	{"createMouseListener", "()Ljava/awt/event/MouseListener;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaTabbedPaneUI::createUI))},
	{"fillTabWithBackground", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;IZZLjava/awt/Color;)V", nullptr, $PROTECTED},
	{"getAlterationFor", "(I)Lcom/apple/laf/AquaTabbedPaneUI$AlterRects;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$AquaTabbedPaneUI$AlterRects*(*)(int32_t)>(&AquaTabbedPaneUI::getAlterationFor))},
	{"getContentBorderInsets", "(I)Ljava/awt/Insets;", nullptr, $PROTECTED},
	{"getContentDrawingInsets", "(I)Ljava/awt/Insets;", nullptr, $PROTECTED},
	{"getDirection", "()Lapple/laf/JRSUIConstants$Direction;", nullptr, $PROTECTED},
	{"getIconForScrollTab", "(IIZ)Ljavax/swing/Icon;", nullptr, $PROTECTED},
	{"getIconForTab", "(I)Ljavax/swing/Icon;", nullptr, $PROTECTED},
	{"getSegmentLeadingSeparator", "(IIZ)Lapple/laf/JRSUIConstants$SegmentLeadingSeparator;", nullptr, $PROTECTED},
	{"getSegmentPosition", "(ZZZ)Lapple/laf/JRSUIConstants$SegmentPosition;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$JRSUIConstants$SegmentPosition*(*)(bool,bool,bool)>(&AquaTabbedPaneUI::getSegmentPosition))},
	{"getSegmentTrailingSeparator", "(IIZ)Lapple/laf/JRSUIConstants$SegmentTrailingSeparator;", nullptr, $PROTECTED},
	{"getState", "(IZZ)Lapple/laf/JRSUIConstants$State;", nullptr, $PROTECTED},
	{"getTabBounds", "(Ljavax/swing/JTabbedPane;I)Ljava/awt/Rectangle;", nullptr, $PUBLIC},
	{"getTabInsets", "(II)Ljava/awt/Insets;", nullptr, $PROTECTED},
	{"getTabLabelShiftX", "(IIZ)I", nullptr, $PROTECTED},
	{"getTabLabelShiftY", "(IIZ)I", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"isScrollTabIndex", "(I)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(int32_t)>(&AquaTabbedPaneUI::isScrollTabIndex))},
	{"isTabBeforeSelectedTab", "(IIZ)Z", nullptr, $PROTECTED},
	{"isTabVisible", "(I)Z", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintAllTabs", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;IIZZZ)V", nullptr, $PROTECTED},
	{"paintCUITab", "(Ljava/awt/Graphics;ILjava/awt/Rectangle;ZZZI)V", nullptr, $PROTECTED},
	{"paintContentBorder", "(Ljava/awt/Graphics;II)V", nullptr, $PROTECTED},
	{"paintContents", "(Ljava/awt/Graphics;IILjava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Z)V", nullptr, $PROTECTED},
	{"paintScrollingTabs", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;IIZZZ)V", nullptr, $PROTECTED},
	{"paintTabNormal", "(Ljava/awt/Graphics;IIZZZ)V", nullptr, $PROTECTED},
	{"paintTabNormalFromRect", "(Ljava/awt/Graphics;ILjava/awt/Rectangle;ILjava/awt/Rectangle;Ljava/awt/Rectangle;ZZZ)V", nullptr, $PROTECTED},
	{"paintTitle", "(Ljava/awt/Graphics2D;Ljava/awt/Font;Ljava/awt/FontMetrics;Ljava/awt/Rectangle;ILjava/lang/String;)V", nullptr, $PROTECTED},
	{"repaintContentBorderEdge", "()V", nullptr, $PROTECTED},
	{"rotateGraphics", "(Ljava/awt/Graphics2D;Ljava/awt/Rectangle;Ljava/awt/Rectangle;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED},
	{"rotateInsets", "(Ljava/awt/Insets;Ljava/awt/Insets;I)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($Insets*,$Insets*,int32_t)>(&AquaTabbedPaneUI::rotateInsets))},
	{"shouldRepaintSelectedTabOnMouseDown", "()Z", nullptr, $PROTECTED},
	{"shouldRotateTabRuns", "(I)Z", nullptr, $PROTECTED},
	{"tabForCoordinate", "(Ljavax/swing/JTabbedPane;II)I", nullptr, $PUBLIC},
	{"transposeRect", "(Ljava/awt/Rectangle;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($Rectangle*)>(&AquaTabbedPaneUI::transposeRect))},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _AquaTabbedPaneUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout", "com.apple.laf.AquaTabbedPaneUI", "AquaTruncatingTabbedPaneLayout", $PROTECTED},
	{"com.apple.laf.AquaTabbedPaneUI$MouseHandler", "com.apple.laf.AquaTabbedPaneUI", "MouseHandler", 0},
	{"com.apple.laf.AquaTabbedPaneUI$FocusHandler", "com.apple.laf.AquaTabbedPaneUI", "FocusHandler", $PROTECTED},
	{"com.apple.laf.AquaTabbedPaneUI$TabbedPanePropertyChangeHandler", "com.apple.laf.AquaTabbedPaneUI", "TabbedPanePropertyChangeHandler", $PROTECTED},
	{"com.apple.laf.AquaTabbedPaneUI$AlterRects", "com.apple.laf.AquaTabbedPaneUI", "AlterRects", $STATIC},
	{"com.apple.laf.AquaTabbedPaneUI$2", nullptr, nullptr, 0},
	{"com.apple.laf.AquaTabbedPaneUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaTabbedPaneUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaTabbedPaneUI",
	"com.apple.laf.AquaTabbedPaneCopyFromBasicUI",
	nullptr,
	_AquaTabbedPaneUI_FieldInfo_,
	_AquaTabbedPaneUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaTabbedPaneUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout,com.apple.laf.AquaTabbedPaneUI$MouseHandler,com.apple.laf.AquaTabbedPaneUI$MouseHandler$3,com.apple.laf.AquaTabbedPaneUI$MouseHandler$2,com.apple.laf.AquaTabbedPaneUI$MouseHandler$1,com.apple.laf.AquaTabbedPaneUI$FocusHandler,com.apple.laf.AquaTabbedPaneUI$TabbedPanePropertyChangeHandler,com.apple.laf.AquaTabbedPaneUI$AlterRects,com.apple.laf.AquaTabbedPaneUI$2,com.apple.laf.AquaTabbedPaneUI$1"
};

$Object* allocate$AquaTabbedPaneUI($Class* clazz) {
	return $of($alloc(AquaTabbedPaneUI));
}

double AquaTabbedPaneUI::kNinetyDegrees = 0.0;
$AquaTabbedPaneUI$AlterRectsArray* AquaTabbedPaneUI::alterRects = nullptr;

$ComponentUI* AquaTabbedPaneUI::createUI($JComponent* c) {
	$init(AquaTabbedPaneUI);
	return $new(AquaTabbedPaneUI);
}

void AquaTabbedPaneUI::init$() {
	$AquaTabbedPaneCopyFromBasicUI::init$();
	$set(this, currentContentDrawingInsets, $new($Insets, 0, 0, 0, 0));
	$set(this, currentContentBorderInsets, $new($Insets, 0, 0, 0, 0));
	$set(this, contentDrawingInsets, $new($Insets, 0, 0, 0, 0));
	this->pressedTab = -3;
	$set(this, isDefaultFocusReceiver, nullptr);
	this->hasAvoidedFirstFocus = false;
	$set(this, visibleTabState, $new($AquaTabbedPaneTabState, this));
	$set(this, painter, $AquaPainter::create($($JRSUIStateFactory::getTab())));
	$set(this, fContentRect, $new($Rectangle));
	$set(this, fIconRect, $new($Rectangle));
	$set(this, fTextRect, $new($Rectangle));
}

void AquaTabbedPaneUI::installListeners() {
	$AquaTabbedPaneCopyFromBasicUI::installListeners();
	if (this->mouseListener != nullptr) {
		$nc(this->tabPane)->addMouseMotionListener($cast($MouseMotionListener, this->mouseListener));
	}
}

void AquaTabbedPaneUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	$AquaTabbedPaneCopyFromBasicUI::installDefaults();
	if ($instanceOf($UIResource, $($nc(this->tabPane)->getFont()))) {
		$var($Boolean, b, $cast($Boolean, $UIManager::get("TabbedPane.useSmallLayout"_s)));
		$init($Boolean);
		if (b != nullptr && b == $Boolean::TRUE) {
			$nc(this->tabPane)->setFont($($UIManager::getFont("TabbedPane.smallFont"_s)));
			$init($JRSUIConstants$Size);
			$nc($nc(this->painter)->state)->set($JRSUIConstants$Size::SMALL);
		}
	}
	$nc(this->contentDrawingInsets)->set(0, 11, 13, 10);
	$nc(this->tabPane)->setOpaque(false);
}

void AquaTabbedPaneUI::assureRectsCreated(int32_t tabCount) {
	$nc(this->visibleTabState)->init(tabCount);
	$AquaTabbedPaneCopyFromBasicUI::assureRectsCreated(tabCount);
}

void AquaTabbedPaneUI::uninstallListeners() {
	if ($instanceOf($AquaTabbedPaneUI$MouseHandler, this->mouseListener)) {
		$var($AquaTabbedPaneUI$MouseHandler, mh, $cast($AquaTabbedPaneUI$MouseHandler, this->mouseListener));
		$nc(mh)->dispose();
		$nc(this->tabPane)->removeMouseMotionListener(static_cast<$MouseMotionListener*>(static_cast<$MouseAdapter*>(static_cast<$MouseInputAdapter*>(mh))));
	}
	$AquaTabbedPaneCopyFromBasicUI::uninstallListeners();
}

void AquaTabbedPaneUI::uninstallDefaults() {
	$nc(this->contentDrawingInsets)->set(0, 0, 0, 0);
}

$MouseListener* AquaTabbedPaneUI::createMouseListener() {
	return static_cast<$MouseListener*>(static_cast<$MouseAdapter*>(static_cast<$MouseInputAdapter*>($new($AquaTabbedPaneUI$MouseHandler, this))));
}

$FocusListener* AquaTabbedPaneUI::createFocusListener() {
	return $new($AquaTabbedPaneUI$FocusHandler, this);
}

$PropertyChangeListener* AquaTabbedPaneUI::createPropertyChangeListener() {
	return $new($AquaTabbedPaneUI$TabbedPanePropertyChangeHandler, this);
}

$LayoutManager* AquaTabbedPaneUI::createLayoutManager() {
	return $new($AquaTabbedPaneUI$AquaTruncatingTabbedPaneLayout, this);
}

bool AquaTabbedPaneUI::shouldRepaintSelectedTabOnMouseDown() {
	return false;
}

void AquaTabbedPaneUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$nc($nc(this->painter)->state)->set($(getDirection()));
	int32_t tabPlacement = $nc(this->tabPane)->getTabPlacement();
	int32_t selectedIndex = $nc(this->tabPane)->getSelectedIndex();
	paintContentBorder(g, tabPlacement, selectedIndex);
	ensureCurrentLayout();
	$var($Rectangle, clipRect, $nc(g)->getClipBounds());
	bool active = $nc(this->tabPane)->isEnabled();
	bool frameActive = $AquaFocusHandler::isActive(this->tabPane);
	bool isLeftToRight = $nc($($nc(this->tabPane)->getComponentOrientation()))->isLeftToRight() || tabPlacement == $SwingConstants::LEFT || tabPlacement == $SwingConstants::RIGHT;
	if ($nc(this->visibleTabState)->needsScrollTabs()) {
		paintScrollingTabs(g, clipRect, tabPlacement, selectedIndex, active, frameActive, isLeftToRight);
		return;
	}
	paintAllTabs(g, clipRect, tabPlacement, selectedIndex, active, frameActive, isLeftToRight);
}

void AquaTabbedPaneUI::paintAllTabs($Graphics* g, $Rectangle* clipRect, int32_t tabPlacement, int32_t selectedIndex, bool active, bool frameActive, bool isLeftToRight) {
	bool drawSelectedLast = false;
	for (int32_t i = 0; i < $nc(this->rects)->length; ++i) {
		if (i == selectedIndex) {
			drawSelectedLast = true;
		} else if ($nc($nc(this->rects)->get(i))->intersects(clipRect)) {
			paintTabNormal(g, tabPlacement, i, active, frameActive, isLeftToRight);
		}
	}
	if (drawSelectedLast && $nc($nc(this->rects)->get(selectedIndex))->intersects(clipRect)) {
		paintTabNormal(g, tabPlacement, selectedIndex, active, frameActive, isLeftToRight);
	}
}

void AquaTabbedPaneUI::paintScrollingTabs($Graphics* g, $Rectangle* clipRect, int32_t tabPlacement, int32_t selectedIndex, bool active, bool frameActive, bool isLeftToRight) {
	$useLocalCurrentObjectStackCache();
	for (int32_t i = 0; i < $nc(this->visibleTabState)->getTotal(); ++i) {
		int32_t realIndex = $nc(this->visibleTabState)->getIndex(i);
		if (realIndex != selectedIndex) {
			if ($nc($nc(this->rects)->get(realIndex))->intersects(clipRect)) {
				paintTabNormal(g, tabPlacement, realIndex, active, frameActive, isLeftToRight);
			}
		}
	}
	$var($Rectangle, leftScrollTabRect, $nc(this->visibleTabState)->getLeftScrollTabRect());
	bool var$0 = $nc(this->visibleTabState)->needsLeftScrollTab();
	if (var$0 && $nc(leftScrollTabRect)->intersects(clipRect)) {
		paintTabNormalFromRect(g, tabPlacement, leftScrollTabRect, -2, this->fIconRect, this->fTextRect, $nc(this->visibleTabState)->needsLeftScrollTab(), frameActive, isLeftToRight);
	}
	$var($Rectangle, rightScrollTabRect, $nc(this->visibleTabState)->getRightScrollTabRect());
	bool var$1 = $nc(this->visibleTabState)->needsRightScrollTab();
	if (var$1 && $nc(rightScrollTabRect)->intersects(clipRect)) {
		paintTabNormalFromRect(g, tabPlacement, rightScrollTabRect, -1, this->fIconRect, this->fTextRect, $nc(this->visibleTabState)->needsRightScrollTab(), frameActive, isLeftToRight);
	}
	if (selectedIndex >= 0) {
		paintTabNormal(g, tabPlacement, selectedIndex, active, frameActive, isLeftToRight);
	}
}

bool AquaTabbedPaneUI::isScrollTabIndex(int32_t index) {
	$init(AquaTabbedPaneUI);
	return index == -1 || index == -2;
}

void AquaTabbedPaneUI::transposeRect($Rectangle* r) {
	$init(AquaTabbedPaneUI);
	int32_t temp = $nc(r)->y;
	r->y = r->x;
	r->x = temp;
	temp = r->width;
	r->width = r->height;
	r->height = temp;
}

int32_t AquaTabbedPaneUI::getTabLabelShiftX(int32_t tabPlacement, int32_t tabIndex, bool isSelected) {
	$var($Rectangle, tabRect, tabIndex >= 0 ? $nc(this->rects)->get(tabIndex) : $nc(this->visibleTabState)->getRightScrollTabRect());
	int32_t nudge = 0;
	switch (tabPlacement) {
	case $SwingConstants::LEFT:
		{}
	case $SwingConstants::RIGHT:
		{
			nudge = $nc(tabRect)->height % 2;
			break;
		}
	case $SwingConstants::BOTTOM:
		{}
	case $SwingConstants::TOP:
		{}
	default:
		{
			nudge = $nc(tabRect)->width % 2;
		}
	}
	return nudge;
}

int32_t AquaTabbedPaneUI::getTabLabelShiftY(int32_t tabPlacement, int32_t tabIndex, bool isSelected) {
	switch (tabPlacement) {
	case $SwingConstants::RIGHT:
		{}
	case $SwingConstants::LEFT:
		{}
	case $SwingConstants::BOTTOM:
		{
			return -1;
		}
	case $SwingConstants::TOP:
		{}
	default:
		{
			return 0;
		}
	}
}

$Icon* AquaTabbedPaneUI::getIconForScrollTab(int32_t tabPlacement, int32_t tabIndex, bool enabled) {
	$useLocalCurrentObjectStackCache();
	bool shouldFlip = !$AquaUtils::isLeftToRight(this->tabPane);
	if (tabPlacement == $SwingConstants::RIGHT) {
		shouldFlip = false;
	}
	if (tabPlacement == $SwingConstants::LEFT) {
		shouldFlip = true;
	}
	int32_t direction = tabIndex == -1 ? $SwingConstants::EAST : $SwingConstants::WEST;
	if (shouldFlip) {
		if (direction == $SwingConstants::EAST) {
			direction = $SwingConstants::WEST;
		} else if (direction == $SwingConstants::WEST) {
			direction = $SwingConstants::EAST;
		}
	}
	if (enabled) {
		return $AquaImageFactory::getArrowIconForDirection(direction);
	}
	$var($Image, icon, $AquaImageFactory::getArrowImageForDirection(direction));
	return $new($ImageIcon, $($AquaUtils::generateDisabledImage(icon)));
}

void AquaTabbedPaneUI::paintContents($Graphics* g, int32_t tabPlacement, int32_t tabIndex, $Rectangle* tabRect, $Rectangle* iconRect, $Rectangle* textRect, bool isSelected) {
	$useLocalCurrentObjectStackCache();
	$var($Shape, temp, $nc(g)->getClip());
	g->clipRect($nc(this->fContentRect)->x, $nc(this->fContentRect)->y, $nc(this->fContentRect)->width, $nc(this->fContentRect)->height);
	$var($Component, component, nullptr);
	$var($String, title, nullptr);
	$var($Icon, icon, nullptr);
	if (isScrollTabIndex(tabIndex)) {
		$assign(component, nullptr);
		$assign(title, nullptr);
		$assign(icon, getIconForScrollTab(tabPlacement, tabIndex, true));
	} else {
		$assign(component, getTabComponentAt(tabIndex));
		if (component == nullptr) {
			$assign(title, $nc(this->tabPane)->getTitleAt(tabIndex));
			$assign(icon, getIconForTab(tabIndex));
		} else {
			$assign(title, nullptr);
			$assign(icon, nullptr);
		}
	}
	bool isVertical = tabPlacement == $SwingConstants::RIGHT || tabPlacement == $SwingConstants::LEFT;
	if (isVertical) {
		transposeRect(this->fContentRect);
	}
	$var($Font, font, $nc(this->tabPane)->getFont());
	$var($FontMetrics, metrics, g->getFontMetrics(font));
	layoutLabel(tabPlacement, metrics, tabIndex < 0 ? 0 : tabIndex, title, icon, this->fContentRect, iconRect, textRect, false);
	if (isVertical) {
		transposeRect(this->fContentRect);
		transposeRect(iconRect);
		transposeRect(textRect);
	}
	if (!($instanceOf($Graphics2D, g))) {
		g->setClip(temp);
		return;
	}
	$var($Graphics2D, g2d, $cast($Graphics2D, g));
	$var($AffineTransform, savedAT, nullptr);
	if (isVertical) {
		$assign(savedAT, g2d->getTransform());
		rotateGraphics(g2d, tabRect, textRect, iconRect, tabPlacement);
	}
	if (component == nullptr && tabIndex >= 0) {
		$var($String, clippedTitle, $SwingUtilities2::clipStringIfNecessary(this->tabPane, metrics, title, $nc(textRect)->width));
		paintTitle(g2d, font, metrics, textRect, tabIndex, clippedTitle);
	}
	if (icon != nullptr) {
		paintIcon(g, tabPlacement, tabIndex, icon, iconRect, isSelected);
	}
	if (savedAT != nullptr) {
		g2d->setTransform(savedAT);
	}
	g->setClip(temp);
}

void AquaTabbedPaneUI::paintTitle($Graphics2D* g2d, $Font* font, $FontMetrics* metrics, $Rectangle* textRect, int32_t tabIndex, $String* title) {
	$useLocalCurrentObjectStackCache();
	$var($View, v, getTextViewForTab(tabIndex));
	if (v != nullptr) {
		v->paint(g2d, textRect);
		return;
	}
	if (title == nullptr) {
		return;
	}
	$var($Color, color, $nc(this->tabPane)->getForegroundAt(tabIndex));
	if ($instanceOf($UIResource, color)) {
		if ($nc(this->tabPane)->isEnabledAt(tabIndex)) {
			$init($Color);
			$nc(g2d)->setColor($Color::black);
		} else {
			$init($Color);
			$nc(g2d)->setColor($Color::gray);
		}
	} else {
		$nc(g2d)->setColor(color);
	}
	$nc(g2d)->setFont(font);
	$SwingUtilities2::drawString(static_cast<$JComponent*>(this->tabPane), static_cast<$Graphics*>(g2d), title, $nc(textRect)->x, textRect->y + $nc(metrics)->getAscent());
}

void AquaTabbedPaneUI::rotateGraphics($Graphics2D* g2d, $Rectangle* tabRect, $Rectangle* textRect, $Rectangle* iconRect, int32_t tabPlacement) {
	int32_t yDiff = 0;
	int32_t xDiff = 0;
	int32_t yIconDiff = 0;
	int32_t xIconDiff = 0;
	double rotateAmount = (tabPlacement == $SwingConstants::LEFT ? -AquaTabbedPaneUI::kNinetyDegrees : AquaTabbedPaneUI::kNinetyDegrees);
	$nc(g2d)->transform($($AffineTransform::getRotateInstance(rotateAmount, (double)$nc(tabRect)->x, (double)tabRect->y)));
	if (tabPlacement == $SwingConstants::LEFT) {
		g2d->translate(-$nc(tabRect)->height - 1, 1);
		xDiff = $nc(textRect)->x - $nc(tabRect)->x;
		yDiff = tabRect->height + tabRect->y - (textRect->y + textRect->height);
		xIconDiff = $nc(iconRect)->x - tabRect->x;
		yIconDiff = tabRect->height + tabRect->y - (iconRect->y + iconRect->height);
	} else {
		g2d->translate(0, -$nc(tabRect)->width - 1);
		yDiff = $nc(textRect)->y - $nc(tabRect)->y;
		xDiff = (tabRect->x + tabRect->width) - (textRect->x + textRect->width);
		yIconDiff = $nc(iconRect)->y - tabRect->y;
		xIconDiff = (tabRect->x + tabRect->width) - (iconRect->x + iconRect->width);
	}
	$nc(textRect)->x = $nc(tabRect)->x + yDiff;
	textRect->y = tabRect->y + xDiff;
	int32_t tempVal = textRect->height;
	textRect->height = textRect->width;
	textRect->width = tempVal;
	$nc(iconRect)->x = tabRect->x + yIconDiff;
	iconRect->y = tabRect->y + xIconDiff;
	tempVal = iconRect->height;
	iconRect->height = iconRect->width;
	iconRect->width = tempVal;
}

void AquaTabbedPaneUI::paintTabNormal($Graphics* g, int32_t tabPlacement, int32_t tabIndex, bool active, bool frameActive, bool isLeftToRight) {
	paintTabNormalFromRect(g, tabPlacement, $nc(this->rects)->get(tabIndex), tabIndex, this->fIconRect, this->fTextRect, active, frameActive, isLeftToRight);
}

void AquaTabbedPaneUI::paintTabNormalFromRect($Graphics* g, int32_t tabPlacement, $Rectangle* tabRect, int32_t nonRectIndex, $Rectangle* iconRect, $Rectangle* textRect, bool active, bool frameActive, bool isLeftToRight) {
	int32_t selectedIndex = $nc(this->tabPane)->getSelectedIndex();
	bool isSelected = selectedIndex == nonRectIndex;
	paintCUITab(g, tabPlacement, tabRect, isSelected, frameActive, isLeftToRight, nonRectIndex);
	$nc(textRect)->setBounds(tabRect);
	$nc(this->fContentRect)->setBounds(tabRect);
	paintContents(g, tabPlacement, nonRectIndex, tabRect, iconRect, textRect, isSelected);
}

void AquaTabbedPaneUI::paintCUITab($Graphics* g, int32_t tabPlacement, $Rectangle* tabRect, bool isSelected, bool frameActive, bool isLeftToRight, int32_t nonRectIndex) {
	$useLocalCurrentObjectStackCache();
	int32_t tabCount = $nc(this->tabPane)->getTabCount();
	bool needsLeftScrollTab = $nc(this->visibleTabState)->needsLeftScrollTab();
	bool needsRightScrollTab = $nc(this->visibleTabState)->needsRightScrollTab();
	bool first = nonRectIndex == 0;
	bool last = nonRectIndex == tabCount - 1;
	if (needsLeftScrollTab || needsRightScrollTab) {
		if (nonRectIndex == -1) {
			first = false;
			last = true;
		} else if (nonRectIndex == -2) {
			first = true;
			last = false;
		} else {
			if (needsLeftScrollTab) {
				first = false;
			}
			if (needsRightScrollTab) {
				last = false;
			}
		}
	}
	if (tabPlacement == $SwingConstants::LEFT || tabPlacement == $SwingConstants::RIGHT) {
		bool tempSwap = last;
		last = first;
		first = tempSwap;
	}
	$var($JRSUIConstants$State, state, getState(nonRectIndex, frameActive, isSelected));
	$nc($nc(this->painter)->state)->set(state);
	$init($JRSUIConstants$State);
	$init($JRSUIConstants$BooleanValue);
	$nc($nc(this->painter)->state)->set(isSelected || (state == $JRSUIConstants$State::INACTIVE && frameActive) ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$BooleanValue::YES) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$BooleanValue::NO));
	$nc($nc(this->painter)->state)->set($(getSegmentPosition(first, last, isLeftToRight)));
	int32_t selectedIndex = $nc(this->tabPane)->getSelectedIndex();
	$nc($nc(this->painter)->state)->set($(getSegmentTrailingSeparator(nonRectIndex, selectedIndex, isLeftToRight)));
	$nc($nc(this->painter)->state)->set($(getSegmentLeadingSeparator(nonRectIndex, selectedIndex, isLeftToRight)));
	$init($JRSUIConstants$Focused);
	$nc($nc(this->painter)->state)->set($nc(this->tabPane)->hasFocus() && isSelected ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Focused::YES) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Focused::NO));
	$nc(this->painter)->paint(g, this->tabPane, $nc(tabRect)->x, tabRect->y, tabRect->width, tabRect->height);
	if (isScrollTabIndex(nonRectIndex)) {
		return;
	}
	$var($Color, color, $nc(this->tabPane)->getBackgroundAt(nonRectIndex));
	if (color == nullptr || ($instanceOf($UIResource, color))) {
		return;
	}
	if (!isLeftToRight && (tabPlacement == $SwingConstants::TOP || tabPlacement == $SwingConstants::BOTTOM)) {
		bool tempSwap = last;
		last = first;
		first = tempSwap;
	}
	fillTabWithBackground(g, tabRect, tabPlacement, first, last, color);
}

$JRSUIConstants$Direction* AquaTabbedPaneUI::getDirection() {
	switch ($nc(this->tabPane)->getTabPlacement()) {
	case $SwingConstants::BOTTOM:
		{
			$init($JRSUIConstants$Direction);
			return $JRSUIConstants$Direction::SOUTH;
		}
	case $SwingConstants::LEFT:
		{
			$init($JRSUIConstants$Direction);
			return $JRSUIConstants$Direction::WEST;
		}
	case $SwingConstants::RIGHT:
		{
			$init($JRSUIConstants$Direction);
			return $JRSUIConstants$Direction::EAST;
		}
	}
	$init($JRSUIConstants$Direction);
	return $JRSUIConstants$Direction::NORTH;
}

$JRSUIConstants$SegmentPosition* AquaTabbedPaneUI::getSegmentPosition(bool first, bool last, bool isLeftToRight) {
	$init(AquaTabbedPaneUI);
	if (first && last) {
		$init($JRSUIConstants$SegmentPosition);
		return $JRSUIConstants$SegmentPosition::ONLY;
	}
	if (first) {
		$init($JRSUIConstants$SegmentPosition);
		return isLeftToRight ? $JRSUIConstants$SegmentPosition::FIRST : $JRSUIConstants$SegmentPosition::LAST;
	}
	if (last) {
		$init($JRSUIConstants$SegmentPosition);
		return isLeftToRight ? $JRSUIConstants$SegmentPosition::LAST : $JRSUIConstants$SegmentPosition::FIRST;
	}
	$init($JRSUIConstants$SegmentPosition);
	return $JRSUIConstants$SegmentPosition::MIDDLE;
}

$JRSUIConstants$SegmentTrailingSeparator* AquaTabbedPaneUI::getSegmentTrailingSeparator(int32_t index, int32_t selectedIndex, bool isLeftToRight) {
	$init($JRSUIConstants$SegmentTrailingSeparator);
	return $JRSUIConstants$SegmentTrailingSeparator::YES;
}

$JRSUIConstants$SegmentLeadingSeparator* AquaTabbedPaneUI::getSegmentLeadingSeparator(int32_t index, int32_t selectedIndex, bool isLeftToRight) {
	$init($JRSUIConstants$SegmentLeadingSeparator);
	return $JRSUIConstants$SegmentLeadingSeparator::NO;
}

bool AquaTabbedPaneUI::isTabBeforeSelectedTab(int32_t index, int32_t selectedIndex, bool isLeftToRight) {
	if (index == -2 && $nc(this->visibleTabState)->getIndex(0) == selectedIndex) {
		return true;
	}
	int32_t indexBeforeSelectedIndex = isLeftToRight ? selectedIndex - 1 : selectedIndex + 1;
	return index == indexBeforeSelectedIndex ? true : false;
}

$JRSUIConstants$State* AquaTabbedPaneUI::getState(int32_t index, bool frameActive, bool isSelected) {
	if (!frameActive) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::INACTIVE;
	}
	if (!$nc(this->tabPane)->isEnabled()) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::DISABLED;
	}
	if ($JRSUIUtils$TabbedPane::useLegacyTabs()) {
		if (isSelected) {
			$init($JRSUIConstants$State);
			return $JRSUIConstants$State::PRESSED;
		}
		if (this->pressedTab == index) {
			$init($JRSUIConstants$State);
			return $JRSUIConstants$State::INACTIVE;
		}
	} else {
		if (isSelected) {
			$init($JRSUIConstants$State);
			return $JRSUIConstants$State::ACTIVE;
		}
		if (this->pressedTab == index) {
			$init($JRSUIConstants$State);
			return $JRSUIConstants$State::PRESSED;
		}
	}
	$init($JRSUIConstants$State);
	return $JRSUIConstants$State::ACTIVE;
}

$AquaTabbedPaneUI$AlterRects* AquaTabbedPaneUI::getAlterationFor(int32_t tabPlacement) {
	$init(AquaTabbedPaneUI);
	$useLocalCurrentObjectStackCache();
	if ($nc(AquaTabbedPaneUI::alterRects)->get(tabPlacement) != nullptr) {
		return $nc(AquaTabbedPaneUI::alterRects)->get(tabPlacement);
	}
	switch (tabPlacement) {
	case $SwingConstants::LEFT:
		{
			return $nc(AquaTabbedPaneUI::alterRects)->set($SwingConstants::LEFT, $($nc($($$new($AquaTabbedPaneUI$AlterRects, 2, 0, -4, 1)->start(0, 0, 0, -4)))->end(0, 3, 0, -3)));
		}
	case $SwingConstants::RIGHT:
		{
			return $nc(AquaTabbedPaneUI::alterRects)->set($SwingConstants::RIGHT, $($nc($($$new($AquaTabbedPaneUI$AlterRects, 1, 0, -4, 1)->start(0, 0, 0, -4)))->end(0, 3, 0, -3)));
		}
	case $SwingConstants::BOTTOM:
		{
			return $nc(AquaTabbedPaneUI::alterRects)->set($SwingConstants::BOTTOM, $($nc($($$new($AquaTabbedPaneUI$AlterRects, 0, 1, 0, -4)->start(3, 0, -3, 0)))->end(0, 0, -3, 0)));
		}
	case $SwingConstants::TOP:
		{}
	default:
		{
			return $nc(AquaTabbedPaneUI::alterRects)->set($SwingConstants::TOP, $($nc($($$new($AquaTabbedPaneUI$AlterRects, 0, 2, 0, -4)->start(3, 0, -3, 0)))->end(0, 0, -3, 0)));
		}
	}
}

void AquaTabbedPaneUI::fillTabWithBackground($Graphics* g, $Rectangle* rect, int32_t tabPlacement, bool first, bool last, $Color* color) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, fillRect, $new($Rectangle, rect));
	$var($AquaTabbedPaneUI$AlterRects, alteration, getAlterationFor(tabPlacement));
	$AquaTabbedPaneUI$AlterRects::alter(fillRect, $nc(alteration)->standard);
	if (first) {
		$AquaTabbedPaneUI$AlterRects::alter(fillRect, $nc(alteration)->first);
	}
	if (last) {
		$AquaTabbedPaneUI$AlterRects::alter(fillRect, $nc(alteration)->last);
	}
	int32_t var$0 = $nc(color)->getRed();
	int32_t var$1 = color->getGreen();
	int32_t var$2 = color->getBlue();
	$nc(g)->setColor($$new($Color, var$0, var$1, var$2, $cast(int32_t, (color->getAlpha() * 0.25))));
	g->fillRoundRect(fillRect->x, fillRect->y, fillRect->width, fillRect->height, 3, 1);
}

$Insets* AquaTabbedPaneUI::getContentBorderInsets(int32_t tabPlacement) {
	$var($Insets, draw, getContentDrawingInsets(tabPlacement));
	rotateInsets(this->contentBorderInsets, this->currentContentBorderInsets, tabPlacement);
	$nc(this->currentContentBorderInsets)->left += $nc(draw)->left;
	$nc(this->currentContentBorderInsets)->right += draw->right;
	$nc(this->currentContentBorderInsets)->top += draw->top;
	$nc(this->currentContentBorderInsets)->bottom += draw->bottom;
	return this->currentContentBorderInsets;
}

void AquaTabbedPaneUI::rotateInsets($Insets* topInsets, $Insets* targetInsets, int32_t targetPlacement) {
	$init(AquaTabbedPaneUI);
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
			$nc(targetInsets)->top = $nc(topInsets)->right;
			$nc(targetInsets)->left = $nc(topInsets)->bottom;
			$nc(targetInsets)->bottom = $nc(topInsets)->left;
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

$Insets* AquaTabbedPaneUI::getContentDrawingInsets(int32_t tabPlacement) {
	rotateInsets(this->contentDrawingInsets, this->currentContentDrawingInsets, tabPlacement);
	return this->currentContentDrawingInsets;
}

$Icon* AquaTabbedPaneUI::getIconForTab(int32_t tabIndex) {
	$var($Icon, mainIcon, $AquaTabbedPaneCopyFromBasicUI::getIconForTab(tabIndex));
	if (mainIcon == nullptr) {
		return nullptr;
	}
	int32_t iconHeight = $nc(mainIcon)->getIconHeight();
	if (iconHeight <= AquaTabbedPaneUI::kMaxIconSize) {
		return mainIcon;
	}
	float ratio = (float)AquaTabbedPaneUI::kMaxIconSize / (float)iconHeight;
	int32_t iconWidth = mainIcon->getIconWidth();
	return $new($AquaTabbedPaneUI$1, this, $cast(int32_t, (iconWidth * ratio)), AquaTabbedPaneUI::kMaxIconSize, mainIcon);
}

void AquaTabbedPaneUI::paintContentBorder($Graphics* g, int32_t tabPlacement, int32_t selectedIndex) {
	$useLocalCurrentObjectStackCache();
	int32_t width = $nc(this->tabPane)->getWidth();
	int32_t height = $nc(this->tabPane)->getHeight();
	$var($Insets, insets, $nc(this->tabPane)->getInsets());
	int32_t x = $nc(insets)->left;
	int32_t y = insets->top;
	int32_t w = width - insets->right - insets->left;
	int32_t h = height - insets->top - insets->bottom;
	switch (tabPlacement) {
	case $SwingConstants::TOP:
		{
			y += AquaTabbedPaneUI::TAB_BORDER_INSET;
			h -= AquaTabbedPaneUI::TAB_BORDER_INSET;
			break;
		}
	case $SwingConstants::BOTTOM:
		{
			h -= AquaTabbedPaneUI::TAB_BORDER_INSET;
			break;
		}
	case $SwingConstants::LEFT:
		{
			x += AquaTabbedPaneUI::TAB_BORDER_INSET;
			w -= AquaTabbedPaneUI::TAB_BORDER_INSET;
			break;
		}
	case $SwingConstants::RIGHT:
		{
			w -= AquaTabbedPaneUI::TAB_BORDER_INSET;
			break;
		}
	}
	if ($nc(this->tabPane)->isOpaque()) {
		$nc(g)->setColor($($nc(this->tabPane)->getBackground()));
		g->fillRect(0, 0, width, height);
	}
	$nc($($AquaGroupBorder::getTabbedPaneGroupBorder()))->paintBorder(this->tabPane, g, x, y, w, h);
}

void AquaTabbedPaneUI::repaintContentBorderEdge() {
	$useLocalCurrentObjectStackCache();
	int32_t width = $nc(this->tabPane)->getWidth();
	int32_t height = $nc(this->tabPane)->getHeight();
	$var($Insets, insets, $nc(this->tabPane)->getInsets());
	int32_t tabPlacement = $nc(this->tabPane)->getTabPlacement();
	$var($Insets, localContentBorderInsets, getContentBorderInsets(tabPlacement));
	int32_t x = $nc(insets)->left;
	int32_t y = insets->top;
	int32_t w = width - insets->right - insets->left;
	int32_t h = height - insets->top - insets->bottom;
	switch (tabPlacement) {
	case $SwingConstants::LEFT:
		{
			x += calculateTabAreaWidth(tabPlacement, this->runCount, this->maxTabWidth);
			w = $nc(localContentBorderInsets)->left;
			break;
		}
	case $SwingConstants::RIGHT:
		{
			w = $nc(localContentBorderInsets)->right;
			break;
		}
	case $SwingConstants::BOTTOM:
		{
			h = $nc(localContentBorderInsets)->bottom;
			break;
		}
	case $SwingConstants::TOP:
		{}
	default:
		{
			y += calculateTabAreaHeight(tabPlacement, this->runCount, this->maxTabHeight);
			h = $nc(localContentBorderInsets)->top;
		}
	}
	$nc(this->tabPane)->repaint(x, y, w, h);
}

bool AquaTabbedPaneUI::isTabVisible(int32_t index) {
	if (index == -1 || index == -2) {
		return true;
	}
	for (int32_t i = 0; i < $nc(this->visibleTabState)->getTotal(); ++i) {
		if ($nc(this->visibleTabState)->getIndex(i) == index) {
			return true;
		}
	}
	return false;
}

$Rectangle* AquaTabbedPaneUI::getTabBounds($JTabbedPane* pane, int32_t i) {
	bool var$0 = $nc(this->visibleTabState)->needsScrollTabs();
	if (var$0) {
		bool var$1 = $nc(this->visibleTabState)->isBefore(i);
		var$0 = (var$1 || $nc(this->visibleTabState)->isAfter(i));
	}
	if (var$0) {
		return nullptr;
	}
	return $AquaTabbedPaneCopyFromBasicUI::getTabBounds(pane, i);
}

int32_t AquaTabbedPaneUI::tabForCoordinate($JTabbedPane* pane, int32_t x, int32_t y) {
	$useLocalCurrentObjectStackCache();
	ensureCurrentLayout();
	$var($Point, p, $new($Point, x, y));
	if ($nc(this->visibleTabState)->needsScrollTabs()) {
		for (int32_t i = 0; i < $nc(this->visibleTabState)->getTotal(); ++i) {
			int32_t realOffset = $nc(this->visibleTabState)->getIndex(i);
			if ($nc($nc(this->rects)->get(realOffset))->contains(p->x, p->y)) {
				return realOffset;
			}
		}
		if ($nc($($nc(this->visibleTabState)->getRightScrollTabRect()))->contains(p->x, p->y)) {
			return -1;
		}
	} else {
		int32_t tabCount = $nc(this->tabPane)->getTabCount();
		for (int32_t i = 0; i < tabCount; ++i) {
			if ($nc($nc(this->rects)->get(i))->contains(p->x, p->y)) {
				return i;
			}
		}
	}
	return -1;
}

$Insets* AquaTabbedPaneUI::getTabInsets(int32_t tabPlacement, int32_t tabIndex) {
	switch (tabPlacement) {
	case $SwingConstants::LEFT:
		{
			return $UIManager::getInsets("TabbedPane.leftTabInsets"_s);
		}
	case $SwingConstants::RIGHT:
		{
			return $UIManager::getInsets("TabbedPane.rightTabInsets"_s);
		}
	}
	return this->tabInsets;
}

int32_t AquaTabbedPaneUI::calculateTabHeight(int32_t tabPlacement, int32_t tabIndex, int32_t fontHeight) {
	int32_t result = $AquaTabbedPaneCopyFromBasicUI::calculateTabHeight(tabPlacement, tabIndex, fontHeight);
	if (result <= AquaTabbedPaneUI::kSmallTabHeight) {
		return AquaTabbedPaneUI::kSmallTabHeight;
	}
	return AquaTabbedPaneUI::kLargeTabHeight;
}

bool AquaTabbedPaneUI::shouldRotateTabRuns(int32_t tabPlacement) {
	return false;
}

$ChangeListener* AquaTabbedPaneUI::createChangeListener() {
	return $new($AquaTabbedPaneUI$2, this);
}

void clinit$AquaTabbedPaneUI($Class* class$) {
	$init($Math);
	AquaTabbedPaneUI::kNinetyDegrees = ($Math::PI / 2.0);
	$assignStatic(AquaTabbedPaneUI::alterRects, $new($AquaTabbedPaneUI$AlterRectsArray, 5));
}

AquaTabbedPaneUI::AquaTabbedPaneUI() {
}

$Class* AquaTabbedPaneUI::load$($String* name, bool initialize) {
	$loadClass(AquaTabbedPaneUI, name, initialize, &_AquaTabbedPaneUI_ClassInfo_, clinit$AquaTabbedPaneUI, allocate$AquaTabbedPaneUI);
	return class$;
}

$Class* AquaTabbedPaneUI::class$ = nullptr;

		} // laf
	} // apple
} // com