#include <javax/swing/text/html/FormView$MouseEventListener.h>

#include <java/awt/Point.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/text/html/FormView.h>
#include <jcpp.h>

using $Point = ::java::awt::Point;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $FormView = ::javax::swing::text::html::FormView;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

$FieldInfo _FormView$MouseEventListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/text/html/FormView;", nullptr, $FINAL | $SYNTHETIC, $field(FormView$MouseEventListener, this$0)},
	{}
};

$MethodInfo _FormView$MouseEventListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/text/html/FormView;)V", nullptr, $PROTECTED, $method(static_cast<void(FormView$MouseEventListener::*)($FormView*)>(&FormView$MouseEventListener::init$))},
	{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _FormView$MouseEventListener_InnerClassesInfo_[] = {
	{"javax.swing.text.html.FormView$MouseEventListener", "javax.swing.text.html.FormView", "MouseEventListener", $PROTECTED},
	{}
};

$ClassInfo _FormView$MouseEventListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.text.html.FormView$MouseEventListener",
	"java.awt.event.MouseAdapter",
	nullptr,
	_FormView$MouseEventListener_FieldInfo_,
	_FormView$MouseEventListener_MethodInfo_,
	nullptr,
	nullptr,
	_FormView$MouseEventListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.text.html.FormView"
};

$Object* allocate$FormView$MouseEventListener($Class* clazz) {
	return $of($alloc(FormView$MouseEventListener));
}

void FormView$MouseEventListener::init$($FormView* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void FormView$MouseEventListener::mouseReleased($MouseEvent* evt) {
	$useLocalCurrentObjectStackCache();
	$var($String, imageData, this->this$0->getImageData($($nc(evt)->getPoint())));
	this->this$0->imageSubmit(imageData);
}

FormView$MouseEventListener::FormView$MouseEventListener() {
}

$Class* FormView$MouseEventListener::load$($String* name, bool initialize) {
	$loadClass(FormView$MouseEventListener, name, initialize, &_FormView$MouseEventListener_ClassInfo_, allocate$FormView$MouseEventListener);
	return class$;
}

$Class* FormView$MouseEventListener::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax