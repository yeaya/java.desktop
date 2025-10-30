#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$2.h>

#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JToggleButton.h>
#include <sun/swing/FilePane.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
#include <jcpp.h>

#undef VIEWTYPE_DETAILS
#undef VIEWTYPE_LIST

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $JToggleButton = ::javax::swing::JToggleButton;
using $FilePane = ::sun::swing::FilePane;
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUIImpl$2_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUIImpl$2, this$0)},
	{}
};

$MethodInfo _SynthFileChooserUIImpl$2_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;)V", nullptr, 0, $method(static_cast<void(SynthFileChooserUIImpl$2::*)($SynthFileChooserUIImpl*)>(&SynthFileChooserUIImpl$2::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SynthFileChooserUIImpl$2_EnclosingMethodInfo_ = {
	"sun.swing.plaf.synth.SynthFileChooserUIImpl",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _SynthFileChooserUIImpl$2_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthFileChooserUIImpl$2_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl$2",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_SynthFileChooserUIImpl$2_FieldInfo_,
	_SynthFileChooserUIImpl$2_MethodInfo_,
	nullptr,
	&_SynthFileChooserUIImpl$2_EnclosingMethodInfo_,
	_SynthFileChooserUIImpl$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl"
};

$Object* allocate$SynthFileChooserUIImpl$2($Class* clazz) {
	return $of($alloc(SynthFileChooserUIImpl$2));
}

void SynthFileChooserUIImpl$2::init$($SynthFileChooserUIImpl* this$0) {
	$set(this, this$0, this$0);
}

void SynthFileChooserUIImpl$2::propertyChange($PropertyChangeEvent* e) {
	if ("viewType"_s->equals($($nc(e)->getPropertyName()))) {
		int32_t viewType = $nc(this->this$0->filePane)->getViewType();
		switch (viewType) {
		case $FilePane::VIEWTYPE_LIST:
			{
				$nc(this->this$0->listViewButton)->setSelected(true);
				break;
			}
		case $FilePane::VIEWTYPE_DETAILS:
			{
				$nc(this->this$0->detailsViewButton)->setSelected(true);
				break;
			}
		}
	}
}

SynthFileChooserUIImpl$2::SynthFileChooserUIImpl$2() {
}

$Class* SynthFileChooserUIImpl$2::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUIImpl$2, name, initialize, &_SynthFileChooserUIImpl$2_ClassInfo_, allocate$SynthFileChooserUIImpl$2);
	return class$;
}

$Class* SynthFileChooserUIImpl$2::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun