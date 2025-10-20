#include <PaintThumbSize.h>

#include <java/awt/Color.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/io/PrintStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/Void.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageIO.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SliderUI.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <javax/swing/plaf/metal/DefaultMetalTheme.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <javax/swing/plaf/metal/MetalTheme.h>
#include <jcpp.h>

#undef BLACK
#undef CYAN
#undef SCALE
#undef SHIFT

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Color = ::java::awt::Color;
using $EventQueue = ::java::awt::EventQueue;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $ImageIO = ::javax::imageio::ImageIO;
using $JSlider = ::javax::swing::JSlider;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $SliderUI = ::javax::swing::plaf::SliderUI;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;
using $DefaultMetalTheme = ::javax::swing::plaf::metal::DefaultMetalTheme;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;
using $MetalTheme = ::javax::swing::plaf::metal::MetalTheme;

class PaintThumbSize$$Lambda$lambda$main$0 : public $Runnable {
	$class(PaintThumbSize$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		PaintThumbSize::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PaintThumbSize$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo PaintThumbSize$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(PaintThumbSize$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo PaintThumbSize$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(PaintThumbSize$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&PaintThumbSize$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PaintThumbSize$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"PaintThumbSize$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* PaintThumbSize$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(PaintThumbSize$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PaintThumbSize$$Lambda$lambda$main$0::class$ = nullptr;

class PaintThumbSize$$Lambda$test$1 : public $Runnable {
	$class(PaintThumbSize$$Lambda$test$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		PaintThumbSize::test();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PaintThumbSize$$Lambda$test$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PaintThumbSize$$Lambda$test$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PaintThumbSize$$Lambda$test$1::*)()>(&PaintThumbSize$$Lambda$test$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PaintThumbSize$$Lambda$test$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"PaintThumbSize$$Lambda$test$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* PaintThumbSize$$Lambda$test$1::load$($String* name, bool initialize) {
	$loadClass(PaintThumbSize$$Lambda$test$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PaintThumbSize$$Lambda$test$1::class$ = nullptr;

class PaintThumbSize$$Lambda$lambda$main$1$2 : public $Runnable {
	$class(PaintThumbSize$$Lambda$lambda$main$1$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		PaintThumbSize::lambda$main$1();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<PaintThumbSize$$Lambda$lambda$main$1$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo PaintThumbSize$$Lambda$lambda$main$1$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PaintThumbSize$$Lambda$lambda$main$1$2::*)()>(&PaintThumbSize$$Lambda$lambda$main$1$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo PaintThumbSize$$Lambda$lambda$main$1$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"PaintThumbSize$$Lambda$lambda$main$1$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* PaintThumbSize$$Lambda$lambda$main$1$2::load$($String* name, bool initialize) {
	$loadClass(PaintThumbSize$$Lambda$lambda$main$1$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* PaintThumbSize$$Lambda$lambda$main$1$2::class$ = nullptr;

$FieldInfo _PaintThumbSize_FieldInfo_[] = {
	{"SCALE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PaintThumbSize, SCALE)},
	{"SHIFT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PaintThumbSize, SHIFT)},
	{}
};

$MethodInfo _PaintThumbSize_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(PaintThumbSize::*)()>(&PaintThumbSize::init$))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&PaintThumbSize::lambda$main$0))},
	{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&PaintThumbSize::lambda$main$1))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&PaintThumbSize::main)), "java.lang.Exception"},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&PaintThumbSize::setLookAndFeel))},
	{"test", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&PaintThumbSize::test))},
	{}
};

$ClassInfo _PaintThumbSize_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"PaintThumbSize",
	"java.lang.Object",
	nullptr,
	_PaintThumbSize_FieldInfo_,
	_PaintThumbSize_MethodInfo_
};

$Object* allocate$PaintThumbSize($Class* clazz) {
	return $of($alloc(PaintThumbSize));
}

void PaintThumbSize::init$() {
}

void PaintThumbSize::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(PaintThumbSize$$Lambda$lambda$main$0, laf)));
				$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(PaintThumbSize$$Lambda$test$1)));
				if ($nc($($nc(laf)->getClassName()))->contains("Metal"_s)) {
					$EventQueue::invokeAndWait(static_cast<$Runnable*>($$new(PaintThumbSize$$Lambda$lambda$main$1$2)));
				}
			}
		}
	}
}

void PaintThumbSize::test() {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, bi, $new($BufferedImage, 500, 500, 2));
	$var($Graphics2D, g, bi->createGraphics());
	$init($Color);
	$nc(g)->setColor($Color::CYAN);
	int32_t var$0 = bi->getWidth();
	g->fillRect(0, 0, var$0, bi->getHeight());
	g->setColor($Color::BLACK);
	g->scale((double)PaintThumbSize::SCALE, (double)PaintThumbSize::SCALE);
	g->translate(PaintThumbSize::SHIFT, PaintThumbSize::SHIFT);
	$var($JSlider, slider, $new($JSlider));
	$var($SliderUI, ui, $cast($SliderUI, slider->getUI()));
	if ($instanceOf($BasicSliderUI, ui)) {
		$var($BasicSliderUI, bui, $cast($BasicSliderUI, ui));
		$nc(bui)->setThumbLocation(0, 0);
		bui->paintThumb(g);
		for (int32_t y = 0; y < bi->getHeight(); ++y) {
			for (int32_t x = 0; x < bi->getWidth(); ++x) {
				if (x >= PaintThumbSize::SHIFT * PaintThumbSize::SCALE && y >= PaintThumbSize::SHIFT * PaintThumbSize::SCALE) {
					continue;
				}
				int32_t var$1 = bi->getRGB(x, y);
				if (var$1 != $nc($Color::CYAN)->getRGB()) {
					$init($System);
					$nc($System::err)->println($$str({"x = "_s, $$str(x)}));
					$nc($System::err)->println($$str({"y = "_s, $$str(y)}));
					try {
						$ImageIO::write(static_cast<$RenderedImage*>(bi), "png"_s, $$new($File, "image.png"_s));
					} catch ($IOException&) {
						$var($IOException, e, $catch());
						e->printStackTrace();
					}
					$throwNew($RuntimeException, "Wrong color"_s);
				}
			}
		}
	}
	g->dispose();
}

void PaintThumbSize::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($System);
		$nc($System::err)->println($$str({"LookAndFeel: "_s, $($nc(laf)->getClassName())}));
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException&) {
		$var($UnsupportedLookAndFeelException, ignored, $catch());
		$init($System);
		$nc($System::err)->println($$str({"Unsupported LookAndFeel: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException&) {
		$var($ReflectiveOperationException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void PaintThumbSize::lambda$main$1() {
	$init($System);
	$nc($System::err)->println("\tAdditional theme: DefaultMetalTheme"_s);
	$MetalLookAndFeel::setCurrentTheme($$new($DefaultMetalTheme));
	test();
}

void PaintThumbSize::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

PaintThumbSize::PaintThumbSize() {
}

$Class* PaintThumbSize::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(PaintThumbSize$$Lambda$lambda$main$0::classInfo$.name)) {
			return PaintThumbSize$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(PaintThumbSize$$Lambda$test$1::classInfo$.name)) {
			return PaintThumbSize$$Lambda$test$1::load$(name, initialize);
		}
		if (name->equals(PaintThumbSize$$Lambda$lambda$main$1$2::classInfo$.name)) {
			return PaintThumbSize$$Lambda$lambda$main$1$2::load$(name, initialize);
		}
	}
	$loadClass(PaintThumbSize, name, initialize, &_PaintThumbSize_ClassInfo_, allocate$PaintThumbSize);
	return class$;
}

$Class* PaintThumbSize::class$ = nullptr;