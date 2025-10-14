#include <javax/swing/plaf/synth/SynthScrollBarUI.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/ScrollBarUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/basic/BasicScrollBarUI.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthArrowButton.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthScrollBarUI$1.h>
#include <javax/swing/plaf/synth/SynthScrollBarUI$2.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <jcpp.h>

#undef EAST
#undef ENABLED
#undef HORIZONTAL
#undef MOUSE_OVER
#undef NORTH
#undef NO_HIGHLIGHT
#undef PRESSED
#undef SCROLL_BAR_THUMB
#undef SCROLL_BAR_TRACK
#undef SOUTH
#undef VERTICAL
#undef WEST

using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $LayoutManager = ::java::awt::LayoutManager;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $JButton = ::javax::swing::JButton;
using $JComponent = ::javax::swing::JComponent;
using $JScrollBar = ::javax::swing::JScrollBar;
using $SwingConstants = ::javax::swing::SwingConstants;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ScrollBarUI = ::javax::swing::plaf::ScrollBarUI;
using $UIResource = ::javax::swing::plaf::UIResource;
using $BasicScrollBarUI = ::javax::swing::plaf::basic::BasicScrollBarUI;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthArrowButton = ::javax::swing::plaf::synth::SynthArrowButton;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthScrollBarUI$1 = ::javax::swing::plaf::synth::SynthScrollBarUI$1;
using $SynthScrollBarUI$2 = ::javax::swing::plaf::synth::SynthScrollBarUI$2;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthScrollBarUI_FieldInfo_[] = {
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthScrollBarUI, style)},
	{"thumbStyle", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthScrollBarUI, thumbStyle)},
	{"trackStyle", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthScrollBarUI, trackStyle)},
	{"validMinimumThumbSize", "Z", nullptr, $PRIVATE, $field(SynthScrollBarUI, validMinimumThumbSize)},
	{}
};

$MethodInfo _SynthScrollBarUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SynthScrollBarUI::*)()>(&SynthScrollBarUI::init$))},
	{"access$000", "(Ljavax/swing/plaf/synth/SynthScrollBarUI;)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(SynthScrollBarUI*)>(&SynthScrollBarUI::access$000))},
	{"access$100", "(Ljavax/swing/plaf/synth/SynthScrollBarUI;)Ljavax/swing/JScrollBar;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JScrollBar*(*)(SynthScrollBarUI*)>(&SynthScrollBarUI::access$100))},
	{"access$200", "(Ljavax/swing/plaf/synth/SynthScrollBarUI;)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(SynthScrollBarUI*)>(&SynthScrollBarUI::access$200))},
	{"access$300", "(Ljavax/swing/plaf/synth/SynthScrollBarUI;)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(SynthScrollBarUI*)>(&SynthScrollBarUI::access$300))},
	{"access$400", "(Ljavax/swing/plaf/synth/SynthScrollBarUI;)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(SynthScrollBarUI*)>(&SynthScrollBarUI::access$400))},
	{"access$500", "(Ljavax/swing/plaf/synth/SynthScrollBarUI;)Ljavax/swing/JScrollBar;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JScrollBar*(*)(SynthScrollBarUI*)>(&SynthScrollBarUI::access$500))},
	{"access$600", "(Ljavax/swing/plaf/synth/SynthScrollBarUI;)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(SynthScrollBarUI*)>(&SynthScrollBarUI::access$600))},
	{"access$700", "(Ljavax/swing/plaf/synth/SynthScrollBarUI;)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(SynthScrollBarUI*)>(&SynthScrollBarUI::access$700))},
	{"access$800", "(Ljavax/swing/plaf/synth/SynthScrollBarUI;)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(SynthScrollBarUI*)>(&SynthScrollBarUI::access$800))},
	{"access$900", "(Ljavax/swing/plaf/synth/SynthScrollBarUI;)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(SynthScrollBarUI*)>(&SynthScrollBarUI::access$900))},
	{"configureScrollBarColors", "()V", nullptr, $PROTECTED},
	{"createDecreaseButton", "(I)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createIncreaseButton", "(I)Ljavax/swing/JButton;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthScrollBarUI::createUI))},
	{"getComponentState", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthScrollBarUI::*)($JComponent*,$Region*)>(&SynthScrollBarUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthScrollBarUI::*)($JComponent*,int32_t)>(&SynthScrollBarUI::getContext))},
	{"getContext", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthScrollBarUI::*)($JComponent*,$Region*)>(&SynthScrollBarUI::getContext))},
	{"getContext", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthScrollBarUI::*)($JComponent*,$Region*,int32_t)>(&SynthScrollBarUI::getContext))},
	{"getMinimumThumbSize", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getSupportsAbsolutePositioning", "()Z", nullptr, $PUBLIC},
	{"installDefaults", "()V", nullptr, $PROTECTED},
	{"installListeners", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintThumb", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintTrack", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"setThumbRollover", "(Z)V", nullptr, $PROTECTED},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "()V", nullptr, $PROTECTED},
	{"uninstallListeners", "()V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateButtonDirections", "()V", nullptr, $PRIVATE, $method(static_cast<void(SynthScrollBarUI::*)()>(&SynthScrollBarUI::updateButtonDirections))},
	{"updateStyle", "(Ljavax/swing/JScrollBar;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthScrollBarUI::*)($JScrollBar*)>(&SynthScrollBarUI::updateStyle))},
	{}
};

$InnerClassInfo _SynthScrollBarUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthScrollBarUI$2", nullptr, nullptr, 0},
	{"javax.swing.plaf.synth.SynthScrollBarUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthScrollBarUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthScrollBarUI",
	"javax.swing.plaf.basic.BasicScrollBarUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthScrollBarUI_FieldInfo_,
	_SynthScrollBarUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthScrollBarUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthScrollBarUI$2,javax.swing.plaf.synth.SynthScrollBarUI$1"
};

$Object* allocate$SynthScrollBarUI($Class* clazz) {
	return $of($alloc(SynthScrollBarUI));
}

int32_t SynthScrollBarUI::hashCode() {
	 return this->$BasicScrollBarUI::hashCode();
}

bool SynthScrollBarUI::equals(Object$* arg0) {
	 return this->$BasicScrollBarUI::equals(arg0);
}

$Object* SynthScrollBarUI::clone() {
	 return this->$BasicScrollBarUI::clone();
}

$String* SynthScrollBarUI::toString() {
	 return this->$BasicScrollBarUI::toString();
}

void SynthScrollBarUI::finalize() {
	this->$BasicScrollBarUI::finalize();
}

int32_t SynthScrollBarUI::access$900(SynthScrollBarUI* x0) {
	$init(SynthScrollBarUI);
	return $nc(x0)->incrGap;
}

int32_t SynthScrollBarUI::access$800(SynthScrollBarUI* x0) {
	$init(SynthScrollBarUI);
	return $nc(x0)->incrGap;
}

int32_t SynthScrollBarUI::access$700(SynthScrollBarUI* x0) {
	$init(SynthScrollBarUI);
	return $nc(x0)->incrGap;
}

int32_t SynthScrollBarUI::access$600(SynthScrollBarUI* x0) {
	$init(SynthScrollBarUI);
	return $nc(x0)->incrGap;
}

$JScrollBar* SynthScrollBarUI::access$500(SynthScrollBarUI* x0) {
	$init(SynthScrollBarUI);
	return $nc(x0)->scrollbar;
}

int32_t SynthScrollBarUI::access$400(SynthScrollBarUI* x0) {
	$init(SynthScrollBarUI);
	return $nc(x0)->incrGap;
}

int32_t SynthScrollBarUI::access$300(SynthScrollBarUI* x0) {
	$init(SynthScrollBarUI);
	return $nc(x0)->decrGap;
}

int32_t SynthScrollBarUI::access$200(SynthScrollBarUI* x0) {
	$init(SynthScrollBarUI);
	return $nc(x0)->decrGap;
}

$JScrollBar* SynthScrollBarUI::access$100(SynthScrollBarUI* x0) {
	$init(SynthScrollBarUI);
	return $nc(x0)->scrollbar;
}

int32_t SynthScrollBarUI::access$000(SynthScrollBarUI* x0) {
	$init(SynthScrollBarUI);
	return $nc(x0)->decrGap;
}

void SynthScrollBarUI::init$() {
	$BasicScrollBarUI::init$();
}

$ComponentUI* SynthScrollBarUI::createUI($JComponent* c) {
	$init(SynthScrollBarUI);
	return $new(SynthScrollBarUI);
}

void SynthScrollBarUI::installDefaults() {
	$BasicScrollBarUI::installDefaults();
	this->trackHighlight = $BasicScrollBarUI::NO_HIGHLIGHT;
	bool var$0 = $nc(this->scrollbar)->getLayout() == nullptr;
	if (var$0 || ($instanceOf($UIResource, $($nc(this->scrollbar)->getLayout())))) {
		$nc(this->scrollbar)->setLayout(this);
	}
	configureScrollBarColors();
	updateStyle(this->scrollbar);
}

void SynthScrollBarUI::configureScrollBarColors() {
}

void SynthScrollBarUI::updateStyle($JScrollBar* c) {
	$var($SynthStyle, oldStyle, this->style);
	$var($SynthContext, context, getContext(static_cast<$JComponent*>(c), $SynthConstants::ENABLED));
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		this->scrollBarWidth = $nc(this->style)->getInt(context, "ScrollBar.thumbHeight"_s, 14);
		$set(this, minimumThumbSize, $cast($Dimension, $nc(this->style)->get(context, "ScrollBar.minimumThumbSize"_s)));
		if (this->minimumThumbSize == nullptr) {
			$set(this, minimumThumbSize, $new($Dimension));
			this->validMinimumThumbSize = false;
		} else {
			this->validMinimumThumbSize = true;
		}
		$set(this, maximumThumbSize, $cast($Dimension, $nc(this->style)->get(context, "ScrollBar.maximumThumbSize"_s)));
		if (this->maximumThumbSize == nullptr) {
			$set(this, maximumThumbSize, $new($Dimension, 4096, 4097));
		}
		this->incrGap = $nc(this->style)->getInt(context, "ScrollBar.incrementButtonGap"_s, 0);
		this->decrGap = $nc(this->style)->getInt(context, "ScrollBar.decrementButtonGap"_s, 0);
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
		if (oldStyle != nullptr) {
			uninstallKeyboardActions();
			installKeyboardActions();
		}
	}
	$init($Region);
	$assign(context, getContext(c, $Region::SCROLL_BAR_TRACK, $SynthConstants::ENABLED));
	$set(this, trackStyle, $SynthLookAndFeel::updateStyle(context, this));
	$assign(context, getContext(c, $Region::SCROLL_BAR_THUMB, $SynthConstants::ENABLED));
	$set(this, thumbStyle, $SynthLookAndFeel::updateStyle(context, this));
}

void SynthScrollBarUI::installListeners() {
	$BasicScrollBarUI::installListeners();
	$nc(this->scrollbar)->addPropertyChangeListener(this);
}

void SynthScrollBarUI::uninstallListeners() {
	$BasicScrollBarUI::uninstallListeners();
	$nc(this->scrollbar)->removePropertyChangeListener(this);
}

void SynthScrollBarUI::uninstallDefaults() {
	$var($SynthContext, context, getContext(static_cast<$JComponent*>(this->scrollbar), $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	$init($Region);
	$assign(context, getContext(this->scrollbar, $Region::SCROLL_BAR_TRACK, $SynthConstants::ENABLED));
	$nc(this->trackStyle)->uninstallDefaults(context);
	$set(this, trackStyle, nullptr);
	$assign(context, getContext(this->scrollbar, $Region::SCROLL_BAR_THUMB, $SynthConstants::ENABLED));
	$nc(this->thumbStyle)->uninstallDefaults(context);
	$set(this, thumbStyle, nullptr);
	$BasicScrollBarUI::uninstallDefaults();
}

$SynthContext* SynthScrollBarUI::getContext($JComponent* c) {
	return getContext(c, $SynthLookAndFeel::getComponentState(c));
}

$SynthContext* SynthScrollBarUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

$SynthContext* SynthScrollBarUI::getContext($JComponent* c, $Region* region) {
	return getContext(c, region, getComponentState(c, region));
}

$SynthContext* SynthScrollBarUI::getContext($JComponent* c, $Region* region, int32_t state) {
	$var($SynthStyle, style, this->trackStyle);
	$init($Region);
	if (region == $Region::SCROLL_BAR_THUMB) {
		$assign(style, this->thumbStyle);
	}
	return $SynthContext::getContext(c, region, style, state);
}

int32_t SynthScrollBarUI::getComponentState($JComponent* c, $Region* region) {
	$init($Region);
	if (region == $Region::SCROLL_BAR_THUMB && $nc(c)->isEnabled()) {
		if (this->isDragging) {
			return $SynthConstants::PRESSED;
		} else if (isThumbRollover()) {
			return $SynthConstants::MOUSE_OVER;
		}
	}
	return $SynthLookAndFeel::getComponentState(c);
}

bool SynthScrollBarUI::getSupportsAbsolutePositioning() {
	$var($SynthContext, context, getContext(this->scrollbar));
	bool value = $nc(this->style)->getBoolean(context, "ScrollBar.allowsAbsolutePositioning"_s, false);
	return value;
}

void SynthScrollBarUI::update($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	int32_t var$3 = c->getHeight();
	$nc($($nc(context)->getPainter()))->paintScrollBarBackground(var$0, var$1, 0, 0, var$2, var$3, $nc(this->scrollbar)->getOrientation());
	paint(context, g);
}

void SynthScrollBarUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthScrollBarUI::paint($SynthContext* context, $Graphics* g) {
	$init($Region);
	$var($SynthContext, subcontext, getContext(static_cast<$JComponent*>(this->scrollbar), $Region::SCROLL_BAR_TRACK));
	paintTrack(subcontext, g, $(getTrackBounds()));
	$assign(subcontext, getContext(static_cast<$JComponent*>(this->scrollbar), $Region::SCROLL_BAR_THUMB));
	paintThumb(subcontext, g, $(getThumbBounds()));
}

void SynthScrollBarUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintScrollBarBorder(context, g, x, y, w, h, $nc(this->scrollbar)->getOrientation());
}

void SynthScrollBarUI::paintTrack($SynthContext* context, $Graphics* g, $Rectangle* trackBounds) {
	$SynthLookAndFeel::updateSubregion(context, g, trackBounds);
	$nc($($nc(context)->getPainter()))->paintScrollBarTrackBackground(context, g, $nc(trackBounds)->x, trackBounds->y, trackBounds->width, trackBounds->height, $nc(this->scrollbar)->getOrientation());
	$nc($(context->getPainter()))->paintScrollBarTrackBorder(context, g, $nc(trackBounds)->x, trackBounds->y, trackBounds->width, trackBounds->height, $nc(this->scrollbar)->getOrientation());
}

void SynthScrollBarUI::paintThumb($SynthContext* context, $Graphics* g, $Rectangle* thumbBounds) {
	$SynthLookAndFeel::updateSubregion(context, g, thumbBounds);
	int32_t orientation = $nc(this->scrollbar)->getOrientation();
	$nc($($nc(context)->getPainter()))->paintScrollBarThumbBackground(context, g, $nc(thumbBounds)->x, thumbBounds->y, thumbBounds->width, thumbBounds->height, orientation);
	$nc($(context->getPainter()))->paintScrollBarThumbBorder(context, g, $nc(thumbBounds)->x, thumbBounds->y, thumbBounds->width, thumbBounds->height, orientation);
}

$Dimension* SynthScrollBarUI::getPreferredSize($JComponent* c) {
	$var($Insets, insets, $nc(c)->getInsets());
	return ($nc(this->scrollbar)->getOrientation() == $JScrollBar::VERTICAL) ? $new($Dimension, this->scrollBarWidth + $nc(insets)->left + insets->right, 48) : $new($Dimension, 48, this->scrollBarWidth + $nc(insets)->top + insets->bottom);
}

$Dimension* SynthScrollBarUI::getMinimumThumbSize() {
	if (!this->validMinimumThumbSize) {
		if ($nc(this->scrollbar)->getOrientation() == $JScrollBar::VERTICAL) {
			$nc(this->minimumThumbSize)->width = this->scrollBarWidth;
			$nc(this->minimumThumbSize)->height = 7;
		} else {
			$nc(this->minimumThumbSize)->width = 7;
			$nc(this->minimumThumbSize)->height = this->scrollBarWidth;
		}
	}
	return this->minimumThumbSize;
}

$JButton* SynthScrollBarUI::createDecreaseButton(int32_t orientation) {
	$var($SynthArrowButton, synthArrowButton, $new($SynthScrollBarUI$1, this, orientation));
	synthArrowButton->setName("ScrollBar.button"_s);
	return synthArrowButton;
}

$JButton* SynthScrollBarUI::createIncreaseButton(int32_t orientation) {
	$var($SynthArrowButton, synthArrowButton, $new($SynthScrollBarUI$2, this, orientation));
	synthArrowButton->setName("ScrollBar.button"_s);
	return synthArrowButton;
}

void SynthScrollBarUI::setThumbRollover(bool active) {
	if (isThumbRollover() != active) {
		$nc(this->scrollbar)->repaint($(getThumbBounds()));
		$BasicScrollBarUI::setThumbRollover(active);
	}
}

void SynthScrollBarUI::updateButtonDirections() {
	int32_t orient = $nc(this->scrollbar)->getOrientation();
	if ($nc($($nc(this->scrollbar)->getComponentOrientation()))->isLeftToRight()) {
		$nc(($cast($SynthArrowButton, this->incrButton)))->setDirection(orient == $SwingConstants::HORIZONTAL ? $SwingConstants::EAST : $SwingConstants::SOUTH);
		$nc(($cast($SynthArrowButton, this->decrButton)))->setDirection(orient == $SwingConstants::HORIZONTAL ? $SwingConstants::WEST : $SwingConstants::NORTH);
	} else {
		$nc(($cast($SynthArrowButton, this->incrButton)))->setDirection(orient == $SwingConstants::HORIZONTAL ? $SwingConstants::WEST : $SwingConstants::SOUTH);
		$nc(($cast($SynthArrowButton, this->decrButton)))->setDirection(orient == $SwingConstants::HORIZONTAL ? $SwingConstants::EAST : $SwingConstants::NORTH);
	}
}

void SynthScrollBarUI::propertyChange($PropertyChangeEvent* e) {
	$var($String, propertyName, $nc(e)->getPropertyName());
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle($cast($JScrollBar, $(e->getSource())));
	}
	if ("orientation"_s == propertyName) {
		updateButtonDirections();
	} else if ("componentOrientation"_s == propertyName) {
		updateButtonDirections();
	}
}

SynthScrollBarUI::SynthScrollBarUI() {
}

$Class* SynthScrollBarUI::load$($String* name, bool initialize) {
	$loadClass(SynthScrollBarUI, name, initialize, &_SynthScrollBarUI_ClassInfo_, allocate$SynthScrollBarUI);
	return class$;
}

$Class* SynthScrollBarUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax