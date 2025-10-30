#include <javax/swing/plaf/basic/DragRecognitionSupport$BeforeDrag.h>

#include <java/awt/event/MouseEvent.h>
#include <javax/swing/plaf/basic/DragRecognitionSupport.h>
#include <jcpp.h>

using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DragRecognitionSupport = ::javax::swing::plaf::basic::DragRecognitionSupport;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$MethodInfo _DragRecognitionSupport$BeforeDrag_MethodInfo_[] = {
	{"dragStarting", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$InnerClassInfo _DragRecognitionSupport$BeforeDrag_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag", "javax.swing.plaf.basic.DragRecognitionSupport", "BeforeDrag", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DragRecognitionSupport$BeforeDrag_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.plaf.basic.DragRecognitionSupport$BeforeDrag",
	nullptr,
	nullptr,
	nullptr,
	_DragRecognitionSupport$BeforeDrag_MethodInfo_,
	nullptr,
	nullptr,
	_DragRecognitionSupport$BeforeDrag_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.DragRecognitionSupport"
};

$Object* allocate$DragRecognitionSupport$BeforeDrag($Class* clazz) {
	return $of($alloc(DragRecognitionSupport$BeforeDrag));
}

$Class* DragRecognitionSupport$BeforeDrag::load$($String* name, bool initialize) {
	$loadClass(DragRecognitionSupport$BeforeDrag, name, initialize, &_DragRecognitionSupport$BeforeDrag_ClassInfo_, allocate$DragRecognitionSupport$BeforeDrag);
	return class$;
}

$Class* DragRecognitionSupport$BeforeDrag::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax