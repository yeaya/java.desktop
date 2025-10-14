#include <bug7072653$1.h>

#include <bug7072653.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/DefaultComboBoxModel.h>
#include <jcpp.h>

using $bug7072653 = ::bug7072653;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultComboBoxModel = ::javax::swing::DefaultComboBoxModel;

$MethodInfo _bug7072653$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(bug7072653$1::*)()>(&bug7072653$1::init$))},
	{"getElementAt", "(I)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getSize", "()I", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _bug7072653$1_EnclosingMethodInfo_ = {
	"bug7072653",
	"setup",
	"(Ljava/lang/String;Ljava/awt/GraphicsDevice;)V"
};

$InnerClassInfo _bug7072653$1_InnerClassesInfo_[] = {
	{"bug7072653$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _bug7072653$1_ClassInfo_ = {
	$ACC_SUPER,
	"bug7072653$1",
	"javax.swing.DefaultComboBoxModel",
	nullptr,
	nullptr,
	_bug7072653$1_MethodInfo_,
	nullptr,
	&_bug7072653$1_EnclosingMethodInfo_,
	_bug7072653$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"bug7072653"
};

$Object* allocate$bug7072653$1($Class* clazz) {
	return $of($alloc(bug7072653$1));
}

void bug7072653$1::init$() {
	$DefaultComboBoxModel::init$();
}

$Object* bug7072653$1::getElementAt(int32_t index) {
	return $of($str({"Element "_s, $$str(index)}));
}

int32_t bug7072653$1::getSize() {
	return 400;
}

bug7072653$1::bug7072653$1() {
}

$Class* bug7072653$1::load$($String* name, bool initialize) {
	$loadClass(bug7072653$1, name, initialize, &_bug7072653$1_ClassInfo_, allocate$bug7072653$1);
	return class$;
}

$Class* bug7072653$1::class$ = nullptr;