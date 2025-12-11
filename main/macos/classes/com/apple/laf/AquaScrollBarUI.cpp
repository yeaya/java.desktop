#include <com/apple/laf/AquaScrollBarUI.h>

#include <apple/laf/JRSUIConstants$Hit.h>
#include <apple/laf/JRSUIConstants$NothingToScroll.h>
#include <apple/laf/JRSUIConstants$Orientation.h>
#include <apple/laf/JRSUIConstants$Property.h>
#include <apple/laf/JRSUIConstants$ScrollBarHit.h>
#include <apple/laf/JRSUIConstants$ScrollBarPart.h>
#include <apple/laf/JRSUIConstants$ShowArrows.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIControl.h>
#include <apple/laf/JRSUIState$ScrollBarState.h>
#include <apple/laf/JRSUIState$ValueState.h>
#include <apple/laf/JRSUIState.h>
#include <apple/laf/JRSUIStateFactory.h>
#include <apple/laf/JRSUIUtils$HitDetection.h>
#include <apple/laf/JRSUIUtils$ScrollBar.h>
#include <com/apple/laf/AquaFocusHandler.h>
#include <com/apple/laf/AquaPainter.h>
#include <com/apple/laf/AquaScrollBarUI$1.h>
#include <com/apple/laf/AquaScrollBarUI$ModelListener.h>
#include <com/apple/laf/AquaScrollBarUI$PropertyChangeHandler.h>
#include <com/apple/laf/AquaScrollBarUI$ScrollListener.h>
#include <com/apple/laf/AquaScrollBarUI$TrackListener.h>
#include <com/apple/laf/AquaUtils$RecyclableSingleton.h>
#include <java/awt/Adjustable.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/util/Map.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/Timer.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollBarUI.h>
#include <jcpp.h>

#undef ACTIVE
#undef HORIZONTAL
#undef INACTIVE
#undef MAX_VALUE
#undef MIN_ARROW_COLLAPSE_SIZE
#undef NO
#undef NONE
#undef PRESSED
#undef THUMB
#undef TRACK_MAX
#undef TRACK_MIN
#undef VERTICAL
#undef YES

using $JRSUIConstants$Hit = ::apple::laf::JRSUIConstants$Hit;
using $JRSUIConstants$NothingToScroll = ::apple::laf::JRSUIConstants$NothingToScroll;
using $JRSUIConstants$Orientation = ::apple::laf::JRSUIConstants$Orientation;
using $JRSUIConstants$Property = ::apple::laf::JRSUIConstants$Property;
using $JRSUIConstants$ScrollBarHit = ::apple::laf::JRSUIConstants$ScrollBarHit;
using $JRSUIConstants$ScrollBarPart = ::apple::laf::JRSUIConstants$ScrollBarPart;
using $JRSUIConstants$ShowArrows = ::apple::laf::JRSUIConstants$ShowArrows;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIControl = ::apple::laf::JRSUIControl;
using $JRSUIState = ::apple::laf::JRSUIState;
using $JRSUIState$ScrollBarState = ::apple::laf::JRSUIState$ScrollBarState;
using $JRSUIState$ValueState = ::apple::laf::JRSUIState$ValueState;
using $JRSUIStateFactory = ::apple::laf::JRSUIStateFactory;
using $JRSUIUtils$HitDetection = ::apple::laf::JRSUIUtils$HitDetection;
using $JRSUIUtils$ScrollBar = ::apple::laf::JRSUIUtils$ScrollBar;
using $AquaFocusHandler = ::com::apple::laf::AquaFocusHandler;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $AquaScrollBarUI$1 = ::com::apple::laf::AquaScrollBarUI$1;
using $AquaScrollBarUI$ModelListener = ::com::apple::laf::AquaScrollBarUI$ModelListener;
using $AquaScrollBarUI$PropertyChangeHandler = ::com::apple::laf::AquaScrollBarUI$PropertyChangeHandler;
using $AquaScrollBarUI$ScrollListener = ::com::apple::laf::AquaScrollBarUI$ScrollListener;
using $AquaScrollBarUI$TrackListener = ::com::apple::laf::AquaScrollBarUI$TrackListener;
using $AquaUtils$RecyclableSingleton = ::com::apple::laf::AquaUtils$RecyclableSingleton;
using $Adjustable = ::java::awt::Adjustable;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ActionListener = ::java::awt::event::ActionListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Map = ::java::util::Map;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $Timer = ::javax::swing::Timer;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ScrollBarUI = ::javax::swing::plaf::ScrollBarUI;

namespace com {
	namespace apple {
		namespace laf {

$FieldInfo _AquaScrollBarUI_FieldInfo_[] = {
	{"kInitialDelay", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaScrollBarUI, kInitialDelay)},
	{"kNormalDelay", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AquaScrollBarUI, kNormalDelay)},
	{"MIN_ARROW_COLLAPSE_SIZE", "I", nullptr, $STATIC | $FINAL, $constField(AquaScrollBarUI, MIN_ARROW_COLLAPSE_SIZE)},
	{"fIsDragging", "Z", nullptr, $PROTECTED, $field(AquaScrollBarUI, fIsDragging)},
	{"fScrollTimer", "Ljavax/swing/Timer;", nullptr, $PROTECTED, $field(AquaScrollBarUI, fScrollTimer)},
	{"fScrollListener", "Lcom/apple/laf/AquaScrollBarUI$ScrollListener;", nullptr, $PROTECTED, $field(AquaScrollBarUI, fScrollListener)},
	{"fTrackListener", "Lcom/apple/laf/AquaScrollBarUI$TrackListener;", nullptr, $PROTECTED, $field(AquaScrollBarUI, fTrackListener)},
	{"fTrackHighlight", "Lapple/laf/JRSUIConstants$Hit;", nullptr, $PROTECTED, $field(AquaScrollBarUI, fTrackHighlight)},
	{"fMousePart", "Lapple/laf/JRSUIConstants$Hit;", nullptr, $PROTECTED, $field(AquaScrollBarUI, fMousePart)},
	{"fScrollBar", "Ljavax/swing/JScrollBar;", nullptr, $PROTECTED, $field(AquaScrollBarUI, fScrollBar)},
	{"fModelListener", "Lcom/apple/laf/AquaScrollBarUI$ModelListener;", nullptr, $PROTECTED, $field(AquaScrollBarUI, fModelListener)},
	{"fPropertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $field(AquaScrollBarUI, fPropertyChangeListener)},
	{"painter", "Lcom/apple/laf/AquaPainter;", "Lcom/apple/laf/AquaPainter<Lapple/laf/JRSUIState$ScrollBarState;>;", $PROTECTED | $FINAL, $field(AquaScrollBarUI, painter)},
	{"hitToPressedPartMap", "Lcom/apple/laf/AquaUtils$RecyclableSingleton;", "Lcom/apple/laf/AquaUtils$RecyclableSingleton<Ljava/util/Map<Lapple/laf/JRSUIConstants$Hit;Lapple/laf/JRSUIConstants$ScrollBarPart;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(AquaScrollBarUI, hitToPressedPartMap)},
	{}
};

$MethodInfo _AquaScrollBarUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AquaScrollBarUI::*)()>(&AquaScrollBarUI::init$))},
	{"configureScrollBarColors", "()V", nullptr, $PROTECTED},
	{"createModelListener", "()Lcom/apple/laf/AquaScrollBarUI$ModelListener;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createScrollListener", "()Lcom/apple/laf/AquaScrollBarUI$ScrollListener;", nullptr, $PROTECTED},
	{"createTrackListener", "()Lcom/apple/laf/AquaScrollBarUI$TrackListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&AquaScrollBarUI::createUI))},
	{"getDragBounds", "()Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPartHit", "(II)Lapple/laf/JRSUIConstants$Hit;", nullptr, $PROTECTED},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPressedPart", "()Lapple/laf/JRSUIConstants$ScrollBarPart;", nullptr, $PROTECTED},
	{"getScrollToHereStartPoint", "(II)Ljava/awt/Point;", nullptr, 0},
	{"getState", "(Ljavax/swing/JComponent;Lapple/laf/JRSUIConstants$ScrollBarPart;)Lapple/laf/JRSUIConstants$State;", nullptr, $PROTECTED},
	{"getThumbPercent", "()F", nullptr, 0},
	{"getThumbStart", "()F", nullptr, 0},
	{"getTrackBounds", "()Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isHorizontal", "()Z", nullptr, 0},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"scrollByBlock", "(I)V", nullptr, $PROTECTED},
	{"scrollByUnit", "(I)V", nullptr, $PROTECTED},
	{"shouldShowArrows", "()Z", nullptr, $PROTECTED},
	{"startTimer", "(Z)V", nullptr, $PROTECTED},
	{"syncState", "(Ljavax/swing/JComponent;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _AquaScrollBarUI_InnerClassesInfo_[] = {
	{"com.apple.laf.AquaScrollBarUI$HitUtil", "com.apple.laf.AquaScrollBarUI", "HitUtil", $STATIC},
	{"com.apple.laf.AquaScrollBarUI$ScrollListener", "com.apple.laf.AquaScrollBarUI", "ScrollListener", $PROTECTED},
	{"com.apple.laf.AquaScrollBarUI$TrackListener", "com.apple.laf.AquaScrollBarUI", "TrackListener", $PROTECTED},
	{"com.apple.laf.AquaScrollBarUI$ModelListener", "com.apple.laf.AquaScrollBarUI", "ModelListener", $PROTECTED},
	{"com.apple.laf.AquaScrollBarUI$PropertyChangeHandler", "com.apple.laf.AquaScrollBarUI", "PropertyChangeHandler", $PROTECTED},
	{"com.apple.laf.AquaScrollBarUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _AquaScrollBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.apple.laf.AquaScrollBarUI",
	"javax.swing.plaf.ScrollBarUI",
	nullptr,
	_AquaScrollBarUI_FieldInfo_,
	_AquaScrollBarUI_MethodInfo_,
	nullptr,
	nullptr,
	_AquaScrollBarUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.apple.laf.AquaScrollBarUI$HitUtil,com.apple.laf.AquaScrollBarUI$ScrollListener,com.apple.laf.AquaScrollBarUI$TrackListener,com.apple.laf.AquaScrollBarUI$ModelListener,com.apple.laf.AquaScrollBarUI$PropertyChangeHandler,com.apple.laf.AquaScrollBarUI$1"
};

$Object* allocate$AquaScrollBarUI($Class* clazz) {
	return $of($alloc(AquaScrollBarUI));
}

$AquaUtils$RecyclableSingleton* AquaScrollBarUI::hitToPressedPartMap = nullptr;

$ComponentUI* AquaScrollBarUI::createUI($JComponent* c) {
	$init(AquaScrollBarUI);
	return $new(AquaScrollBarUI);
}

void AquaScrollBarUI::init$() {
	$ScrollBarUI::init$();
	$init($JRSUIConstants$Hit);
	$set(this, fTrackHighlight, $JRSUIConstants$Hit::NONE);
	$set(this, fMousePart, $JRSUIConstants$Hit::NONE);
	$set(this, painter, $AquaPainter::create($($JRSUIStateFactory::getScrollBar())));
}

void AquaScrollBarUI::installUI($JComponent* c) {
	$set(this, fScrollBar, $cast($JScrollBar, c));
	installListeners();
	configureScrollBarColors();
}

void AquaScrollBarUI::uninstallUI($JComponent* c) {
	uninstallListeners();
	$set(this, fScrollBar, nullptr);
}

void AquaScrollBarUI::configureScrollBarColors() {
	$LookAndFeel::installColors(this->fScrollBar, "ScrollBar.background"_s, "ScrollBar.foreground"_s);
}

$AquaScrollBarUI$TrackListener* AquaScrollBarUI::createTrackListener() {
	return $new($AquaScrollBarUI$TrackListener, this);
}

$AquaScrollBarUI$ScrollListener* AquaScrollBarUI::createScrollListener() {
	return $new($AquaScrollBarUI$ScrollListener, this);
}

void AquaScrollBarUI::installListeners() {
	$set(this, fTrackListener, createTrackListener());
	$set(this, fModelListener, createModelListener());
	$set(this, fPropertyChangeListener, createPropertyChangeListener());
	$nc(this->fScrollBar)->addMouseListener(this->fTrackListener);
	$nc(this->fScrollBar)->addMouseMotionListener(this->fTrackListener);
	$nc($($nc(this->fScrollBar)->getModel()))->addChangeListener(this->fModelListener);
	$nc(this->fScrollBar)->addPropertyChangeListener(this->fPropertyChangeListener);
	$set(this, fScrollListener, createScrollListener());
	$set(this, fScrollTimer, $new($Timer, AquaScrollBarUI::kNormalDelay, this->fScrollListener));
	$nc(this->fScrollTimer)->setInitialDelay(AquaScrollBarUI::kInitialDelay);
}

void AquaScrollBarUI::uninstallListeners() {
	$nc(this->fScrollTimer)->stop();
	$set(this, fScrollTimer, nullptr);
	$nc($($nc(this->fScrollBar)->getModel()))->removeChangeListener(this->fModelListener);
	$nc(this->fScrollBar)->removeMouseListener(this->fTrackListener);
	$nc(this->fScrollBar)->removeMouseMotionListener(this->fTrackListener);
	$nc(this->fScrollBar)->removePropertyChangeListener(this->fPropertyChangeListener);
}

$PropertyChangeListener* AquaScrollBarUI::createPropertyChangeListener() {
	return $new($AquaScrollBarUI$PropertyChangeHandler, this);
}

$AquaScrollBarUI$ModelListener* AquaScrollBarUI::createModelListener() {
	return $new($AquaScrollBarUI$ModelListener, this);
}

void AquaScrollBarUI::syncState($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($JRSUIState$ScrollBarState, scrollBarState, $cast($JRSUIState$ScrollBarState, $nc(this->painter)->state));
	$init($JRSUIConstants$Orientation);
	$nc(scrollBarState)->set(isHorizontal() ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Orientation::HORIZONTAL) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$Orientation::VERTICAL));
	int32_t var$1 = $nc(this->fScrollBar)->getMaximum();
	int32_t var$0 = var$1 - $nc(this->fScrollBar)->getMinimum();
	float trackExtent = (float)(var$0 - $nc($($nc(this->fScrollBar)->getModel()))->getExtent());
	if (trackExtent <= 0.0f) {
		$init($JRSUIConstants$NothingToScroll);
		scrollBarState->set($JRSUIConstants$NothingToScroll::YES);
		return;
	}
	$var($JRSUIConstants$ScrollBarPart, pressedPart, getPressedPart());
	scrollBarState->set(pressedPart);
	scrollBarState->set($(getState(c, pressedPart)));
	$init($JRSUIConstants$NothingToScroll);
	scrollBarState->set($JRSUIConstants$NothingToScroll::NO);
	int32_t var$2 = $nc(this->fScrollBar)->getValue();
	scrollBarState->setValue((var$2 - $nc(this->fScrollBar)->getMinimum()) / trackExtent);
	scrollBarState->setThumbStart(getThumbStart());
	scrollBarState->setThumbPercent(getThumbPercent());
	$init($JRSUIConstants$ShowArrows);
	scrollBarState->set(shouldShowArrows() ? static_cast<$JRSUIConstants$Property*>($JRSUIConstants$ShowArrows::YES) : static_cast<$JRSUIConstants$Property*>($JRSUIConstants$ShowArrows::NO));
}

void AquaScrollBarUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	syncState(c);
	$var($Graphics, var$0, g);
	$var($Component, var$1, static_cast<$Component*>(c));
	int32_t var$2 = $nc(this->fScrollBar)->getWidth();
	$nc(this->painter)->paint(var$0, var$1, 0, 0, var$2, $nc(this->fScrollBar)->getHeight());
}

$JRSUIConstants$State* AquaScrollBarUI::getState($JComponent* c, $JRSUIConstants$ScrollBarPart* pressedPart) {
	if (!$AquaFocusHandler::isActive(c)) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::INACTIVE;
	}
	if (!$nc(c)->isEnabled()) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::INACTIVE;
	}
	$init($JRSUIConstants$ScrollBarPart);
	if (pressedPart != $JRSUIConstants$ScrollBarPart::NONE) {
		$init($JRSUIConstants$State);
		return $JRSUIConstants$State::PRESSED;
	}
	$init($JRSUIConstants$State);
	return $JRSUIConstants$State::ACTIVE;
}

$JRSUIConstants$ScrollBarPart* AquaScrollBarUI::getPressedPart() {
	$useLocalCurrentObjectStackCache();
	if (!$nc(this->fTrackListener)->fInArrows || !$nc(this->fTrackListener)->fStillInArrow) {
		$init($JRSUIConstants$ScrollBarPart);
		return $JRSUIConstants$ScrollBarPart::NONE;
	}
	$var($JRSUIConstants$ScrollBarPart, pressedPart, $cast($JRSUIConstants$ScrollBarPart, $nc(($cast($Map, $($nc(AquaScrollBarUI::hitToPressedPartMap)->get()))))->get(this->fMousePart)));
	if (pressedPart == nullptr) {
		$init($JRSUIConstants$ScrollBarPart);
		return $JRSUIConstants$ScrollBarPart::NONE;
	}
	return pressedPart;
}

bool AquaScrollBarUI::shouldShowArrows() {
	return AquaScrollBarUI::MIN_ARROW_COLLAPSE_SIZE < (isHorizontal() ? $nc(this->fScrollBar)->getWidth() : $nc(this->fScrollBar)->getHeight());
}

void AquaScrollBarUI::layoutContainer($Container* fScrollBarContainer) {
	$nc(this->fScrollBar)->repaint();
	$nc(this->fScrollBar)->revalidate();
}

$Rectangle* AquaScrollBarUI::getTrackBounds() {
	int32_t var$0 = $nc(this->fScrollBar)->getWidth();
	return $new($Rectangle, 0, 0, var$0, $nc(this->fScrollBar)->getHeight());
}

$Rectangle* AquaScrollBarUI::getDragBounds() {
	int32_t var$0 = $nc(this->fScrollBar)->getWidth();
	return $new($Rectangle, 0, 0, var$0, $nc(this->fScrollBar)->getHeight());
}

void AquaScrollBarUI::startTimer(bool initial) {
	$nc(this->fScrollTimer)->setInitialDelay(initial ? AquaScrollBarUI::kInitialDelay : AquaScrollBarUI::kNormalDelay);
	$nc(this->fScrollTimer)->start();
}

void AquaScrollBarUI::scrollByBlock(int32_t direction) {
	$synchronized(this->fScrollBar) {
		int32_t oldValue = $nc(this->fScrollBar)->getValue();
		int32_t blockIncrement = $nc(this->fScrollBar)->getBlockIncrement(direction);
		int32_t delta = blockIncrement * ((direction > 0) ? +1 : -1);
		$nc(this->fScrollBar)->setValue(oldValue + delta);
		$init($JRSUIConstants$ScrollBarHit);
		$set(this, fTrackHighlight, direction > 0 ? static_cast<$JRSUIConstants$Hit*>($JRSUIConstants$ScrollBarHit::TRACK_MAX) : static_cast<$JRSUIConstants$Hit*>($JRSUIConstants$ScrollBarHit::TRACK_MIN));
		$nc(this->fScrollBar)->repaint();
		$nc(this->fScrollListener)->setDirection(direction);
		$nc(this->fScrollListener)->setScrollByBlock(true);
	}
}

void AquaScrollBarUI::scrollByUnit(int32_t direction) {
	$synchronized(this->fScrollBar) {
		int32_t delta = $nc(this->fScrollBar)->getUnitIncrement(direction);
		if (direction <= 0) {
			delta = -delta;
		}
		$nc(this->fScrollBar)->setValue(delta + $nc(this->fScrollBar)->getValue());
		$nc(this->fScrollBar)->repaint();
		$nc(this->fScrollListener)->setDirection(direction);
		$nc(this->fScrollListener)->setScrollByBlock(false);
	}
}

$JRSUIConstants$Hit* AquaScrollBarUI::getPartHit(int32_t x, int32_t y) {
	syncState(this->fScrollBar);
	$var($JRSUIControl, var$0, $nc(this->painter)->getControl());
	int32_t var$1 = $nc(this->fScrollBar)->getWidth();
	return $JRSUIUtils$HitDetection::getHitForPoint(var$0, 0, 0, var$1, $nc(this->fScrollBar)->getHeight(), x, y);
}

float AquaScrollBarUI::getThumbStart() {
	int32_t max = $nc(this->fScrollBar)->getMaximum();
	int32_t min = $nc(this->fScrollBar)->getMinimum();
	int32_t extent = max - min;
	if (extent <= 0) {
		return 0.0f;
	}
	int32_t var$0 = $nc(this->fScrollBar)->getValue();
	return (float)(var$0 - $nc(this->fScrollBar)->getMinimum()) / (float)extent;
}

float AquaScrollBarUI::getThumbPercent() {
	int32_t visible = $nc(this->fScrollBar)->getVisibleAmount();
	int32_t max = $nc(this->fScrollBar)->getMaximum();
	int32_t min = $nc(this->fScrollBar)->getMinimum();
	int32_t extent = max - min;
	if (extent <= 0) {
		return 0.0f;
	}
	return (float)visible / (float)extent;
}

$Dimension* AquaScrollBarUI::getPreferredSize($JComponent* c) {
	return isHorizontal() ? $new($Dimension, 96, 15) : $new($Dimension, 15, 96);
}

$Dimension* AquaScrollBarUI::getMinimumSize($JComponent* c) {
	return isHorizontal() ? $new($Dimension, 54, 15) : $new($Dimension, 15, 54);
}

$Dimension* AquaScrollBarUI::getMaximumSize($JComponent* c) {
	return $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

bool AquaScrollBarUI::isHorizontal() {
	return $nc(this->fScrollBar)->getOrientation() == $Adjustable::HORIZONTAL;
}

$Point* AquaScrollBarUI::getScrollToHereStartPoint(int32_t clickPosX, int32_t clickPosY) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, limitRect, getDragBounds());
	syncState(this->fScrollBar);
	$var($doubles, rect, $new($doubles, 4));
	$var($doubles, var$0, rect);
	$var($JRSUIControl, var$1, $nc(this->painter)->getControl());
	int32_t var$2 = $nc(this->fScrollBar)->getWidth();
	$init($JRSUIConstants$ScrollBarPart);
	$JRSUIUtils$ScrollBar::getPartBounds(var$0, var$1, 0, 0, var$2, $nc(this->fScrollBar)->getHeight(), $JRSUIConstants$ScrollBarPart::THUMB);
	$var($Rectangle, r, $new($Rectangle, $cast(int32_t, rect->get(0)), $cast(int32_t, rect->get(1)), $cast(int32_t, rect->get(2)), $cast(int32_t, rect->get(3))));
	$var($Point, startPoint, $new($Point, clickPosX, clickPosY));
	if (isHorizontal()) {
		int32_t halfWidth = r->width / 2;
		int32_t limitRectRight = $nc(limitRect)->x + limitRect->width;
		if (clickPosX + halfWidth > limitRectRight) {
			startPoint->x = r->x + r->width - limitRectRight - clickPosX - 1;
		} else if (clickPosX - halfWidth < limitRect->x) {
			startPoint->x = r->x + clickPosX - limitRect->x;
		} else {
			startPoint->x = r->x + halfWidth;
		}
		startPoint->y = (r->y + r->height) / 2;
		return startPoint;
	}
	int32_t halfHeight = r->height / 2;
	int32_t limitRectBottom = $nc(limitRect)->y + limitRect->height;
	if (clickPosY + halfHeight > limitRectBottom) {
		startPoint->y = r->y + r->height - limitRectBottom - clickPosY - 1;
	} else if (clickPosY - halfHeight < limitRect->y) {
		startPoint->y = r->y + clickPosY - limitRect->y;
	} else {
		startPoint->y = r->y + halfHeight;
	}
	startPoint->x = (r->x + r->width) / 2;
	return startPoint;
}

void clinit$AquaScrollBarUI($Class* class$) {
	$assignStatic(AquaScrollBarUI::hitToPressedPartMap, $new($AquaScrollBarUI$1));
}

AquaScrollBarUI::AquaScrollBarUI() {
}

$Class* AquaScrollBarUI::load$($String* name, bool initialize) {
	$loadClass(AquaScrollBarUI, name, initialize, &_AquaScrollBarUI_ClassInfo_, clinit$AquaScrollBarUI, allocate$AquaScrollBarUI);
	return class$;
}

$Class* AquaScrollBarUI::class$ = nullptr;

		} // laf
	} // apple
} // com