#include <javax/swing/plaf/synth/SynthLookAndFeel$AATextListener$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel$AATextListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SynthLookAndFeel$AATextListener = ::javax::swing::plaf::synth::SynthLookAndFeel$AATextListener;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthLookAndFeel$AATextListener$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthLookAndFeel$AATextListener;", nullptr, $FINAL | $SYNTHETIC, $field(SynthLookAndFeel$AATextListener$1, this$0)},
	{}
};

$MethodInfo _SynthLookAndFeel$AATextListener$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthLookAndFeel$AATextListener;)V", nullptr, 0, $method(static_cast<void(SynthLookAndFeel$AATextListener$1::*)($SynthLookAndFeel$AATextListener*)>(&SynthLookAndFeel$AATextListener$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SynthLookAndFeel$AATextListener$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.synth.SynthLookAndFeel$AATextListener",
	"updateUI",
	"()V"
};

$InnerClassInfo _SynthLookAndFeel$AATextListener$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthLookAndFeel$AATextListener", "javax.swing.plaf.synth.SynthLookAndFeel", "AATextListener", $PRIVATE | $STATIC},
	{"javax.swing.plaf.synth.SynthLookAndFeel$AATextListener$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthLookAndFeel$AATextListener$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthLookAndFeel$AATextListener$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_SynthLookAndFeel$AATextListener$1_FieldInfo_,
	_SynthLookAndFeel$AATextListener$1_MethodInfo_,
	nullptr,
	&_SynthLookAndFeel$AATextListener$1_EnclosingMethodInfo_,
	_SynthLookAndFeel$AATextListener$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthLookAndFeel"
};

$Object* allocate$SynthLookAndFeel$AATextListener$1($Class* clazz) {
	return $of($alloc(SynthLookAndFeel$AATextListener$1));
}

void SynthLookAndFeel$AATextListener$1::init$($SynthLookAndFeel$AATextListener* this$0) {
	$set(this, this$0, this$0);
}

void SynthLookAndFeel$AATextListener$1::run() {
	$SynthLookAndFeel$AATextListener::updateAllUIs();
	$SynthLookAndFeel$AATextListener::setUpdatePending(false);
}

SynthLookAndFeel$AATextListener$1::SynthLookAndFeel$AATextListener$1() {
}

$Class* SynthLookAndFeel$AATextListener$1::load$($String* name, bool initialize) {
	$loadClass(SynthLookAndFeel$AATextListener$1, name, initialize, &_SynthLookAndFeel$AATextListener$1_ClassInfo_, allocate$SynthLookAndFeel$AATextListener$1);
	return class$;
}

$Class* SynthLookAndFeel$AATextListener$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax