#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$1.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$AlignedLabel.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;
using $SynthFileChooserUIImpl$AlignedLabel = ::sun::swing::plaf::synth::SynthFileChooserUIImpl$AlignedLabel;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUIImpl$1_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUIImpl$1, this$0)},
	{}
};

$MethodInfo _SynthFileChooserUIImpl$1_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;)V", nullptr, 0, $method(static_cast<void(SynthFileChooserUIImpl$1::*)($SynthFileChooserUIImpl*)>(&SynthFileChooserUIImpl$1::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SynthFileChooserUIImpl$1_EnclosingMethodInfo_ = {
	"sun.swing.plaf.synth.SynthFileChooserUIImpl",
	nullptr,
	nullptr
};

$InnerClassInfo _SynthFileChooserUIImpl$1_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthFileChooserUIImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl$1",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_SynthFileChooserUIImpl$1_FieldInfo_,
	_SynthFileChooserUIImpl$1_MethodInfo_,
	nullptr,
	&_SynthFileChooserUIImpl$1_EnclosingMethodInfo_,
	_SynthFileChooserUIImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl"
};

$Object* allocate$SynthFileChooserUIImpl$1($Class* clazz) {
	return $of($alloc(SynthFileChooserUIImpl$1));
}

void SynthFileChooserUIImpl$1::init$($SynthFileChooserUIImpl* this$0) {
	$set(this, this$0, this$0);
}

void SynthFileChooserUIImpl$1::propertyChange($PropertyChangeEvent* event) {
	if (this->this$0->fileNameLabel != nullptr) {
		this->this$0->populateFileNameLabel();
	}
}

SynthFileChooserUIImpl$1::SynthFileChooserUIImpl$1() {
}

$Class* SynthFileChooserUIImpl$1::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUIImpl$1, name, initialize, &_SynthFileChooserUIImpl$1_ClassInfo_, allocate$SynthFileChooserUIImpl$1);
	return class$;
}

$Class* SynthFileChooserUIImpl$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun