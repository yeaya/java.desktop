#include <javax/swing/plaf/nimbus/NimbusLookAndFeel$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthStyleFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $NimbusDefaults = ::javax::swing::plaf::nimbus::NimbusDefaults;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthStyleFactory = ::javax::swing::plaf::synth::SynthStyleFactory;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

$FieldInfo _NimbusLookAndFeel$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(NimbusLookAndFeel$1, this$0)},
	{}
};

$MethodInfo _NimbusLookAndFeel$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/nimbus/NimbusLookAndFeel;)V", nullptr, 0, $method(static_cast<void(NimbusLookAndFeel$1::*)($NimbusLookAndFeel*)>(&NimbusLookAndFeel$1::init$))},
	{"getStyle", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _NimbusLookAndFeel$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.nimbus.NimbusLookAndFeel",
	"initialize",
	"()V"
};

$InnerClassInfo _NimbusLookAndFeel$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.nimbus.NimbusLookAndFeel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _NimbusLookAndFeel$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.nimbus.NimbusLookAndFeel$1",
	"javax.swing.plaf.synth.SynthStyleFactory",
	nullptr,
	_NimbusLookAndFeel$1_FieldInfo_,
	_NimbusLookAndFeel$1_MethodInfo_,
	nullptr,
	&_NimbusLookAndFeel$1_EnclosingMethodInfo_,
	_NimbusLookAndFeel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.nimbus.NimbusLookAndFeel"
};

$Object* allocate$NimbusLookAndFeel$1($Class* clazz) {
	return $of($alloc(NimbusLookAndFeel$1));
}

void NimbusLookAndFeel$1::init$($NimbusLookAndFeel* this$0) {
	$set(this, this$0, this$0);
	$SynthStyleFactory::init$();
}

$SynthStyle* NimbusLookAndFeel$1::getStyle($JComponent* c, $Region* r) {
	return $nc(this->this$0->defaults)->getStyle(c, r);
}

NimbusLookAndFeel$1::NimbusLookAndFeel$1() {
}

$Class* NimbusLookAndFeel$1::load$($String* name, bool initialize) {
	$loadClass(NimbusLookAndFeel$1, name, initialize, &_NimbusLookAndFeel$1_ClassInfo_, allocate$NimbusLookAndFeel$1);
	return class$;
}

$Class* NimbusLookAndFeel$1::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax