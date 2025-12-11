#include <javax/swing/text/DefaultCaret$SafeScroller.h>

#include <java/awt/Rectangle.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;
using $JTextComponent = ::javax::swing::text::JTextComponent;

namespace javax {
	namespace swing {
		namespace text {

$FieldInfo _DefaultCaret$SafeScroller_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/DefaultCaret;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultCaret$SafeScroller, this$0)},
	{"r", "Ljava/awt/Rectangle;", nullptr, 0, $field(DefaultCaret$SafeScroller, r)},
	{}
};

$MethodInfo _DefaultCaret$SafeScroller_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/DefaultCaret;Ljava/awt/Rectangle;)V", nullptr, 0, $method(static_cast<void(DefaultCaret$SafeScroller::*)($DefaultCaret*,$Rectangle*)>(&DefaultCaret$SafeScroller::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DefaultCaret$SafeScroller_InnerClassesInfo_[] = {
	{"javax.swing.text.DefaultCaret$SafeScroller", "javax.swing.text.DefaultCaret", "SafeScroller", 0},
	{}
};

$ClassInfo _DefaultCaret$SafeScroller_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.text.DefaultCaret$SafeScroller",
	"java.lang.Object",
	"java.lang.Runnable",
	_DefaultCaret$SafeScroller_FieldInfo_,
	_DefaultCaret$SafeScroller_MethodInfo_,
	nullptr,
	nullptr,
	_DefaultCaret$SafeScroller_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.DefaultCaret"
};

$Object* allocate$DefaultCaret$SafeScroller($Class* clazz) {
	return $of($alloc(DefaultCaret$SafeScroller));
}

void DefaultCaret$SafeScroller::init$($DefaultCaret* this$0, $Rectangle* r) {
	$set(this, this$0, this$0);
	$set(this, r, r);
}

void DefaultCaret$SafeScroller::run() {
	if (this->this$0->component != nullptr) {
		$nc(this->this$0->component)->scrollRectToVisible(this->r);
	}
}

DefaultCaret$SafeScroller::DefaultCaret$SafeScroller() {
}

$Class* DefaultCaret$SafeScroller::load$($String* name, bool initialize) {
	$loadClass(DefaultCaret$SafeScroller, name, initialize, &_DefaultCaret$SafeScroller_ClassInfo_, allocate$DefaultCaret$SafeScroller);
	return class$;
}

$Class* DefaultCaret$SafeScroller::class$ = nullptr;

		} // text
	} // swing
} // javax