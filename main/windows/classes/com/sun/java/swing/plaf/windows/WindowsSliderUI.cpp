#include <com/sun/java/swing/plaf/windows/WindowsSliderUI.h>

#include <com/sun/java/swing/plaf/windows/TMSchema$Part.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$Prop.h>
#include <com/sun/java/swing/plaf/windows/TMSchema$State.h>
#include <com/sun/java/swing/plaf/windows/WindowsSliderUI$WindowsTrackListener.h>
#include <com/sun/java/swing/plaf/windows/XPStyle$Skin.h>
#include <com/sun/java/swing/plaf/windows/XPStyle.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SliderUI.h>
#include <javax/swing/plaf/basic/BasicSliderUI$TrackListener.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

#undef COLOR
#undef DISABLED
#undef FALSE
#undef FOCUSED
#undef HOT
#undef NORMAL
#undef PRESSED
#undef TKP_THUMB
#undef TKP_THUMBBOTTOM
#undef TKP_THUMBLEFT
#undef TKP_THUMBRIGHT
#undef TKP_THUMBVERT
#undef TKP_TICS
#undef TKP_TICSVERT
#undef TKP_TRACK
#undef TKP_TRACKVERT
#undef VERTICAL

using $TMSchema$Part = ::com::sun::java::swing::plaf::windows::TMSchema$Part;
using $TMSchema$Prop = ::com::sun::java::swing::plaf::windows::TMSchema$Prop;
using $TMSchema$State = ::com::sun::java::swing::plaf::windows::TMSchema$State;
using $WindowsSliderUI$WindowsTrackListener = ::com::sun::java::swing::plaf::windows::WindowsSliderUI$WindowsTrackListener;
using $XPStyle = ::com::sun::java::swing::plaf::windows::XPStyle;
using $XPStyle$Skin = ::com::sun::java::swing::plaf::windows::XPStyle$Skin;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSlider = ::javax::swing::JSlider;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SliderUI = ::javax::swing::plaf::SliderUI;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $BasicSliderUI$TrackListener = ::javax::swing::plaf::basic::BasicSliderUI$TrackListener;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

$FieldInfo _WindowsSliderUI_FieldInfo_[] = {
	{"rollover", "Z", nullptr, $PRIVATE, $field(WindowsSliderUI, rollover)},
	{"pressed", "Z", nullptr, $PRIVATE, $field(WindowsSliderUI, pressed)},
	{}
};

$MethodInfo _WindowsSliderUI_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JSlider;)V", nullptr, $PUBLIC, $method(static_cast<void(WindowsSliderUI::*)($JSlider*)>(&WindowsSliderUI::init$))},
	{"access$000", "(Lcom/sun/java/swing/plaf/windows/WindowsSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(WindowsSliderUI*)>(&WindowsSliderUI::access$000))},
	{"access$100", "(Lcom/sun/java/swing/plaf/windows/WindowsSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(WindowsSliderUI*)>(&WindowsSliderUI::access$100))},
	{"access$200", "(Lcom/sun/java/swing/plaf/windows/WindowsSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(WindowsSliderUI*)>(&WindowsSliderUI::access$200))},
	{"access$300", "(Lcom/sun/java/swing/plaf/windows/WindowsSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(WindowsSliderUI*)>(&WindowsSliderUI::access$300))},
	{"access$400", "(Lcom/sun/java/swing/plaf/windows/WindowsSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(WindowsSliderUI*)>(&WindowsSliderUI::access$400))},
	{"access$500", "(Lcom/sun/java/swing/plaf/windows/WindowsSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(WindowsSliderUI*)>(&WindowsSliderUI::access$500))},
	{"access$600", "(Lcom/sun/java/swing/plaf/windows/WindowsSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(WindowsSliderUI*)>(&WindowsSliderUI::access$600))},
	{"access$700", "(Lcom/sun/java/swing/plaf/windows/WindowsSliderUI;)Ljava/awt/Rectangle;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$Rectangle*(*)(WindowsSliderUI*)>(&WindowsSliderUI::access$700))},
	{"access$800", "(Lcom/sun/java/swing/plaf/windows/WindowsSliderUI;)Ljavax/swing/JSlider;", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<$JSlider*(*)(WindowsSliderUI*)>(&WindowsSliderUI::access$800))},
	{"createTrackListener", "(Ljavax/swing/JSlider;)Ljavax/swing/plaf/basic/BasicSliderUI$TrackListener;", nullptr, $PROTECTED},
	{"createUI", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/ComponentUI;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ComponentUI*(*)($JComponent*)>(&WindowsSliderUI::createUI))},
	{"getThumbSize", "()Ljava/awt/Dimension;", nullptr, $PROTECTED},
	{"getXPThumbPart", "()Lcom/sun/java/swing/plaf/windows/TMSchema$Part;", nullptr, $PRIVATE, $method(static_cast<$TMSchema$Part*(WindowsSliderUI::*)()>(&WindowsSliderUI::getXPThumbPart))},
	{"paintMajorTickForHorizSlider", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED},
	{"paintMajorTickForVertSlider", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED},
	{"paintMinorTickForHorizSlider", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED},
	{"paintMinorTickForVertSlider", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;I)V", nullptr, $PROTECTED},
	{"paintThumb", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{"paintTrack", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _WindowsSliderUI_InnerClassesInfo_[] = {
	{"com.sun.java.swing.plaf.windows.WindowsSliderUI$WindowsTrackListener", "com.sun.java.swing.plaf.windows.WindowsSliderUI", "WindowsTrackListener", $PRIVATE},
	{}
};

$ClassInfo _WindowsSliderUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.java.swing.plaf.windows.WindowsSliderUI",
	"javax.swing.plaf.basic.BasicSliderUI",
	nullptr,
	_WindowsSliderUI_FieldInfo_,
	_WindowsSliderUI_MethodInfo_,
	nullptr,
	nullptr,
	_WindowsSliderUI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.java.swing.plaf.windows.WindowsSliderUI$WindowsTrackListener"
};

$Object* allocate$WindowsSliderUI($Class* clazz) {
	return $of($alloc(WindowsSliderUI));
}

$JSlider* WindowsSliderUI::access$800(WindowsSliderUI* x0) {
	$init(WindowsSliderUI);
	return $nc(x0)->slider;
}

$Rectangle* WindowsSliderUI::access$700(WindowsSliderUI* x0) {
	$init(WindowsSliderUI);
	return $nc(x0)->thumbRect;
}

$JSlider* WindowsSliderUI::access$600(WindowsSliderUI* x0) {
	$init(WindowsSliderUI);
	return $nc(x0)->slider;
}

$JSlider* WindowsSliderUI::access$500(WindowsSliderUI* x0) {
	$init(WindowsSliderUI);
	return $nc(x0)->slider;
}

$Rectangle* WindowsSliderUI::access$400(WindowsSliderUI* x0) {
	$init(WindowsSliderUI);
	return $nc(x0)->thumbRect;
}

$JSlider* WindowsSliderUI::access$300(WindowsSliderUI* x0) {
	$init(WindowsSliderUI);
	return $nc(x0)->slider;
}

$Rectangle* WindowsSliderUI::access$200(WindowsSliderUI* x0) {
	$init(WindowsSliderUI);
	return $nc(x0)->thumbRect;
}

$Rectangle* WindowsSliderUI::access$100(WindowsSliderUI* x0) {
	$init(WindowsSliderUI);
	return $nc(x0)->thumbRect;
}

$Rectangle* WindowsSliderUI::access$000(WindowsSliderUI* x0) {
	$init(WindowsSliderUI);
	return $nc(x0)->thumbRect;
}

void WindowsSliderUI::init$($JSlider* b) {
	$BasicSliderUI::init$(b);
	this->rollover = false;
	this->pressed = false;
}

$ComponentUI* WindowsSliderUI::createUI($JComponent* b) {
	$init(WindowsSliderUI);
	return $new(WindowsSliderUI, $cast($JSlider, b));
}

$BasicSliderUI$TrackListener* WindowsSliderUI::createTrackListener($JSlider* slider) {
	return $new($WindowsSliderUI$WindowsTrackListener, this);
}

void WindowsSliderUI::paintTrack($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		bool vertical = ($nc(this->slider)->getOrientation() == $JSlider::VERTICAL);
		$init($TMSchema$Part);
		$TMSchema$Part* part = vertical ? $TMSchema$Part::TKP_TRACKVERT : $TMSchema$Part::TKP_TRACK;
		$var($XPStyle$Skin, skin, xp->getSkin(this->slider, part));
		if (vertical) {
			int32_t x = ($nc(this->trackRect)->width - $nc(skin)->getWidth()) / 2;
			skin->paintSkin(g, $nc(this->trackRect)->x + x, $nc(this->trackRect)->y, skin->getWidth(), $nc(this->trackRect)->height, nullptr);
		} else {
			int32_t y = ($nc(this->trackRect)->height - $nc(skin)->getHeight()) / 2;
			skin->paintSkin(g, $nc(this->trackRect)->x, $nc(this->trackRect)->y + y, $nc(this->trackRect)->width, skin->getHeight(), nullptr);
		}
	} else {
		$BasicSliderUI::paintTrack(g);
	}
}

void WindowsSliderUI::paintMinorTickForHorizSlider($Graphics* g, $Rectangle* tickBounds, int32_t x) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$init($TMSchema$Part);
		$init($TMSchema$Prop);
		$init($Color);
		$nc(g)->setColor($(xp->getColor(this->slider, $TMSchema$Part::TKP_TICS, nullptr, $TMSchema$Prop::COLOR, $Color::black)));
	}
	$BasicSliderUI::paintMinorTickForHorizSlider(g, tickBounds, x);
}

void WindowsSliderUI::paintMajorTickForHorizSlider($Graphics* g, $Rectangle* tickBounds, int32_t x) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$init($TMSchema$Part);
		$init($TMSchema$Prop);
		$init($Color);
		$nc(g)->setColor($(xp->getColor(this->slider, $TMSchema$Part::TKP_TICS, nullptr, $TMSchema$Prop::COLOR, $Color::black)));
	}
	$BasicSliderUI::paintMajorTickForHorizSlider(g, tickBounds, x);
}

void WindowsSliderUI::paintMinorTickForVertSlider($Graphics* g, $Rectangle* tickBounds, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$init($TMSchema$Part);
		$init($TMSchema$Prop);
		$init($Color);
		$nc(g)->setColor($(xp->getColor(this->slider, $TMSchema$Part::TKP_TICSVERT, nullptr, $TMSchema$Prop::COLOR, $Color::black)));
	}
	$BasicSliderUI::paintMinorTickForVertSlider(g, tickBounds, y);
}

void WindowsSliderUI::paintMajorTickForVertSlider($Graphics* g, $Rectangle* tickBounds, int32_t y) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$init($TMSchema$Part);
		$init($TMSchema$Prop);
		$init($Color);
		$nc(g)->setColor($(xp->getColor(this->slider, $TMSchema$Part::TKP_TICSVERT, nullptr, $TMSchema$Prop::COLOR, $Color::black)));
	}
	$BasicSliderUI::paintMajorTickForVertSlider(g, tickBounds, y);
}

void WindowsSliderUI::paintThumb($Graphics* g) {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$TMSchema$Part* part = getXPThumbPart();
		$init($TMSchema$State);
		$TMSchema$State* state = $TMSchema$State::NORMAL;
		if ($nc(this->slider)->hasFocus()) {
			state = $TMSchema$State::FOCUSED;
		}
		if (this->rollover) {
			state = $TMSchema$State::HOT;
		}
		if (this->pressed) {
			state = $TMSchema$State::PRESSED;
		}
		if (!$nc(this->slider)->isEnabled()) {
			state = $TMSchema$State::DISABLED;
		}
		$nc($(xp->getSkin(this->slider, part)))->paintSkin(g, $nc(this->thumbRect)->x, $nc(this->thumbRect)->y, state);
	} else {
		$BasicSliderUI::paintThumb(g);
	}
}

$Dimension* WindowsSliderUI::getThumbSize() {
	$useLocalCurrentObjectStackCache();
	$var($XPStyle, xp, $XPStyle::getXP());
	if (xp != nullptr) {
		$var($Dimension, size, $new($Dimension));
		$var($XPStyle$Skin, s, xp->getSkin(this->slider, $(getXPThumbPart())));
		size->width = $nc(s)->getWidth();
		size->height = s->getHeight();
		return size;
	} else {
		return $BasicSliderUI::getThumbSize();
	}
}

$TMSchema$Part* WindowsSliderUI::getXPThumbPart() {
	$useLocalCurrentObjectStackCache();
	$TMSchema$Part* part = nullptr;
	bool vertical = ($nc(this->slider)->getOrientation() == $JSlider::VERTICAL);
	bool leftToRight = $nc($($nc(this->slider)->getComponentOrientation()))->isLeftToRight();
	$var($Boolean, paintThumbArrowShape, $cast($Boolean, $nc(this->slider)->getClientProperty("Slider.paintThumbArrowShape"_s)));
	$init($Boolean);
	if ((!$nc(this->slider)->getPaintTicks() && paintThumbArrowShape == nullptr) || paintThumbArrowShape == $Boolean::FALSE) {
		$init($TMSchema$Part);
		part = vertical ? $TMSchema$Part::TKP_THUMBVERT : $TMSchema$Part::TKP_THUMB;
	} else {
		$init($TMSchema$Part);
		part = vertical ? (leftToRight ? $TMSchema$Part::TKP_THUMBRIGHT : $TMSchema$Part::TKP_THUMBLEFT) : $TMSchema$Part::TKP_THUMBBOTTOM;
	}
	return part;
}

WindowsSliderUI::WindowsSliderUI() {
}

$Class* WindowsSliderUI::load$($String* name, bool initialize) {
	$loadClass(WindowsSliderUI, name, initialize, &_WindowsSliderUI_ClassInfo_, allocate$WindowsSliderUI);
	return class$;
}

$Class* WindowsSliderUI::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com