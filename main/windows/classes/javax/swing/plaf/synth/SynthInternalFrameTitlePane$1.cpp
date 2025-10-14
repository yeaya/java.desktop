#include <javax/swing/plaf/synth/SynthInternalFrameTitlePane$1.h>

#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/plaf/synth/SynthInternalFrameTitlePane.h>
#include <jcpp.h>

using $MouseAdapter = ::java::awt::event::MouseAdapter;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $SynthInternalFrameTitlePane = ::javax::swing::plaf::synth::SynthInternalFrameTitlePane;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthInternalFrameTitlePane$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;", nullptr, $FINAL | $SYNTHETIC, $field(SynthInternalFrameTitlePane$1, this$0)},
	{}
};

$MethodInfo _SynthInternalFrameTitlePane$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthInternalFrameTitlePane;)V", nullptr, 0, $method(static_cast<void(SynthInternalFrameTitlePane$1::*)($SynthInternalFrameTitlePane*)>(&SynthInternalFrameTitlePane$1::init$))},
	{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SynthInternalFrameTitlePane$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.synth.SynthInternalFrameTitlePane",
	"assembleSystemMenu",
	"()V"
};

$InnerClassInfo _SynthInternalFrameTitlePane$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthInternalFrameTitlePane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthInternalFrameTitlePane$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthInternalFrameTitlePane$1",
	"java.awt.event.MouseAdapter",
	nullptr,
	_SynthInternalFrameTitlePane$1_FieldInfo_,
	_SynthInternalFrameTitlePane$1_MethodInfo_,
	nullptr,
	&_SynthInternalFrameTitlePane$1_EnclosingMethodInfo_,
	_SynthInternalFrameTitlePane$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthInternalFrameTitlePane"
};

$Object* allocate$SynthInternalFrameTitlePane$1($Class* clazz) {
	return $of($alloc(SynthInternalFrameTitlePane$1));
}

void SynthInternalFrameTitlePane$1::init$($SynthInternalFrameTitlePane* this$0) {
	$set(this, this$0, this$0);
	$MouseAdapter::init$();
}

void SynthInternalFrameTitlePane$1::mousePressed($MouseEvent* e) {
	try {
		$nc($($SynthInternalFrameTitlePane::access$000(this->this$0)))->setSelected(true);
	} catch ($PropertyVetoException&) {
		$catch();
	}
	this->this$0->showSystemMenu();
}

SynthInternalFrameTitlePane$1::SynthInternalFrameTitlePane$1() {
}

$Class* SynthInternalFrameTitlePane$1::load$($String* name, bool initialize) {
	$loadClass(SynthInternalFrameTitlePane$1, name, initialize, &_SynthInternalFrameTitlePane$1_ClassInfo_, allocate$SynthInternalFrameTitlePane$1);
	return class$;
}

$Class* SynthInternalFrameTitlePane$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax