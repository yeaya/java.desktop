#include <bug8016833.h>

#include <bug8016833$1.h>
#include <bug8016833$2.h>
#include <bug8016833$3.h>
#include <bug8016833$4.h>
#include <bug8016833$5.h>
#include <java/awt/Graphics.h>
#include <java/awt/Rectangle.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Double.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyleConstants.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $bug8016833$1 = ::bug8016833$1;
using $bug8016833$2 = ::bug8016833$2;
using $bug8016833$3 = ::bug8016833$3;
using $bug8016833$4 = ::bug8016833$4;
using $bug8016833$5 = ::bug8016833$5;
using $Graphics = ::java::awt::Graphics;
using $Rectangle = ::java::awt::Rectangle;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $MutableAttributeSet = ::javax::swing::text::MutableAttributeSet;
using $Style = ::javax::swing::text::Style;
using $StyleConstants = ::javax::swing::text::StyleConstants;

$MethodInfo _bug8016833_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug8016833::*)()>(&bug8016833::init$))},
	{"assertTrue", "(Z)V", nullptr, 0},
	{"createImage", "()Ljava/awt/image/BufferedImage;", nullptr, 0},
	{"drawText", "(Ljava/awt/Graphics;ZZZ)V", nullptr, 0},
	{"drawText", "(Ljava/awt/Graphics;Ljava/lang/String;ZZZ)V", nullptr, 0},
	{"getEmptyPixel", "()I", nullptr, 0},
	{"getPixelsOutline", "(Ljava/awt/image/BufferedImage;)Ljava/awt/Rectangle;", nullptr, 0},
	{"isLineEmpty", "(Ljava/awt/image/BufferedImage;IZ)Z", nullptr, 0},
	{"isPixelEmpty", "(I)Z", nullptr, 0},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug8016833::main))},
	{"setNormalStyle", "(Ljavax/swing/text/Style;)V", nullptr, 0},
	{"subImages", "(Ljava/awt/image/BufferedImage;Ljava/awt/image/BufferedImage;)Ljava/awt/image/BufferedImage;", nullptr, 0},
	{"subPixels", "(II)I", nullptr, 0},
	{"testNormalScript", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&bug8016833::testNormalScript))},
	{"testStrikthrough", "()V", nullptr, 0},
	{"testSubScript", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&bug8016833::testSubScript))},
	{"testSuperScript", "()V", nullptr, $STATIC, $method(static_cast<void(*)()>(&bug8016833::testSuperScript))},
	{"testUnderline", "()V", nullptr, 0},
	{}
};

$InnerClassInfo _bug8016833_InnerClassesInfo_[] = {
	{"bug8016833$5", nullptr, nullptr, 0},
	{"bug8016833$4", nullptr, nullptr, 0},
	{"bug8016833$3", nullptr, nullptr, 0},
	{"bug8016833$2", nullptr, nullptr, 0},
	{"bug8016833$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8016833_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug8016833",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug8016833_MethodInfo_,
	nullptr,
	nullptr,
	_bug8016833_InnerClassesInfo_,
	nullptr,
	nullptr,
	"bug8016833$5,bug8016833$4,bug8016833$3,bug8016833$2,bug8016833$1"
};

$Object* allocate$bug8016833($Class* clazz) {
	return $of($alloc(bug8016833));
}

void bug8016833::init$() {
}

void bug8016833::drawText($Graphics* g, bool underline, bool strikethrough, bool background) {
	drawText(g, "mama"_s, underline, strikethrough, background);
}

void bug8016833::drawText($Graphics* g, $String* text, bool underline, bool strikethrough, bool background) {
	try {
		$SwingUtilities::invokeAndWait($$new($bug8016833$1, this, underline, strikethrough, background, g));
	} catch ($InterruptedException&) {
		$var($InterruptedException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InvocationTargetException&) {
		$var($InvocationTargetException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void bug8016833::setNormalStyle($Style* style) {
	$StyleConstants::setSuperscript(style, true);
}

int32_t bug8016833::getEmptyPixel() {
	return -1;
}

bool bug8016833::isPixelEmpty(int32_t argb) {
	return ((int32_t)(argb & (uint32_t)0x00FFFFFF)) == ((int32_t)(getEmptyPixel() & (uint32_t)0x00FFFFFF));
}

bool bug8016833::isLineEmpty($BufferedImage* img, int32_t coord, bool isHorizontal) {
	int32_t len = isHorizontal ? $nc(img)->getWidth() : img->getHeight();
	for (int32_t i = 0; i < len; ++i) {
		int32_t pixel = isHorizontal ? img->getRGB(i, coord) : img->getRGB(coord, i);
		if (!isPixelEmpty(pixel)) {
			return false;
		}
	}
	return true;
}

$Rectangle* bug8016833::getPixelsOutline($BufferedImage* img) {
	int32_t x1 = 0;
	while (true) {
		bool var$0 = x1 < $nc(img)->getWidth();
		if (!(var$0 && isLineEmpty(img, x1, false))) {
			break;
		}
		{
			++x1;
		}
	}
	int32_t x2 = $nc(img)->getWidth() - 1;
	while (x2 >= 0 && isLineEmpty(img, x2, false)) {
		--x2;
	}
	int32_t y1 = 0;
	while (true) {
		bool var$1 = y1 < img->getHeight();
		if (!(var$1 && isLineEmpty(img, y1, true))) {
			break;
		}
		{
			++y1;
		}
	}
	int32_t y2 = img->getHeight() - 1;
	while (y2 >= 0 && isLineEmpty(img, y2, true)) {
		--y2;
	}
	return $new($Rectangle, x1, y1, x2 - x1 + 1, y2 - y1 + 1);
}

$BufferedImage* bug8016833::createImage() {
	$var($BufferedImage, img, $new($BufferedImage, 200, 100, $BufferedImage::TYPE_INT_ARGB));
	try {
		$SwingUtilities::invokeAndWait($$new($bug8016833$2, this, img));
	} catch ($InterruptedException&) {
		$var($InterruptedException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	} catch ($InvocationTargetException&) {
		$var($InvocationTargetException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
	return img;
}

int32_t bug8016833::subPixels(int32_t pix1, int32_t pix2) {
	if (pix1 == pix2) {
		return getEmptyPixel();
	}
	return pix1;
}

$BufferedImage* bug8016833::subImages($BufferedImage* img1, $BufferedImage* img2) {
	int32_t var$1 = $nc(img1)->getHeight();
	bool var$0 = var$1 != $nc(img2)->getHeight();
	if (!var$0) {
		int32_t var$2 = $nc(img1)->getWidth();
		var$0 = var$2 != $nc(img2)->getWidth();
	}
	if (var$0) {
		$throwNew($RuntimeException, "Different sizes"_s);
	}
	int32_t var$3 = $nc(img1)->getWidth();
	int32_t var$4 = img1->getHeight();
	$var($BufferedImage, ret, $new($BufferedImage, var$3, var$4, img1->getType()));
	for (int32_t x = 0; x < ret->getWidth(); ++x) {
		for (int32_t y = 0; y < ret->getHeight(); ++y) {
			int32_t var$5 = $nc(img1)->getRGB(x, y);
			ret->setRGB(x, y, subPixels(var$5, $nc(img2)->getRGB(x, y)));
		}
	}
	return ret;
}

void bug8016833::testUnderline() {
	$init($System);
	$nc($System::out)->println("  testUnderline()"_s);
	$var($BufferedImage, img1, createImage());
	drawText($($nc(img1)->getGraphics()), true, false, false);
	$var($Rectangle, out1, getPixelsOutline(img1));
	$nc($System::out)->println($$str({"   Underlined: "_s, out1}));
	$var($BufferedImage, img2, createImage());
	drawText($($nc(img2)->getGraphics()), false, false, false);
	$var($Rectangle, out2, getPixelsOutline(img2));
	$nc($System::out)->println($$str({"   Normal: "_s, out2}));
	$var($BufferedImage, img3, subImages(img1, img2));
	$var($Rectangle, out3, getPixelsOutline(img3));
	$nc($System::out)->println($$str({"   Sub: "_s, out3}));
	assertTrue($nc(out3)->getHeight() <= 2);
	double var$0 = $nc(out3)->getWidth() * 0.8;
	assertTrue(var$0 < $nc(out2)->getWidth());
	double var$1 = $nc(out3)->getY();
	double var$3 = $nc(out1)->getY();
	double var$2 = (var$3 + $nc(out2)->getHeight() - 1);
	assertTrue(var$1 - var$2 < 4);
	double var$4 = $nc(out3)->getY();
	double var$6 = $nc(out1)->getY();
	double var$5 = (var$6 + $nc(out2)->getHeight() - 1);
	assertTrue(var$4 - var$5 > 0);
}

void bug8016833::testStrikthrough() {
	$init($System);
	$nc($System::out)->println("  testStrikthrough()"_s);
	$var($BufferedImage, img1, createImage());
	drawText($($nc(img1)->getGraphics()), false, true, false);
	$var($Rectangle, out1, getPixelsOutline(img1));
	$nc($System::out)->println($$str({"   Striked: "_s, out1}));
	$var($BufferedImage, img2, createImage());
	drawText($($nc(img2)->getGraphics()), false, false, false);
	$var($Rectangle, out2, getPixelsOutline(img2));
	$nc($System::out)->println($$str({"   Normal: "_s, out2}));
	$var($BufferedImage, img3, subImages(img1, img2));
	$var($Rectangle, out3, getPixelsOutline(img3));
	$nc($System::out)->println($$str({"   Sub: "_s, out3}));
	assertTrue($nc(out3)->getHeight() <= 2);
	double var$0 = $nc(out3)->getWidth() * 0.8;
	assertTrue(var$0 < $nc(out2)->getWidth());
	double var$1 = $nc(out3)->getY();
	double var$3 = $nc(out1)->getY();
	double var$2 = (var$3 + $nc(out2)->getHeight() - 1);
	assertTrue(var$1 - var$2 < 0);
	double var$4 = $nc(out3)->getY();
	assertTrue(var$4 - $nc(out1)->getY() > 1);
}

void bug8016833::assertTrue(bool b) {
	if (!b) {
		$throwNew($RuntimeException, "Assertion failed"_s);
	}
}

void bug8016833::testSuperScript() {
	$init($System);
	$nc($System::out)->println("testSuperScript()"_s);
	$var(bug8016833, b, $new($bug8016833$3));
	b->testUnderline();
	b->testStrikthrough();
}

void bug8016833::testSubScript() {
	$init($System);
	$nc($System::out)->println("testSubScript()"_s);
	$var(bug8016833, b, $new($bug8016833$4));
	b->testUnderline();
	b->testStrikthrough();
}

void bug8016833::testNormalScript() {
	$init($System);
	$nc($System::out)->println("testNormalScript()"_s);
	$var(bug8016833, b, $new($bug8016833$5));
	b->testUnderline();
	b->testStrikthrough();
}

void bug8016833::main($StringArray* args) {
	testSubScript();
	testSuperScript();
	testNormalScript();
}

bug8016833::bug8016833() {
}

$Class* bug8016833::load$($String* name, bool initialize) {
	$loadClass(bug8016833, name, initialize, &_bug8016833_ClassInfo_, allocate$bug8016833);
	return class$;
}

$Class* bug8016833::class$ = nullptr;