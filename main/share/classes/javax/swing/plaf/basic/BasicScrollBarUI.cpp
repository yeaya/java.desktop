#include <javax/swing/plaf/basic/BasicScrollBarUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollBarUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicArrowButton.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI$Actions.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI$ArrowButtonListener.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI$Handler.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI$ModelListener.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI$ScrollListener.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI$TrackListener.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/SwingUtilities2.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef DECREASE_HIGHLIGHT
#undef EAST
#undef HORIZONTAL
#undef INCREASE_HIGHLIGHT
#undef MAX_SCROLL
#undef MAX_VALUE
#undef MIN_SCROLL
#undef NEGATIVE_BLOCK_INCREMENT
#undef NEGATIVE_SCROLL
#undef NEGATIVE_UNIT_INCREMENT
#undef NORTH
#undef NO_HIGHLIGHT
#undef POSITIVE_BLOCK_INCREMENT
#undef POSITIVE_SCROLL
#undef POSITIVE_UNIT_INCREMENT
#undef SOUTH
#undef TRUE
#undef VERTICAL
#undef WEST
#undef WHEN_ANCESTOR_OF_FOCUSED_COMPONENT
#undef WHEN_FOCUSED

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $ActionListener = ::java::awt::event::ActionListener;
using $FocusListener = ::java::awt::event::FocusListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $InputMap = ::javax::swing::InputMap;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;
using $UIManager = ::javax::swing::UIManager;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ScrollBarUI = ::javax::swing::plaf::ScrollBarUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicArrowButton = ::javax::swing::plaf::basic::BasicArrowButton;
using $BasicScrollBarUI$Actions = ::javax::swing::plaf::basic::BasicScrollBarUI$Actions;
using $BasicScrollBarUI$ArrowButtonListener = ::javax::swing::plaf::basic::BasicScrollBarUI$ArrowButtonListener;
using $BasicScrollBarUI$Handler = ::javax::swing::plaf::basic::BasicScrollBarUI$Handler;
using $BasicScrollBarUI$ModelListener = ::javax::swing::plaf::basic::BasicScrollBarUI$ModelListener;
using $BasicScrollBarUI$ScrollListener = ::javax::swing::plaf::basic::BasicScrollBarUI$ScrollListener;
using $BasicScrollBarUI$TrackListener = ::javax::swing::plaf::basic::BasicScrollBarUI$TrackListener;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicScrollBarUI_FieldInfo_[] = {
	{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(BasicScrollBarUI, $assertionsDisabled)},
	{"POSITIVE_SCROLL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicScrollBarUI, POSITIVE_SCROLL)},
	{"NEGATIVE_SCROLL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicScrollBarUI, NEGATIVE_SCROLL)},
	{"MIN_SCROLL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicScrollBarUI, MIN_SCROLL)},
	{"MAX_SCROLL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicScrollBarUI, MAX_SCROLL)},
	{"minimumThumbSize", "Ljava/awt/Dimension;", nullptr, $PROTECTED, $field(BasicScrollBarUI, minimumThumbSize)},
	{"maximumThumbSize", "Ljava/awt/Dimension;", nullptr, $PROTECTED, $field(BasicScrollBarUI, maximumThumbSize)},
	{"thumbHighlightColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicScrollBarUI, thumbHighlightColor)},
	{"thumbLightShadowColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicScrollBarUI, thumbLightShadowColor)},
	{"thumbDarkShadowColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicScrollBarUI, thumbDarkShadowColor)},
	{"thumbColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicScrollBarUI, thumbColor)},
	{"trackColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicScrollBarUI, trackColor)},
	{"trackHighlightColor", "Ljava/awt/Color;", nullptr, $PROTECTED, $field(BasicScrollBarUI, trackHighlightColor)},
	{"scrollbar", "Ljavax/swing/JScrollBar;", nullptr, $PROTECTED, $field(BasicScrollBarUI, scrollbar)},
	{"incrButton", "Ljavax/swing/JButton;", nullptr, $PROTECTED, $field(BasicScrollBarUI, incrButton)},
	{"decrButton", "Ljavax/swing/JButton;", nullptr, $PROTECTED, $field(BasicScrollBarUI, decrButton)},
	{"isDragging", "Z", nullptr, $PROTECTED, $field(BasicScrollBarUI, isDragging)},
	{"trackListener", "Ljavax/swing/plaf/basic/BasicScrollBarUI$TrackListener;", nullptr, $PROTECTED, $field(BasicScrollBarUI, trackListener)},
	{"buttonListener", "Ljavax/swing/plaf/basic/BasicScrollBarUI$ArrowButtonListener;", nullptr, $PROTECTED, $field(BasicScrollBarUI, buttonListener)},
	{"modelListener", "Ljavax/swing/plaf/basic/BasicScrollBarUI$ModelListener;", nullptr, $PROTECTED, $field(BasicScrollBarUI, modelListener)},
	{"thumbRect", "Ljava/awt/Rectangle;", nullptr, $PROTECTED, $field(BasicScrollBarUI, thumbRect)},
	{"trackRect", "Ljava/awt/Rectangle;", nullptr, $PROTECTED, $field(BasicScrollBarUI, trackRect)},
	{"trackHighlight", "I", nullptr, $PROTECTED, $field(BasicScrollBarUI, trackHighlight)},
	{"NO_HIGHLIGHT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(BasicScrollBarUI, NO_HIGHLIGHT)},
	{"DECREASE_HIGHLIGHT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(BasicScrollBarUI, DECREASE_HIGHLIGHT)},
	{"INCREASE_HIGHLIGHT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(BasicScrollBarUI, INCREASE_HIGHLIGHT)},
	{"scrollListener", "Ljavax/swing/plaf/basic/BasicScrollBarUI$ScrollListener;", nullptr, $PROTECTED, $field(BasicScrollBarUI, scrollListener)},
	{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $field(BasicScrollBarUI, propertyChangeListener)},
	{"scrollTimer", "Ljavax/swing/Timer;", nullptr, $PROTECTED, $field(BasicScrollBarUI, scrollTimer)},
	{"scrollSpeedThrottle", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(BasicScrollBarUI, scrollSpeedThrottle)},
	{"supportsAbsolutePositioning", "Z", nullptr, $PRIVATE, $field(BasicScrollBarUI, supportsAbsolutePositioning)},
	{"scrollBarWidth", "I", nullptr, $PROTECTED, $field(BasicScrollBarUI, scrollBarWidth)},
	{"handler", "Ljavax/swing/plaf/basic/BasicScrollBarUI$Handler;", nullptr, $PRIVATE, $field(BasicScrollBarUI, handler)},
	{"thumbActive", "Z", nullptr, $PRIVATE, $field(BasicScrollBarUI, thumbActive)},
	{"useCachedValue", "Z", nullptr, $PRIVATE, $field(BasicScrollBarUI, useCachedValue)},
	{"scrollBarValue", "I", nullptr, $PRIVATE, $field(BasicScrollBarUI, scrollBarValue)},
	{"incrGap", "I", nullptr, $PROTECTED, $field(BasicScrollBarUI, incrGap)},
	{"decrGap", "I", nullptr, $PROTECTED, $field(BasicScrollBarUI, decrGap)},
	{}
};

$MethodInfo _BasicScrollBarUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicScrollBarUI::*)()>(&BasicScrollBarUI::init$))},
	{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"configureScrollBarColors", "()V", nullptr, $PROTECTED},
	{"createArrowButtonListener", "()Ljavax/swing/plaf/basic/BasicScrollBarUI$ArrowButtonListener;", nullptr, $PROTECTED},
	{"createDecreaseButton", "(I)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createIncreaseButton", "(I)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createModelListener", "()Ljavax/swing/plaf/basic/BasicScrollBarUI$ModelListener;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "()Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createScrollListener", "()Ljavax/swing/plaf/basic/BasicScrollBarUI$ScrollListener;", nullptr, $PROTECTED},
	{"createTrackListener", "()Ljavax/swing/plaf/basic/BasicScrollBarUI$TrackListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicScrollBarUI::createUI))},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicScrollBarUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicScrollBarUI$Handler*(BasicScrollBarUI::*)()>(&BasicScrollBarUI::getHandler))},
	{"getInputMap", "(I)Ljavax/swing/InputMap;", nullptr, $PRIVATE, $method(static_cast<$InputMap*(BasicScrollBarUI::*)(int32_t)>(&BasicScrollBarUI::getInputMap))},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMaximumThumbSize", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getMinimumThumbSize", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSupportsAbsolutePositioning", "()Z", nullptr, $PUBLIC},
	{"getThumbBounds", "()Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"getTrackBounds", "()Ljava/awt/Rectangle;", nullptr, $PROTECTED},
	{"getValue", "(Ljavax/swing/JScrollBar;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicScrollBarUI::*)($JScrollBar*)>(&BasicScrollBarUI::getValue))},
	{"installComponents", "()V", nullptr, $PROTECTED},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installKeyboardActions", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isMouseAfterThumb", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicScrollBarUI::*)()>(&BasicScrollBarUI::isMouseAfterThumb))},
	{"isMouseBeforeThumb", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicScrollBarUI::*)()>(&BasicScrollBarUI::isMouseBeforeThumb))},
	{"isMouseLeftOfThumb", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicScrollBarUI::*)()>(&BasicScrollBarUI::isMouseLeftOfThumb))},
	{"isMouseRightOfThumb", "()Z", nullptr, $PRIVATE, $method(static_cast<bool(BasicScrollBarUI::*)()>(&BasicScrollBarUI::isMouseRightOfThumb))},
	{"isThumbRollover", "()Z", nullptr, $PUBLIC},
	{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC},
	{"layoutHScrollbar", "(Ljavax/swing/JScrollBar;)V", nullptr, $PROTECTED},
	{"layoutVScrollbar", "(Ljavax/swing/JScrollBar;)V", nullptr, $PROTECTED},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicScrollBarUI::loadActionMap))},
	{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintDecreaseHighlight", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintIncreaseHighlight", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintThumb", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintTrack", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC},
	{"scrollByBlock", "(Ljavax/swing/JScrollBar;I)V", nullptr, $STATIC, $method(static_cast<void(*)($JScrollBar*,int32_t)>(&BasicScrollBarUI::scrollByBlock))},
	{"scrollByBlock", "(I)V", nullptr, $PROTECTED},
	{"scrollByUnit", "(I)V", nullptr, $PROTECTED},
	{"scrollByUnits", "(Ljavax/swing/JScrollBar;IIZ)V", nullptr, $STATIC, $method(static_cast<void(*)($JScrollBar*,int32_t,int32_t,bool)>(&BasicScrollBarUI::scrollByUnits))},
	{"setDragging", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(BasicScrollBarUI::*)(bool)>(&BasicScrollBarUI::setDragging))},
	{"setThumbBounds", "(IIII)V", nullptr, $PROTECTED},
	{"setThumbRollover", "(Z)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallComponents", "()V", nullptr, $PROTECTED},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateButtonDirections", "()V", nullptr, $PRIVATE, $method(static_cast<void(BasicScrollBarUI::*)()>(&BasicScrollBarUI::updateButtonDirections))},
	{"updateThumbState", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(BasicScrollBarUI::*)(int32_t,int32_t)>(&BasicScrollBarUI::updateThumbState))},
	{}
};

$InnerClassInfo _BasicScrollBarUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicScrollBarUI$Handler", "javax.swing.plaf.basic.BasicScrollBarUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicScrollBarUI$Actions", "javax.swing.plaf.basic.BasicScrollBarUI", "Actions", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicScrollBarUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicScrollBarUI", "PropertyChangeHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicScrollBarUI$ScrollListener", "javax.swing.plaf.basic.BasicScrollBarUI", "ScrollListener", $PROTECTED},
	{"javax.swing.plaf.basic.BasicScrollBarUI$ArrowButtonListener", "javax.swing.plaf.basic.BasicScrollBarUI", "ArrowButtonListener", $PROTECTED},
	{"javax.swing.plaf.basic.BasicScrollBarUI$TrackListener", "javax.swing.plaf.basic.BasicScrollBarUI", "TrackListener", $PROTECTED},
	{"javax.swing.plaf.basic.BasicScrollBarUI$ModelListener", "javax.swing.plaf.basic.BasicScrollBarUI", "ModelListener", $PROTECTED},
	{}
};

$ClassInfo _BasicScrollBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicScrollBarUI",
	"javax.swing.plaf.ScrollBarUI",
	"java.awt.LayoutManager,javax.swing.SwingConstants",
	_BasicScrollBarUI_FieldInfo_,
	_BasicScrollBarUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicScrollBarUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicScrollBarUI$Handler,javax.swing.plaf.basic.BasicScrollBarUI$Actions,javax.swing.plaf.basic.BasicScrollBarUI$PropertyChangeHandler,javax.swing.plaf.basic.BasicScrollBarUI$ScrollListener,javax.swing.plaf.basic.BasicScrollBarUI$ArrowButtonListener,javax.swing.plaf.basic.BasicScrollBarUI$TrackListener,javax.swing.plaf.basic.BasicScrollBarUI$ModelListener"
};

$Object* allocate$BasicScrollBarUI($Class* clazz) {
	return $of($alloc(BasicScrollBarUI));
}

int32_t BasicScrollBarUI::hashCode() {
	 return this->$ScrollBarUI::hashCode();
}

bool BasicScrollBarUI::equals(Object$* arg0) {
	 return this->$ScrollBarUI::equals(arg0);
}

$Object* BasicScrollBarUI::clone() {
	 return this->$ScrollBarUI::clone();
}

$String* BasicScrollBarUI::toString() {
	 return this->$ScrollBarUI::toString();
}

void BasicScrollBarUI::finalize() {
	this->$ScrollBarUI::finalize();
}

bool BasicScrollBarUI::$assertionsDisabled = false;

void BasicScrollBarUI::init$() {
	$ScrollBarUI::init$();
	this->useCachedValue = false;
}

void BasicScrollBarUI::loadActionMap($LazyActionMap* map) {
	$init(BasicScrollBarUI);
	$useLocalCurrentObjectStackCache();
	$init($BasicScrollBarUI$Actions);
	$nc(map)->put($$new($BasicScrollBarUI$Actions, $BasicScrollBarUI$Actions::POSITIVE_UNIT_INCREMENT));
	map->put($$new($BasicScrollBarUI$Actions, $BasicScrollBarUI$Actions::POSITIVE_BLOCK_INCREMENT));
	map->put($$new($BasicScrollBarUI$Actions, $BasicScrollBarUI$Actions::NEGATIVE_UNIT_INCREMENT));
	map->put($$new($BasicScrollBarUI$Actions, $BasicScrollBarUI$Actions::NEGATIVE_BLOCK_INCREMENT));
	map->put($$new($BasicScrollBarUI$Actions, $BasicScrollBarUI$Actions::MIN_SCROLL));
	map->put($$new($BasicScrollBarUI$Actions, $BasicScrollBarUI$Actions::MAX_SCROLL));
}

$ComponentUI* BasicScrollBarUI::createUI($JComponent* c) {
	$init(BasicScrollBarUI);
	return $new(BasicScrollBarUI);
}

void BasicScrollBarUI::configureScrollBarColors() {
	$LookAndFeel::installColors(this->scrollbar, "ScrollBar.background"_s, "ScrollBar.foreground"_s);
	$set(this, thumbHighlightColor, $UIManager::getColor("ScrollBar.thumbHighlight"_s));
	$set(this, thumbLightShadowColor, $UIManager::getColor("ScrollBar.thumbShadow"_s));
	$set(this, thumbDarkShadowColor, $UIManager::getColor("ScrollBar.thumbDarkShadow"_s));
	$set(this, thumbColor, $UIManager::getColor("ScrollBar.thumb"_s));
	$set(this, trackColor, $UIManager::getColor("ScrollBar.track"_s));
	$set(this, trackHighlightColor, $UIManager::getColor("ScrollBar.trackHighlight"_s));
}

void BasicScrollBarUI::installUI($JComponent* c) {
	$set(this, scrollbar, $cast($JScrollBar, c));
	$set(this, thumbRect, $new($Rectangle, 0, 0, 0, 0));
	$set(this, trackRect, $new($Rectangle, 0, 0, 0, 0));
	installDefaults();
	installComponents();
	installListeners();
	installKeyboardActions();
}

void BasicScrollBarUI::uninstallUI($JComponent* c) {
	$set(this, scrollbar, $cast($JScrollBar, c));
	uninstallListeners();
	uninstallDefaults();
	uninstallComponents();
	uninstallKeyboardActions();
	$set(this, thumbRect, nullptr);
	$set(this, scrollbar, nullptr);
	$set(this, incrButton, nullptr);
	$set(this, decrButton, nullptr);
}

void BasicScrollBarUI::installDefaults() {
	$useLocalCurrentObjectStackCache();
	this->scrollBarWidth = $UIManager::getInt("ScrollBar.width"_s);
	if (this->scrollBarWidth <= 0) {
		this->scrollBarWidth = 16;
	}
	$set(this, minimumThumbSize, $cast($Dimension, $UIManager::get("ScrollBar.minimumThumbSize"_s)));
	$set(this, maximumThumbSize, $cast($Dimension, $UIManager::get("ScrollBar.maximumThumbSize"_s)));
	$var($Boolean, absB, $cast($Boolean, $UIManager::get("ScrollBar.allowsAbsolutePositioning"_s)));
	this->supportsAbsolutePositioning = (absB != nullptr) ? $nc(absB)->booleanValue() : false;
	this->trackHighlight = BasicScrollBarUI::NO_HIGHLIGHT;
	bool var$0 = $nc(this->scrollbar)->getLayout() == nullptr;
	if (var$0 || ($instanceOf($UIResource, $($nc(this->scrollbar)->getLayout())))) {
		$nc(this->scrollbar)->setLayout(this);
	}
	configureScrollBarColors();
	$LookAndFeel::installBorder(this->scrollbar, "ScrollBar.border"_s);
	$LookAndFeel::installProperty(this->scrollbar, "opaque"_s, $Boolean::TRUE);
	this->scrollBarValue = $nc(this->scrollbar)->getValue();
	this->incrGap = $UIManager::getInt("ScrollBar.incrementButtonGap"_s);
	this->decrGap = $UIManager::getInt("ScrollBar.decrementButtonGap"_s);
	$var($String, scaleKey, $cast($String, $nc(this->scrollbar)->getClientProperty("JComponent.sizeVariant"_s)));
	if (scaleKey != nullptr) {
		if ("large"_s->equals(scaleKey)) {
			this->scrollBarWidth *= 1.15;
			this->incrGap *= 1.15;
			this->decrGap *= 1.15;
		} else if ("small"_s->equals(scaleKey)) {
			this->scrollBarWidth *= 0.857;
			this->incrGap *= 0.857;
			this->decrGap *= 0.857;
		} else if ("mini"_s->equals(scaleKey)) {
			this->scrollBarWidth *= 0.714;
			this->incrGap *= 0.714;
			this->decrGap *= 0.714;
		}
	}
}

void BasicScrollBarUI::installComponents() {
	switch ($nc(this->scrollbar)->getOrientation()) {
	case $JScrollBar::VERTICAL:
		{
			$set(this, incrButton, createIncreaseButton($SwingConstants::SOUTH));
			$set(this, decrButton, createDecreaseButton($SwingConstants::NORTH));
			break;
		}
	case $JScrollBar::HORIZONTAL:
		{
			if ($nc($($nc(this->scrollbar)->getComponentOrientation()))->isLeftToRight()) {
				$set(this, incrButton, createIncreaseButton($SwingConstants::EAST));
				$set(this, decrButton, createDecreaseButton($SwingConstants::WEST));
			} else {
				$set(this, incrButton, createIncreaseButton($SwingConstants::WEST));
				$set(this, decrButton, createDecreaseButton($SwingConstants::EAST));
			}
			break;
		}
	}
	$nc(this->scrollbar)->add(static_cast<$Component*>(this->incrButton));
	$nc(this->scrollbar)->add(static_cast<$Component*>(this->decrButton));
	$nc(this->scrollbar)->setEnabled($nc(this->scrollbar)->isEnabled());
}

void BasicScrollBarUI::uninstallComponents() {
	$nc(this->scrollbar)->remove(static_cast<$Component*>(this->incrButton));
	$nc(this->scrollbar)->remove(static_cast<$Component*>(this->decrButton));
}

void BasicScrollBarUI::installListeners() {
	$useLocalCurrentObjectStackCache();
	$set(this, trackListener, createTrackListener());
	$set(this, buttonListener, createArrowButtonListener());
	$set(this, modelListener, createModelListener());
	$set(this, propertyChangeListener, createPropertyChangeListener());
	$nc(this->scrollbar)->addMouseListener(this->trackListener);
	$nc(this->scrollbar)->addMouseMotionListener(this->trackListener);
	$nc($($nc(this->scrollbar)->getModel()))->addChangeListener(this->modelListener);
	$nc(this->scrollbar)->addPropertyChangeListener(this->propertyChangeListener);
	$nc(this->scrollbar)->addFocusListener($(getHandler()));
	if (this->incrButton != nullptr) {
		$nc(this->incrButton)->addMouseListener(this->buttonListener);
	}
	if (this->decrButton != nullptr) {
		$nc(this->decrButton)->addMouseListener(this->buttonListener);
	}
	$set(this, scrollListener, createScrollListener());
	$set(this, scrollTimer, $new($Timer, BasicScrollBarUI::scrollSpeedThrottle, this->scrollListener));
	$nc(this->scrollTimer)->setInitialDelay(300);
}

void BasicScrollBarUI::installKeyboardActions() {
	$LazyActionMap::installLazyActionMap(this->scrollbar, BasicScrollBarUI::class$, "ScrollBar.actionMap"_s);
	$var($InputMap, inputMap, getInputMap($JComponent::WHEN_FOCUSED));
	$SwingUtilities::replaceUIInputMap(this->scrollbar, $JComponent::WHEN_FOCUSED, inputMap);
	$assign(inputMap, getInputMap($JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT));
	$SwingUtilities::replaceUIInputMap(this->scrollbar, $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT, inputMap);
}

void BasicScrollBarUI::uninstallKeyboardActions() {
	$SwingUtilities::replaceUIInputMap(this->scrollbar, $JComponent::WHEN_FOCUSED, nullptr);
	$SwingUtilities::replaceUIActionMap(this->scrollbar, nullptr);
}

$InputMap* BasicScrollBarUI::getInputMap(int32_t condition) {
	$useLocalCurrentObjectStackCache();
	if (condition == $JComponent::WHEN_FOCUSED) {
		$var($InputMap, keyMap, $cast($InputMap, $DefaultLookup::get(this->scrollbar, this, "ScrollBar.focusInputMap"_s)));
		$var($InputMap, rtlKeyMap, nullptr);
		bool var$0 = $nc($($nc(this->scrollbar)->getComponentOrientation()))->isLeftToRight();
		if (var$0 || (($assign(rtlKeyMap, $cast($InputMap, $DefaultLookup::get(this->scrollbar, this, "ScrollBar.focusInputMap.RightToLeft"_s)))) == nullptr)) {
			return keyMap;
		} else {
			$nc(rtlKeyMap)->setParent(keyMap);
			return rtlKeyMap;
		}
	} else if (condition == $JComponent::WHEN_ANCESTOR_OF_FOCUSED_COMPONENT) {
		$var($InputMap, keyMap, $cast($InputMap, $DefaultLookup::get(this->scrollbar, this, "ScrollBar.ancestorInputMap"_s)));
		$var($InputMap, rtlKeyMap, nullptr);
		bool var$1 = $nc($($nc(this->scrollbar)->getComponentOrientation()))->isLeftToRight();
		if (var$1 || (($assign(rtlKeyMap, $cast($InputMap, $DefaultLookup::get(this->scrollbar, this, "ScrollBar.ancestorInputMap.RightToLeft"_s)))) == nullptr)) {
			return keyMap;
		} else {
			$nc(rtlKeyMap)->setParent(keyMap);
			return rtlKeyMap;
		}
	}
	return nullptr;
}

void BasicScrollBarUI::uninstallListeners() {
	$useLocalCurrentObjectStackCache();
	$nc(this->scrollTimer)->stop();
	$set(this, scrollTimer, nullptr);
	if (this->decrButton != nullptr) {
		$nc(this->decrButton)->removeMouseListener(this->buttonListener);
	}
	if (this->incrButton != nullptr) {
		$nc(this->incrButton)->removeMouseListener(this->buttonListener);
	}
	$nc($($nc(this->scrollbar)->getModel()))->removeChangeListener(this->modelListener);
	$nc(this->scrollbar)->removeMouseListener(this->trackListener);
	$nc(this->scrollbar)->removeMouseMotionListener(this->trackListener);
	$nc(this->scrollbar)->removePropertyChangeListener(this->propertyChangeListener);
	$nc(this->scrollbar)->removeFocusListener($(getHandler()));
	$set(this, handler, nullptr);
}

void BasicScrollBarUI::uninstallDefaults() {
	$LookAndFeel::uninstallBorder(this->scrollbar);
	if ($equals($nc(this->scrollbar)->getLayout(), this)) {
		$nc(this->scrollbar)->setLayout(nullptr);
	}
}

$BasicScrollBarUI$Handler* BasicScrollBarUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicScrollBarUI$Handler, this));
	}
	return this->handler;
}

$BasicScrollBarUI$TrackListener* BasicScrollBarUI::createTrackListener() {
	return $new($BasicScrollBarUI$TrackListener, this);
}

$BasicScrollBarUI$ArrowButtonListener* BasicScrollBarUI::createArrowButtonListener() {
	return $new($BasicScrollBarUI$ArrowButtonListener, this);
}

$BasicScrollBarUI$ModelListener* BasicScrollBarUI::createModelListener() {
	return $new($BasicScrollBarUI$ModelListener, this);
}

$BasicScrollBarUI$ScrollListener* BasicScrollBarUI::createScrollListener() {
	return $new($BasicScrollBarUI$ScrollListener, this);
}

$PropertyChangeListener* BasicScrollBarUI::createPropertyChangeListener() {
	return getHandler();
}

void BasicScrollBarUI::updateThumbState(int32_t x, int32_t y) {
	$var($Rectangle, rect, getThumbBounds());
	setThumbRollover($nc(rect)->contains(x, y));
}

void BasicScrollBarUI::setThumbRollover(bool active) {
	if (this->thumbActive != active) {
		this->thumbActive = active;
		$nc(this->scrollbar)->repaint($(getThumbBounds()));
	}
}

bool BasicScrollBarUI::isThumbRollover() {
	return this->thumbActive;
}

void BasicScrollBarUI::paint($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	paintTrack(g, c, $(getTrackBounds()));
	$var($Rectangle, thumbBounds, getThumbBounds());
	if ($nc(thumbBounds)->intersects($($nc(g)->getClipBounds()))) {
		paintThumb(g, c, thumbBounds);
	}
}

$Dimension* BasicScrollBarUI::getPreferredSize($JComponent* c) {
	return ($nc(this->scrollbar)->getOrientation() == $JScrollBar::VERTICAL) ? $new($Dimension, this->scrollBarWidth, 48) : $new($Dimension, 48, this->scrollBarWidth);
}

$Dimension* BasicScrollBarUI::getMaximumSize($JComponent* c) {
	return $new($Dimension, $Integer::MAX_VALUE, $Integer::MAX_VALUE);
}

$JButton* BasicScrollBarUI::createDecreaseButton(int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = orientation;
	$var($Color, var$1, $UIManager::getColor("ScrollBar.thumb"_s));
	$var($Color, var$2, $UIManager::getColor("ScrollBar.thumbShadow"_s));
	$var($Color, var$3, $UIManager::getColor("ScrollBar.thumbDarkShadow"_s));
	return $new($BasicArrowButton, var$0, var$1, var$2, var$3, $($UIManager::getColor("ScrollBar.thumbHighlight"_s)));
}

$JButton* BasicScrollBarUI::createIncreaseButton(int32_t orientation) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = orientation;
	$var($Color, var$1, $UIManager::getColor("ScrollBar.thumb"_s));
	$var($Color, var$2, $UIManager::getColor("ScrollBar.thumbShadow"_s));
	$var($Color, var$3, $UIManager::getColor("ScrollBar.thumbDarkShadow"_s));
	return $new($BasicArrowButton, var$0, var$1, var$2, var$3, $($UIManager::getColor("ScrollBar.thumbHighlight"_s)));
}

void BasicScrollBarUI::paintDecreaseHighlight($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, $nc(this->scrollbar)->getInsets());
	$var($Rectangle, thumbR, getThumbBounds());
	$nc(g)->setColor(this->trackHighlightColor);
	if ($nc(this->scrollbar)->getOrientation() == $JScrollBar::VERTICAL) {
		int32_t x = $nc(insets)->left;
		int32_t y = $nc(this->trackRect)->y;
		int32_t w = $nc(this->scrollbar)->getWidth() - (insets->left + insets->right);
		int32_t h = $nc(thumbR)->y - y;
		g->fillRect(x, y, w, h);
	} else {
		int32_t x = 0;
		int32_t w = 0;
		if ($nc($($nc(this->scrollbar)->getComponentOrientation()))->isLeftToRight()) {
			x = $nc(this->trackRect)->x;
			w = $nc(thumbR)->x - x;
		} else {
			x = $nc(thumbR)->x + thumbR->width;
			w = $nc(this->trackRect)->x + $nc(this->trackRect)->width - x;
		}
		int32_t y = $nc(insets)->top;
		int32_t h = $nc(this->scrollbar)->getHeight() - (insets->top + insets->bottom);
		g->fillRect(x, y, w, h);
	}
}

void BasicScrollBarUI::paintIncreaseHighlight($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Insets, insets, $nc(this->scrollbar)->getInsets());
	$var($Rectangle, thumbR, getThumbBounds());
	$nc(g)->setColor(this->trackHighlightColor);
	if ($nc(this->scrollbar)->getOrientation() == $JScrollBar::VERTICAL) {
		int32_t x = $nc(insets)->left;
		int32_t y = $nc(thumbR)->y + thumbR->height;
		int32_t w = $nc(this->scrollbar)->getWidth() - (insets->left + insets->right);
		int32_t h = $nc(this->trackRect)->y + $nc(this->trackRect)->height - y;
		g->fillRect(x, y, w, h);
	} else {
		int32_t x = 0;
		int32_t w = 0;
		if ($nc($($nc(this->scrollbar)->getComponentOrientation()))->isLeftToRight()) {
			x = $nc(thumbR)->x + thumbR->width;
			w = $nc(this->trackRect)->x + $nc(this->trackRect)->width - x;
		} else {
			x = $nc(this->trackRect)->x;
			w = $nc(thumbR)->x - x;
		}
		int32_t y = $nc(insets)->top;
		int32_t h = $nc(this->scrollbar)->getHeight() - (insets->top + insets->bottom);
		g->fillRect(x, y, w, h);
	}
}

void BasicScrollBarUI::paintTrack($Graphics* g, $JComponent* c, $Rectangle* trackBounds) {
	$nc(g)->setColor(this->trackColor);
	g->fillRect($nc(trackBounds)->x, trackBounds->y, trackBounds->width, trackBounds->height);
	if (this->trackHighlight == BasicScrollBarUI::DECREASE_HIGHLIGHT) {
		paintDecreaseHighlight(g);
	} else if (this->trackHighlight == BasicScrollBarUI::INCREASE_HIGHLIGHT) {
		paintIncreaseHighlight(g);
	}
}

void BasicScrollBarUI::paintThumb($Graphics* g, $JComponent* c, $Rectangle* thumbBounds) {
	bool var$0 = $nc(thumbBounds)->isEmpty();
	if (var$0 || !$nc(this->scrollbar)->isEnabled()) {
		return;
	}
	int32_t w = $nc(thumbBounds)->width;
	int32_t h = thumbBounds->height;
	$nc(g)->translate(thumbBounds->x, thumbBounds->y);
	g->setColor(this->thumbDarkShadowColor);
	$SwingUtilities2::drawRect(g, 0, 0, w - 1, h - 1);
	g->setColor(this->thumbColor);
	g->fillRect(0, 0, w - 1, h - 1);
	g->setColor(this->thumbHighlightColor);
	$SwingUtilities2::drawVLine(g, 1, 1, h - 2);
	$SwingUtilities2::drawHLine(g, 2, w - 3, 1);
	g->setColor(this->thumbLightShadowColor);
	$SwingUtilities2::drawHLine(g, 2, w - 2, h - 2);
	$SwingUtilities2::drawVLine(g, w - 2, 1, h - 3);
	g->translate(-thumbBounds->x, -thumbBounds->y);
}

$Dimension* BasicScrollBarUI::getMinimumThumbSize() {
	return this->minimumThumbSize;
}

$Dimension* BasicScrollBarUI::getMaximumThumbSize() {
	return this->maximumThumbSize;
}

void BasicScrollBarUI::addLayoutComponent($String* name, $Component* child) {
}

void BasicScrollBarUI::removeLayoutComponent($Component* child) {
}

$Dimension* BasicScrollBarUI::preferredLayoutSize($Container* scrollbarContainer) {
	return getPreferredSize($cast($JComponent, scrollbarContainer));
}

$Dimension* BasicScrollBarUI::minimumLayoutSize($Container* scrollbarContainer) {
	return getMinimumSize($cast($JComponent, scrollbarContainer));
}

int32_t BasicScrollBarUI::getValue($JScrollBar* sb) {
	return (this->useCachedValue) ? this->scrollBarValue : $nc(sb)->getValue();
}

void BasicScrollBarUI::layoutVScrollbar($JScrollBar* sb) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, sbSize, $nc(sb)->getSize());
	$var($Insets, sbInsets, sb->getInsets());
	int32_t itemW = $nc(sbSize)->width - ($nc(sbInsets)->left + sbInsets->right);
	int32_t itemX = sbInsets->left;
	bool squareButtons = $DefaultLookup::getBoolean(this->scrollbar, this, "ScrollBar.squareButtons"_s, false);
	int32_t decrButtonH = squareButtons ? itemW : $nc($($nc(this->decrButton)->getPreferredSize()))->height;
	int32_t decrButtonY = sbInsets->top;
	int32_t incrButtonH = squareButtons ? itemW : $nc($($nc(this->incrButton)->getPreferredSize()))->height;
	int32_t incrButtonY = sbSize->height - (sbInsets->bottom + incrButtonH);
	int32_t sbInsetsH = sbInsets->top + sbInsets->bottom;
	int32_t sbButtonsH = decrButtonH + incrButtonH;
	int32_t gaps = this->decrGap + this->incrGap;
	float trackH = (float)(sbSize->height - (sbInsetsH + sbButtonsH) - gaps);
	float min = (float)sb->getMinimum();
	float extent = (float)sb->getVisibleAmount();
	float range = sb->getMaximum() - min;
	float value = (float)getValue(sb);
	int32_t thumbH = (range <= 0) ? $nc($(getMaximumThumbSize()))->height : $cast(int32_t, (trackH * (extent / range)));
	thumbH = $Math::max(thumbH, $nc($(getMinimumThumbSize()))->height);
	thumbH = $Math::min(thumbH, $nc($(getMaximumThumbSize()))->height);
	int32_t thumbY = incrButtonY - this->incrGap - thumbH;
	float var$0 = value;
	int32_t var$2 = sb->getMaximum();
	int32_t var$1 = (var$2 - sb->getVisibleAmount());
	if (var$0 < var$1) {
		float thumbRange = trackH - thumbH;
		thumbY = $cast(int32_t, (0.5f + (thumbRange * ((value - min) / (range - extent)))));
		thumbY += decrButtonY + decrButtonH + this->decrGap;
	}
	int32_t sbAvailButtonH = (sbSize->height - sbInsetsH);
	if (sbAvailButtonH < sbButtonsH) {
		incrButtonH = (decrButtonH = sbAvailButtonH / 2);
		incrButtonY = sbSize->height - (sbInsets->bottom + incrButtonH);
	}
	$nc(this->decrButton)->setBounds(itemX, decrButtonY, itemW, decrButtonH);
	$nc(this->incrButton)->setBounds(itemX, incrButtonY, itemW, incrButtonH);
	int32_t itrackY = decrButtonY + decrButtonH + this->decrGap;
	int32_t itrackH = incrButtonY - this->incrGap - itrackY;
	$nc(this->trackRect)->setBounds(itemX, itrackY, itemW, itrackH);
	if (thumbH >= $cast(int32_t, trackH)) {
		if ($UIManager::getBoolean("ScrollBar.alwaysShowThumb"_s)) {
			setThumbBounds(itemX, itrackY, itemW, itrackH);
		} else {
			setThumbBounds(0, 0, 0, 0);
		}
	} else {
		if ((thumbY + thumbH) > incrButtonY - this->incrGap) {
			thumbY = incrButtonY - this->incrGap - thumbH;
		}
		if (thumbY < (decrButtonY + decrButtonH + this->decrGap)) {
			thumbY = decrButtonY + decrButtonH + this->decrGap + 1;
		}
		setThumbBounds(itemX, thumbY, itemW, thumbH);
	}
}

void BasicScrollBarUI::layoutHScrollbar($JScrollBar* sb) {
	$useLocalCurrentObjectStackCache();
	$var($Dimension, sbSize, $nc(sb)->getSize());
	$var($Insets, sbInsets, sb->getInsets());
	int32_t itemH = $nc(sbSize)->height - ($nc(sbInsets)->top + sbInsets->bottom);
	int32_t itemY = sbInsets->top;
	bool ltr = $nc($(sb->getComponentOrientation()))->isLeftToRight();
	bool squareButtons = $DefaultLookup::getBoolean(this->scrollbar, this, "ScrollBar.squareButtons"_s, false);
	int32_t leftButtonW = squareButtons ? itemH : $nc($($nc(this->decrButton)->getPreferredSize()))->width;
	int32_t rightButtonW = squareButtons ? itemH : $nc($($nc(this->incrButton)->getPreferredSize()))->width;
	if (!ltr) {
		int32_t temp = leftButtonW;
		leftButtonW = rightButtonW;
		rightButtonW = temp;
	}
	int32_t leftButtonX = sbInsets->left;
	int32_t rightButtonX = sbSize->width - (sbInsets->right + rightButtonW);
	int32_t leftGap = ltr ? this->decrGap : this->incrGap;
	int32_t rightGap = ltr ? this->incrGap : this->decrGap;
	int32_t sbInsetsW = sbInsets->left + sbInsets->right;
	int32_t sbButtonsW = leftButtonW + rightButtonW;
	float trackW = (float)(sbSize->width - (sbInsetsW + sbButtonsW) - (leftGap + rightGap));
	float min = (float)sb->getMinimum();
	float max = (float)sb->getMaximum();
	float extent = (float)sb->getVisibleAmount();
	float range = max - min;
	float value = (float)getValue(sb);
	int32_t thumbW = (range <= 0) ? $nc($(getMaximumThumbSize()))->width : $cast(int32_t, (trackW * (extent / range)));
	thumbW = $Math::max(thumbW, $nc($(getMinimumThumbSize()))->width);
	thumbW = $Math::min(thumbW, $nc($(getMaximumThumbSize()))->width);
	int32_t thumbX = ltr ? rightButtonX - rightGap - thumbW : leftButtonX + leftButtonW + leftGap;
	if (value < (max - sb->getVisibleAmount())) {
		float thumbRange = trackW - thumbW;
		if (ltr) {
			thumbX = $cast(int32_t, (0.5f + (thumbRange * ((value - min) / (range - extent)))));
		} else {
			thumbX = $cast(int32_t, (0.5f + (thumbRange * ((max - extent - value) / (range - extent)))));
		}
		thumbX += leftButtonX + leftButtonW + leftGap;
	}
	int32_t sbAvailButtonW = (sbSize->width - sbInsetsW);
	if (sbAvailButtonW < sbButtonsW) {
		rightButtonW = (leftButtonW = sbAvailButtonW / 2);
		rightButtonX = sbSize->width - (sbInsets->right + rightButtonW + rightGap);
	}
	$nc((ltr ? this->decrButton : this->incrButton))->setBounds(leftButtonX, itemY, leftButtonW, itemH);
	$nc((ltr ? this->incrButton : this->decrButton))->setBounds(rightButtonX, itemY, rightButtonW, itemH);
	int32_t itrackX = leftButtonX + leftButtonW + leftGap;
	int32_t itrackW = rightButtonX - rightGap - itrackX;
	$nc(this->trackRect)->setBounds(itrackX, itemY, itrackW, itemH);
	if (thumbW >= $cast(int32_t, trackW)) {
		if ($UIManager::getBoolean("ScrollBar.alwaysShowThumb"_s)) {
			setThumbBounds(itrackX, itemY, itrackW, itemH);
		} else {
			setThumbBounds(0, 0, 0, 0);
		}
	} else {
		if (thumbX + thumbW > rightButtonX - rightGap) {
			thumbX = rightButtonX - rightGap - thumbW;
		}
		if (thumbX < leftButtonX + leftButtonW + leftGap) {
			thumbX = leftButtonX + leftButtonW + leftGap + 1;
		}
		setThumbBounds(thumbX, itemY, thumbW, itemH);
	}
}

void BasicScrollBarUI::layoutContainer($Container* scrollbarContainer) {
	if (this->isDragging) {
		return;
	}
	$var($JScrollBar, scrollbar, $cast($JScrollBar, scrollbarContainer));
	switch ($nc(scrollbar)->getOrientation()) {
	case $JScrollBar::VERTICAL:
		{
			layoutVScrollbar(scrollbar);
			break;
		}
	case $JScrollBar::HORIZONTAL:
		{
			layoutHScrollbar(scrollbar);
			break;
		}
	}
}

void BasicScrollBarUI::setThumbBounds(int32_t x, int32_t y, int32_t width, int32_t height) {
	if (($nc(this->thumbRect)->x == x) && ($nc(this->thumbRect)->y == y) && ($nc(this->thumbRect)->width == width) && ($nc(this->thumbRect)->height == height)) {
		return;
	}
	int32_t minX = $Math::min(x, $nc(this->thumbRect)->x);
	int32_t minY = $Math::min(y, $nc(this->thumbRect)->y);
	int32_t maxX = $Math::max(x + width, $nc(this->thumbRect)->x + $nc(this->thumbRect)->width);
	int32_t maxY = $Math::max(y + height, $nc(this->thumbRect)->y + $nc(this->thumbRect)->height);
	$nc(this->thumbRect)->setBounds(x, y, width, height);
	$nc(this->scrollbar)->repaint(minX, minY, maxX - minX, maxY - minY);
	setThumbRollover(false);
}

$Rectangle* BasicScrollBarUI::getThumbBounds() {
	return this->thumbRect;
}

$Rectangle* BasicScrollBarUI::getTrackBounds() {
	return this->trackRect;
}

void BasicScrollBarUI::scrollByBlock($JScrollBar* scrollbar, int32_t direction) {
	$init(BasicScrollBarUI);
	int32_t oldValue = $nc(scrollbar)->getValue();
	int32_t blockIncrement = scrollbar->getBlockIncrement(direction);
	int32_t delta = blockIncrement * ((direction > 0) ? +1 : -1);
	int32_t newValue = oldValue + delta;
	if (delta > 0 && newValue < oldValue) {
		newValue = scrollbar->getMaximum();
	} else if (delta < 0 && newValue > oldValue) {
		newValue = scrollbar->getMinimum();
	}
	scrollbar->setValue(newValue);
}

void BasicScrollBarUI::scrollByBlock(int32_t direction) {
	scrollByBlock(this->scrollbar, direction);
	this->trackHighlight = direction > 0 ? BasicScrollBarUI::INCREASE_HIGHLIGHT : BasicScrollBarUI::DECREASE_HIGHLIGHT;
	$var($Rectangle, dirtyRect, getTrackBounds());
	$nc(this->scrollbar)->repaint($nc(dirtyRect)->x, dirtyRect->y, dirtyRect->width, dirtyRect->height);
}

void BasicScrollBarUI::scrollByUnits($JScrollBar* scrollbar, int32_t direction, int32_t units, bool limitToBlock) {
	$init(BasicScrollBarUI);
	int32_t delta = 0;
	int32_t limit = -1;
	if (limitToBlock) {
		if (direction < 0) {
			int32_t var$0 = $nc(scrollbar)->getValue();
			limit = var$0 - scrollbar->getBlockIncrement(direction);
		} else {
			int32_t var$1 = $nc(scrollbar)->getValue();
			limit = var$1 + scrollbar->getBlockIncrement(direction);
		}
	}
	for (int32_t i = 0; i < units; ++i) {
		if (direction > 0) {
			delta = $nc(scrollbar)->getUnitIncrement(direction);
		} else {
			delta = -$nc(scrollbar)->getUnitIncrement(direction);
		}
		int32_t oldValue = $nc(scrollbar)->getValue();
		int32_t newValue = oldValue + delta;
		if (delta > 0 && newValue < oldValue) {
			newValue = scrollbar->getMaximum();
		} else if (delta < 0 && newValue > oldValue) {
			newValue = scrollbar->getMinimum();
		}
		if (oldValue == newValue) {
			break;
		}
		if (limitToBlock && i > 0) {
			if (!BasicScrollBarUI::$assertionsDisabled && !(limit != -1)) {
				$throwNew($AssertionError);
			}
			if ((direction < 0 && newValue < limit) || (direction > 0 && newValue > limit)) {
				break;
			}
		}
		scrollbar->setValue(newValue);
	}
}

void BasicScrollBarUI::scrollByUnit(int32_t direction) {
	scrollByUnits(this->scrollbar, direction, 1, false);
}

bool BasicScrollBarUI::getSupportsAbsolutePositioning() {
	return this->supportsAbsolutePositioning;
}

bool BasicScrollBarUI::isMouseLeftOfThumb() {
	return $nc(this->trackListener)->currentMouseX < $nc($(getThumbBounds()))->x;
}

bool BasicScrollBarUI::isMouseRightOfThumb() {
	$var($Rectangle, tb, getThumbBounds());
	return $nc(this->trackListener)->currentMouseX > $nc(tb)->x + tb->width;
}

bool BasicScrollBarUI::isMouseBeforeThumb() {
	return $nc($($nc(this->scrollbar)->getComponentOrientation()))->isLeftToRight() ? isMouseLeftOfThumb() : isMouseRightOfThumb();
}

bool BasicScrollBarUI::isMouseAfterThumb() {
	return $nc($($nc(this->scrollbar)->getComponentOrientation()))->isLeftToRight() ? isMouseRightOfThumb() : isMouseLeftOfThumb();
}

void BasicScrollBarUI::updateButtonDirections() {
	int32_t orient = $nc(this->scrollbar)->getOrientation();
	if ($nc($($nc(this->scrollbar)->getComponentOrientation()))->isLeftToRight()) {
		if ($instanceOf($BasicArrowButton, this->incrButton)) {
			$nc(($cast($BasicArrowButton, this->incrButton)))->setDirection(orient == $SwingConstants::HORIZONTAL ? $SwingConstants::EAST : $SwingConstants::SOUTH);
		}
		if ($instanceOf($BasicArrowButton, this->decrButton)) {
			$nc(($cast($BasicArrowButton, this->decrButton)))->setDirection(orient == $SwingConstants::HORIZONTAL ? $SwingConstants::WEST : $SwingConstants::NORTH);
		}
	} else {
		if ($instanceOf($BasicArrowButton, this->incrButton)) {
			$nc(($cast($BasicArrowButton, this->incrButton)))->setDirection(orient == $SwingConstants::HORIZONTAL ? $SwingConstants::WEST : $SwingConstants::SOUTH);
		}
		if ($instanceOf($BasicArrowButton, this->decrButton)) {
			$nc(($cast($BasicArrowButton, this->decrButton)))->setDirection(orient == $SwingConstants::HORIZONTAL ? $SwingConstants::EAST : $SwingConstants::NORTH);
		}
	}
}

void BasicScrollBarUI::setDragging(bool dragging) {
	this->isDragging = dragging;
	$nc(this->scrollbar)->repaint($(getThumbBounds()));
}

void clinit$BasicScrollBarUI($Class* class$) {
	BasicScrollBarUI::$assertionsDisabled = !BasicScrollBarUI::class$->desiredAssertionStatus();
}

BasicScrollBarUI::BasicScrollBarUI() {
}

$Class* BasicScrollBarUI::load$($String* name, bool initialize) {
	$loadClass(BasicScrollBarUI, name, initialize, &_BasicScrollBarUI_ClassInfo_, clinit$BasicScrollBarUI, allocate$BasicScrollBarUI);
	return class$;
}

$Class* BasicScrollBarUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax