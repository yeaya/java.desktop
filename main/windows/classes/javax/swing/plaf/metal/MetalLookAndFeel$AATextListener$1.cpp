#include <javax/swing/plaf/metal/MetalLookAndFeel$AATextListener$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel$AATextListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MetalLookAndFeel$AATextListener = ::javax::swing::plaf::metal::MetalLookAndFeel$AATextListener;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

$FieldInfo _MetalLookAndFeel$AATextListener$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/metal/MetalLookAndFeel$AATextListener;", nullptr, $FINAL | $SYNTHETIC, $field(MetalLookAndFeel$AATextListener$1, this$0)},
	{}
};

$MethodInfo _MetalLookAndFeel$AATextListener$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/metal/MetalLookAndFeel$AATextListener;)V", nullptr, 0, $method(static_cast<void(MetalLookAndFeel$AATextListener$1::*)($MetalLookAndFeel$AATextListener*)>(&MetalLookAndFeel$AATextListener$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _MetalLookAndFeel$AATextListener$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.metal.MetalLookAndFeel$AATextListener",
	"updateUI",
	"()V"
};

$InnerClassInfo _MetalLookAndFeel$AATextListener$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.metal.MetalLookAndFeel$AATextListener", "javax.swing.plaf.metal.MetalLookAndFeel", "AATextListener", $STATIC},
	{"javax.swing.plaf.metal.MetalLookAndFeel$AATextListener$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _MetalLookAndFeel$AATextListener$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.metal.MetalLookAndFeel$AATextListener$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_MetalLookAndFeel$AATextListener$1_FieldInfo_,
	_MetalLookAndFeel$AATextListener$1_MethodInfo_,
	nullptr,
	&_MetalLookAndFeel$AATextListener$1_EnclosingMethodInfo_,
	_MetalLookAndFeel$AATextListener$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.metal.MetalLookAndFeel"
};

$Object* allocate$MetalLookAndFeel$AATextListener$1($Class* clazz) {
	return $of($alloc(MetalLookAndFeel$AATextListener$1));
}

void MetalLookAndFeel$AATextListener$1::init$($MetalLookAndFeel$AATextListener* this$0) {
	$set(this, this$0, this$0);
}

void MetalLookAndFeel$AATextListener$1::run() {
	$MetalLookAndFeel$AATextListener::updateAllUIs();
	$MetalLookAndFeel$AATextListener::setUpdatePending(false);
}

MetalLookAndFeel$AATextListener$1::MetalLookAndFeel$AATextListener$1() {
}

$Class* MetalLookAndFeel$AATextListener$1::load$($String* name, bool initialize) {
	$loadClass(MetalLookAndFeel$AATextListener$1, name, initialize, &_MetalLookAndFeel$AATextListener$1_ClassInfo_, allocate$MetalLookAndFeel$AATextListener$1);
	return class$;
}

$Class* MetalLookAndFeel$AATextListener$1::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax