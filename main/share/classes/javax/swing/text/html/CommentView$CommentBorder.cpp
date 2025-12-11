#include <javax/swing/text/html/CommentView$CommentBorder.h>

#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/LineBorder.h>
#include <javax/swing/text/html/CommentView.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LineBorder = ::javax::swing::border::LineBorder;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$MethodInfo _CommentView$CommentBorder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(CommentView$CommentBorder::*)()>(&CommentView$CommentBorder::init$))},
	{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC},
	{"isBorderOpaque", "()Z", nullptr, $PUBLIC},
	{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CommentView$CommentBorder_InnerClassesInfo_[] = {
	{"javax.swing.text.html.CommentView$CommentBorder", "javax.swing.text.html.CommentView", "CommentBorder", $STATIC},
	{}
};

$ClassInfo _CommentView$CommentBorder_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.html.CommentView$CommentBorder",
	"javax.swing.border.LineBorder",
	nullptr,
	nullptr,
	_CommentView$CommentBorder_MethodInfo_,
	nullptr,
	nullptr,
	_CommentView$CommentBorder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.CommentView"
};

$Object* allocate$CommentView$CommentBorder($Class* clazz) {
	return $of($alloc(CommentView$CommentBorder));
}

void CommentView$CommentBorder::init$() {
	$init($Color);
	$LineBorder::init$($Color::black, 1);
}

void CommentView$CommentBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$LineBorder::paintBorder(c, g, x + 3, y, width - 9, height);
}

$Insets* CommentView$CommentBorder::getBorderInsets($Component* c, $Insets* insets) {
	$var($Insets, retI, $LineBorder::getBorderInsets(c, insets));
	$nc(retI)->left += 3;
	retI->right += 3;
	return retI;
}

bool CommentView$CommentBorder::isBorderOpaque() {
	return false;
}

CommentView$CommentBorder::CommentView$CommentBorder() {
}

$Class* CommentView$CommentBorder::load$($String* name, bool initialize) {
	$loadClass(CommentView$CommentBorder, name, initialize, &_CommentView$CommentBorder_ClassInfo_, allocate$CommentView$CommentBorder);
	return class$;
}

$Class* CommentView$CommentBorder::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax