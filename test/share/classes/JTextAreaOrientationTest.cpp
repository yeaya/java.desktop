#include <JTextAreaOrientationTest.h>

#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/awt/image/BufferedImage.h>
#include <java/awt/image/RenderedImage.h>
#include <java/awt/image/WritableRenderedImage.h>
#include <java/io/File.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/imageio/ImageIO.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

#undef LEFT_TO_RIGHT
#undef RIGHT_TO_LEFT

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Container = ::java::awt::Container;
using $Frame = ::java::awt::Frame;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $Window = ::java::awt::Window;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $RenderedImage = ::java::awt::image::RenderedImage;
using $WritableRenderedImage = ::java::awt::image::WritableRenderedImage;
using $File = ::java::io::File;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
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
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $JTextComponent = ::javax::swing::text::JTextComponent;

class JTextAreaOrientationTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(JTextAreaOrientationTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		JTextAreaOrientationTest::lambda$main$0(laf);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JTextAreaOrientationTest$$Lambda$lambda$main$0>());
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JTextAreaOrientationTest$$Lambda$lambda$main$0::fieldInfos[2] = {
	{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(JTextAreaOrientationTest$$Lambda$lambda$main$0, laf)},
	{}
};
$MethodInfo JTextAreaOrientationTest$$Lambda$lambda$main$0::methodInfos[3] = {
	{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(static_cast<void(JTextAreaOrientationTest$$Lambda$lambda$main$0::*)($UIManager$LookAndFeelInfo*)>(&JTextAreaOrientationTest$$Lambda$lambda$main$0::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JTextAreaOrientationTest$$Lambda$lambda$main$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"JTextAreaOrientationTest$$Lambda$lambda$main$0",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* JTextAreaOrientationTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$loadClass(JTextAreaOrientationTest$$Lambda$lambda$main$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JTextAreaOrientationTest$$Lambda$lambda$main$0::class$ = nullptr;

class JTextAreaOrientationTest$$Lambda$lambda$test$1$1 : public $Runnable {
	$class(JTextAreaOrientationTest$$Lambda$lambda$test$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($ComponentOrientation* orientation) {
		$set(this, orientation, orientation);
	}
	virtual void run() override {
		JTextAreaOrientationTest::lambda$test$1(orientation);
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JTextAreaOrientationTest$$Lambda$lambda$test$1$1>());
	}
	$ComponentOrientation* orientation = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo JTextAreaOrientationTest$$Lambda$lambda$test$1$1::fieldInfos[2] = {
	{"orientation", "Ljava/awt/ComponentOrientation;", nullptr, $PUBLIC, $field(JTextAreaOrientationTest$$Lambda$lambda$test$1$1, orientation)},
	{}
};
$MethodInfo JTextAreaOrientationTest$$Lambda$lambda$test$1$1::methodInfos[3] = {
	{"<init>", "(Ljava/awt/ComponentOrientation;)V", nullptr, $PUBLIC, $method(static_cast<void(JTextAreaOrientationTest$$Lambda$lambda$test$1$1::*)($ComponentOrientation*)>(&JTextAreaOrientationTest$$Lambda$lambda$test$1$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JTextAreaOrientationTest$$Lambda$lambda$test$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"JTextAreaOrientationTest$$Lambda$lambda$test$1$1",
	"java.lang.Object",
	"java.lang.Runnable",
	fieldInfos,
	methodInfos
};
$Class* JTextAreaOrientationTest$$Lambda$lambda$test$1$1::load$($String* name, bool initialize) {
	$loadClass(JTextAreaOrientationTest$$Lambda$lambda$test$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JTextAreaOrientationTest$$Lambda$lambda$test$1$1::class$ = nullptr;

class JTextAreaOrientationTest$$Lambda$lambda$test$2$2 : public $Runnable {
	$class(JTextAreaOrientationTest$$Lambda$lambda$test$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JTextAreaOrientationTest::lambda$test$2();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JTextAreaOrientationTest$$Lambda$lambda$test$2$2>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JTextAreaOrientationTest$$Lambda$lambda$test$2$2::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTextAreaOrientationTest$$Lambda$lambda$test$2$2::*)()>(&JTextAreaOrientationTest$$Lambda$lambda$test$2$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JTextAreaOrientationTest$$Lambda$lambda$test$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"JTextAreaOrientationTest$$Lambda$lambda$test$2$2",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* JTextAreaOrientationTest$$Lambda$lambda$test$2$2::load$($String* name, bool initialize) {
	$loadClass(JTextAreaOrientationTest$$Lambda$lambda$test$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JTextAreaOrientationTest$$Lambda$lambda$test$2$2::class$ = nullptr;

class JTextAreaOrientationTest$$Lambda$lambda$test$3$3 : public $Runnable {
	$class(JTextAreaOrientationTest$$Lambda$lambda$test$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JTextAreaOrientationTest::lambda$test$3();
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<JTextAreaOrientationTest$$Lambda$lambda$test$3$3>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo JTextAreaOrientationTest$$Lambda$lambda$test$3$3::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTextAreaOrientationTest$$Lambda$lambda$test$3$3::*)()>(&JTextAreaOrientationTest$$Lambda$lambda$test$3$3::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};
$ClassInfo JTextAreaOrientationTest$$Lambda$lambda$test$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"JTextAreaOrientationTest$$Lambda$lambda$test$3$3",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	methodInfos
};
$Class* JTextAreaOrientationTest$$Lambda$lambda$test$3$3::load$($String* name, bool initialize) {
	$loadClass(JTextAreaOrientationTest$$Lambda$lambda$test$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* JTextAreaOrientationTest$$Lambda$lambda$test$3$3::class$ = nullptr;

$FieldInfo _JTextAreaOrientationTest_FieldInfo_[] = {
	{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(JTextAreaOrientationTest, frame)},
	{"bounds", "Ljava/awt/Rectangle;", nullptr, $STATIC, $staticField(JTextAreaOrientationTest, bounds)},
	{}
};

$MethodInfo _JTextAreaOrientationTest_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JTextAreaOrientationTest::*)()>(&JTextAreaOrientationTest::init$))},
	{"compareBufferedImages", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($BufferedImage*,$BufferedImage*)>(&JTextAreaOrientationTest::compareBufferedImages))},
	{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&JTextAreaOrientationTest::lambda$main$0))},
	{"lambda$test$1", "(Ljava/awt/ComponentOrientation;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)($ComponentOrientation*)>(&JTextAreaOrientationTest::lambda$test$1))},
	{"lambda$test$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&JTextAreaOrientationTest::lambda$test$2))},
	{"lambda$test$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<void(*)()>(&JTextAreaOrientationTest::lambda$test$3))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&JTextAreaOrientationTest::main)), "java.lang.Exception"},
	{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($UIManager$LookAndFeelInfo*)>(&JTextAreaOrientationTest::setLookAndFeel))},
	{"test", "(Ljava/awt/ComponentOrientation;)Ljava/awt/image/BufferedImage;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BufferedImage*(*)($ComponentOrientation*)>(&JTextAreaOrientationTest::test)), "java.lang.Exception"},
	{}
};

$ClassInfo _JTextAreaOrientationTest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"JTextAreaOrientationTest",
	"java.lang.Object",
	nullptr,
	_JTextAreaOrientationTest_FieldInfo_,
	_JTextAreaOrientationTest_MethodInfo_
};

$Object* allocate$JTextAreaOrientationTest($Class* clazz) {
	return $of($alloc(JTextAreaOrientationTest));
}

$JFrame* JTextAreaOrientationTest::frame = nullptr;
$Rectangle* JTextAreaOrientationTest::bounds = nullptr;

void JTextAreaOrientationTest::init$() {
}

bool JTextAreaOrientationTest::compareBufferedImages($BufferedImage* bufferedImage0, $BufferedImage* bufferedImage1) {
	int32_t width = $nc(bufferedImage0)->getWidth();
	int32_t height = bufferedImage0->getHeight();
	bool var$0 = width != $nc(bufferedImage1)->getWidth();
	if (var$0 || height != $nc(bufferedImage1)->getHeight()) {
		return false;
	}
	for (int32_t y = 0; y < height; ++y) {
		for (int32_t x = 0; x < width; ++x) {
			int32_t var$1 = bufferedImage0->getRGB(x, y);
			if (var$1 != $nc(bufferedImage1)->getRGB(x, y)) {
				return false;
			}
		}
	}
	return true;
}

void JTextAreaOrientationTest::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$useLocalCurrentObjectStackCache();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported L&F: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void JTextAreaOrientationTest::main($StringArray* args) {
	$useLocalCurrentObjectStackCache();
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$nc($System::out)->println($$str({"Testing L&F: "_s, $($nc(laf)->getClassName())}));
				$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JTextAreaOrientationTest$$Lambda$lambda$main$0, laf)));
				$init($ComponentOrientation);
				$var($BufferedImage, left, test($ComponentOrientation::LEFT_TO_RIGHT));
				$ImageIO::write(static_cast<$RenderedImage*>(left), "png"_s, $$new($File, "JTextAreaTest-left.png"_s));
				$var($BufferedImage, right, test($ComponentOrientation::RIGHT_TO_LEFT));
				$ImageIO::write(static_cast<$RenderedImage*>(right), "png"_s, $$new($File, "JTextAreaTest-right.png"_s));
				if (compareBufferedImages(left, right)) {
					$throwNew($RuntimeException, "Orientation change is not effected"_s);
				}
			}
		}
	}
}

$BufferedImage* JTextAreaOrientationTest::test($ComponentOrientation* orientation) {
	$useLocalCurrentObjectStackCache();
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JTextAreaOrientationTest$$Lambda$lambda$test$1$1, orientation)));
	$Thread::sleep(1000);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JTextAreaOrientationTest$$Lambda$lambda$test$2$2)));
	$init(JTextAreaOrientationTest);
	$var($BufferedImage, img, $new($BufferedImage, $nc(JTextAreaOrientationTest::bounds)->width, $nc(JTextAreaOrientationTest::bounds)->height, 1));
	$var($Graphics, g, img->getGraphics());
	$nc(JTextAreaOrientationTest::frame)->paint(g);
	$nc(g)->dispose();
	$Thread::sleep(1000);
	$SwingUtilities::invokeAndWait(static_cast<$Runnable*>($$new(JTextAreaOrientationTest$$Lambda$lambda$test$3$3)));
	return img;
}

void JTextAreaOrientationTest::lambda$test$3() {
	$init(JTextAreaOrientationTest);
	$nc(JTextAreaOrientationTest::frame)->dispose();
}

void JTextAreaOrientationTest::lambda$test$2() {
	$init(JTextAreaOrientationTest);
	$assignStatic(JTextAreaOrientationTest::bounds, $nc(JTextAreaOrientationTest::frame)->getBounds());
}

void JTextAreaOrientationTest::lambda$test$1($ComponentOrientation* orientation) {
	$useLocalCurrentObjectStackCache();
	$init(JTextAreaOrientationTest);
	$assignStatic(JTextAreaOrientationTest::frame, $new($JFrame, "Swing JTextArea component"_s));
	$var($JTextArea, ta, $new($JTextArea));
	ta->setText("Swing JTextArea component"_s);
	ta->setName("jtext"_s);
	ta->setComponentOrientation(orientation);
	$nc($($nc(JTextAreaOrientationTest::frame)->getContentPane()))->add(static_cast<$Component*>(ta));
	$nc(JTextAreaOrientationTest::frame)->setSize(300, 100);
	$nc(JTextAreaOrientationTest::frame)->setUndecorated(true);
	$nc(JTextAreaOrientationTest::frame)->setLocationRelativeTo(nullptr);
	$nc(JTextAreaOrientationTest::frame)->setVisible(true);
}

void JTextAreaOrientationTest::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

JTextAreaOrientationTest::JTextAreaOrientationTest() {
}

$Class* JTextAreaOrientationTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(JTextAreaOrientationTest$$Lambda$lambda$main$0::classInfo$.name)) {
			return JTextAreaOrientationTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals(JTextAreaOrientationTest$$Lambda$lambda$test$1$1::classInfo$.name)) {
			return JTextAreaOrientationTest$$Lambda$lambda$test$1$1::load$(name, initialize);
		}
		if (name->equals(JTextAreaOrientationTest$$Lambda$lambda$test$2$2::classInfo$.name)) {
			return JTextAreaOrientationTest$$Lambda$lambda$test$2$2::load$(name, initialize);
		}
		if (name->equals(JTextAreaOrientationTest$$Lambda$lambda$test$3$3::classInfo$.name)) {
			return JTextAreaOrientationTest$$Lambda$lambda$test$3$3::load$(name, initialize);
		}
	}
	$loadClass(JTextAreaOrientationTest, name, initialize, &_JTextAreaOrientationTest_ClassInfo_, allocate$JTextAreaOrientationTest);
	return class$;
}

$Class* JTextAreaOrientationTest::class$ = nullptr;