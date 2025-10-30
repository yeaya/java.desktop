#include <javax/swing/plaf/synth/SynthTreeUI$SynthTreeCellEditor$1.h>

#include <javax/swing/JTextField.h>
#include <javax/swing/plaf/synth/SynthTreeUI$SynthTreeCellEditor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTextField = ::javax::swing::JTextField;
using $SynthTreeUI$SynthTreeCellEditor = ::javax::swing::plaf::synth::SynthTreeUI$SynthTreeCellEditor;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthTreeUI$SynthTreeCellEditor$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/synth/SynthTreeUI$SynthTreeCellEditor;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTreeUI$SynthTreeCellEditor$1, this$0)},
	{}
};

$MethodInfo _SynthTreeUI$SynthTreeCellEditor$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthTreeUI$SynthTreeCellEditor;)V", nullptr, 0, $method(static_cast<void(SynthTreeUI$SynthTreeCellEditor$1::*)($SynthTreeUI$SynthTreeCellEditor*)>(&SynthTreeUI$SynthTreeCellEditor$1::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SynthTreeUI$SynthTreeCellEditor$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellEditor",
	"createTreeCellEditor",
	"()Ljavax/swing/tree/TreeCellEditor;"
};

$InnerClassInfo _SynthTreeUI$SynthTreeCellEditor$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellEditor", "javax.swing.plaf.synth.SynthTreeUI", "SynthTreeCellEditor", $PRIVATE | $STATIC},
	{"javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellEditor$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthTreeUI$SynthTreeCellEditor$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellEditor$1",
	"javax.swing.JTextField",
	nullptr,
	_SynthTreeUI$SynthTreeCellEditor$1_FieldInfo_,
	_SynthTreeUI$SynthTreeCellEditor$1_MethodInfo_,
	nullptr,
	&_SynthTreeUI$SynthTreeCellEditor$1_EnclosingMethodInfo_,
	_SynthTreeUI$SynthTreeCellEditor$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.synth.SynthTreeUI"
};

$Object* allocate$SynthTreeUI$SynthTreeCellEditor$1($Class* clazz) {
	return $of($alloc(SynthTreeUI$SynthTreeCellEditor$1));
}

void SynthTreeUI$SynthTreeCellEditor$1::init$($SynthTreeUI$SynthTreeCellEditor* this$0) {
	$set(this, this$0, this$0);
	$JTextField::init$();
}

$String* SynthTreeUI$SynthTreeCellEditor$1::getName() {
	return "Tree.cellEditor"_s;
}

SynthTreeUI$SynthTreeCellEditor$1::SynthTreeUI$SynthTreeCellEditor$1() {
}

$Class* SynthTreeUI$SynthTreeCellEditor$1::load$($String* name, bool initialize) {
	$loadClass(SynthTreeUI$SynthTreeCellEditor$1, name, initialize, &_SynthTreeUI$SynthTreeCellEditor$1_ClassInfo_, allocate$SynthTreeUI$SynthTreeCellEditor$1);
	return class$;
}

$Class* SynthTreeUI$SynthTreeCellEditor$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax