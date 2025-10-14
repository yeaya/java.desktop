#include <bug6501991.h>

#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Graphics2D.h>
#include <java/awt/image/BufferedImage.h>
#include <java/lang/Array.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

#undef TYPE_INT_RGB

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Graphics2D = ::java::awt::Graphics2D;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;

$MethodInfo _bug6501991_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(bug6501991::*)()>(&bug6501991::init$))},
	{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($StringArray*)>(&bug6501991::main))},
	{}
};

$ClassInfo _bug6501991_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"bug6501991",
	"java.lang.Object",
	nullptr,
	nullptr,
	_bug6501991_MethodInfo_
};

$Object* allocate$bug6501991($Class* clazz) {
	return $of($alloc(bug6501991));
}

void bug6501991::init$() {
}

void bug6501991::main($StringArray* args) {
	try {
		$var($JLabel, l, $new($JLabel, u"\u0634\u0634\u0634\u0634\u0634\u0634\u0634"_s));
		l->setSize(5, 22);
		$var($BufferedImage, image, $new($BufferedImage, 50, 50, $BufferedImage::TYPE_INT_RGB));
		l->paint($(image->createGraphics()));
	} catch ($ArrayIndexOutOfBoundsException&) {
		$var($ArrayIndexOutOfBoundsException, e, $catch());
		$throwNew($RuntimeException, "failed"_s);
	}
}

bug6501991::bug6501991() {
}

$Class* bug6501991::load$($String* name, bool initialize) {
	$loadClass(bug6501991, name, initialize, &_bug6501991_ClassInfo_, allocate$bug6501991);
	return class$;
}

$Class* bug6501991::class$ = nullptr;