#include <sun/swing/plaf/synth/SynthFileChooserUI$DelayedSelectionUpdater.h>

#include <java/lang/Runnable.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SynthFileChooserUI = ::sun::swing::plaf::synth::SynthFileChooserUI;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUI$DelayedSelectionUpdater_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUI$DelayedSelectionUpdater, this$0)},
	{}
};

$MethodInfo _SynthFileChooserUI$DelayedSelectionUpdater_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUI;)V", nullptr, 0, $method(static_cast<void(SynthFileChooserUI$DelayedSelectionUpdater::*)($SynthFileChooserUI*)>(&SynthFileChooserUI$DelayedSelectionUpdater::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SynthFileChooserUI$DelayedSelectionUpdater_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUI$DelayedSelectionUpdater", "sun.swing.plaf.synth.SynthFileChooserUI", "DelayedSelectionUpdater", $PRIVATE},
	{}
};

$ClassInfo _SynthFileChooserUI$DelayedSelectionUpdater_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUI$DelayedSelectionUpdater",
	"java.lang.Object",
	"java.lang.Runnable",
	_SynthFileChooserUI$DelayedSelectionUpdater_FieldInfo_,
	_SynthFileChooserUI$DelayedSelectionUpdater_MethodInfo_,
	nullptr,
	nullptr,
	_SynthFileChooserUI$DelayedSelectionUpdater_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUI"
};

$Object* allocate$SynthFileChooserUI$DelayedSelectionUpdater($Class* clazz) {
	return $of($alloc(SynthFileChooserUI$DelayedSelectionUpdater));
}

void SynthFileChooserUI$DelayedSelectionUpdater::init$($SynthFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$SwingUtilities::invokeLater(this);
}

void SynthFileChooserUI$DelayedSelectionUpdater::run() {
	this->this$0->updateFileNameCompletion();
}

SynthFileChooserUI$DelayedSelectionUpdater::SynthFileChooserUI$DelayedSelectionUpdater() {
}

$Class* SynthFileChooserUI$DelayedSelectionUpdater::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUI$DelayedSelectionUpdater, name, initialize, &_SynthFileChooserUI$DelayedSelectionUpdater_ClassInfo_, allocate$SynthFileChooserUI$DelayedSelectionUpdater);
	return class$;
}

$Class* SynthFileChooserUI$DelayedSelectionUpdater::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun