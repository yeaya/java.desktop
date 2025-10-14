#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$4.h>

#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/plaf/basic/BasicFileChooserUI.h>
#include <sun/swing/FilePane.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
#include <jcpp.h>

using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $BasicFileChooserUI = ::javax::swing::plaf::basic::BasicFileChooserUI;
using $FilePane = ::sun::swing::FilePane;
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUIImpl$4_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUIImpl$4, this$0)},
	{}
};

$MethodInfo _SynthFileChooserUIImpl$4_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;)V", nullptr, 0, $method(static_cast<void(SynthFileChooserUIImpl$4::*)($SynthFileChooserUIImpl*)>(&SynthFileChooserUIImpl$4::init$))},
	{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SynthFileChooserUIImpl$4_EnclosingMethodInfo_ = {
	"sun.swing.plaf.synth.SynthFileChooserUIImpl",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _SynthFileChooserUIImpl$4_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$4", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthFileChooserUIImpl$4_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl$4",
	"java.awt.event.FocusAdapter",
	nullptr,
	_SynthFileChooserUIImpl$4_FieldInfo_,
	_SynthFileChooserUIImpl$4_MethodInfo_,
	nullptr,
	&_SynthFileChooserUIImpl$4_EnclosingMethodInfo_,
	_SynthFileChooserUIImpl$4_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl"
};

$Object* allocate$SynthFileChooserUIImpl$4($Class* clazz) {
	return $of($alloc(SynthFileChooserUIImpl$4));
}

void SynthFileChooserUIImpl$4::init$($SynthFileChooserUIImpl* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void SynthFileChooserUIImpl$4::focusGained($FocusEvent* e) {
	if (!$nc($(this->this$0->getFileChooser()))->isMultiSelectionEnabled()) {
		$nc(this->this$0->filePane)->clearSelection();
	}
}

SynthFileChooserUIImpl$4::SynthFileChooserUIImpl$4() {
}

$Class* SynthFileChooserUIImpl$4::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUIImpl$4, name, initialize, &_SynthFileChooserUIImpl$4_ClassInfo_, allocate$SynthFileChooserUIImpl$4);
	return class$;
}

$Class* SynthFileChooserUIImpl$4::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun