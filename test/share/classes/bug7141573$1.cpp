#include <bug7141573$1.h>

#include <bug7141573.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <javax/swing/JProgressBar.h>
#include <jcpp.h>

#undef TYPE_INT_ARGB

using $bug7141573 = ::bug7141573;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $JComponent = ::javax::swing::JComponent;
using $JProgressBar = ::javax::swing::JProgressBar;

$MethodInfo _bug7141573$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7141573$1::*)()>(&bug7141573$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7141573$1_EnclosingMethodInfo_ = {
	"bug7141573",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _bug7141573$1_InnerClassesInfo_[] = {
	{"bug7141573$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7141573$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7141573$1",
	"java.lang.Object",
	"java.lang.Runnable",
	nullptr,
	_bug7141573$1_MethodInfo_,
	nullptr,
	&_bug7141573$1_EnclosingMethodInfo_,
	_bug7141573$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7141573"
};

$Object* allocate$bug7141573$1($Class* clazz) {
	return $of($alloc(bug7141573$1));
}

void bug7141573$1::init$() {
}

void bug7141573$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($BufferedImage, image, $new($BufferedImage, 200, 200, $BufferedImage::TYPE_INT_ARGB));
	$var($JProgressBar, bar, $new($JProgressBar));
	bar->setStringPainted(true);
	bar->setSize(100, 1);
	bar->paint($(image->getGraphics()));
	bar->setSize(1, 100);
	bar->paint($(image->getGraphics()));
	$nc($System::out)->println("The test bug7141573 is passed."_s);
}

bug7141573$1::bug7141573$1() {
}

$Class* bug7141573$1::load$($String* name, bool initialize) {
	$loadClass(bug7141573$1, name, initialize, &_bug7141573$1_ClassInfo_, allocate$bug7141573$1);
	return class$;
}

$Class* bug7141573$1::class$ = nullptr;