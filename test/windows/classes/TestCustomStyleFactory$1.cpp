#include <TestCustomStyleFactory$1.h>

#include <TestCustomStyleFactory.h>
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
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthStyleFactory.h>
#include <jcpp.h>

using $TestCustomStyleFactory = ::TestCustomStyleFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthStyleFactory = ::javax::swing::plaf::synth::SynthStyleFactory;

$FieldInfo _TestCustomStyleFactory$1_FieldInfo_[] = {
	{"val$original", "Ljavax/swing/plaf/synth/SynthStyleFactory;", nullptr, $FINAL | $SYNTHETIC, $field(TestCustomStyleFactory$1, val$original)},
	{}
};

$MethodInfo _TestCustomStyleFactory$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/synth/SynthStyleFactory;)V", nullptr, 0, $method(static_cast<void(TestCustomStyleFactory$1::*)($SynthStyleFactory*)>(&TestCustomStyleFactory$1::init$))},
	{"getStyle", "(Ljavax/swing/JComponent;Ljavax/swing/plaf/synth/Region;)Ljavax/swing/plaf/synth/SynthStyle;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _TestCustomStyleFactory$1_EnclosingMethodInfo_ = {
	"TestCustomStyleFactory",
	"main",
	"([Ljava/lang/String;)V"
};

$InnerClassInfo _TestCustomStyleFactory$1_InnerClassesInfo_[] = {
	{"TestCustomStyleFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _TestCustomStyleFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"TestCustomStyleFactory$1",
	"javax.swing.plaf.synth.SynthStyleFactory",
	nullptr,
	_TestCustomStyleFactory$1_FieldInfo_,
	_TestCustomStyleFactory$1_MethodInfo_,
	nullptr,
	&_TestCustomStyleFactory$1_EnclosingMethodInfo_,
	_TestCustomStyleFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"TestCustomStyleFactory"
};

$Object* allocate$TestCustomStyleFactory$1($Class* clazz) {
	return $of($alloc(TestCustomStyleFactory$1));
}

void TestCustomStyleFactory$1::init$($SynthStyleFactory* val$original) {
	$set(this, val$original, val$original);
	$SynthStyleFactory::init$();
}

$SynthStyle* TestCustomStyleFactory$1::getStyle($JComponent* c, $Region* id) {
	return $nc(this->val$original)->getStyle(c, id);
}

TestCustomStyleFactory$1::TestCustomStyleFactory$1() {
}

$Class* TestCustomStyleFactory$1::load$($String* name, bool initialize) {
	$loadClass(TestCustomStyleFactory$1, name, initialize, &_TestCustomStyleFactory$1_ClassInfo_, allocate$TestCustomStyleFactory$1);
	return class$;
}

$Class* TestCustomStyleFactory$1::class$ = nullptr;