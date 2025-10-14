#include <javax/swing/JRootPane$1.h>

#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JRootPane.h>
#include <jcpp.h>

#undef CENTER

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JRootPane = ::javax::swing::JRootPane;

namespace javax {
	namespace swing {

$FieldInfo _JRootPane$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JRootPane;", nullptr, $FINAL | $SYNTHETIC, $field(JRootPane$1, this$0)},
	{}
};

$MethodInfo _JRootPane$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JRootPane;)V", nullptr, 0, $method(static_cast<void(JRootPane$1::*)($JRootPane*)>(&JRootPane$1::init$))},
	{"addLayoutComponent", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JRootPane$1_EnclosingMethodInfo_ = {
	"javax.swing.JRootPane",
	"createContentPane",
	"()Ljava/awt/Container;"
};

$InnerClassInfo _JRootPane$1_InnerClassesInfo_[] = {
	{"javax.swing.JRootPane$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JRootPane$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JRootPane$1",
	"java.awt.BorderLayout",
	nullptr,
	_JRootPane$1_FieldInfo_,
	_JRootPane$1_MethodInfo_,
	nullptr,
	&_JRootPane$1_EnclosingMethodInfo_,
	_JRootPane$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JRootPane"
};

$Object* allocate$JRootPane$1($Class* clazz) {
	return $of($alloc(JRootPane$1));
}

void JRootPane$1::init$($JRootPane* this$0) {
	$set(this, this$0, this$0);
	$BorderLayout::init$();
}

void JRootPane$1::addLayoutComponent($Component* comp, Object$* constraints$renamed) {
	$var($Object, constraints, constraints$renamed);
	if (constraints == nullptr) {
		$init($BorderLayout);
		$assign(constraints, $BorderLayout::CENTER);
	}
	$BorderLayout::addLayoutComponent(comp, constraints);
}

JRootPane$1::JRootPane$1() {
}

$Class* JRootPane$1::load$($String* name, bool initialize) {
	$loadClass(JRootPane$1, name, initialize, &_JRootPane$1_ClassInfo_, allocate$JRootPane$1);
	return class$;
}

$Class* JRootPane$1::class$ = nullptr;

	} // swing
} // javax