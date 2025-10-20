#include <CaretFloatingPointAPITest$CustomCaret$CaretMouseListener.h>

#include <CaretFloatingPointAPITest$CustomCaret.h>
#include <java/awt/Point.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <javax/swing/text/Position$Bias.h>
#include <jcpp.h>

using $CaretFloatingPointAPITest$CustomCaret = ::CaretFloatingPointAPITest$CustomCaret;
using $Position$BiasArray = $Array<::javax::swing::text::Position$Bias>;
using $Point = ::java::awt::Point;
using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TextUI = ::javax::swing::plaf::TextUI;
using $JTextComponent = ::javax::swing::text::JTextComponent;
using $Position$Bias = ::javax::swing::text::Position$Bias;

$FieldInfo _CaretFloatingPointAPITest$CustomCaret$CaretMouseListener_FieldInfo_[] = {
	{"this$0", "LCaretFloatingPointAPITest$CustomCaret;", nullptr, $FINAL | $SYNTHETIC, $field(CaretFloatingPointAPITest$CustomCaret$CaretMouseListener, this$0)},
	{}
};

$MethodInfo _CaretFloatingPointAPITest$CustomCaret$CaretMouseListener_MethodInfo_[] = {
	{"<init>", "(LCaretFloatingPointAPITest$CustomCaret;)V", nullptr, $PRIVATE, $method(static_cast<void(CaretFloatingPointAPITest$CustomCaret$CaretMouseListener::*)($CaretFloatingPointAPITest$CustomCaret*)>(&CaretFloatingPointAPITest$CustomCaret$CaretMouseListener::init$))},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CaretFloatingPointAPITest$CustomCaret$CaretMouseListener_InnerClassesInfo_[] = {
	{"CaretFloatingPointAPITest$CustomCaret", "CaretFloatingPointAPITest", "CustomCaret", $STATIC},
	{"CaretFloatingPointAPITest$CustomCaret$CaretMouseListener", "CaretFloatingPointAPITest$CustomCaret", "CaretMouseListener", $PRIVATE},
	{}
};

$ClassInfo _CaretFloatingPointAPITest$CustomCaret$CaretMouseListener_ClassInfo_ = {
	$ACC_SUPER,
	"CaretFloatingPointAPITest$CustomCaret$CaretMouseListener",
	"java.awt.event.MouseAdapter",
	nullptr,
	_CaretFloatingPointAPITest$CustomCaret$CaretMouseListener_FieldInfo_,
	_CaretFloatingPointAPITest$CustomCaret$CaretMouseListener_MethodInfo_,
	nullptr,
	nullptr,
	_CaretFloatingPointAPITest$CustomCaret$CaretMouseListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"CaretFloatingPointAPITest"
};

$Object* allocate$CaretFloatingPointAPITest$CustomCaret$CaretMouseListener($Class* clazz) {
	return $of($alloc(CaretFloatingPointAPITest$CustomCaret$CaretMouseListener));
}

void CaretFloatingPointAPITest$CustomCaret$CaretMouseListener::init$($CaretFloatingPointAPITest$CustomCaret* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void CaretFloatingPointAPITest$CustomCaret$CaretMouseListener::mousePressed($MouseEvent* e) {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = $nc(e)->getX();
	$var($Point, pt, $new($Point, var$0, e->getY()));
	$var($Position$BiasArray, biasRet, $new($Position$BiasArray, 1));
	int32_t pos = $nc($($cast($TextUI, $nc(this->this$0->component)->getUI())))->viewToModel(this->this$0->component, pt, biasRet);
	if (biasRet->get(0) == nullptr) {
		$init($Position$Bias);
		biasRet->set(0, $Position$Bias::Forward);
	}
	if (pos >= 0) {
		this->this$0->setDot(pos);
	}
}

CaretFloatingPointAPITest$CustomCaret$CaretMouseListener::CaretFloatingPointAPITest$CustomCaret$CaretMouseListener() {
}

$Class* CaretFloatingPointAPITest$CustomCaret$CaretMouseListener::load$($String* name, bool initialize) {
	$loadClass(CaretFloatingPointAPITest$CustomCaret$CaretMouseListener, name, initialize, &_CaretFloatingPointAPITest$CustomCaret$CaretMouseListener_ClassInfo_, allocate$CaretFloatingPointAPITest$CustomCaret$CaretMouseListener);
	return class$;
}

$Class* CaretFloatingPointAPITest$CustomCaret$CaretMouseListener::class$ = nullptr;