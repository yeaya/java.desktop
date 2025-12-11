#include <javax/swing/plaf/synth/SynthSliderUI.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Font.h>
#include <java/awt/FontMetrics.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/lang/Math.h>
#include <java/util/Dictionary.h>
#include <java/util/Enumeration.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SliderUI.h>
#include <javax/swing/plaf/basic/BasicSliderUI$TrackListener.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthSliderUI$SynthTrackListener.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

#undef ENABLED
#undef FOCUSED
#undef HORIZONTAL
#undef MAX_VALUE
#undef MIN_VALUE
#undef MOUSE_OVER
#undef PRESSED
#undef SLIDER_THUMB
#undef SLIDER_TRACK
#undef TEXT_FOREGROUND
#undef VERTICAL

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Font = ::java::awt::Font;
using $FontMetrics = ::java::awt::FontMetrics;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Dictionary = ::java::util::Dictionary;
using $Enumeration = ::java::util::Enumeration;
using $JComponent = ::javax::swing::JComponent;
using $JSlider = ::javax::swing::JSlider;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SliderUI = ::javax::swing::plaf::SliderUI;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $BasicSliderUI$TrackListener = ::javax::swing::plaf::basic::BasicSliderUI$TrackListener;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthPainter = ::javax::swing::plaf::synth::SynthPainter;
using $SynthSliderUI$SynthTrackListener = ::javax::swing::plaf::synth::SynthSliderUI$SynthTrackListener;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;
using $SwingUtilities2 = ::sun::swing::SwingUtilities2;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthSliderUI_FieldInfo_[] = {
	{"valueRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE, $field(SynthSliderUI, valueRect)},
	{"paintValue", "Z", nullptr, $PRIVATE, $field(SynthSliderUI, paintValue)},
	{"lastSize", "Ljava/awt/Dimension;", nullptr, $PRIVATE, $field(SynthSliderUI, lastSize)},
	{"trackHeight", "I", nullptr, $PRIVATE, $field(SynthSliderUI, trackHeight)},
	{"trackBorder", "I", nullptr, $PRIVATE, $field(SynthSliderUI, trackBorder)},
	{"thumbWidth", "I", nullptr, $PRIVATE, $field(SynthSliderUI, thumbWidth)},
	{"thumbHeight", "I", nullptr, $PRIVATE, $field(SynthSliderUI, thumbHeight)},
	{"style", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthSliderUI, style)},
	{"sliderTrackStyle", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthSliderUI, sliderTrackStyle)},
	{"sliderThumbStyle", "Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PRIVATE, $field(SynthSliderUI, sliderThumbStyle)},
	{"thumbActive", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(SynthSliderUI, thumbActive)},
	{"thumbPressed", "Z", nullptr, $PRIVATE | $TRANSIENT, $field(SynthSliderUI, thumbPressed)},
	{}
};

$MethodInfo _SynthSliderUI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED, $method(static_cast<void(SynthSliderUI::*)($JSlider*)>(&SynthSliderUI::init$))},
	{"access$000", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(SynthSliderUI*)>(&SynthSliderUI::access$000))},
	{"access$100", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(SynthSliderUI*)>(&SynthSliderUI::access$100))},
	{"access$1000", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(SynthSliderUI*)>(&SynthSliderUI::access$1000))},
	{"access$1100", "(Ljavax/swing/plaf/synth/SynthSliderUI;I)I", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<int32_t(*)(SynthSliderUI*,int32_t)>(&SynthSliderUI::access$1100))},
	{"access$1200", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Z", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(SynthSliderUI*)>(&SynthSliderUI::access$1200))},
	{"access$1300", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(SynthSliderUI*)>(&SynthSliderUI::access$1300))},
	{"access$1400", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(SynthSliderUI*)>(&SynthSliderUI::access$1400))},
	{"access$1500", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(SynthSliderUI*)>(&SynthSliderUI::access$1500))},
	{"access$1600", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(SynthSliderUI*)>(&SynthSliderUI::access$1600))},
	{"access$1700", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(SynthSliderUI*)>(&SynthSliderUI::access$1700))},
	{"access$1800", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(SynthSliderUI*)>(&SynthSliderUI::access$1800))},
	{"access$1900", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(SynthSliderUI*)>(&SynthSliderUI::access$1900))},
	{"access$200", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Z", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(SynthSliderUI*)>(&SynthSliderUI::access$200))},
	{"access$2000", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(SynthSliderUI*)>(&SynthSliderUI::access$2000))},
	{"access$2100", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Z", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<bool(*)(SynthSliderUI*)>(&SynthSliderUI::access$2100))},
	{"access$2200", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(SynthSliderUI*)>(&SynthSliderUI::access$2200))},
	{"access$2300", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(SynthSliderUI*)>(&SynthSliderUI::access$2300))},
	{"access$2400", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(SynthSliderUI*)>(&SynthSliderUI::access$2400))},
	{"access$300", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(SynthSliderUI*)>(&SynthSliderUI::access$300))},
	{"access$400", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(SynthSliderUI*)>(&SynthSliderUI::access$400))},
	{"access$500", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(SynthSliderUI*)>(&SynthSliderUI::access$500))},
	{"access$600", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(SynthSliderUI*)>(&SynthSliderUI::access$600))},
	{"access$700", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(SynthSliderUI*)>(&SynthSliderUI::access$700))},
	{"access$800", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(SynthSliderUI*)>(&SynthSliderUI::access$800))},
	{"access$900", "(Ljavax/swing/plaf/synth/SynthSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(SynthSliderUI*)>(&SynthSliderUI::access$900))},
	{"calculateGeometry", "()V", nullptr, $PROTECTED},
	{"calculateThumbLocation", "()V", nullptr, $PROTECTED},
	{"createTrackListener", "(Ljavax/swing/JSlider;)Ljavax/swing/plaf/basic/BasicSliderUI$TrackListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&SynthSliderUI::createUI))},
	{"getBaseline", "(Ljavax/swing/JComponent;II)I", nullptr, $PUBLIC},
	{"getComponentState", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthSliderUI::*)($JComponent*,$Region*)>(&SynthSliderUI::getComponentState))},
	{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC},
	{"getContext", "(Ljavax/swing/JComponent;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthSliderUI::*)($JComponent*,int32_t)>(&SynthSliderUI::getContext))},
	{"getContext", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthSliderUI::*)($JComponent*,$Region*)>(&SynthSliderUI::getContext))},
	{"getContext", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;I)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PRIVATE, $method(static_cast<$SynthContext*(SynthSliderUI::*)($JComponent*,$Region*,int32_t)>(&SynthSliderUI::getContext))},
	{"getMinimumSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getPadForLabel", "(I)I", nullptr, $PRIVATE, $method(static_cast<int32_t(SynthSliderUI::*)(int32_t)>(&SynthSliderUI::getPadForLabel))},
	{"getPreferredSize", "(Ljavax/swing/JComponent;)Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{"getThumbSize", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"installDefaults", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{"installListeners", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{"layout", "()V", nullptr, $PROTECTED},
	{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"paint", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;)V", nullptr, $PROTECTED},
	{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{"paintThumb", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"paintTrack", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $PROTECTED},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{"recalculateIfInsetsChanged", "()V", nullptr, $PROTECTED},
	{"setThumbActive", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(SynthSliderUI::*)(bool)>(&SynthSliderUI::setThumbActive))},
	{"setThumbLocation", "(II)V", nullptr, $PUBLIC},
	{"setThumbPressed", "(Z)V", nullptr, $PRIVATE, $method(static_cast<void(SynthSliderUI::*)(bool)>(&SynthSliderUI::setThumbPressed))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"uninstallDefaults", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{"uninstallListeners", "(Ljavax/swing/JSlider;)V", nullptr, $PROTECTED},
	{"update", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"updateStyle", "(Ljavax/swing/JSlider;)V", nullptr, $PRIVATE, $method(static_cast<void(SynthSliderUI::*)($JSlider*)>(&SynthSliderUI::updateStyle))},
	{"updateThumbState", "(II)V", nullptr, $PRIVATE, $method(static_cast<void(SynthSliderUI::*)(int32_t,int32_t)>(&SynthSliderUI::updateThumbState))},
	{"updateThumbState", "(IIZ)V", nullptr, $PRIVATE, $method(static_cast<void(SynthSliderUI::*)(int32_t,int32_t,bool)>(&SynthSliderUI::updateThumbState))},
	{"valueForXPosition", "(I)I", nullptr, $PUBLIC},
	{"valueForYPosition", "(I)I", nullptr, $PUBLIC},
	{"xPositionForValue", "(I)I", nullptr, $PROTECTED},
	{"yPositionForValue", "(III)I", nullptr, $PROTECTED},
	{}
};

$InnerClassInfo _SynthSliderUI_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthSliderUI$SynthTrackListener", "javax.swing.plaf.synth.SynthSliderUI", "SynthTrackListener", $PRIVATE},
	{}
};

$ClassInfo _SynthSliderUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.synth.SynthSliderUI",
	"javax.swing.plaf.basic.BasicSliderUI",
	"java.beans.PropertyChangeListener,javax.swing.plaf.synth.SynthUI",
	_SynthSliderUI_FieldInfo_,
	_SynthSliderUI_MethodInfo_,
	nullptr,
	nullptr,
	_SynthSliderUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthSliderUI$SynthTrackListener"
};

$Object* allocate$SynthSliderUI($Class* clazz) {
	return $of($alloc(SynthSliderUI));
}

int32_t SynthSliderUI::hashCode() {
	 return this->$BasicSliderUI::hashCode();
}

bool SynthSliderUI::equals(Object$* arg0) {
	 return this->$BasicSliderUI::equals(arg0);
}

$Object* SynthSliderUI::clone() {
	 return this->$BasicSliderUI::clone();
}

$String* SynthSliderUI::toString() {
	 return this->$BasicSliderUI::toString();
}

void SynthSliderUI::finalize() {
	this->$BasicSliderUI::finalize();
}

$JSlider* SynthSliderUI::access$2400(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->slider;
}

$JSlider* SynthSliderUI::access$2300(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->slider;
}

$Rectangle* SynthSliderUI::access$2200(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->thumbRect;
}

bool SynthSliderUI::access$2100(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->drawInverted();
}

$JSlider* SynthSliderUI::access$2000(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->slider;
}

$JSlider* SynthSliderUI::access$1900(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->slider;
}

$Rectangle* SynthSliderUI::access$1800(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->trackRect;
}

$Rectangle* SynthSliderUI::access$1700(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->trackRect;
}

$Rectangle* SynthSliderUI::access$1600(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->trackRect;
}

$Rectangle* SynthSliderUI::access$1500(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->thumbRect;
}

$JSlider* SynthSliderUI::access$1400(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->slider;
}

$Rectangle* SynthSliderUI::access$1300(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->thumbRect;
}

bool SynthSliderUI::access$1200(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->drawInverted();
}

int32_t SynthSliderUI::access$1100(SynthSliderUI* x0, int32_t x1) {
	$init(SynthSliderUI);
	return $nc(x0)->yPositionForValue(x1);
}

$JSlider* SynthSliderUI::access$1000(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->slider;
}

$JSlider* SynthSliderUI::access$900(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->slider;
}

$Rectangle* SynthSliderUI::access$800(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->trackRect;
}

$Rectangle* SynthSliderUI::access$700(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->trackRect;
}

$Rectangle* SynthSliderUI::access$600(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->trackRect;
}

$Rectangle* SynthSliderUI::access$500(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->thumbRect;
}

$JSlider* SynthSliderUI::access$400(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->slider;
}

$JSlider* SynthSliderUI::access$300(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->slider;
}

bool SynthSliderUI::access$200(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->isDragging();
}

$JSlider* SynthSliderUI::access$100(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->slider;
}

$Rectangle* SynthSliderUI::access$000(SynthSliderUI* x0) {
	$init(SynthSliderUI);
	return $nc(x0)->thumbRect;
}

$ComponentUI* SynthSliderUI::createUI($JComponent* c) {
	$init(SynthSliderUI);
	return $new(SynthSliderUI, $cast($JSlider, c));
}

void SynthSliderUI::init$($JSlider* c) {
	$BasicSliderUI::init$(c);
	$set(this, valueRect, $new($Rectangle));
}

void SynthSliderUI::installDefaults($JSlider* slider) {
	updateStyle(slider);
}

void SynthSliderUI::uninstallDefaults($JSlider* slider) {
	$var($SynthContext, context, getContext(static_cast<$JComponent*>(slider), $SynthConstants::ENABLED));
	$nc(this->style)->uninstallDefaults(context);
	$set(this, style, nullptr);
	$init($Region);
	$assign(context, getContext(slider, $Region::SLIDER_TRACK, $SynthConstants::ENABLED));
	$nc(this->sliderTrackStyle)->uninstallDefaults(context);
	$set(this, sliderTrackStyle, nullptr);
	$assign(context, getContext(slider, $Region::SLIDER_THUMB, $SynthConstants::ENABLED));
	$nc(this->sliderThumbStyle)->uninstallDefaults(context);
	$set(this, sliderThumbStyle, nullptr);
}

void SynthSliderUI::installListeners($JSlider* slider) {
	$BasicSliderUI::installListeners(slider);
	$nc(slider)->addPropertyChangeListener(this);
}

void SynthSliderUI::uninstallListeners($JSlider* slider) {
	$nc(slider)->removePropertyChangeListener(this);
	$BasicSliderUI::uninstallListeners(slider);
}

void SynthSliderUI::updateStyle($JSlider* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(static_cast<$JComponent*>(c), $SynthConstants::ENABLED));
	$var($SynthStyle, oldStyle, this->style);
	$set(this, style, $SynthLookAndFeel::updateStyle(context, this));
	if (this->style != oldStyle) {
		this->thumbWidth = $nc(this->style)->getInt(context, "Slider.thumbWidth"_s, 30);
		this->thumbHeight = $nc(this->style)->getInt(context, "Slider.thumbHeight"_s, 14);
		$var($String, scaleKey, $cast($String, $nc(this->slider)->getClientProperty("JComponent.sizeVariant"_s)));
		if (scaleKey != nullptr) {
			if ("large"_s->equals(scaleKey)) {
				this->thumbWidth *= 1.15;
				this->thumbHeight *= 1.15;
			} else if ("small"_s->equals(scaleKey)) {
				this->thumbWidth *= 0.857;
				this->thumbHeight *= 0.857;
			} else if ("mini"_s->equals(scaleKey)) {
				this->thumbWidth *= 0.784;
				this->thumbHeight *= 0.784;
			}
		}
		this->trackBorder = $nc(this->style)->getInt(context, "Slider.trackBorder"_s, 1);
		this->trackHeight = this->thumbHeight + this->trackBorder * 2;
		this->paintValue = $nc(this->style)->getBoolean(context, "Slider.paintValue"_s, true);
		if (oldStyle != nullptr) {
			uninstallKeyboardActions(c);
			installKeyboardActions(c);
		}
	}
	$init($Region);
	$assign(context, getContext(c, $Region::SLIDER_TRACK, $SynthConstants::ENABLED));
	$set(this, sliderTrackStyle, $SynthLookAndFeel::updateStyle(context, this));
	$assign(context, getContext(c, $Region::SLIDER_THUMB, $SynthConstants::ENABLED));
	$set(this, sliderThumbStyle, $SynthLookAndFeel::updateStyle(context, this));
}

$BasicSliderUI$TrackListener* SynthSliderUI::createTrackListener($JSlider* s) {
	return $new($SynthSliderUI$SynthTrackListener, this);
}

void SynthSliderUI::updateThumbState(int32_t x, int32_t y) {
	setThumbActive($nc(this->thumbRect)->contains(x, y));
}

void SynthSliderUI::updateThumbState(int32_t x, int32_t y, bool pressed) {
	updateThumbState(x, y);
	setThumbPressed(pressed);
}

void SynthSliderUI::setThumbActive(bool active) {
	if (this->thumbActive != active) {
		this->thumbActive = active;
		$nc(this->slider)->repaint(this->thumbRect);
	}
}

void SynthSliderUI::setThumbPressed(bool pressed) {
	if (this->thumbPressed != pressed) {
		this->thumbPressed = pressed;
		$nc(this->slider)->repaint(this->thumbRect);
	}
}

int32_t SynthSliderUI::getBaseline($JComponent* c, int32_t width, int32_t height) {
	$useLocalCurrentObjectStackCache();
	if (c == nullptr) {
		$throwNew($NullPointerException, "Component must be non-null"_s);
	}
	if (width < 0 || height < 0) {
		$throwNew($IllegalArgumentException, "Width and height must be >= 0"_s);
	}
	bool var$0 = $nc(this->slider)->getPaintLabels();
	if (var$0 && labelsHaveSameBaselines()) {
		$var($Insets, trackInsets, $new($Insets, 0, 0, 0, 0));
		$init($Region);
		$var($SynthContext, trackContext, getContext(static_cast<$JComponent*>(this->slider), $Region::SLIDER_TRACK));
		$nc(this->style)->getInsets(trackContext, trackInsets);
		if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
			int32_t valueHeight = 0;
			if (this->paintValue) {
				$var($SynthContext, context, getContext(this->slider));
				valueHeight = $nc($($nc($($nc(context)->getStyle()))->getGraphicsUtils(context)))->getMaximumCharHeight(context);
			}
			int32_t tickHeight = 0;
			if ($nc(this->slider)->getPaintTicks()) {
				tickHeight = getTickLength();
			}
			int32_t labelHeight = getHeightOfTallestLabel();
			int32_t contentHeight = valueHeight + this->trackHeight + trackInsets->top + trackInsets->bottom + tickHeight + labelHeight + 4;
			int32_t centerY = height / 2 - contentHeight / 2;
			centerY += valueHeight + 2;
			centerY += this->trackHeight + trackInsets->top + trackInsets->bottom;
			centerY += tickHeight + 2;
			$var($JComponent, label, $cast($JComponent, $nc($($nc($($nc(this->slider)->getLabelTable()))->elements()))->nextElement()));
			$var($Dimension, pref, $nc(label)->getPreferredSize());
			return centerY + label->getBaseline($nc(pref)->width, pref->height);
		} else {
			$var($Integer, value, $nc(this->slider)->getInverted() ? getLowestValue() : getHighestValue());
			if (value != nullptr) {
				int32_t valueY = $nc(this->insetCache)->top;
				int32_t valueHeight = 0;
				if (this->paintValue) {
					$var($SynthContext, context, getContext(this->slider));
					valueHeight = $nc($($nc($($nc(context)->getStyle()))->getGraphicsUtils(context)))->getMaximumCharHeight(context);
				}
				int32_t contentHeight = height - $nc(this->insetCache)->top - $nc(this->insetCache)->bottom;
				int32_t trackY = valueY + valueHeight;
				int32_t trackHeight = contentHeight - valueHeight;
				int32_t yPosition = yPositionForValue(value->intValue(), trackY, trackHeight);
				$var($JComponent, label, $cast($JComponent, $nc($($nc(this->slider)->getLabelTable()))->get(value)));
				$var($Dimension, pref, $nc(label)->getPreferredSize());
				return yPosition - $nc(pref)->height / 2 + label->getBaseline(pref->width, pref->height);
			}
		}
	}
	return -1;
}

$Dimension* SynthSliderUI::getPreferredSize($JComponent* c) {
	$useLocalCurrentObjectStackCache();
	recalculateIfInsetsChanged();
	$var($Dimension, d, $new($Dimension, $nc(this->contentRect)->width, $nc(this->contentRect)->height));
	$var($Insets, i, $nc(this->slider)->getInsets());
	if ($nc(this->slider)->getOrientation() == $JSlider::VERTICAL) {
		d->height = 200;
		d->height += $nc(i)->top + i->bottom;
	} else {
		d->width = 200;
		d->width += $nc(i)->left + i->right;
	}
	return d;
}

$Dimension* SynthSliderUI::getMinimumSize($JComponent* c) {
	recalculateIfInsetsChanged();
	$var($Dimension, d, $new($Dimension, $nc(this->contentRect)->width, $nc(this->contentRect)->height));
	if ($nc(this->slider)->getOrientation() == $JSlider::VERTICAL) {
		d->height = $nc(this->thumbRect)->height + $nc(this->insetCache)->top + $nc(this->insetCache)->bottom;
	} else {
		d->width = $nc(this->thumbRect)->width + $nc(this->insetCache)->left + $nc(this->insetCache)->right;
	}
	return d;
}

void SynthSliderUI::calculateGeometry() {
	calculateThumbSize();
	layout();
	calculateThumbLocation();
}

void SynthSliderUI::layout() {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(this->slider));
	$var($SynthGraphicsUtils, synthGraphics, $nc(this->style)->getGraphicsUtils(context));
	$var($Insets, trackInsets, $new($Insets, 0, 0, 0, 0));
	$init($Region);
	$var($SynthContext, trackContext, getContext(static_cast<$JComponent*>(this->slider), $Region::SLIDER_TRACK));
	$nc(this->style)->getInsets(trackContext, trackInsets);
	if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		$nc(this->valueRect)->height = 0;
		if (this->paintValue) {
			$nc(this->valueRect)->height = $nc(synthGraphics)->getMaximumCharHeight(context);
		}
		$nc(this->trackRect)->height = this->trackHeight;
		$nc(this->tickRect)->height = 0;
		if ($nc(this->slider)->getPaintTicks()) {
			$nc(this->tickRect)->height = getTickLength();
		}
		$nc(this->labelRect)->height = 0;
		if ($nc(this->slider)->getPaintLabels()) {
			$nc(this->labelRect)->height = getHeightOfTallestLabel();
		}
		$nc(this->contentRect)->height = $nc(this->valueRect)->height + $nc(this->trackRect)->height + trackInsets->top + trackInsets->bottom + $nc(this->tickRect)->height + $nc(this->labelRect)->height + 4;
		$nc(this->contentRect)->width = $nc(this->slider)->getWidth() - $nc(this->insetCache)->left - $nc(this->insetCache)->right;
		int32_t pad = 0;
		if ($nc(this->slider)->getPaintLabels()) {
			$nc(this->trackRect)->x = $nc(this->insetCache)->left;
			$nc(this->trackRect)->width = $nc(this->contentRect)->width;
			$var($Dictionary, dictionary, $nc(this->slider)->getLabelTable());
			if (dictionary != nullptr) {
				int32_t minValue = $nc(this->slider)->getMinimum();
				int32_t maxValue = $nc(this->slider)->getMaximum();
				int32_t firstLblIdx = $Integer::MAX_VALUE;
				int32_t lastLblIdx = $Integer::MIN_VALUE;
				{
					$var($Enumeration, keys, dictionary->keys());
					for (; $nc(keys)->hasMoreElements();) {
						int32_t keyInt = $nc(($cast($Integer, $(keys->nextElement()))))->intValue();
						if (keyInt >= minValue && keyInt < firstLblIdx) {
							firstLblIdx = keyInt;
						}
						if (keyInt <= maxValue && keyInt > lastLblIdx) {
							lastLblIdx = keyInt;
						}
					}
				}
				pad = getPadForLabel(firstLblIdx);
				pad = $Math::max(pad, getPadForLabel(lastLblIdx));
			}
		}
		$nc(this->valueRect)->x = ($nc(this->trackRect)->x = ($nc(this->tickRect)->x = ($nc(this->labelRect)->x = ($nc(this->insetCache)->left + pad))));
		$nc(this->valueRect)->width = ($nc(this->trackRect)->width = ($nc(this->tickRect)->width = ($nc(this->labelRect)->width = ($nc(this->contentRect)->width - (pad * 2)))));
		int32_t centerY = $nc(this->slider)->getHeight() / 2 - $nc(this->contentRect)->height / 2;
		$nc(this->valueRect)->y = centerY;
		centerY += $nc(this->valueRect)->height + 2;
		$nc(this->trackRect)->y = centerY + trackInsets->top;
		centerY += $nc(this->trackRect)->height + trackInsets->top + trackInsets->bottom;
		$nc(this->tickRect)->y = centerY;
		centerY += $nc(this->tickRect)->height + 2;
		$nc(this->labelRect)->y = centerY;
		centerY += $nc(this->labelRect)->height;
	} else {
		$nc(this->trackRect)->width = this->trackHeight;
		$nc(this->tickRect)->width = 0;
		if ($nc(this->slider)->getPaintTicks()) {
			$nc(this->tickRect)->width = getTickLength();
		}
		$nc(this->labelRect)->width = 0;
		if ($nc(this->slider)->getPaintLabels()) {
			$nc(this->labelRect)->width = getWidthOfWidestLabel();
		}
		$nc(this->valueRect)->y = $nc(this->insetCache)->top;
		$nc(this->valueRect)->height = 0;
		if (this->paintValue) {
			$nc(this->valueRect)->height = $nc(synthGraphics)->getMaximumCharHeight(context);
		}
		$var($FontMetrics, fm, $nc(this->slider)->getFontMetrics($($nc(this->slider)->getFont())));
		$var($SynthContext, var$1, context);
		$var($Font, var$2, $nc(this->slider)->getFont());
		$var($FontMetrics, var$3, fm);
		int32_t var$0 = $nc(synthGraphics)->computeStringWidth(var$1, var$2, var$3, $$str({""_s, $$str($nc(this->slider)->getMaximum())}));
		$var($SynthContext, var$4, context);
		$var($Font, var$5, $nc(this->slider)->getFont());
		$var($FontMetrics, var$6, fm);
		$nc(this->valueRect)->width = $Math::max(var$0, synthGraphics->computeStringWidth(var$4, var$5, var$6, $$str({""_s, $$str($nc(this->slider)->getMinimum())})));
		int32_t l = $nc(this->valueRect)->width / 2;
		int32_t w1 = trackInsets->left + $nc(this->trackRect)->width / 2;
		int32_t w2 = $nc(this->trackRect)->width / 2 + trackInsets->right + $nc(this->tickRect)->width + $nc(this->labelRect)->width;
		int32_t var$7 = $Math::max(w1, l);
		$nc(this->contentRect)->width = var$7 + $Math::max(w2, l) + 2 + $nc(this->insetCache)->left + $nc(this->insetCache)->right;
		$nc(this->contentRect)->height = $nc(this->slider)->getHeight() - $nc(this->insetCache)->top - $nc(this->insetCache)->bottom;
		$nc(this->trackRect)->y = ($nc(this->tickRect)->y = ($nc(this->labelRect)->y = $nc(this->valueRect)->y + $nc(this->valueRect)->height));
		$nc(this->trackRect)->height = ($nc(this->tickRect)->height = ($nc(this->labelRect)->height = $nc(this->contentRect)->height - $nc(this->valueRect)->height));
		int32_t startX = $nc(this->slider)->getWidth() / 2 - $nc(this->contentRect)->width / 2;
		if ($SynthLookAndFeel::isLeftToRight(this->slider)) {
			if (l > w1) {
				startX += (l - w1);
			}
			$nc(this->trackRect)->x = startX + trackInsets->left;
			startX += trackInsets->left + $nc(this->trackRect)->width + trackInsets->right;
			$nc(this->tickRect)->x = startX;
			$nc(this->labelRect)->x = startX + $nc(this->tickRect)->width + 2;
		} else {
			if (l > w2) {
				startX += (l - w2);
			}
			$nc(this->labelRect)->x = startX;
			startX += $nc(this->labelRect)->width + 2;
			$nc(this->tickRect)->x = startX;
			$nc(this->trackRect)->x = startX + $nc(this->tickRect)->width + trackInsets->left;
		}
	}
	$set(this, lastSize, $nc(this->slider)->getSize());
}

int32_t SynthSliderUI::getPadForLabel(int32_t i) {
	$useLocalCurrentObjectStackCache();
	int32_t pad = 0;
	$var($JComponent, c, $cast($JComponent, $nc($($nc(this->slider)->getLabelTable()))->get($($Integer::valueOf(i)))));
	if (c != nullptr) {
		int32_t centerX = xPositionForValue(i);
		int32_t cHalfWidth = $nc($(c->getPreferredSize()))->width / 2;
		if (centerX - cHalfWidth < $nc(this->insetCache)->left) {
			pad = $Math::max(pad, $nc(this->insetCache)->left - (centerX - cHalfWidth));
		}
		if (centerX + cHalfWidth > $nc(this->slider)->getWidth() - $nc(this->insetCache)->right) {
			pad = $Math::max(pad, (centerX + cHalfWidth) - ($nc(this->slider)->getWidth() - $nc(this->insetCache)->right));
		}
	}
	return pad;
}

void SynthSliderUI::calculateThumbLocation() {
	$BasicSliderUI::calculateThumbLocation();
	if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
		$nc(this->thumbRect)->y += this->trackBorder;
	} else {
		$nc(this->thumbRect)->x += this->trackBorder;
	}
	$var($Point, mousePosition, $nc(this->slider)->getMousePosition());
	if (mousePosition != nullptr) {
		updateThumbState(mousePosition->x, mousePosition->y);
	}
}

void SynthSliderUI::setThumbLocation(int32_t x, int32_t y) {
	$BasicSliderUI::setThumbLocation(x, y);
	$nc(this->slider)->repaint($nc(this->valueRect)->x, $nc(this->valueRect)->y, $nc(this->valueRect)->width, $nc(this->valueRect)->height);
	setThumbActive(false);
}

int32_t SynthSliderUI::xPositionForValue(int32_t value) {
	int32_t min = $nc(this->slider)->getMinimum();
	int32_t max = $nc(this->slider)->getMaximum();
	int32_t trackLeft = $nc(this->trackRect)->x + $nc(this->thumbRect)->width / 2 + this->trackBorder;
	int32_t trackRight = $nc(this->trackRect)->x + $nc(this->trackRect)->width - $nc(this->thumbRect)->width / 2 - this->trackBorder;
	int32_t trackLength = trackRight - trackLeft;
	double valueRange = (double)max - (double)min;
	double pixelsPerValue = (double)trackLength / valueRange;
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

int32_t SynthSliderUI::yPositionForValue(int32_t value, int32_t trackY, int32_t trackHeight) {
	int32_t min = $nc(this->slider)->getMinimum();
	int32_t max = $nc(this->slider)->getMaximum();
	int32_t trackTop = trackY + $nc(this->thumbRect)->height / 2 + this->trackBorder;
	int32_t trackBottom = trackY + trackHeight - $nc(this->thumbRect)->height / 2 - this->trackBorder;
	int32_t trackLength = trackBottom - trackTop;
	double valueRange = (double)max - (double)min;
	double pixelsPerValue = (double)trackLength / valueRange;
	int32_t yPosition = 0;
	if (!drawInverted()) {
		yPosition = trackTop;
		yPosition += $Math::round(pixelsPerValue * ((double)max - value));
	} else {
		yPosition = trackTop;
		yPosition += $Math::round(pixelsPerValue * ((double)value - min));
	}
	yPosition = $Math::max(trackTop, yPosition);
	yPosition = $Math::min(trackBottom, yPosition);
	return yPosition;
}

int32_t SynthSliderUI::valueForYPosition(int32_t yPos) {
	int32_t value = 0;
	int32_t minValue = $nc(this->slider)->getMinimum();
	int32_t maxValue = $nc(this->slider)->getMaximum();
	int32_t trackTop = $nc(this->trackRect)->y + $nc(this->thumbRect)->height / 2 + this->trackBorder;
	int32_t trackBottom = $nc(this->trackRect)->y + $nc(this->trackRect)->height - $nc(this->thumbRect)->height / 2 - this->trackBorder;
	int32_t trackLength = trackBottom - trackTop;
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

int32_t SynthSliderUI::valueForXPosition(int32_t xPos) {
	int32_t value = 0;
	int32_t minValue = $nc(this->slider)->getMinimum();
	int32_t maxValue = $nc(this->slider)->getMaximum();
	int32_t trackLeft = $nc(this->trackRect)->x + $nc(this->thumbRect)->width / 2 + this->trackBorder;
	int32_t trackRight = $nc(this->trackRect)->x + $nc(this->trackRect)->width - $nc(this->thumbRect)->width / 2 - this->trackBorder;
	int32_t trackLength = trackRight - trackLeft;
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

$Dimension* SynthSliderUI::getThumbSize() {
	$var($Dimension, size, $new($Dimension));
	if ($nc(this->slider)->getOrientation() == $JSlider::VERTICAL) {
		size->width = this->thumbHeight;
		size->height = this->thumbWidth;
	} else {
		size->width = this->thumbWidth;
		size->height = this->thumbHeight;
	}
	return size;
}

void SynthSliderUI::recalculateIfInsetsChanged() {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(this->slider));
	$var($Insets, newInsets, $nc(this->style)->getInsets(context, nullptr));
	$var($Insets, compInsets, $nc(this->slider)->getInsets());
	$nc(newInsets)->left += $nc(compInsets)->left;
	newInsets->right += compInsets->right;
	newInsets->top += compInsets->top;
	newInsets->bottom += compInsets->bottom;
	if (!newInsets->equals(this->insetCache)) {
		$set(this, insetCache, newInsets);
		calculateGeometry();
	}
}

$SynthContext* SynthSliderUI::getContext($JComponent* c) {
	return getContext(c, $SynthLookAndFeel::getComponentState(c));
}

$SynthContext* SynthSliderUI::getContext($JComponent* c, int32_t state) {
	return $SynthContext::getContext(c, this->style, state);
}

$SynthContext* SynthSliderUI::getContext($JComponent* c, $Region* subregion) {
	return getContext(c, subregion, getComponentState(c, subregion));
}

$SynthContext* SynthSliderUI::getContext($JComponent* c, $Region* subregion, int32_t state) {
	$var($SynthStyle, style, nullptr);
	$init($Region);
	if (subregion == $Region::SLIDER_TRACK) {
		$assign(style, this->sliderTrackStyle);
	} else {
		if (subregion == $Region::SLIDER_THUMB) {
			$assign(style, this->sliderThumbStyle);
		}
	}
	return $SynthContext::getContext(c, subregion, style, state);
}

int32_t SynthSliderUI::getComponentState($JComponent* c, $Region* region) {
	$init($Region);
	if (region == $Region::SLIDER_THUMB && this->thumbActive && $nc(c)->isEnabled()) {
		int32_t state = this->thumbPressed ? $SynthConstants::PRESSED : $SynthConstants::MOUSE_OVER;
		if (c->isFocusOwner()) {
			state |= $SynthConstants::FOCUSED;
		}
		return state;
	}
	return $SynthLookAndFeel::getComponentState(c);
}

void SynthSliderUI::update($Graphics* g, $JComponent* c) {
	$useLocalCurrentObjectStackCache();
	$var($SynthContext, context, getContext(c));
	$SynthLookAndFeel::update(context, g);
	$var($SynthContext, var$0, context);
	$var($Graphics, var$1, g);
	int32_t var$2 = $nc(c)->getWidth();
	int32_t var$3 = c->getHeight();
	$nc($($nc(context)->getPainter()))->paintSliderBackground(var$0, var$1, 0, 0, var$2, var$3, $nc(this->slider)->getOrientation());
	paint(context, g);
}

void SynthSliderUI::paint($Graphics* g, $JComponent* c) {
	$var($SynthContext, context, getContext(c));
	paint(context, g);
}

void SynthSliderUI::paint($SynthContext* context, $Graphics* g) {
	$useLocalCurrentObjectStackCache();
	recalculateIfInsetsChanged();
	recalculateIfOrientationChanged();
	$var($Rectangle, clip, $nc(g)->getClipBounds());
	if (this->lastSize == nullptr || !$nc(this->lastSize)->equals($($nc(this->slider)->getSize()))) {
		calculateGeometry();
	}
	if (this->paintValue) {
		$var($FontMetrics, fm, $SwingUtilities2::getFontMetrics(static_cast<$JComponent*>(this->slider), g));
		$var($SynthContext, var$0, context);
		$var($Font, var$1, g->getFont());
		$var($FontMetrics, var$2, fm);
		int32_t labelWidth = $nc($($nc($($nc(context)->getStyle()))->getGraphicsUtils(context)))->computeStringWidth(var$0, var$1, var$2, $$str({""_s, $$str($nc(this->slider)->getValue())}));
		$nc(this->valueRect)->x = $nc(this->thumbRect)->x + ($nc(this->thumbRect)->width - labelWidth) / 2;
		if ($nc(this->slider)->getOrientation() == $JSlider::HORIZONTAL) {
			if ($nc(this->valueRect)->x + labelWidth > $nc(this->insetCache)->left + $nc(this->contentRect)->width) {
				$nc(this->valueRect)->x = ($nc(this->insetCache)->left + $nc(this->contentRect)->width) - labelWidth;
			}
			$nc(this->valueRect)->x = $Math::max($nc(this->valueRect)->x, 0);
		}
		$init($ColorType);
		g->setColor($($nc($(context->getStyle()))->getColor(context, $ColorType::TEXT_FOREGROUND)));
		$nc($($nc($(context->getStyle()))->getGraphicsUtils(context)))->paintText(context, g, $$str({""_s, $$str($nc(this->slider)->getValue())}), $nc(this->valueRect)->x, $nc(this->valueRect)->y, -1);
	}
	bool var$3 = $nc(this->slider)->getPaintTrack();
	if (var$3 && $nc(clip)->intersects(this->trackRect)) {
		$init($Region);
		$var($SynthContext, subcontext, getContext(static_cast<$JComponent*>(this->slider), $Region::SLIDER_TRACK));
		paintTrack(subcontext, g, this->trackRect);
	}
	if ($nc(clip)->intersects(this->thumbRect)) {
		$init($Region);
		$var($SynthContext, subcontext, getContext(static_cast<$JComponent*>(this->slider), $Region::SLIDER_THUMB));
		paintThumb(subcontext, g, this->thumbRect);
	}
	bool var$4 = $nc(this->slider)->getPaintTicks();
	if (var$4 && $nc(clip)->intersects(this->tickRect)) {
		paintTicks(g);
	}
	bool var$5 = $nc(this->slider)->getPaintLabels();
	if (var$5 && $nc(clip)->intersects(this->labelRect)) {
		paintLabels(g);
	}
}

void SynthSliderUI::paintBorder($SynthContext* context, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc($($nc(context)->getPainter()))->paintSliderBorder(context, g, x, y, w, h, $nc(this->slider)->getOrientation());
}

void SynthSliderUI::paintThumb($SynthContext* context, $Graphics* g, $Rectangle* thumbBounds) {
	$useLocalCurrentObjectStackCache();
	int32_t orientation = $nc(this->slider)->getOrientation();
	$SynthLookAndFeel::updateSubregion(context, g, thumbBounds);
	$nc($($nc(context)->getPainter()))->paintSliderThumbBackground(context, g, $nc(thumbBounds)->x, thumbBounds->y, thumbBounds->width, thumbBounds->height, orientation);
	$nc($(context->getPainter()))->paintSliderThumbBorder(context, g, $nc(thumbBounds)->x, thumbBounds->y, thumbBounds->width, thumbBounds->height, orientation);
}

void SynthSliderUI::paintTrack($SynthContext* context, $Graphics* g, $Rectangle* trackBounds) {
	$useLocalCurrentObjectStackCache();
	int32_t orientation = $nc(this->slider)->getOrientation();
	$SynthLookAndFeel::updateSubregion(context, g, trackBounds);
	$nc($($nc(context)->getPainter()))->paintSliderTrackBackground(context, g, $nc(trackBounds)->x, trackBounds->y, trackBounds->width, trackBounds->height, orientation);
	$nc($(context->getPainter()))->paintSliderTrackBorder(context, g, $nc(trackBounds)->x, trackBounds->y, trackBounds->width, trackBounds->height, orientation);
}

void SynthSliderUI::propertyChange($PropertyChangeEvent* e) {
	if ($SynthLookAndFeel::shouldUpdateStyle(e)) {
		updateStyle($cast($JSlider, $($nc(e)->getSource())));
	}
}

SynthSliderUI::SynthSliderUI() {
}

$Class* SynthSliderUI::load$($String* name, bool initialize) {
	$loadClass(SynthSliderUI, name, initialize, &_SynthSliderUI_ClassInfo_, allocate$SynthSliderUI);
	return class$;
}

$Class* SynthSliderUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax