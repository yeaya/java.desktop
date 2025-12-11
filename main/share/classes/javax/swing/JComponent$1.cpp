#include <javax/swing/JComponent$1.h>

#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

$MethodInfo _JComponent$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JComponent$1::*)()>(&JComponent$1::init$))},
	{"compWriteObjectNotify", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC},
	{"getFlag", "(Ljavax/swing/JComponent;I)Z", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JComponent$1_EnclosingMethodInfo_ = {
	"javax.swing.JComponent",
	nullptr,
	nullptr
};

$InnerClassInfo _JComponent$1_InnerClassesInfo_[] = {
	{"javax.swing.JComponent$1", nullptr, nullptr, 0},
	{"sun.swing.SwingAccessor$JComponentAccessor", "sun.swing.SwingAccessor", "JComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _JComponent$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JComponent$1",
	"java.lang.Object",
	"sun.swing.SwingAccessor$JComponentAccessor",
	nullptr,
	_JComponent$1_MethodInfo_,
	nullptr,
	&_JComponent$1_EnclosingMethodInfo_,
	_JComponent$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JComponent"
};

$Object* allocate$JComponent$1($Class* clazz) {
	return $of($alloc(JComponent$1));
}

void JComponent$1::init$() {
}

bool JComponent$1::getFlag($JComponent* comp, int32_t aFlag) {
	return $nc(comp)->getFlag(aFlag);
}

void JComponent$1::compWriteObjectNotify($JComponent* comp) {
	$nc(comp)->compWriteObjectNotify();
}

JComponent$1::JComponent$1() {
}

$Class* JComponent$1::load$($String* name, bool initialize) {
	$loadClass(JComponent$1, name, initialize, &_JComponent$1_ClassInfo_, allocate$JComponent$1);
	return class$;
}

$Class* JComponent$1::class$ = nullptr;

	} // swing
} // javax