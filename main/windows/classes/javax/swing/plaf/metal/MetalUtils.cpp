#include <javax/swing/plaf/metal/MetalUtils.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/Image.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Toolkit.h>
#include <java/awt/image/FilteredImageSource.h>
#include <java/awt/image/ImageFilter.h>
#include <java/awt/image/ImageProducer.h>
#include <java/awt/image/RGBImageFilter.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalUtils$GradientPainter.h>
#include <javax/swing/plaf/metal/MetalUtils$OceanDisabledButtonImageFilter.h>
#include <javax/swing/plaf/metal/MetalUtils$OceanToolBarImageFilter.h>
#include <sun/swing/ImageIconUIResource.h>
#include <jcpp.h>

#undef INSTANCE

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $Image = ::java::awt::Image;
using $Rectangle = ::java::awt::Rectangle;
using $Toolkit = ::java::awt::Toolkit;
using $FilteredImageSource = ::java::awt::image::FilteredImageSource;
using $ImageFilter = ::java::awt::image::ImageFilter;
using $ImageProducer = ::java::awt::image::ImageProducer;
using $RGBImageFilter = ::java::awt::image::RGBImageFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $List = ::java::util::List;
using $Icon = ::javax::swing::Icon;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JToolBar = ::javax::swing::JToolBar;
using $UIManager = ::javax::swing::UIManager;
using $ColorUIResource = ::javax::swing::plaf::ColorUIResource;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalUtils$GradientPainter = ::javax::swing::plaf::metal::MetalUtils$GradientPainter;
using $MetalUtils$OceanDisabledButtonImageFilter = ::javax::swing::plaf::metal::MetalUtils$OceanDisabledButtonImageFilter;
using $MetalUtils$OceanToolBarImageFilter = ::javax::swing::plaf::metal::MetalUtils$OceanToolBarImageFilter;
using $ImageIconUIResource = ::sun::swing::ImageIconUIResource;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$MethodInfo _MetalUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(MetalUtils::*)()>(&MetalUtils::init$))},
	{"drawActiveButtonBorder", "(Ljava/awt/Graphics;IIII)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t,int32_t)>(&MetalUtils::drawActiveButtonBorder))},
	{"drawButtonBorder", "(Ljava/awt/Graphics;IIIIZ)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t,int32_t,bool)>(&MetalUtils::drawButtonBorder))},
	{"drawDark3DBorder", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,$Rectangle*)>(&MetalUtils::drawDark3DBorder))},
	{"drawDark3DBorder", "(Ljava/awt/Graphics;IIII)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t,int32_t)>(&MetalUtils::drawDark3DBorder))},
	{"drawDefaultButtonBorder", "(Ljava/awt/Graphics;IIIIZ)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t,int32_t,bool)>(&MetalUtils::drawDefaultButtonBorder))},
	{"drawDefaultButtonPressedBorder", "(Ljava/awt/Graphics;IIII)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t,int32_t)>(&MetalUtils::drawDefaultButtonPressedBorder))},
	{"drawDisabledBorder", "(Ljava/awt/Graphics;IIII)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t,int32_t)>(&MetalUtils::drawDisabledBorder))},
	{"drawFlush3DBorder", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,$Rectangle*)>(&MetalUtils::drawFlush3DBorder))},
	{"drawFlush3DBorder", "(Ljava/awt/Graphics;IIII)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t,int32_t)>(&MetalUtils::drawFlush3DBorder))},
	{"drawGradient", "(Ljava/awt/Component;Ljava/awt/Graphics;Ljava/lang/String;IIIIZ)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Component*,$Graphics*,$String*,int32_t,int32_t,int32_t,int32_t,bool)>(&MetalUtils::drawGradient))},
	{"drawPressed3DBorder", "(Ljava/awt/Graphics;Ljava/awt/Rectangle;)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,$Rectangle*)>(&MetalUtils::drawPressed3DBorder))},
	{"drawPressed3DBorder", "(Ljava/awt/Graphics;IIII)V", nullptr, $STATIC, $method(static_cast<void(*)($Graphics*,int32_t,int32_t,int32_t,int32_t)>(&MetalUtils::drawPressed3DBorder))},
	{"getInt", "(Ljava/lang/Object;I)I", nullptr, $STATIC, $method(static_cast<int32_t(*)(Object$*,int32_t)>(&MetalUtils::getInt))},
	{"getOceanDisabledButtonIcon", "(Ljava/awt/Image;)Ljavax/swing/Icon;", nullptr, $STATIC, $method(static_cast<$Icon*(*)($Image*)>(&MetalUtils::getOceanDisabledButtonIcon))},
	{"getOceanToolBarIcon", "(Ljava/awt/Image;)Ljavax/swing/Icon;", nullptr, $STATIC, $method(static_cast<$Icon*(*)($Image*)>(&MetalUtils::getOceanToolBarIcon))},
	{"isLeftToRight", "(Ljava/awt/Component;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($Component*)>(&MetalUtils::isLeftToRight))},
	{"isToolBarButton", "(Ljavax/swing/JComponent;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($JComponent*)>(&MetalUtils::isToolBarButton))},
	{}
};

$InnerClassInfo _MetalUtils_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalUtils$OceanToolBarImageFilter", "javax.swing.plaf.metal.MetalUtils", "OceanToolBarImageFilter", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalUtils$OceanDisabledButtonImageFilter", "javax.swing.plaf.metal.MetalUtils", "OceanDisabledButtonImageFilter", $PRIVATE | $STATIC},
	{"javax.swing.plaf.metal.MetalUtils$GradientPainter", "javax.swing.plaf.metal.MetalUtils", "GradientPainter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _MetalUtils_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalUtils",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MetalUtils_MethodInfo_,
	nullptr,
	nullptr,
	_MetalUtils_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalUtils$OceanToolBarImageFilter,javax.swing.plaf.metal.MetalUtils$OceanDisabledButtonImageFilter,javax.swing.plaf.metal.MetalUtils$GradientPainter"
};

$Object* allocate$MetalUtils($Class* clazz) {
	return $of($alloc(MetalUtils));
}

void MetalUtils::init$() {
}

void MetalUtils::drawFlush3DBorder($Graphics* g, $Rectangle* r) {
	drawFlush3DBorder(g, $nc(r)->x, r->y, r->width, r->height);
}

void MetalUtils::drawFlush3DBorder($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->translate(x, y);
	g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
	g->drawRect(0, 0, w - 2, h - 2);
	g->setColor($($MetalLookAndFeel::getControlHighlight()));
	g->drawRect(1, 1, w - 2, h - 2);
	g->setColor($($MetalLookAndFeel::getControl()));
	g->drawLine(0, h - 1, 1, h - 2);
	g->drawLine(w - 1, 0, w - 2, 1);
	g->translate(-x, -y);
}

void MetalUtils::drawPressed3DBorder($Graphics* g, $Rectangle* r) {
	drawPressed3DBorder(g, $nc(r)->x, r->y, r->width, r->height);
}

void MetalUtils::drawDisabledBorder($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(g)->translate(x, y);
	g->setColor($($MetalLookAndFeel::getControlShadow()));
	g->drawRect(0, 0, w - 1, h - 1);
	g->translate(-x, -y);
}

void MetalUtils::drawPressed3DBorder($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$nc(g)->translate(x, y);
	drawFlush3DBorder(g, 0, 0, w, h);
	g->setColor($($MetalLookAndFeel::getControlShadow()));
	g->drawLine(1, 1, 1, h - 2);
	g->drawLine(1, 1, w - 2, 1);
	g->translate(-x, -y);
}

void MetalUtils::drawDark3DBorder($Graphics* g, $Rectangle* r) {
	drawDark3DBorder(g, $nc(r)->x, r->y, r->width, r->height);
}

void MetalUtils::drawDark3DBorder($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	$nc(g)->translate(x, y);
	drawFlush3DBorder(g, 0, 0, w, h);
	g->setColor($($MetalLookAndFeel::getControl()));
	g->drawLine(1, 1, 1, h - 2);
	g->drawLine(1, 1, w - 2, 1);
	g->setColor($($MetalLookAndFeel::getControlShadow()));
	g->drawLine(1, h - 2, 1, h - 2);
	g->drawLine(w - 2, 1, w - 2, 1);
	g->translate(-x, -y);
}

void MetalUtils::drawButtonBorder($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, bool active) {
	if (active) {
		drawActiveButtonBorder(g, x, y, w, h);
	} else {
		drawFlush3DBorder(g, x, y, w, h);
	}
}

void MetalUtils::drawActiveButtonBorder($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	drawFlush3DBorder(g, x, y, w, h);
	$nc(g)->setColor($($MetalLookAndFeel::getPrimaryControl()));
	g->drawLine(x + 1, y + 1, x + 1, h - 3);
	g->drawLine(x + 1, y + 1, w - 3, x + 1);
	g->setColor($($MetalLookAndFeel::getPrimaryControlDarkShadow()));
	g->drawLine(x + 2, h - 2, w - 2, h - 2);
	g->drawLine(w - 2, y + 2, w - 2, h - 2);
}

void MetalUtils::drawDefaultButtonBorder($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h, bool active) {
	drawButtonBorder(g, x + 1, y + 1, w - 1, h - 1, active);
	$nc(g)->translate(x, y);
	g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
	g->drawRect(0, 0, w - 3, h - 3);
	g->drawLine(w - 2, 0, w - 2, 0);
	g->drawLine(0, h - 2, 0, h - 2);
	g->translate(-x, -y);
}

void MetalUtils::drawDefaultButtonPressedBorder($Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalCurrentObjectStackCache();
	drawPressed3DBorder(g, x + 1, y + 1, w - 1, h - 1);
	$nc(g)->translate(x, y);
	g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
	g->drawRect(0, 0, w - 3, h - 3);
	g->drawLine(w - 2, 0, w - 2, 0);
	g->drawLine(0, h - 2, 0, h - 2);
	g->setColor($($MetalLookAndFeel::getControl()));
	g->drawLine(w - 1, 0, w - 1, 0);
	g->drawLine(0, h - 1, 0, h - 1);
	g->translate(-x, -y);
}

bool MetalUtils::isLeftToRight($Component* c) {
	return $nc($($nc(c)->getComponentOrientation()))->isLeftToRight();
}

int32_t MetalUtils::getInt(Object$* key, int32_t defaultValue) {
	$var($Object, value, $UIManager::get(key));
	if ($instanceOf($Integer, value)) {
		return $nc(($cast($Integer, value)))->intValue();
	}
	if ($instanceOf($String, value)) {
		try {
			return $Integer::parseInt($cast($String, value));
		} catch ($NumberFormatException&) {
			$catch();
		}
	}
	return defaultValue;
}

bool MetalUtils::drawGradient($Component* c, $Graphics* g, $String* key, int32_t x, int32_t y, int32_t w, int32_t h, bool vertical) {
	$var($List, gradient, $cast($List, $UIManager::get(key)));
	if (gradient == nullptr || !($instanceOf($Graphics2D, g))) {
		return false;
	}
	if (w <= 0 || h <= 0) {
		return true;
	}
	$init($MetalUtils$GradientPainter);
	$nc($MetalUtils$GradientPainter::INSTANCE)->paint(c, $cast($Graphics2D, g), gradient, x, y, w, h, vertical);
	return true;
}

bool MetalUtils::isToolBarButton($JComponent* c) {
	return ($instanceOf($JToolBar, $($nc(c)->getParent())));
}

$Icon* MetalUtils::getOceanToolBarIcon($Image* i) {
	$useLocalCurrentObjectStackCache();
	$var($ImageProducer, var$0, $nc(i)->getSource());
	$var($ImageProducer, prod, $new($FilteredImageSource, var$0, $$new($MetalUtils$OceanToolBarImageFilter)));
	return $new($ImageIconUIResource, $($nc($($Toolkit::getDefaultToolkit()))->createImage(prod)));
}

$Icon* MetalUtils::getOceanDisabledButtonIcon($Image* image) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, range, $cast($ObjectArray, $UIManager::get("Button.disabledGrayRange"_s)));
	int32_t min = 180;
	int32_t max = 215;
	if (range != nullptr) {
		min = $nc(($cast($Integer, range->get(0))))->intValue();
		max = $nc(($cast($Integer, range->get(1))))->intValue();
	}
	$var($ImageProducer, var$0, $nc(image)->getSource());
	$var($ImageProducer, prod, $new($FilteredImageSource, var$0, $$new($MetalUtils$OceanDisabledButtonImageFilter, min, max)));
	return $new($ImageIconUIResource, $($nc($($Toolkit::getDefaultToolkit()))->createImage(prod)));
}

MetalUtils::MetalUtils() {
}

$Class* MetalUtils::load$($String* name, bool initialize) {
	$loadClass(MetalUtils, name, initialize, &_MetalUtils_ClassInfo_, allocate$MetalUtils);
	return class$;
}

$Class* MetalUtils::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax