#include <bug8032667$1$1.h>

#include <bug8032667$1.h>
#include <java/awt/Canvas.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/awt/image/ImageObserver.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $bug8032667$1 = ::bug8032667$1;
using $Canvas = ::java::awt::Canvas;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $ImageObserver = ::java::awt::image::ImageObserver;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

$FieldInfo _bug8032667$1$1_FieldInfo_[] = {
	{"this$1", "Lbug8032667$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug8032667$1$1, this$1)},
	{"val$image2", "Ljava/awt/Image;", nullptr, $FINAL | $SYNTHETIC, $field(bug8032667$1$1, val$image2)},
	{"val$image1", "Ljava/awt/Image;", nullptr, $FINAL | $SYNTHETIC, $field(bug8032667$1$1, val$image1)},
	{}
};

$MethodInfo _bug8032667$1$1_MethodInfo_[] = {
	{"<init>", "(Lbug8032667$1;Ljava/awt/Image;Ljava/awt/Image;)V", nullptr, 0, $method(static_cast<void(bug8032667$1$1::*)($bug8032667$1*,$Image*,$Image*)>(&bug8032667$1$1::init$))},
	{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug8032667$1$1_EnclosingMethodInfo_ = {
	"bug8032667$1",
	"run",
	"()V"
};

$InnerClassInfo _bug8032667$1$1_InnerClassesInfo_[] = {
	{"bug8032667$1", nullptr, nullptr, 0},
	{"bug8032667$1$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8032667$1$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8032667$1$1",
	"java.awt.Canvas",
	nullptr,
	_bug8032667$1$1_FieldInfo_,
	_bug8032667$1$1_MethodInfo_,
	nullptr,
	&_bug8032667$1$1_EnclosingMethodInfo_,
	_bug8032667$1$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8032667"
};

$Object* allocate$bug8032667$1$1($Class* clazz) {
	return $of($alloc(bug8032667$1$1));
}

void bug8032667$1$1::init$($bug8032667$1* this$1, $Image* val$image1, $Image* val$image2) {
	$set(this, this$1, this$1);
	$set(this, val$image1, val$image1);
	$set(this, val$image2, val$image2);
	$Canvas::init$();
}

void bug8032667$1$1::paint($Graphics* g) {
	$Canvas::paint(g);
	$nc(g)->drawImage(this->val$image1, 0, 0, 260, 100, this);
	g->drawImage(this->val$image2, 0, 100 + 5, 260, 100, this);
}

bug8032667$1$1::bug8032667$1$1() {
}

$Class* bug8032667$1$1::load$($String* name, bool initialize) {
	$loadClass(bug8032667$1$1, name, initialize, &_bug8032667$1$1_ClassInfo_, allocate$bug8032667$1$1);
	return class$;
}

$Class* bug8032667$1$1::class$ = nullptr;