#include <javax/swing/plaf/basic/BasicDirectoryModel$1.h>

#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicDirectoryModel.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $BasicDirectoryModel = ::javax::swing::plaf::basic::BasicDirectoryModel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicDirectoryModel$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicDirectoryModel;", nullptr, $FINAL | $SYNTHETIC, $field(BasicDirectoryModel$1, this$0)},
	{"val$busy", "Z", nullptr, $FINAL | $SYNTHETIC, $field(BasicDirectoryModel$1, val$busy)},
	{}
};

$MethodInfo _BasicDirectoryModel$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicDirectoryModel;Z)V", "()V", 0, $method(static_cast<void(BasicDirectoryModel$1::*)($BasicDirectoryModel*,bool)>(&BasicDirectoryModel$1::init$))},
	{"run", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicDirectoryModel$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicDirectoryModel",
	"setBusy",
	"(ZI)V"
};

$InnerClassInfo _BasicDirectoryModel$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicDirectoryModel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicDirectoryModel$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicDirectoryModel$1",
	"java.lang.Object",
	"java.lang.Runnable",
	_BasicDirectoryModel$1_FieldInfo_,
	_BasicDirectoryModel$1_MethodInfo_,
	nullptr,
	&_BasicDirectoryModel$1_EnclosingMethodInfo_,
	_BasicDirectoryModel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicDirectoryModel"
};

$Object* allocate$BasicDirectoryModel$1($Class* clazz) {
	return $of($alloc(BasicDirectoryModel$1));
}

void BasicDirectoryModel$1::init$($BasicDirectoryModel* this$0, bool val$busy) {
	$set(this, this$0, this$0);
	this->val$busy = val$busy;
}

void BasicDirectoryModel$1::run() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, "busy"_s);
	$var($Object, var$1, $of($Boolean::valueOf(!this->val$busy)));
	this->this$0->firePropertyChange(var$0, var$1, $($Boolean::valueOf(this->val$busy)));
}

BasicDirectoryModel$1::BasicDirectoryModel$1() {
}

$Class* BasicDirectoryModel$1::load$($String* name, bool initialize) {
	$loadClass(BasicDirectoryModel$1, name, initialize, &_BasicDirectoryModel$1_ClassInfo_, allocate$BasicDirectoryModel$1);
	return class$;
}

$Class* BasicDirectoryModel$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax