#include <javax/swing/text/html/ImageView$1.h>

#include <javax/swing/text/html/ImageView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ImageView = ::javax::swing::text::html::ImageView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _ImageView$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/ImageView;", nullptr, $FINAL | $SYNTHETIC, $field(ImageView$1, this$0)},
	{}
};

$MethodInfo _ImageView$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/ImageView;)V", nullptr, 0, $method(static_cast<void(ImageView$1::*)($ImageView*)>(&ImageView$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ImageView$1_EnclosingMethodInfo_ = {
	"javax.swing.text.html.ImageView",
	"safePreferenceChanged",
	"()V"
};

$InnerClassInfo _ImageView$1_InnerClassesInfo_[] = {
	{"javax.swing.text.html.ImageView$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ImageView$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.ImageView$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_ImageView$1_FieldInfo_,
	_ImageView$1_MethodInfo_,
	nullptr,
	&_ImageView$1_EnclosingMethodInfo_,
	_ImageView$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.ImageView"
};

$Object* allocate$ImageView$1($Class* clazz) {
	return $of($alloc(ImageView$1));
}

void ImageView$1::init$($ImageView* this$0) {
	$set(this, this$0, this$0);
}

void ImageView$1::run() {
	this->this$0->safePreferenceChanged();
}

ImageView$1::ImageView$1() {
}

$Class* ImageView$1::load$($String* name, bool initialize) {
	$loadClass(ImageView$1, name, initialize, &_ImageView$1_ClassInfo_, allocate$ImageView$1);
	return class$;
}

$Class* ImageView$1::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax