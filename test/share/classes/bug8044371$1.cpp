#include <bug8044371$1.h>

#include <bug8044371.h>
#include <java/awt/Dimension.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $bug8044371 = ::bug8044371;
using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPanel = ::javax::swing::JPanel;

$FieldInfo _bug8044371$1_FieldInfo_[] = {
	{"this$0", "Lbug8044371;", nullptr, $FINAL | $SYNTHETIC, $field(bug8044371$1, this$0)},
	{}
};

$MethodInfo _bug8044371$1_MethodInfo_[] = {
	{"<init>", "(Lbug8044371;)V", nullptr, 0, $method(static_cast<void(bug8044371$1::*)($bug8044371*)>(&bug8044371$1::init$))},
	{}
};

$EnclosingMethodInfo _bug8044371$1_EnclosingMethodInfo_ = {
	"bug8044371",
	"<init>",
	"(Ljavax/swing/JFrame;)V"
};

$InnerClassInfo _bug8044371$1_InnerClassesInfo_[] = {
	{"bug8044371$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug8044371$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug8044371$1",
	"javax.swing.JPanel",
	nullptr,
	_bug8044371$1_FieldInfo_,
	_bug8044371$1_MethodInfo_,
	nullptr,
	&_bug8044371$1_EnclosingMethodInfo_,
	_bug8044371$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug8044371"
};

$Object* allocate$bug8044371$1($Class* clazz) {
	return $of($alloc(bug8044371$1));
}

void bug8044371$1::init$($bug8044371* this$0) {
	$set(this, this$0, this$0);
	$JPanel::init$();
	{
		setPreferredSize($$new($Dimension, 1500, 1500));
	}
}

bug8044371$1::bug8044371$1() {
}

$Class* bug8044371$1::load$($String* name, bool initialize) {
	$loadClass(bug8044371$1, name, initialize, &_bug8044371$1_ClassInfo_, allocate$bug8044371$1);
	return class$;
}

$Class* bug8044371$1::class$ = nullptr;