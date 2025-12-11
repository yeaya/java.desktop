#include <bug8016833$2.h>

#include <bug8016833.h>
#include <java/awt/Color.h>
#include <java/awt/Graphics.h>
#include <java/awt/image/BufferedImage.h>
#include <jcpp.h>

using $bug8016833 = ::bug8016833;
using $Color = ::java::awt::Color;
using $Graphics = ::java::awt::Graphics;
using $BufferedImage = ::java::awt::image::BufferedImage;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug8016833$2_FieldInfo_[] = {
	{"this$0", "Lbug8016833;", nullptr, $FINAL | $SYNTHETIC, $field(bug8016833$2, this$0)},
	{"val$img", "Ljava/awt/image/BufferedImage;", nullptr, $FINAL | $SYNTHETIC, $field(bug8016833$2, val$img)},
	{}
};

$MethodInfo _bug8016833$2_MethodInfo_[] = {
	{"<init>", "(Lbug8016833;Ljava/awt/image/BufferedImage;)V", "()V", 0, $method(static_cast<void(bug8016833$2::*)($bug8016833*,$BufferedImage*)>(&bug8016833$2::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8016833$2_EnclosingMethodInfo_ = {
	"bug8016833",
	"createImage",
	"()Ljava/awt/image/BufferedImage;"
};

$InnerClassInfo _bug8016833$2_InnerClassesInfo_[] = {
	{"bug8016833$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8016833$2_ClassInfo_ = {
	$ACC_SUPER,
	"bug8016833$2",
	"java.lang.Object",
	"java.lang.Runnable",
	_bug8016833$2_FieldInfo_,
	_bug8016833$2_MethodInfo_,
	nullptr,
	&_bug8016833$2_EnclosingMethodInfo_,
	_bug8016833$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8016833"
};

$Object* allocate$bug8016833$2($Class* clazz) {
	return $of($alloc(bug8016833$2));
}

void bug8016833$2::init$($bug8016833* this$0, $BufferedImage* val$img) {
	$set(this, this$0, this$0);
	$set(this, val$img, val$img);
}

void bug8016833$2::run() {
	$useLocalCurrentObjectStackCache();
	$var($Graphics, g, $nc(this->val$img)->getGraphics());
	$nc(g)->setColor($$new($Color, this->this$0->getEmptyPixel()));
	g->fillRect(0, 0, 10000, 10000);
}

bug8016833$2::bug8016833$2() {
}

$Class* bug8016833$2::load$($String* name, bool initialize) {
	$loadClass(bug8016833$2, name, initialize, &_bug8016833$2_ClassInfo_, allocate$bug8016833$2);
	return class$;
}

$Class* bug8016833$2::class$ = nullptr;