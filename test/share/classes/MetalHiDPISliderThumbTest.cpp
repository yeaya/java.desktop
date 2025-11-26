#include <MetalHiDPISliderThumbTest.h>

#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef TYPE_INT_RGB
#undef VERTICAL

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $JComponent = ::javax::swing::JComponent;
using $JSlider = ::javax::swing::JSlider;
using $LookAndFeel = ::javax::swing::LookAndFeel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

class MetalHiDPISliderThumbTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(MetalHiDPISliderThumbTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		MetalHiDPISliderThumbTest::lambda$main$0();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<MetalHiDPISliderThumbTest$$Lambda$lambda$main$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo MetalHiDPISliderThumbTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalHiDPISliderThumbTest$$Lambda$lambda$main$0::*)()>(&MetalHiDPISliderThumbTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo MetalHiDPISliderThumbTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"MetalHiDPISliderThumbTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* MetalHiDPISliderThumbTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(MetalHiDPISliderThumbTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* MetalHiDPISliderThumbTest$$Lambda$lambda$main$0::class$ = nullptr;

$MethodInfo _MetalHiDPISliderThumbTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MetalHiDPISliderThumbTest::*)()>(&MetalHiDPISliderThumbTest::init$))},
	{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&MetalHiDPISliderThumbTest::lambda$main$0))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&MetalHiDPISliderThumbTest::main)), "java.lang.Exception"},
	{"testSliderThumb", "(Z)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)(bool)>(&MetalHiDPISliderThumbTest::testSliderThumb))},
	{}
};

$ClassInfo _MetalHiDPISliderThumbTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"MetalHiDPISliderThumbTest",
	"java.lang.Object",
	nullptr,
	nullptr,
	_MetalHiDPISliderThumbTest_MethodInfo_
};

$Object* allocate$MetalHiDPISliderThumbTest($Class* clazz) {
	return $of($alloc(MetalHiDPISliderThumbTest));
}

void MetalHiDPISliderThumbTest::init$() {
}

void MetalHiDPISliderThumbTest::main($StringArray* args) {
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(MetalHiDPISliderThumbTest$$Lambda$lambda$main$0)));
}

bool MetalHiDPISliderThumbTest::testSliderThumb(bool horizontal) {
	$useLocalCurrentObjectStackCache();
	int32_t scale = 3;
	int32_t w = horizontal ? 100 : 20;
	int32_t h = horizontal ? 20 : 100;
	$var($JSlider, testSlider, $new($JSlider));
	testSlider->setSize(w, h);
	$var($Dimension, size, $new($Dimension, w, h));
	testSlider->setPreferredSize(size);
	testSlider->setMinimumSize(size);
	testSlider->setMaximumSize(size);
	testSlider->setOrientation(horizontal ? $JSlider::HORIZONTAL : $JSlider::VERTICAL);
	int32_t sw = scale * w;
	int32_t sh = scale * h;
	$var($BufferedImage, img, $new($BufferedImage, sw, sh, $BufferedImage::TYPE_INT_RGB));
	$var($Graphics2D, g, img->createGraphics());
	$nc(g)->scale((double)scale, (double)scale);
	testSlider->paint(g);
	g->dispose();
	if (horizontal) {
		int32_t y = sh / 2;
		int32_t xMin = 0;
		int32_t rgb = img->getRGB(xMin, y);
		for (int32_t i = 0; i < sw; ++i) {
			if (img->getRGB(i, y) != rgb) {
				xMin = i;
				break;
			}
		}
		int32_t xMax = sw - 1;
		rgb = img->getRGB(xMax, y);
		for (int32_t i = sw - 1; i > 0; --i) {
			if (img->getRGB(i, y) != rgb) {
				xMax = i;
				break;
			}
		}
		int32_t d = 3 * scale;
		int32_t xc = (xMin + xMax) / 2 - d;
		rgb = img->getRGB(xc, y);
		for (int32_t x = xMin + d; x < xc; ++x) {
			if (img->getRGB(x, y) != rgb) {
				return true;
			}
		}
	} else {
		int32_t x = sw / 2;
		int32_t yMin = 0;
		int32_t rgb = img->getRGB(x, yMin);
		for (int32_t i = 0; i < sh; ++i) {
			if (img->getRGB(x, i) != rgb) {
				yMin = i;
				break;
			}
		}
		int32_t yMax = sh - 1;
		rgb = img->getRGB(x, yMax);
		for (int32_t i = sh - 1; i > 0; --i) {
			if (img->getRGB(x, i) != rgb) {
				yMax = i;
				break;
			}
		}
		int32_t d = 3 * scale;
		int32_t yc = (yMin + yMax) / 2 - d;
		rgb = img->getRGB(x, yc);
		for (int32_t y = yMin + d; y < yc; ++y) {
			if (img->getRGB(x, y) != rgb) {
				return true;
			}
		}
	}
	return false;
}

void MetalHiDPISliderThumbTest::lambda$main$0() {
	try {
		$UIManager::setLookAndFeel(static_cast<$LookAndFeel*>($$new($MetalLookAndFeel)));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	if (!testSliderThumb(true)) {
		$throwNew($RuntimeException, "Horizontal Slider Thumb is not scaled!"_s);
	}
	if (!testSliderThumb(false)) {
		$throwNew($RuntimeException, "Vertical Slider Thumb is not scaled!"_s);
	}
}

MetalHiDPISliderThumbTest::MetalHiDPISliderThumbTest() {
}

$Class* MetalHiDPISliderThumbTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(MetalHiDPISliderThumbTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return MetalHiDPISliderThumbTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$loadClass(MetalHiDPISliderThumbTest, name, initialize, &_MetalHiDPISliderThumbTest_ClassInfo_, allocate$MetalHiDPISliderThumbTest);
	return class$;
}

$Class* MetalHiDPISliderThumbTest::class$ = nullptr;