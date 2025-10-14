#include <javax/swing/plaf/metal/MetalToolBarUI$MetalRolloverListener.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicToolBarUI$PropertyListener.h>
#include <javax/swing/plaf/basic/BasicToolBarUI.h>
#include <javax/swing/plaf/metal/MetalToolBarUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicToolBarUI = ::javax::swing::plaf::basic::BasicToolBarUI;
using $BasicToolBarUI$PropertyListener = ::javax::swing::plaf::basic::BasicToolBarUI$PropertyListener;
using $MetalToolBarUI = ::javax::swing::plaf::metal::MetalToolBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalToolBarUI$MetalRolloverListener_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalToolBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalToolBarUI$MetalRolloverListener, this$0)},
	{}
};

$MethodInfo _MetalToolBarUI$MetalRolloverListener_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalToolBarUI;)V", nullptr, $PROTECTED, $method(static_cast<void(MetalToolBarUI$MetalRolloverListener::*)($MetalToolBarUI*)>(&MetalToolBarUI$MetalRolloverListener::init$))},
	{}
};

$InnerClassInfo _MetalToolBarUI$MetalRolloverListener_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalToolBarUI$MetalRolloverListener", "javax.swing.plaf.metal.MetalToolBarUI", "MetalRolloverListener", $PROTECTED},
	{"javax.swing.plaf.basic.BasicToolBarUI$PropertyListener", "javax.swing.plaf.basic.BasicToolBarUI", "PropertyListener", $PROTECTED},
	{}
};

$ClassInfo _MetalToolBarUI$MetalRolloverListener_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.plaf.metal.MetalToolBarUI$MetalRolloverListener",
	"javax.swing.plaf.basic.BasicToolBarUI$PropertyListener",
	nullptr,
	_MetalToolBarUI$MetalRolloverListener_FieldInfo_,
	_MetalToolBarUI$MetalRolloverListener_MethodInfo_,
	nullptr,
	nullptr,
	_MetalToolBarUI$MetalRolloverListener_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalToolBarUI"
};

$Object* allocate$MetalToolBarUI$MetalRolloverListener($Class* clazz) {
	return $of($alloc(MetalToolBarUI$MetalRolloverListener));
}

void MetalToolBarUI$MetalRolloverListener::init$($MetalToolBarUI* this$0) {
	$set(this, this$0, this$0);
	$BasicToolBarUI$PropertyListener::init$(this$0);
}

MetalToolBarUI$MetalRolloverListener::MetalToolBarUI$MetalRolloverListener() {
}

$Class* MetalToolBarUI$MetalRolloverListener::load$($String* name, bool initialize) {
	$loadClass(MetalToolBarUI$MetalRolloverListener, name, initialize, &_MetalToolBarUI$MetalRolloverListener_ClassInfo_, allocate$MetalToolBarUI$MetalRolloverListener);
	return class$;
}

$Class* MetalToolBarUI$MetalRolloverListener::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax