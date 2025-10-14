#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$3.h>

#include <java/awt/Dimension.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JTextField.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
#include <jcpp.h>

#undef MAX_VALUE

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $JTextField = ::javax::swing::JTextField;
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

$FieldInfo _SynthFileChooserUIImpl$3_FieldInfo_[] = {
	{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUIImpl$3, this$0)},
	{}
};

$MethodInfo _SynthFileChooserUIImpl$3_MethodInfo_[] = {
	{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;I)V", nullptr, 0, $method(static_cast<void(SynthFileChooserUIImpl$3::*)($SynthFileChooserUIImpl*,int32_t)>(&SynthFileChooserUIImpl$3::init$))},
	{"getMaximumSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _SynthFileChooserUIImpl$3_EnclosingMethodInfo_ = {
	"sun.swing.plaf.synth.SynthFileChooserUIImpl",
	"installComponents",
	"(Ljavax/swing/JFileChooser;)V"
};

$InnerClassInfo _SynthFileChooserUIImpl$3_InnerClassesInfo_[] = {
	{"sun.swing.plaf.synth.SynthFileChooserUIImpl$3", nullptr, nullptr, 0},
	{}
};

$ClassInfo _SynthFileChooserUIImpl$3_ClassInfo_ = {
	$ACC_SUPER,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl$3",
	"javax.swing.JTextField",
	nullptr,
	_SynthFileChooserUIImpl$3_FieldInfo_,
	_SynthFileChooserUIImpl$3_MethodInfo_,
	nullptr,
	&_SynthFileChooserUIImpl$3_EnclosingMethodInfo_,
	_SynthFileChooserUIImpl$3_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.swing.plaf.synth.SynthFileChooserUIImpl"
};

$Object* allocate$SynthFileChooserUIImpl$3($Class* clazz) {
	return $of($alloc(SynthFileChooserUIImpl$3));
}

void SynthFileChooserUIImpl$3::init$($SynthFileChooserUIImpl* this$0, int32_t columns) {
	$set(this, this$0, this$0);
	$JTextField::init$(columns);
}

$Dimension* SynthFileChooserUIImpl$3::getMaximumSize() {
	return $new($Dimension, $Short::MAX_VALUE, $nc($($JTextField::getPreferredSize()))->height);
}

SynthFileChooserUIImpl$3::SynthFileChooserUIImpl$3() {
}

$Class* SynthFileChooserUIImpl$3::load$($String* name, bool initialize) {
	$loadClass(SynthFileChooserUIImpl$3, name, initialize, &_SynthFileChooserUIImpl$3_ClassInfo_, allocate$SynthFileChooserUIImpl$3);
	return class$;
}

$Class* SynthFileChooserUIImpl$3::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun