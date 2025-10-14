#include <bug7142955$1.h>

#include <bug7142955.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <java/io/PrintStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <jcpp.h>

#undef TEST_COLOR
#undef TYPE_INT_ARGB
#undef WHITE

using $bug7142955 = ::bug7142955;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;

$MethodInfo _bug7142955$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7142955$1::*)()>(&bug7142955$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7142955$1_EnclosingMethodInfo_ = {
	"bug7142955",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7142955$1_InnerClassesInfo_[] = {
	{"bug7142955$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7142955$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7142955$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7142955$1_MethodInfo_,
	nullptr,
	&_bug7142955$1_EnclosingMethodInfo_,
	_bug7142955$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7142955"
};

$Object* allocate$bug7142955$1($Class* clazz) {
	return $of($alloc(bug7142955$1));
}

void bug7142955$1::init$() {
}

void bug7142955$1::run() {
	int32_t w = 200;
	int32_t h = 100;
	$var($BufferedImage, image, $new($BufferedImage, w, h, $BufferedImage::TYPE_INT_ARGB));
	$var($Graphics, g, image->getGraphics());
	$init($Color);
	$nc(g)->setColor($Color::WHITE);
	int32_t var$0 = image->getWidth();
	g->fillRect(0, 0, var$0, image->getHeight());
	$var($DefaultTreeCellRenderer, renderer, $new($DefaultTreeCellRenderer));
	renderer->setSize(w, h);
	renderer->paint(g);
	for (int32_t y = 0; y < h; ++y) {
		for (int32_t x = 0; x < w; ++x) {
			int32_t var$1 = image->getRGB(x, y);
			$init($bug7142955);
			if (var$1 == $nc($bug7142955::TEST_COLOR)->getRGB()) {
				$throwNew($RuntimeException, "Test bug7142955 failed"_s);
			}
		}
	}
	$init($System);
	$nc($System::out)->println("Test bug7142955 passed."_s);
}

bug7142955$1::bug7142955$1() {
}

$Class* bug7142955$1::load$($String* name, bool initialize) {
	$loadClass(bug7142955$1, name, initialize, &_bug7142955$1_ClassInfo_, allocate$bug7142955$1);
	return class$;
}

$Class* bug7142955$1::class$ = nullptr;