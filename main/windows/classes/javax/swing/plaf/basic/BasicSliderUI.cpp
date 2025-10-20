#include <javax/swing/plaf/basic/BasicSliderUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component$BaselineResizeBehavior.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/IllegalComponentStateException.h>
#include <java/awt/Image.h>
#include <java/awt/Insets.h>
#include <java/awt/Polygon.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Shape.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/ActionListener.h>
#include <java/awt/event/ComponentListener.h>
#include <java/awt/event/FocusListener.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseListener.h>
#include <java/awt/event/MouseMotionListener.h>
#include <java/awt/geom/Rectangle2D.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/awt/image/ImageObserver.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Dictionary.h>
#include <java/util/Enumeration.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/BoundedRangeModel.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/event/ChangeListener.h>
#include <javax/swing/event/MouseInputAdapter.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/InsetsUIResource.h>
#include <javax/swing/plaf/SliderUI.h>
#include <javax/swing/plaf/basic/BasicGraphicsUtils.h>
#include <javax/swing/plaf/basic/BasicSliderUI$Actions.h>
#include <javax/swing/plaf/basic/BasicSliderUI$Handler.h>
#include <javax/swing/plaf/basic/BasicSliderUI$ScrollListener.h>
#include <javax/swing/plaf/basic/BasicSliderUI$TrackListener.h>
#include <javax/swing/plaf/basic/LazyActionMap.h>
#include <sun/swing/DefaultLookup.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef FALSE
#undef HORIZONTAL
#undef MAX_SCROLL
#undef MAX_SCROLL_INCREMENT
#undef MAX_VALUE
#undef MIN_SCROLL
#undef MIN_SCROLL_INCREMENT
#undef NEGATIVE_BLOCK_INCREMENT
#undef NEGATIVE_SCROLL
#undef NEGATIVE_UNIT_INCREMENT
#undef OTHER
#undef POSITIVE_BLOCK_INCREMENT
#undef POSITIVE_SCROLL
#undef POSITIVE_UNIT_INCREMENT
#undef SHARED_ACTION
#undef TRUE
#undef VERTICAL
#undef WHEN_FOCUSED

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Component$BaselineResizeBehavior = ::java::awt::Component$BaselineResizeBehavior;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $IllegalComponentStateException = ::java::awt::IllegalComponentStateException;
using $Image = ::java::awt::Image;
using $Insets = ::java::awt::Insets;
using $Polygon = ::java::awt::Polygon;
using $Rectangle = ::java::awt::Rectangle;
using $Shape = ::java::awt::Shape;
using $Toolkit = ::java::awt::Toolkit;
using $ActionListener = ::java::awt::event::ActionListener;
using $ComponentListener = ::java::awt::event::ComponentListener;
using $FocusListener = ::java::awt::event::FocusListener;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseListener = ::java::awt::event::MouseListener;
using $MouseMotionListener = ::java::awt::event::MouseMotionListener;
using $Rectangle2D = ::java::awt::geom::Rectangle2D;
using $RectangularShape = ::java::awt::geom::RectangularShape;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $Dictionary = ::java::util::Dictionary;
using $Enumeration = ::java::util::Enumeration;
using $Action = ::javax::swing::Action;
using $ActionMap = ::javax::swing::ActionMap;
using $BoundedRangeModel = ::javax::swing::BoundedRangeModel;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $InputMap = ::javax::swing::InputMap;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $JSlider = ::javax::swing::JSlider;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;
using $UIManager = ::javax::swing::UIManager;
using $ChangeListener = ::javax::swing::event::ChangeListener;
using $MouseInputAdapter = ::javax::swing::event::MouseInputAdapter;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $InsetsUIResource = ::javax::swing::plaf::InsetsUIResource;
using $SliderUI = ::javax::swing::plaf::SliderUI;
using $BasicGraphicsUtils = ::javax::swing::plaf::basic::BasicGraphicsUtils;
using $BasicSliderUI$Actions = ::javax::swing::plaf::basic::BasicSliderUI$Actions;
using $BasicSliderUI$Handler = ::javax::swing::plaf::basic::BasicSliderUI$Handler;
using $BasicSliderUI$ScrollListener = ::javax::swing::plaf::basic::BasicSliderUI$ScrollListener;
using $BasicSliderUI$TrackListener = ::javax::swing::plaf::basic::BasicSliderUI$TrackListener;
using $LazyActionMap = ::javax::swing::plaf::basic::LazyActionMap;
using $DefaultLookup = ::sun::swing::DefaultLookup;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicSliderUI_FieldInfo_[] = {
	{"SHARED_ACTION", "Ljavax/swing/plaf/basic/BasicSliderUI$Actions;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicSliderUI, SHARED_ACTION)},
	{"POSITIVE_SCROLL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BasicSliderUI, POSITIVE_SCROLL)},
	{"NEGATIVE_SCROLL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BasicSliderUI, NEGATIVE_SCROLL)},
	{"MIN_SCROLL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BasicSliderUI, MIN_SCROLL)},
	{"MAX_SCROLL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BasicSliderUI, MAX_SCROLL)},
	{"scrollTimer", "Ljavax/swing/Timer;", nullptr, $PROTECTED, $field(BasicSliderUI, scrollTimer)},
	{"slider", "Ljavax/swing/JSlider;", nullptr, $PROTECTED, $field(BasicSliderUI, slider)},
	{"focusInsets", "Ljava/awt/Insets;", nullptr, $PROTECTED, $field(BasicSliderUI, focusInsets)},
	{"insetCache", "Ljava/awt/Insets;", nullptr, $PROTECTED, $field(BasicSliderUI, insetCache)},
	{"leftToRightCache", "Z", nullptr, $PROTECTED, $field(BasicSliderUI, leftToRightCache)},
	{"focusRect", "Ljava/awt/Rectangle;", nullptr, $PROTECTED, $field(BasicSliderUI, focusRect)},
	{"contentRect", "Ljava/awt/Rectangle;", nullptr, $PROTECTED, $field(BasicSliderUI, contentRect)},
	{"labelRect", "Ljava/awt/Rectangle;", nullptr, $PROTECTED, $field(BasicSliderUI, labelRect)},
	{"tickRect", "Ljava/awt/Rectangle;", nullptr, $PROTECTED, $field(BasicSliderUI, tickRect)},
	{"trackRect", "Ljava/awt/Rectangle;", nullptr, $PROTECTED, $field(BasicSliderUI, trackRect)},
	{"thumbRect", "Ljava/awt/Rectangle;", nullptr, $PROTECTED, $field(BasicSliderUI, thumbRect)},
	{"trackBuffer", "I", nullptr, $PROTECTED, $field(BasicSliderUI, trackBuffer)},
	{"isDragging", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(BasicSliderUI, isDragging$)},
	{"trackListener", "Ljavax/swing/plaf/basic/BasicSliderUI$TrackListener;", nullptr, $PROTECTED, $field(BasicSliderUI, trackListener)},
	{"changeListener", "Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED, $field(BasicSliderUI, changeListener)},
	{"componentListener", "Ljava/awt/event/ComponentListener;", nullptr, $PROTECTED, $field(BasicSliderUI, componentListener)},
	{"focusListener", "Ljava/awt/event/FocusListener;", nullptr, $PROTECTED, $field(BasicSliderUI, focusListener)},
	{"scrollListener", "Ljavax/swing/plaf/basic/BasicSliderUI$ScrollListener;", nullptr, $PROTECTED, $field(BasicSliderUI, scrollListener)},
	{"propertyChangeListener", "Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED, $field(BasicSliderUI, propertyChangeListener)},
	{"handler", "Ljavax/swing/plaf/basic/BasicSliderUI$Handler;", nullptr, $PRIVATE, $field(BasicSliderUI, handler)},
	{"lastValue", "I", nullptr, $PRIVATE, $field(BasicSliderUI, lastValue)},
	{"shadowColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(BasicSliderUI, shadowColor)},
	{"highlightColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(BasicSliderUI, highlightColor)},
	{"focusColor", "Ljava/awt/Color;", nullptr, $PRIVATE, $field(BasicSliderUI, focusColor)},
	{"checkedLabelBaselines", "Z", nullptr, $PRIVATE, $field(BasicSliderUI, checkedLabelBaselines)},
	{"sameLabelBaselines", "Z", nullptr, $PRIVATE, $field(BasicSliderUI, sameLabelBaselines)},
	{"unionRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(BasicSliderUI, unionRect)},
	{}
};

$MethodInfo _BasicSliderUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(BasicSliderUI::*)()>(&BasicSliderUI::init$))},
	{"<init>", "(Ljavax/swing/JSlider;)V", nullptr, $PUBLIC, $method(static_cast<void(BasicSliderUI::*)($JSlider*)>(&BasicSliderUI::init$))},
	{"calculateContentRect", "()V", nullptr, $PROTECTED},
	{"calculateFocusRect", "()V", nullptr, $PROTECTED},
	{"calculateGeometry", "()V", nullptr, $PROTECTED},
	{"calculateLabelRect", "()V", nullptr, $PROTECTED},
	{"calculateThumbLocation", "()V", nullptr, $PROTECTED},
	{"calculateThumbSize", "()V", nullptr, $PROTECTED},
	{"calculateTickRect", "()V", nullptr, $PROTECTED},
	{"calculateTrackBuffer", "()V", nullptr, $PROTECTED},
	{"calculateTrackRect", "()V", nullptr, $PROTECTED},
	{"createChangeListener", "(Ljavax/swing/JSlider;)Ljavax/swing/event/ChangeListener;", nullptr, $PROTECTED},
	{"createComponentListener", "(Ljavax/swing/JSlider;)Ljava/awt/event/ComponentListener;", nullptr, $PROTECTED},
	{"createFocusListener", "(Ljavax/swing/JSlider;)Ljava/awt/event/FocusListener;", nullptr, $PROTECTED},
	{"createPropertyChangeListener", "(Ljavax/swing/JSlider;)Ljava/beans/PropertyChangeListener;", nullptr, $PROTECTED},
	{"createScrollListener", "(Ljavax/swing/JSlider;)Ljavax/swing/plaf/basic/BasicSliderUI$ScrollListener;", nullptr, $PROTECTED},
	{"createTrackListener", "(Ljavax/swing/JSlider;)Ljavax/swing/plaf/basic/BasicSliderUI$TrackListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&BasicSliderUI::createUI))},
	{"drawInverted", "()Z", nullptr, $PROTECTED},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getBaselineResizeBehavior", "(Ljavax/swing/JComponent;)Ljava/awt/Component$BaselineResizeBehavior;", nullptr, $PUBLIC},
	{"getFocusColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getHandler", "()Ljavax/swing/plaf/basic/BasicSliderUI$Handler;", nullptr, $PRIVATE, $method(static_cast<$BasicSliderUI$Handler*(BasicSliderUI::*)()>(&BasicSliderUI::getHandler))},
	{"getHeightOfHighValueLabel", "()I", nullptr, $PROTECTED},
	{"getHeightOfLowValueLabel", "()I", nullptr, $PROTECTED},
	{"getHeightOfTallestLabel", "()I", nullptr, $PROTECTED},
	{"getHighestValue", "()Ljava/lang/Integer;", nullptr, $PROTECTED},
	{"getHighestValueLabel", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"getHighlightColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getInputMap", "(ILjavax/swing/JSlider;)Ljavax/swing/InputMap;", nullptr, 0},
	{"getLowestValue", "()Ljava/lang/Integer;", nullptr, $PROTECTED},
	{"getLowestValueLabel", "()Ljava/awt/Component;", nullptr, $PROTECTED},
	{"getMaximumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumHorizontalSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getMinimumVerticalSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredHorizontalSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPreferredVerticalSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getShadowColor", "()Ljava/awt/Color;", nullptr, $PROTECTED},
	{"getThumbSize", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getTickLength", "()I", nullptr, $PROTECTED},
	{"getTickSpacing", "()I", nullptr, $PRIVATE, $method(static_cast<int32_t(BasicSliderUI::*)()>(&BasicSliderUI::getTickSpacing))},
	{"getWidthOfHighValueLabel", "()I", nullptr, $PROTECTED},
	{"getWidthOfLowValueLabel", "()I", nullptr, $PROTECTED},
	{"getWidthOfWidestLabel", "()I", nullptr, $PROTECTED},
	{"installDefaults", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{"installKeyboardActions", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{"installUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"isDragging", "()Z", nullptr, $PROTECTED},
	{"labelsHaveSameBaselines", "()Z", nullptr, $PROTECTED},
	{"loadActionMap", "(Ljavax/swing/plaf/basic/LazyActionMap;)V", nullptr, $STATIC, $method(static_cast<void(*)($LazyActionMap*)>(&BasicSliderUI::loadActionMap))},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paintFocus", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintHorizontalLabel", "(Ljava/awt/Graphics;ILjava/awt/Component;)V", nullptr, $PROTECTED},
	{"paintLabels", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintMajorTickForHorizSlider", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED},
	{"paintMajorTickForVertSlider", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED},
	{"paintMinorTickForHorizSlider", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED},
	{"paintMinorTickForVertSlider", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED},
	{"paintThumb", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintTicks", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintTrack", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintVerticalLabel", "(Ljava/awt/Graphics;ILjava/awt/Component;)V", nullptr, $PROTECTED},
	{"recalculateIfInsetsChanged", "()V", nullptr, $PROTECTED},
	{"recalculateIfOrientationChanged", "()V", nullptr, $PROTECTED},
	{"scrollByBlock", "(I)V", nullptr, $PUBLIC},
	{"scrollByUnit", "(I)V", nullptr, $PUBLIC},
	{"scrollDueToClickInTrack", "(I)V", nullptr, $PROTECTED},
	{"setThumbLocation", "(II)V", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{"uninstallKeyboardActions", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{"uninstallUI", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"valueForXPosition", "(I)I", nullptr, $PUBLIC},
	{"valueForYPosition", "(I)I", nullptr, $PUBLIC},
	{"xPositionForValue", "(I)I", nullptr, $PROTECTED},
	{"yPositionForValue", "(I)I", nullptr, $PROTECTED},
	{"yPositionForValue", "(III)I", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _BasicSliderUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicSliderUI$Actions", "javax.swing.plaf.basic.BasicSliderUI", "Actions", $PRIVATE | $STATIC},
	{"javax.swing.plaf.basic.BasicSliderUI$SharedActionScroller", "javax.swing.plaf.basic.BasicSliderUI", "SharedActionScroller", $STATIC},
	{"javax.swing.plaf.basic.BasicSliderUI$ActionScroller", "javax.swing.plaf.basic.BasicSliderUI", "ActionScroller", $PUBLIC},
	{"javax.swing.plaf.basic.BasicSliderUI$FocusHandler", "javax.swing.plaf.basic.BasicSliderUI", "FocusHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicSliderUI$ComponentHandler", "javax.swing.plaf.basic.BasicSliderUI", "ComponentHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicSliderUI$ScrollListener", "javax.swing.plaf.basic.BasicSliderUI", "ScrollListener", $PUBLIC},
	{"javax.swing.plaf.basic.BasicSliderUI$TrackListener", "javax.swing.plaf.basic.BasicSliderUI", "TrackListener", $PUBLIC},
	{"javax.swing.plaf.basic.BasicSliderUI$ChangeHandler", "javax.swing.plaf.basic.BasicSliderUI", "ChangeHandler", $PUBLIC},
	{"javax.swing.plaf.basic.BasicSliderUI$Handler", "javax.swing.plaf.basic.BasicSliderUI", "Handler", $PRIVATE},
	{"javax.swing.plaf.basic.BasicSliderUI$PropertyChangeHandler", "javax.swing.plaf.basic.BasicSliderUI", "PropertyChangeHandler", $PUBLIC},
	{}
};

$ClassInfo _BasicSliderUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.basic.BasicSliderUI",
	"javax.swing.plaf.SliderUI",
	nullptr,
	_BasicSliderUI_FieldInfo_,
	_BasicSliderUI_MethodInfo_,
	nullptr,
	nullptr,
	_BasicSliderUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicSliderUI$Actions,javax.swing.plaf.basic.BasicSliderUI$SharedActionScroller,javax.swing.plaf.basic.BasicSliderUI$ActionScroller,javax.swing.plaf.basic.BasicSliderUI$FocusHandler,javax.swing.plaf.basic.BasicSliderUI$ComponentHandler,javax.swing.plaf.basic.BasicSliderUI$ScrollListener,javax.swing.plaf.basic.BasicSliderUI$TrackListener,javax.swing.plaf.basic.BasicSliderUI$ChangeHandler,javax.swing.plaf.basic.BasicSliderUI$Handler,javax.swing.plaf.basic.BasicSliderUI$PropertyChangeHandler"
};

$Object* allocate$BasicSliderUI($Class* clazz) {
	return $of($alloc(BasicSliderUI));
}

$BasicSliderUI$Actions* BasicSliderUI::SHARED_ACTION = nullptr;
$Rectangle* BasicSliderUI::unionRect = nullptr;

void BasicSliderUI::init$() {
	$SliderUI::init$();
	$set(this, focusInsets, nullptr);
	$set(this, insetCache, nullptr);
	this->leftToRightCache = true;
	$set(this, focusRect, nullptr);
	$set(this, contentRect, nullptr);
	$set(this, labelRect, nullptr);
	$set(this, tickRect, nullptr);
	$set(this, trackRect, nullptr);
	$set(this, thumbRect, nullptr);
	this->trackBuffer = 0;
}

$Color* BasicSliderUI::getShadowColor() {
	return this->shadowColor;
}

$Color* BasicSliderUI::getHighlightColor() {
	return this->highlightColor;
}

$Color* BasicSliderUI::getFocusColor() {
	return this->focusColor;
}

bool BasicSliderUI::isDragging() {
	return this->isDragging$;
}

$ComponentUI* BasicSliderUI::createUI($JComponent* b) {
	$init(BasicSliderUI);
	return $new(BasicSliderUI, $cast($JSlider, b));
}

void BasicSliderUI::init$($JSlider* b) {
	$SliderUI::init$();
	$set(this, focusInsets, nullptr);
	$set(this, insetCache, nullptr);
	this->leftToRightCache = true;
	$set(this, focusRect, nullptr);
	$set(this, contentRect, nullptr);
	$set(this, labelRect, nullptr);
	$set(this, tickRect, nullptr);
	$set(this, trackRect, nullptr);
	$set(this, thumbRect, nullptr);
	this->trackBuffer = 0;
}

void BasicSliderUI::installUI($JComponent* c) {
	$set(this, slider, $cast($JSlider, c));
	this->checkedLabelBaselines = false;
	$nc(this->slider)->setEnabled($nc(this->slider)->isEnabled());
	$init($Boolean);
	$LookAndFeel::installProperty(this->slider, "opaque"_s, $Boolean::TRUE);
	this->isDragging$ = false;
	$set(this, trackListener, createTrackListener(this->slider));
	$set(this, changeListener, createChangeListener(this->slider));
	$set(this, componentListener, createComponentListener(this->slider));
	$set(this, focusListener, createFocusListener(this->slider));
	$set(this, scrollListener, createScrollListener(this->slider));
	$set(this, propertyChangeListener, createPropertyChangeListener(this->slider));
	installDefaults(this->slider);
	installListeners(this->slider);
	installKeyboardActions(this->slider);
	$set(this, scrollTimer, $new($Timer, 100, this->scrollListener));
	$nc(this->scrollTimer)->setInitialDelay(300);
	$set(this, insetCache, $nc(this->slider)->getInsets());
	this->leftToRightCache = $BasicGraphicsUtils::isLeftToRight(this->slider);
	$set(this, focusRect, $new($Rectangle));
	$set(this, contentRect, $new($Rectangle));
	$set(this, labelRect, $new($Rectangle));
	$set(this, tickRect, $new($Rectangle));
	$set(this, trackRect, $new($Rectangle));
	$set(this, thumbRect, $new($Rectangle));
	this->lastValue = $nc(this->slider)->getValue();
	calculateGeometry();
}

void BasicSliderUI::uninstallUI($JComponent* c) {
	if (!$equals(c, this->slider)) {
		$throwNew($IllegalComponentStateException, $$str({this, " was asked to deinstall() "_s, c, " when it only knows about "_s, this->slider, "."_s}));
	}
	$nc(this->scrollTimer)->stop();
	$set(this, scrollTimer, nullptr);
	uninstallDefaults(this->slider);
	uninstallListeners(this->slider);
	uninstallKeyboardActions(this->slider);
	$set(this, insetCache, nullptr);
	this->leftToRightCache = true;
	$set(this, focusRect, nullptr);
	$set(this, contentRect, nullptr);
	$set(this, labelRect, nullptr);
	$set(this, tickRect, nullptr);
	$set(this, trackRect, nullptr);
	$set(this, thumbRect, nullptr);
	$set(this, trackListener, nullptr);
	$set(this, changeListener, nullptr);
	$set(this, componentListener, nullptr);
	$set(this, focusListener, nullptr);
	$set(this, scrollListener, nullptr);
	$set(this, propertyChangeListener, nullptr);
	$set(this, slider, nullptr);
}

void BasicSliderUI::installDefaults($JSlider* slider) {
	$LookAndFeel::installBorder(slider, "Slider.border"_s);
	$LookAndFeel::installColorsAndFont(slider, "Slider.background"_s, "Slider.foreground"_s, "Slider.font"_s);
	$set(this, highlightColor, $UIManager::getColor("Slider.highlight"_s));
	$set(this, shadowColor, $UIManager::getColor("Slider.shadow"_s));
	$set(this, focusColor, $UIManager::getColor("Slider.focus"_s));
	$set(this, focusInsets, $cast($Insets, $UIManager::get("Slider.focusInsets"_s)));
	if (this->focusInsets == nullptr) {
		$set(this, focusInsets, $new($InsetsUIResource, 2, 2, 2, 2));
	}
}

void BasicSliderUI::uninstallDefaults($JSlider* slider) {
	$LookAndFeel::uninstallBorder(slider);
	$set(this, focusInsets, nullptr);
}

$BasicSliderUI$TrackListener* BasicSliderUI::createTrackListener($JSlider* slider) {
	return $new($BasicSliderUI$TrackListener, this);
}

$ChangeListener* BasicSliderUI::createChangeListener($JSlider* slider) {
	return getHandler();
}

$ComponentListener* BasicSliderUI::createComponentListener($JSlider* slider) {
	return getHandler();
}

$FocusListener* BasicSliderUI::createFocusListener($JSlider* slider) {
	return getHandler();
}

$BasicSliderUI$ScrollListener* BasicSliderUI::createScrollListener($JSlider* slider) {
	return $new($BasicSliderUI$ScrollListener, this);
}

$PropertyChangeListener* BasicSliderUI::createPropertyChangeListener($JSlider* slider) {
	return getHandler();
}

$BasicSliderUI$Handler* BasicSliderUI::getHandler() {
	if (this->handler == nullptr) {
		$set(this, handler, $new($BasicSliderUI$Handler, this));
	}
	return this->handler;
}

void BasicSliderUI::installListeners($JSlider* slider) {
	$nc(slider)->addMouseListener(static_cast<$MouseListener*>(static_cast<$MouseAdapter*>(static_cast<$MouseInputAdapter*>(this->trackListener))));
	slider->addMouseMotionListener(static_cast<$MouseMotionListener*>(static_cast<$MouseAdapter*>(static_cast<$MouseInputAdapter*>(this->trackListener))));
	slider->addFocusListener(this->focusListener);
	slider->addComponentListener(this->componentListener);
	slider->addPropertyChangeListener(this->propertyChangeListener);
	$nc($(slider->getModel()))->addChangeListener(this->changeListener);
}

void BasicSliderUI::uninstallListeners($JSlider* slider) {
	$nc(slider)->removeMouseListener(static_cast<$MouseListener*>(static_cast<$MouseAdapter*>(static_cast<$MouseInputAdapter*>(this->trackListener))));
	slider->removeMouseMotionListener(static_cast<$MouseMotionListener*>(static_cast<$MouseAdapter*>(static_cast<$MouseInputAdapter*>(this->trackListener))));
	slider->removeFocusListener(this->focusListener);
	slider->removeComponentListener(this->componentListener);
	slider->removePropertyChangeListener(this->propertyChangeListener);
	$nc($(slider->getModel()))->removeChangeListener(this->changeListener);
	$set(this, handler, nullptr);
}

void BasicSliderUI::installKeyboardActions($JSlider* slider) {
	$var($InputMap, km, getInputMap($JComponent::WHEN_FOCUSED, slider));
	$SwingUtilities::replaceUIInputMap(slider, $JComponent::WHEN_FOCUSED, km);
	$LazyActionMap::installLazyActionMap(slider, BasicSliderUI::class$, "Slider.actionMap"_s);
}

$InputMap* BasicSliderUI::getInputMap(int32_t condition, $JSlider* slider) {
	$useLocalCurrentObjectStackCache();
	if (condition == $JComponent::WHEN_FOCUSED) {
		$var($InputMap, keyMap, $cast($InputMap, $DefaultLookup::get(slider, this, "Slider.focusInputMap"_s)));
		$var($InputMap, rtlKeyMap, nullptr);
		bool var$0 = $nc($($nc(slider)->getComponentOrientation()))->isLeftToRight();
		if (var$0 || (($assign(rtlKeyMap, $cast($InputMap, $DefaultLookup::get(slider, this, "Slider.focusInputMap.RightToLeft"_s)))) == nullptr)) {
			return keyMap;
		} else {
			$nc(rtlKeyMap)->setParent(keyMap);
			return rtlKeyMap;
		}
	}
	return nullptr;
}

void BasicSliderUI::loadActionMap($LazyActionMap* map) {
	$init(BasicSliderUI);
	$useLocalCurrentObjectStackCache();
	$init($BasicSliderUI$Actions);
	$nc(map)->put($$new($BasicSliderUI$Actions, $BasicSliderUI$Actions::POSITIVE_UNIT_INCREMENT));
	map->put($$new($BasicSliderUI$Actions, $BasicSliderUI$Actions::POSITIVE_BLOCK_INCREMENT));
	map->put($$new($BasicSliderUI$Actions, $BasicSliderUI$Actions::NEGATIVE_UNIT_INCREMENT));
	map->put($$new($BasicSliderUI$Actions, $BasicSliderUI$Actions::NEGATIVE_BLOCK_INCREMENT));
	map->put($$new($BasicSliderUI$Actions, $BasicSliderUI$Actions::MIN_SCROLL_INCREMENT));
	map->put($$new($BasicSliderUI$Actions, $BasicSliderUI$Actions::MAX_SCROLL_INCREMENT));
}

void BasicSliderUI::uninstallKeyboardActions($JSlider* slider) {
	$SwingUtilities::replaceUIActionMap(slider, nullptr);
	$SwingUtilities::replaceUIInputMap(slider, $JComponent::WHEN_FOCUSED, nullptr);
}

int32_t BasicSliderUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	$SliderUI::getBaseline(c, width, height);
	bool var$0 = $nc(this->slider)->getPaintLabels();
	if (var$0 && labelsHaveSameBaselines()) {
		$var($FontMetrics, metrics, $nc(this->slider)->getFontMetrics($($nc(this->slider)->getFont())));
		$var($Insets, insets, $nc(this->slider)->getInsets());
		$var($Dimension, thumbSize, getThumbSize());
		if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
			int32_t tickLength = getTickLength();
			int32_t contentHeight = height - $nc(insets)->top - insets->bottom - $nc(this->focusInsets)->top - $nc(this->focusInsets)->bottom;
			int32_t thumbHeight = $nc(thumbSize)->height;
			int32_t centerSpacing = thumbHeight;
			if ($nc(this->slider)->getPaintTicks()) {
				centerSpacing += tickLength;
			}
			centerSpacing += getHeightOfTallestLabel();
			int32_t trackY = insets->top + $nc(this->focusInsets)->top + (contentHeight - centerSpacing - 1) / 2;
			int32_t trackHeight = thumbHeight;
			int32_t tickY = trackY + trackHeight;
			int32_t tickHeight = tickLength;
			if (!$nc(this->slider)->getPaintTicks()) {
				tickHeight = 0;
			}
			int32_t labelY = tickY + tickHeight;
			return labelY + $nc(metrics)->getAscent();
		} else {
			bool inverted = $nc(this->slider)->getInverted();
			$var($Integer, value, inverted ? getLowestValue() : getHighestValue());
			if (value != nullptr) {
				int32_t thumbHeight = $nc(thumbSize)->height;
				int32_t trackBuffer = $Math::max($nc(metrics)->getHeight() / 2, thumbHeight / 2);
				int32_t contentY = $nc(this->focusInsets)->top + $nc(insets)->top;
				int32_t trackY = contentY + trackBuffer;
				int32_t trackHeight = height - $nc(this->focusInsets)->top - $nc(this->focusInsets)->bottom - insets->top - insets->bottom - trackBuffer - trackBuffer;
				int32_t yPosition = yPositionForValue(value->intValue(), trackY, trackHeight);
				int32_t var$1 = yPosition - $nc(metrics)->getHeight() / 2;
				return var$1 + metrics->getAscent();
			}
		}
	}
	return 0;
}

$Component$BaselineResizeBehavior* BasicSliderUI::getBaselineResizeBehavior($JComponent* c) {
	$SliderUI::getBaselineResizeBehavior(c);
	$init($Component$BaselineResizeBehavior);
	return $Component$BaselineResizeBehavior::OTHER;
}

bool BasicSliderUI::labelsHaveSameBaselines() {
	$useLocalCurrentObjectStackCache();
	if (!this->checkedLabelBaselines) {
		this->checkedLabelBaselines = true;
		$var($Dictionary, dictionary, $nc(this->slider)->getLabelTable());
		if (dictionary != nullptr) {
			this->sameLabelBaselines = true;
			$var($Enumeration, elements, dictionary->elements());
			int32_t baseline = -1;
			while ($nc(elements)->hasMoreElements()) {
				$var($JComponent, label, $cast($JComponent, elements->nextElement()));
				$var($Dimension, pref, $nc(label)->getPreferredSize());
				int32_t labelBaseline = label->getBaseline($nc(pref)->width, pref->height);
				if (labelBaseline >= 0) {
					if (baseline == -1) {
						baseline = labelBaseline;
					} else if (baseline != labelBaseline) {
						this->sameLabelBaselines = false;
						break;
					}
				} else {
					this->sameLabelBaselines = false;
					break;
				}
			}
		} else {
			this->sameLabelBaselines = false;
		}
	}
	return this->sameLabelBaselines;
}

$Dimension* BasicSliderUI::getPreferredHorizontalSize() {
	$var($Dimension, horizDim, $cast($Dimension, $DefaultLookup::get(this->slider, this, "Slider.horizontalSize"_s)));
	if (horizDim == nullptr) {
		$assign(horizDim, $new($Dimension, 200, 21));
	}
	return horizDim;
}

$Dimension* BasicSliderUI::getPreferredVerticalSize() {
	$var($Dimension, vertDim, $cast($Dimension, $DefaultLookup::get(this->slider, this, "Slider.verticalSize"_s)));
	if (vertDim == nullptr) {
		$assign(vertDim, $new($Dimension, 21, 200));
	}
	return vertDim;
}

$Dimension* BasicSliderUI::getMinimumHorizontalSize() {
	$var($Dimension, minHorizDim, $cast($Dimension, $DefaultLookup::get(this->slider, this, "Slider.minimumHorizontalSize"_s)));
	if (minHorizDim == nullptr) {
		$assign(minHorizDim, $new($Dimension, 36, 21));
	}
	return minHorizDim;
}

$Dimension* BasicSliderUI::getMinimumVerticalSize() {
	$var($Dimension, minVertDim, $cast($Dimension, $DefaultLookup::get(this->slider, this, "Slider.minimumVerticalSize"_s)));
	if (minVertDim == nullptr) {
		$assign(minVertDim, $new($Dimension, 21, 36));
	}
	return minVertDim;
}

$Dimension* BasicSliderUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	recalculateIfInsetsChanged();
	$var($Dimension, d, nullptr);
	if ($nc(this->slider)->getOrientation() == $JSlider::VERTICAL) {
		$assign(d, $new($Dimension, $(getPreferredVerticalSize())));
		d->width = $nc(this->insetCache)->left + $nc(this->insetCache)->right;
		d->width += $nc(this->focusInsets)->left + $nc(this->focusInsets)->right;
		d->width += $nc(this->trackRect)->width + $nc(this->tickRect)->width + $nc(this->labelRect)->width;
	} else {
		$assign(d, $new($Dimension, $(getPreferredHorizontalSize())));
		d->height = $nc(this->insetCache)->top + $nc(this->insetCache)->bottom;
		d->height += $nc(this->focusInsets)->top + $nc(this->focusInsets)->bottom;
		d->height += $nc(this->trackRect)->height + $nc(this->tickRect)->height + $nc(this->labelRect)->height;
	}
	return d;
}

$Dimension* BasicSliderUI::getMinimumSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	recalculateIfInsetsChanged();
	$var($Dimension, d, nullptr);
	if ($nc(this->slider)->getOrientation() == $JSlider::VERTICAL) {
		$assign(d, $new($Dimension, $(getMinimumVerticalSize())));
		d->width = $nc(this->insetCache)->left + $nc(this->insetCache)->right;
		d->width += $nc(this->focusInsets)->left + $nc(this->focusInsets)->right;
		d->width += $nc(this->trackRect)->width + $nc(this->tickRect)->width + $nc(this->labelRect)->width;
	} else {
		$assign(d, $new($Dimension, $(getMinimumHorizontalSize())));
		d->height = $nc(this->insetCache)->top + $nc(this->insetCache)->bottom;
		d->height += $nc(this->focusInsets)->top + $nc(this->focusInsets)->bottom;
		d->height += $nc(this->trackRect)->height + $nc(this->tickRect)->height + $nc(this->labelRect)->height;
	}
	return d;
}

$Dimension* BasicSliderUI::getMaximumSize($JComponent* c) {
	$var($Dimension, d, getPreferredSize(c));
	if ($nc(this->slider)->getOrientation() == $JSlider::VERTICAL) {
		$nc(d)->height = $Short::MAX_VALUE;
	} else {
		$nc(d)->width = $Short::MAX_VALUE;
	}
	return d;
}

void BasicSliderUI::calculateGeometry() {
	calculateFocusRect();
	calculateContentRect();
	calculateThumbSize();
	calculateTrackBuffer();
	calculateTrackRect();
	calculateTickRect();
	calculateLabelRect();
	calculateThumbLocation();
}

void BasicSliderUI::calculateFocusRect() {
	$nc(this->focusRect)->x = $nc(this->insetCache)->left;
	$nc(this->focusRect)->y = $nc(this->insetCache)->top;
	$nc(this->focusRect)->width = $nc(this->slider)->getWidth() - ($nc(this->insetCache)->left + $nc(this->insetCache)->right);
	$nc(this->focusRect)->height = $nc(this->slider)->getHeight() - ($nc(this->insetCache)->top + $nc(this->insetCache)->bottom);
}

void BasicSliderUI::calculateThumbSize() {
	$var($Dimension, size, getThumbSize());
	$nc(this->thumbRect)->setSize($nc(size)->width, size->height);
}

void BasicSliderUI::calculateContentRect() {
	$nc(this->contentRect)->x = $nc(this->focusRect)->x + $nc(this->focusInsets)->left;
	$nc(this->contentRect)->y = $nc(this->focusRect)->y + $nc(this->focusInsets)->top;
	$nc(this->contentRect)->width = $nc(this->focusRect)->width - ($nc(this->focusInsets)->left + $nc(this->focusInsets)->right);
	$nc(this->contentRect)->height = $nc(this->focusRect)->height - ($nc(this->focusInsets)->top + $nc(this->focusInsets)->bottom);
}

int32_t BasicSliderUI::getTickSpacing() {
	int32_t majorTickSpacing = $nc(this->slider)->getMajorTickSpacing();
	int32_t minorTickSpacing = $nc(this->slider)->getMinorTickSpacing();
	int32_t result = 0;
	if (minorTickSpacing > 0) {
		result = minorTickSpacing;
	} else if (majorTickSpacing > 0) {
		result = majorTickSpacing;
	} else {
		result = 0;
	}
	return result;
}

void BasicSliderUI::calculateThumbLocation() {
	if ($nc(this->slider)->getSnapToTicks()) {
		int32_t sliderValue = $nc(this->slider)->getValue();
		int32_t snappedValue = sliderValue;
		int32_t tickSpacing = getTickSpacing();
		if (tickSpacing != 0) {
			if ($mod((sliderValue - $nc(this->slider)->getMinimum()), tickSpacing) != 0) {
				float temp = (float)(sliderValue - $nc(this->slider)->getMinimum()) / (float)tickSpacing;
				int32_t whichTick = $Math::round(temp);
				if (temp - $cast(int32_t, temp) == 0.5 && sliderValue < this->lastValue) {
					--whichTick;
				}
				snappedValue = $nc(this->slider)->getMinimum() + (whichTick * tickSpacing);
			}
			if (snappedValue != sliderValue) {
				$nc(this->slider)->setValue(snappedValue);
			}
		}
	}
	if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		int32_t valuePosition = xPositionForValue($nc(this->slider)->getValue());
		$nc(this->thumbRect)->x = valuePosition - ($nc(this->thumbRect)->width / 2);
		$nc(this->thumbRect)->y = $nc(this->trackRect)->y;
	} else {
		int32_t valuePosition = yPositionForValue($nc(this->slider)->getValue());
		$nc(this->thumbRect)->x = $nc(this->trackRect)->x;
		$nc(this->thumbRect)->y = valuePosition - ($nc(this->thumbRect)->height / 2);
	}
}

void BasicSliderUI::calculateTrackBuffer() {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(this->slider)->getPaintLabels();
	if (var$0 && $nc(this->slider)->getLabelTable() != nullptr) {
		$var($Component, highLabel, getHighestValueLabel());
		$var($Component, lowLabel, getLowestValueLabel());
		if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
			int32_t var$1 = $nc($($nc(highLabel)->getBounds()))->width;
			this->trackBuffer = $Math::max(var$1, $nc($($nc(lowLabel)->getBounds()))->width) / 2;
			this->trackBuffer = $Math::max(this->trackBuffer, $nc(this->thumbRect)->width / 2);
		} else {
			int32_t var$2 = $nc($($nc(highLabel)->getBounds()))->height;
			this->trackBuffer = $Math::max(var$2, $nc($($nc(lowLabel)->getBounds()))->height) / 2;
			this->trackBuffer = $Math::max(this->trackBuffer, $nc(this->thumbRect)->height / 2);
		}
	} else if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		this->trackBuffer = $nc(this->thumbRect)->width / 2;
	} else {
		this->trackBuffer = $nc(this->thumbRect)->height / 2;
	}
}

void BasicSliderUI::calculateTrackRect() {
	int32_t centerSpacing = 0;
	if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		centerSpacing = $nc(this->thumbRect)->height;
		if ($nc(this->slider)->getPaintTicks()) {
			centerSpacing += getTickLength();
		}
		if ($nc(this->slider)->getPaintLabels()) {
			centerSpacing += getHeightOfTallestLabel();
		}
		$nc(this->trackRect)->x = $nc(this->contentRect)->x + this->trackBuffer;
		$nc(this->trackRect)->y = $nc(this->contentRect)->y + ($nc(this->contentRect)->height - centerSpacing - 1) / 2;
		$nc(this->trackRect)->width = $nc(this->contentRect)->width - (this->trackBuffer * 2);
		$nc(this->trackRect)->height = $nc(this->thumbRect)->height;
	} else {
		centerSpacing = $nc(this->thumbRect)->width;
		if ($BasicGraphicsUtils::isLeftToRight(this->slider)) {
			if ($nc(this->slider)->getPaintTicks()) {
				centerSpacing += getTickLength();
			}
			if ($nc(this->slider)->getPaintLabels()) {
				centerSpacing += getWidthOfWidestLabel();
			}
		} else {
			if ($nc(this->slider)->getPaintTicks()) {
				centerSpacing -= getTickLength();
			}
			if ($nc(this->slider)->getPaintLabels()) {
				centerSpacing -= getWidthOfWidestLabel();
			}
		}
		$nc(this->trackRect)->x = $nc(this->contentRect)->x + ($nc(this->contentRect)->width - centerSpacing - 1) / 2;
		$nc(this->trackRect)->y = $nc(this->contentRect)->y + this->trackBuffer;
		$nc(this->trackRect)->width = $nc(this->thumbRect)->width;
		$nc(this->trackRect)->height = $nc(this->contentRect)->height - (this->trackBuffer * 2);
	}
}

int32_t BasicSliderUI::getTickLength() {
	return 8;
}

void BasicSliderUI::calculateTickRect() {
	if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		$nc(this->tickRect)->x = $nc(this->trackRect)->x;
		$nc(this->tickRect)->y = $nc(this->trackRect)->y + $nc(this->trackRect)->height;
		$nc(this->tickRect)->width = $nc(this->trackRect)->width;
		$nc(this->tickRect)->height = ($nc(this->slider)->getPaintTicks()) ? getTickLength() : 0;
	} else {
		$nc(this->tickRect)->width = ($nc(this->slider)->getPaintTicks()) ? getTickLength() : 0;
		if ($BasicGraphicsUtils::isLeftToRight(this->slider)) {
			$nc(this->tickRect)->x = $nc(this->trackRect)->x + $nc(this->trackRect)->width;
		} else {
			$nc(this->tickRect)->x = $nc(this->trackRect)->x - $nc(this->tickRect)->width;
		}
		$nc(this->tickRect)->y = $nc(this->trackRect)->y;
		$nc(this->tickRect)->height = $nc(this->trackRect)->height;
	}
}

void BasicSliderUI::calculateLabelRect() {
	if ($nc(this->slider)->getPaintLabels()) {
		if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
			$nc(this->labelRect)->x = $nc(this->tickRect)->x - this->trackBuffer;
			$nc(this->labelRect)->y = $nc(this->tickRect)->y + $nc(this->tickRect)->height;
			$nc(this->labelRect)->width = $nc(this->tickRect)->width + (this->trackBuffer * 2);
			$nc(this->labelRect)->height = getHeightOfTallestLabel();
		} else {
			if ($BasicGraphicsUtils::isLeftToRight(this->slider)) {
				$nc(this->labelRect)->x = $nc(this->tickRect)->x + $nc(this->tickRect)->width;
				$nc(this->labelRect)->width = getWidthOfWidestLabel();
			} else {
				$nc(this->labelRect)->width = getWidthOfWidestLabel();
				$nc(this->labelRect)->x = $nc(this->tickRect)->x - $nc(this->labelRect)->width;
			}
			$nc(this->labelRect)->y = $nc(this->tickRect)->y - this->trackBuffer;
			$nc(this->labelRect)->height = $nc(this->tickRect)->height + (this->trackBuffer * 2);
		}
	} else if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		$nc(this->labelRect)->x = $nc(this->tickRect)->x;
		$nc(this->labelRect)->y = $nc(this->tickRect)->y + $nc(this->tickRect)->height;
		$nc(this->labelRect)->width = $nc(this->tickRect)->width;
		$nc(this->labelRect)->height = 0;
	} else {
		if ($BasicGraphicsUtils::isLeftToRight(this->slider)) {
			$nc(this->labelRect)->x = $nc(this->tickRect)->x + $nc(this->tickRect)->width;
		} else {
			$nc(this->labelRect)->x = $nc(this->tickRect)->x;
		}
		$nc(this->labelRect)->y = $nc(this->tickRect)->y;
		$nc(this->labelRect)->width = 0;
		$nc(this->labelRect)->height = $nc(this->tickRect)->height;
	}
}

$Dimension* BasicSliderUI::getThumbSize() {
	$var($Dimension, size, $new($Dimension));
	if ($nc(this->slider)->getOrientation() == $JSlider::VERTICAL) {
		size->width = 20;
		size->height = 11;
	} else {
		size->width = 11;
		size->height = 20;
	}
	return size;
}

int32_t BasicSliderUI::getWidthOfWidestLabel() {
	$useLocalCurrentObjectStackCache();
	$var($Dictionary, dictionary, $nc(this->slider)->getLabelTable());
	int32_t widest = 0;
	if (dictionary != nullptr) {
		$var($Enumeration, keys, dictionary->keys());
		while ($nc(keys)->hasMoreElements()) {
			$var($JComponent, label, $cast($JComponent, dictionary->get($(keys->nextElement()))));
			widest = $Math::max($nc($($nc(label)->getPreferredSize()))->width, widest);
		}
	}
	return widest;
}

int32_t BasicSliderUI::getHeightOfTallestLabel() {
	$useLocalCurrentObjectStackCache();
	$var($Dictionary, dictionary, $nc(this->slider)->getLabelTable());
	int32_t tallest = 0;
	if (dictionary != nullptr) {
		$var($Enumeration, keys, dictionary->keys());
		while ($nc(keys)->hasMoreElements()) {
			$var($JComponent, label, $cast($JComponent, dictionary->get($(keys->nextElement()))));
			tallest = $Math::max($nc($($nc(label)->getPreferredSize()))->height, tallest);
		}
	}
	return tallest;
}

int32_t BasicSliderUI::getWidthOfHighValueLabel() {
	$useLocalCurrentObjectStackCache();
	$var($Component, label, getHighestValueLabel());
	int32_t width = 0;
	if (label != nullptr) {
		width = $nc($(label->getPreferredSize()))->width;
	}
	return width;
}

int32_t BasicSliderUI::getWidthOfLowValueLabel() {
	$useLocalCurrentObjectStackCache();
	$var($Component, label, getLowestValueLabel());
	int32_t width = 0;
	if (label != nullptr) {
		width = $nc($(label->getPreferredSize()))->width;
	}
	return width;
}

int32_t BasicSliderUI::getHeightOfHighValueLabel() {
	$useLocalCurrentObjectStackCache();
	$var($Component, label, getHighestValueLabel());
	int32_t height = 0;
	if (label != nullptr) {
		height = $nc($(label->getPreferredSize()))->height;
	}
	return height;
}

int32_t BasicSliderUI::getHeightOfLowValueLabel() {
	$useLocalCurrentObjectStackCache();
	$var($Component, label, getLowestValueLabel());
	int32_t height = 0;
	if (label != nullptr) {
		height = $nc($(label->getPreferredSize()))->height;
	}
	return height;
}

bool BasicSliderUI::drawInverted() {
	if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		if ($BasicGraphicsUtils::isLeftToRight(this->slider)) {
			return $nc(this->slider)->getInverted();
		} else {
			return !$nc(this->slider)->getInverted();
		}
	} else {
		return $nc(this->slider)->getInverted();
	}
}

$Integer* BasicSliderUI::getHighestValue() {
	$useLocalCurrentObjectStackCache();
	$var($Dictionary, dictionary, $nc(this->slider)->getLabelTable());
	if (dictionary == nullptr) {
		return nullptr;
	}
	$var($Enumeration, keys, $nc(dictionary)->keys());
	$var($Integer, max, nullptr);
	while ($nc(keys)->hasMoreElements()) {
		$var($Integer, i, $cast($Integer, keys->nextElement()));
		bool var$0 = max == nullptr;
		if (!var$0) {
			int32_t var$1 = $nc(i)->intValue();
			var$0 = var$1 > $nc(max)->intValue();
		}
		if (var$0) {
			$assign(max, i);
		}
	}
	return max;
}

$Integer* BasicSliderUI::getLowestValue() {
	$useLocalCurrentObjectStackCache();
	$var($Dictionary, dictionary, $nc(this->slider)->getLabelTable());
	if (dictionary == nullptr) {
		return nullptr;
	}
	$var($Enumeration, keys, $nc(dictionary)->keys());
	$var($Integer, min, nullptr);
	while ($nc(keys)->hasMoreElements()) {
		$var($Integer, i, $cast($Integer, keys->nextElement()));
		bool var$0 = min == nullptr;
		if (!var$0) {
			int32_t var$1 = $nc(i)->intValue();
			var$0 = var$1 < $nc(min)->intValue();
		}
		if (var$0) {
			$assign(min, i);
		}
	}
	return min;
}

$Component* BasicSliderUI::getLowestValueLabel() {
	$useLocalCurrentObjectStackCache();
	$var($Integer, min, getLowestValue());
	if (min != nullptr) {
		return $cast($Component, $nc($($nc(this->slider)->getLabelTable()))->get(min));
	}
	return nullptr;
}

$Component* BasicSliderUI::getHighestValueLabel() {
	$useLocalCurrentObjectStackCache();
	$var($Integer, max, getHighestValue());
	if (max != nullptr) {
		return $cast($Component, $nc($($nc(this->slider)->getLabelTable()))->get(max));
	}
	return nullptr;
}

void BasicSliderUI::paint($Graphics* g, $JComponent* c) {
	recalculateIfInsetsChanged();
	recalculateIfOrientationChanged();
	$var($Rectangle, clip, $nc(g)->getClipBounds());
	bool var$0 = !$nc(clip)->intersects(this->trackRect);
	if (var$0 && $nc(this->slider)->getPaintTrack()) {
		calculateGeometry();
	}
	bool var$1 = $nc(this->slider)->getPaintTrack();
	if (var$1 && $nc(clip)->intersects(this->trackRect)) {
		paintTrack(g);
	}
	bool var$2 = $nc(this->slider)->getPaintTicks();
	if (var$2 && $nc(clip)->intersects(this->tickRect)) {
		paintTicks(g);
	}
	bool var$3 = $nc(this->slider)->getPaintLabels();
	if (var$3 && $nc(clip)->intersects(this->labelRect)) {
		paintLabels(g);
	}
	bool var$4 = $nc(this->slider)->hasFocus();
	if (var$4 && $nc(clip)->intersects(this->focusRect)) {
		paintFocus(g);
	}
	if ($nc(clip)->intersects(this->thumbRect)) {
		paintThumb(g);
	}
}

void BasicSliderUI::recalculateIfInsetsChanged() {
	$var($Insets, newInsets, $nc(this->slider)->getInsets());
	if (!$nc(newInsets)->equals(this->insetCache)) {
		$set(this, insetCache, newInsets);
		calculateGeometry();
	}
}

void BasicSliderUI::recalculateIfOrientationChanged() {
	bool ltr = $BasicGraphicsUtils::isLeftToRight(this->slider);
	if (ltr != this->leftToRightCache) {
		this->leftToRightCache = ltr;
		calculateGeometry();
	}
}

void BasicSliderUI::paintFocus($Graphics* g) {
	$nc(g)->setColor($(getFocusColor()));
	$BasicGraphicsUtils::drawDashedRect(g, $nc(this->focusRect)->x, $nc(this->focusRect)->y, $nc(this->focusRect)->width, $nc(this->focusRect)->height);
}

void BasicSliderUI::paintTrack($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, trackBounds, this->trackRect);
	if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		int32_t cy = ($nc(trackBounds)->height / 2) - 2;
		int32_t cw = trackBounds->width;
		$nc(g)->translate(trackBounds->x, trackBounds->y + cy);
		g->setColor($(getShadowColor()));
		g->drawLine(0, 0, cw - 1, 0);
		g->drawLine(0, 1, 0, 2);
		g->setColor($(getHighlightColor()));
		g->drawLine(0, 3, cw, 3);
		g->drawLine(cw, 0, cw, 3);
		$init($Color);
		g->setColor($Color::black);
		g->drawLine(1, 1, cw - 2, 1);
		g->translate(-trackBounds->x, -(trackBounds->y + cy));
	} else {
		int32_t cx = ($nc(trackBounds)->width / 2) - 2;
		int32_t ch = trackBounds->height;
		$nc(g)->translate(trackBounds->x + cx, trackBounds->y);
		g->setColor($(getShadowColor()));
		g->drawLine(0, 0, 0, ch - 1);
		g->drawLine(1, 0, 2, 0);
		g->setColor($(getHighlightColor()));
		g->drawLine(3, 0, 3, ch);
		g->drawLine(0, ch, 3, ch);
		$init($Color);
		g->setColor($Color::black);
		g->drawLine(1, 1, 1, ch - 2);
		g->translate(-(trackBounds->x + cx), -trackBounds->y);
	}
}

void BasicSliderUI::paintTicks($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, tickBounds, this->tickRect);
	$init($Color);
	$nc(g)->setColor($($DefaultLookup::getColor(this->slider, this, "Slider.tickColor"_s, $Color::black)));
	if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		g->translate(0, $nc(tickBounds)->y);
		if ($nc(this->slider)->getMinorTickSpacing() > 0) {
			int32_t value = $nc(this->slider)->getMinimum();
			while (value <= $nc(this->slider)->getMaximum()) {
				int32_t xPos = xPositionForValue(value);
				paintMinorTickForHorizSlider(g, tickBounds, xPos);
				if ($Integer::MAX_VALUE - $nc(this->slider)->getMinorTickSpacing() < value) {
					break;
				}
				value += $nc(this->slider)->getMinorTickSpacing();
			}
		}
		if ($nc(this->slider)->getMajorTickSpacing() > 0) {
			int32_t value = $nc(this->slider)->getMinimum();
			while (value <= $nc(this->slider)->getMaximum()) {
				int32_t xPos = xPositionForValue(value);
				paintMajorTickForHorizSlider(g, tickBounds, xPos);
				if ($Integer::MAX_VALUE - $nc(this->slider)->getMajorTickSpacing() < value) {
					break;
				}
				value += $nc(this->slider)->getMajorTickSpacing();
			}
		}
		g->translate(0, -$nc(tickBounds)->y);
	} else {
		g->translate($nc(tickBounds)->x, 0);
		if ($nc(this->slider)->getMinorTickSpacing() > 0) {
			int32_t offset = 0;
			if (!$BasicGraphicsUtils::isLeftToRight(this->slider)) {
				offset = $nc(tickBounds)->width - tickBounds->width / 2;
				g->translate(offset, 0);
			}
			int32_t value = $nc(this->slider)->getMinimum();
			while (value <= $nc(this->slider)->getMaximum()) {
				int32_t yPos = yPositionForValue(value);
				paintMinorTickForVertSlider(g, tickBounds, yPos);
				if ($Integer::MAX_VALUE - $nc(this->slider)->getMinorTickSpacing() < value) {
					break;
				}
				value += $nc(this->slider)->getMinorTickSpacing();
			}
			if (!$BasicGraphicsUtils::isLeftToRight(this->slider)) {
				g->translate(-offset, 0);
			}
		}
		if ($nc(this->slider)->getMajorTickSpacing() > 0) {
			if (!$BasicGraphicsUtils::isLeftToRight(this->slider)) {
				g->translate(2, 0);
			}
			int32_t value = $nc(this->slider)->getMinimum();
			while (value <= $nc(this->slider)->getMaximum()) {
				int32_t yPos = yPositionForValue(value);
				paintMajorTickForVertSlider(g, tickBounds, yPos);
				if ($Integer::MAX_VALUE - $nc(this->slider)->getMajorTickSpacing() < value) {
					break;
				}
				value += $nc(this->slider)->getMajorTickSpacing();
			}
			if (!$BasicGraphicsUtils::isLeftToRight(this->slider)) {
				g->translate(-2, 0);
			}
		}
		g->translate(-$nc(tickBounds)->x, 0);
	}
}

void BasicSliderUI::paintMinorTickForHorizSlider($Graphics* g, $Rectangle* tickBounds, int32_t x) {
	$nc(g)->drawLine(x, 0, x, $nc(tickBounds)->height / 2 - 1);
}

void BasicSliderUI::paintMajorTickForHorizSlider($Graphics* g, $Rectangle* tickBounds, int32_t x) {
	$nc(g)->drawLine(x, 0, x, $nc(tickBounds)->height - 2);
}

void BasicSliderUI::paintMinorTickForVertSlider($Graphics* g, $Rectangle* tickBounds, int32_t y) {
	$nc(g)->drawLine(0, y, $nc(tickBounds)->width / 2 - 1, y);
}

void BasicSliderUI::paintMajorTickForVertSlider($Graphics* g, $Rectangle* tickBounds, int32_t y) {
	$nc(g)->drawLine(0, y, $nc(tickBounds)->width - 2, y);
}

void BasicSliderUI::paintLabels($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, labelBounds, this->labelRect);
	$var($Dictionary, dictionary, $nc(this->slider)->getLabelTable());
	if (dictionary != nullptr) {
		$var($Enumeration, keys, dictionary->keys());
		int32_t minValue = $nc(this->slider)->getMinimum();
		int32_t maxValue = $nc(this->slider)->getMaximum();
		bool enabled = $nc(this->slider)->isEnabled();
		while ($nc(keys)->hasMoreElements()) {
			$var($Integer, key, $cast($Integer, keys->nextElement()));
			int32_t value = $nc(key)->intValue();
			if (value >= minValue && value <= maxValue) {
				$var($JComponent, label, $cast($JComponent, dictionary->get(key)));
				$nc(label)->setEnabled(enabled);
				if ($instanceOf($JLabel, label)) {
					$var($Icon, icon, label->isEnabled() ? $nc(($cast($JLabel, label)))->getIcon() : $nc(($cast($JLabel, label)))->getDisabledIcon());
					if ($instanceOf($ImageIcon, icon)) {
						$nc($($Toolkit::getDefaultToolkit()))->checkImage($($nc(($cast($ImageIcon, icon)))->getImage()), -1, -1, this->slider);
					}
				}
				if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
					$nc(g)->translate(0, $nc(labelBounds)->y);
					paintHorizontalLabel(g, value, label);
					g->translate(0, -$nc(labelBounds)->y);
				} else {
					int32_t offset = 0;
					if (!$BasicGraphicsUtils::isLeftToRight(this->slider)) {
						offset = $nc(labelBounds)->width - $nc($(label->getPreferredSize()))->width;
					}
					$nc(g)->translate($nc(labelBounds)->x + offset, 0);
					paintVerticalLabel(g, value, label);
					g->translate(-$nc(labelBounds)->x - offset, 0);
				}
			}
		}
	}
}

void BasicSliderUI::paintHorizontalLabel($Graphics* g, int32_t value, $Component* label) {
	int32_t labelCenter = xPositionForValue(value);
	int32_t labelLeft = labelCenter - ($nc($($nc(label)->getPreferredSize()))->width / 2);
	$nc(g)->translate(labelLeft, 0);
	label->paint(g);
	g->translate(-labelLeft, 0);
}

void BasicSliderUI::paintVerticalLabel($Graphics* g, int32_t value, $Component* label) {
	int32_t labelCenter = yPositionForValue(value);
	int32_t labelTop = labelCenter - ($nc($($nc(label)->getPreferredSize()))->height / 2);
	$nc(g)->translate(0, labelTop);
	label->paint(g);
	g->translate(0, -labelTop);
}

void BasicSliderUI::paintThumb($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($Rectangle, knobBounds, this->thumbRect);
	int32_t w = $nc(knobBounds)->width;
	int32_t h = knobBounds->height;
	$nc(g)->translate(knobBounds->x, knobBounds->y);
	$var($Rectangle, clip, g->getClipBounds());
	g->clipRect(0, 0, w, h);
	if ($nc(this->slider)->isEnabled()) {
		g->setColor($($nc(this->slider)->getBackground()));
	} else {
		g->setColor($($nc($($nc(this->slider)->getBackground()))->darker()));
	}
	$var($Boolean, paintThumbArrowShape, $cast($Boolean, $nc(this->slider)->getClientProperty("Slider.paintThumbArrowShape"_s)));
	$init($Boolean);
	if ((!$nc(this->slider)->getPaintTicks() && paintThumbArrowShape == nullptr) || paintThumbArrowShape == $Boolean::FALSE) {
		g->fillRect(0, 0, w, h);
		$init($Color);
		g->setColor($Color::black);
		g->drawLine(0, h - 1, w - 1, h - 1);
		g->drawLine(w - 1, 0, w - 1, h - 1);
		g->setColor(this->highlightColor);
		g->drawLine(0, 0, 0, h - 2);
		g->drawLine(1, 0, w - 2, 0);
		g->setColor(this->shadowColor);
		g->drawLine(1, h - 2, w - 2, h - 2);
		g->drawLine(w - 2, 1, w - 2, h - 3);
	} else if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		int32_t cw = w / 2;
		g->fillRect(1, 1, w - 3, h - 1 - cw);
		$var($Polygon, p, $new($Polygon));
		p->addPoint(1, h - cw);
		p->addPoint(cw - 1, h - 1);
		p->addPoint(w - 2, h - 1 - cw);
		g->fillPolygon(p);
		g->setColor(this->highlightColor);
		g->drawLine(0, 0, w - 2, 0);
		g->drawLine(0, 1, 0, h - 1 - cw);
		g->drawLine(0, h - cw, cw - 1, h - 1);
		$init($Color);
		g->setColor($Color::black);
		g->drawLine(w - 1, 0, w - 1, h - 2 - cw);
		g->drawLine(w - 1, h - 1 - cw, w - 1 - cw, h - 1);
		g->setColor(this->shadowColor);
		g->drawLine(w - 2, 1, w - 2, h - 2 - cw);
		g->drawLine(w - 2, h - 1 - cw, w - 1 - cw, h - 2);
	} else {
		int32_t cw = h / 2;
		if ($BasicGraphicsUtils::isLeftToRight(this->slider)) {
			g->fillRect(1, 1, w - 1 - cw, h - 3);
			$var($Polygon, p, $new($Polygon));
			p->addPoint(w - cw - 1, 0);
			p->addPoint(w - 1, cw);
			p->addPoint(w - 1 - cw, h - 2);
			g->fillPolygon(p);
			g->setColor(this->highlightColor);
			g->drawLine(0, 0, 0, h - 2);
			g->drawLine(1, 0, w - 1 - cw, 0);
			g->drawLine(w - cw - 1, 0, w - 1, cw);
			$init($Color);
			g->setColor($Color::black);
			g->drawLine(0, h - 1, w - 2 - cw, h - 1);
			g->drawLine(w - 1 - cw, h - 1, w - 1, h - 1 - cw);
			g->setColor(this->shadowColor);
			g->drawLine(1, h - 2, w - 2 - cw, h - 2);
			g->drawLine(w - 1 - cw, h - 2, w - 2, h - cw - 1);
		} else {
			g->fillRect(5, 1, w - 1 - cw, h - 3);
			$var($Polygon, p, $new($Polygon));
			p->addPoint(cw, 0);
			p->addPoint(0, cw);
			p->addPoint(cw, h - 2);
			g->fillPolygon(p);
			g->setColor(this->highlightColor);
			g->drawLine(cw - 1, 0, w - 2, 0);
			g->drawLine(0, cw, cw, 0);
			$init($Color);
			g->setColor($Color::black);
			g->drawLine(0, h - 1 - cw, cw, h - 1);
			g->drawLine(cw, h - 1, w - 1, h - 1);
			g->setColor(this->shadowColor);
			g->drawLine(cw, h - 2, w - 2, h - 2);
			g->drawLine(w - 1, 1, w - 1, h - 2);
		}
	}
	g->setClip(clip);
	g->translate(-knobBounds->x, -knobBounds->y);
}

void BasicSliderUI::setThumbLocation(int32_t x, int32_t y) {
	$nc(BasicSliderUI::unionRect)->setBounds(this->thumbRect);
	$nc(this->thumbRect)->setLocation(x, y);
	$SwingUtilities::computeUnion($nc(this->thumbRect)->x, $nc(this->thumbRect)->y, $nc(this->thumbRect)->width, $nc(this->thumbRect)->height, BasicSliderUI::unionRect);
	$nc(this->slider)->repaint($nc(BasicSliderUI::unionRect)->x, $nc(BasicSliderUI::unionRect)->y, $nc(BasicSliderUI::unionRect)->width, $nc(BasicSliderUI::unionRect)->height);
}

void BasicSliderUI::scrollByBlock(int32_t direction) {
	$synchronized(this->slider) {
		int32_t var$0 = $nc(this->slider)->getMaximum();
		int32_t blockIncrement = (var$0 - $nc(this->slider)->getMinimum()) / 10;
		if (blockIncrement == 0) {
			blockIncrement = 1;
		}
		int32_t tickSpacing = getTickSpacing();
		if ($nc(this->slider)->getSnapToTicks()) {
			if (blockIncrement < tickSpacing) {
				blockIncrement = tickSpacing;
			}
		} else if (tickSpacing > 0) {
			blockIncrement = tickSpacing;
		}
		int32_t delta = blockIncrement * ((direction > 0) ? BasicSliderUI::POSITIVE_SCROLL : BasicSliderUI::NEGATIVE_SCROLL);
		$nc(this->slider)->setValue($nc(this->slider)->getValue() + delta);
	}
}

void BasicSliderUI::scrollByUnit(int32_t direction) {
	$synchronized(this->slider) {
		int32_t delta = ((direction > 0) ? BasicSliderUI::POSITIVE_SCROLL : BasicSliderUI::NEGATIVE_SCROLL);
		if ($nc(this->slider)->getSnapToTicks()) {
			delta *= getTickSpacing();
		}
		$nc(this->slider)->setValue($nc(this->slider)->getValue() + delta);
	}
}

void BasicSliderUI::scrollDueToClickInTrack(int32_t dir) {
	scrollByBlock(dir);
}

int32_t BasicSliderUI::xPositionForValue(int32_t value) {
	int32_t min = $nc(this->slider)->getMinimum();
	int32_t max = $nc(this->slider)->getMaximum();
	int32_t trackLength = $nc(this->trackRect)->width;
	double valueRange = (double)max - (double)min;
	double pixelsPerValue = (double)trackLength / valueRange;
	int32_t trackLeft = $nc(this->trackRect)->x;
	int32_t trackRight = $nc(this->trackRect)->x + ($nc(this->trackRect)->width - 1);
	int32_t xPosition = 0;
	if (!drawInverted()) {
		xPosition = trackLeft;
		xPosition += $Math::round(pixelsPerValue * ((double)value - min));
	} else {
		xPosition = trackRight;
		xPosition -= $Math::round(pixelsPerValue * ((double)value - min));
	}
	xPosition = $Math::max(trackLeft, xPosition);
	xPosition = $Math::min(trackRight, xPosition);
	return xPosition;
}

int32_t BasicSliderUI::yPositionForValue(int32_t value) {
	return yPositionForValue(value, $nc(this->trackRect)->y, $nc(this->trackRect)->height);
}

int32_t BasicSliderUI::yPositionForValue(int32_t value, int32_t trackY, int32_t trackHeight) {
	int32_t min = $nc(this->slider)->getMinimum();
	int32_t max = $nc(this->slider)->getMaximum();
	double valueRange = (double)max - (double)min;
	double pixelsPerValue = (double)trackHeight / valueRange;
	int32_t trackBottom = trackY + (trackHeight - 1);
	int32_t yPosition = 0;
	if (!drawInverted()) {
		yPosition = trackY;
		yPosition += $Math::round(pixelsPerValue * ((double)max - value));
	} else {
		yPosition = trackY;
		yPosition += $Math::round(pixelsPerValue * ((double)value - min));
	}
	yPosition = $Math::max(trackY, yPosition);
	yPosition = $Math::min(trackBottom, yPosition);
	return yPosition;
}

int32_t BasicSliderUI::valueForYPosition(int32_t yPos) {
	int32_t value = 0;
	int32_t minValue = $nc(this->slider)->getMinimum();
	int32_t maxValue = $nc(this->slider)->getMaximum();
	int32_t trackLength = $nc(this->trackRect)->height;
	int32_t trackTop = $nc(this->trackRect)->y;
	int32_t trackBottom = $nc(this->trackRect)->y + ($nc(this->trackRect)->height - 1);
	if (yPos <= trackTop) {
		value = drawInverted() ? minValue : maxValue;
	} else if (yPos >= trackBottom) {
		value = drawInverted() ? maxValue : minValue;
	} else {
		int32_t distanceFromTrackTop = yPos - trackTop;
		double valueRange = (double)maxValue - (double)minValue;
		double valuePerPixel = valueRange / (double)trackLength;
		int32_t valueFromTrackTop = (int32_t)$Math::round(distanceFromTrackTop * valuePerPixel);
		value = drawInverted() ? minValue + valueFromTrackTop : maxValue - valueFromTrackTop;
	}
	return value;
}

int32_t BasicSliderUI::valueForXPosition(int32_t xPos) {
	int32_t value = 0;
	int32_t minValue = $nc(this->slider)->getMinimum();
	int32_t maxValue = $nc(this->slider)->getMaximum();
	int32_t trackLength = $nc(this->trackRect)->width;
	int32_t trackLeft = $nc(this->trackRect)->x;
	int32_t trackRight = $nc(this->trackRect)->x + ($nc(this->trackRect)->width - 1);
	if (xPos <= trackLeft) {
		value = drawInverted() ? maxValue : minValue;
	} else if (xPos >= trackRight) {
		value = drawInverted() ? minValue : maxValue;
	} else {
		int32_t distanceFromTrackLeft = xPos - trackLeft;
		double valueRange = (double)maxValue - (double)minValue;
		double valuePerPixel = valueRange / (double)trackLength;
		int32_t valueFromTrackLeft = (int32_t)$Math::round(distanceFromTrackLeft * valuePerPixel);
		value = drawInverted() ? maxValue - valueFromTrackLeft : minValue + valueFromTrackLeft;
	}
	return value;
}

void clinit$BasicSliderUI($Class* class$) {
	$assignStatic(BasicSliderUI::SHARED_ACTION, $new($BasicSliderUI$Actions));
	$assignStatic(BasicSliderUI::unionRect, $new($Rectangle));
}

BasicSliderUI::BasicSliderUI() {
}

$Class* BasicSliderUI::load$($String* name, bool initialize) {
	$loadClass(BasicSliderUI, name, initialize, &_BasicSliderUI_ClassInfo_, clinit$BasicSliderUI, allocate$BasicSliderUI);
	return class$;
}

$Class* BasicSliderUI::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax