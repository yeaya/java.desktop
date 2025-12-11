#include <sun/swing/plaf/synth/SynthFileChooserUI$1.h>

#include <javax/swing/event/ListDataEvent.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI$DelayedSelectionUpdater.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $SynthFileChooserUI = ::sun::swing::plaf::synth::SynthFileChooserUI;
using $SynthFileChooserUI$DelayedSelectionUpdater = ::sun::swing::plaf::synth::SynthFileChooserUI$DelayedSelectionUpdater;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUI$1_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUI$1, this$0)},
	{}
};

$MethodInfo _SynthFileChooserUI$1_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUI;)V", nullptr, 0, $method(static_cast<void(SynthFileChooserUI$1::*)($SynthFileChooserUI*)>(&SynthFileChooserUI$1::init$))},
	{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SynthFileChooserUI$1_EnclosingMethodInfo_ = {
	"sun.swing.plaf.synth.SynthFileChooserUI",
	"installListeners",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _SynthFileChooserUI$1_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthFileChooserUI$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUI$1",
	"java.lang.Object",
	"javax.swing.event.ListDataListener",
	_SynthFileChooserUI$1_FieldInfo_,
	_SynthFileChooserUI$1_MethodInfo_,
	nullptr,
	&_SynthFileChooserUI$1_EnclosingMethodInfo_,
	_SynthFileChooserUI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUI"
};

$Object* allocate$SynthFileChooserUI$1($Class* clazz) {
	return $of($alloc(SynthFileChooserUI$1));
}

void SynthFileChooserUI$1::init$($SynthFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void SynthFileChooserUI$1::contentsChanged($ListDataEvent* e) {
	$new($SynthFileChooserUI$DelayedSelectionUpdater, this->this$0);
}

void SynthFileChooserUI$1::intervalAdded($ListDataEvent* e) {
	$new($SynthFileChooserUI$DelayedSelectionUpdater, this->this$0);
}

void SynthFileChooserUI$1::intervalRemoved($ListDataEvent* e) {
}

SynthFileChooserUI$1::SynthFileChooserUI$1() {
}

$Class* SynthFileChooserUI$1::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUI$1, name, initialize, &_SynthFileChooserUI$1_ClassInfo_, allocate$SynthFileChooserUI$1);
	return class$;
}

$Class* SynthFileChooserUI$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun