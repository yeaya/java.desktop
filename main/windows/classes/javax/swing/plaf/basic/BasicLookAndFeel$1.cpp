#include <javax/swing/plaf/basic/BasicLookAndFeel$1.h>

#include <java/beans/PropertyChangeEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <jcpp.h>

using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$FieldInfo _BasicLookAndFeel$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/plaf/basic/BasicLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(BasicLookAndFeel$1, this$0)},
	{}
};

$MethodInfo _BasicLookAndFeel$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/plaf/basic/BasicLookAndFeel;)V", nullptr, 0, $method(static_cast<void(BasicLookAndFeel$1::*)($BasicLookAndFeel*)>(&BasicLookAndFeel$1::init$))},
	{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _BasicLookAndFeel$1_EnclosingMethodInfo_ = {
	"javax.swing.plaf.basic.BasicLookAndFeel",
	"installAWTEventListener",
	"()V"
};

$InnerClassInfo _BasicLookAndFeel$1_InnerClassesInfo_[] = {
	{"javax.swing.plaf.basic.BasicLookAndFeel$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _BasicLookAndFeel$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.plaf.basic.BasicLookAndFeel$1",
	"java.lang.Object",
	"java.beans.PropertyChangeListener",
	_BasicLookAndFeel$1_FieldInfo_,
	_BasicLookAndFeel$1_MethodInfo_,
	nullptr,
	&_BasicLookAndFeel$1_EnclosingMethodInfo_,
	_BasicLookAndFeel$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.plaf.basic.BasicLookAndFeel"
};

$Object* allocate$BasicLookAndFeel$1($Class* clazz) {
	return $of($alloc(BasicLookAndFeel$1));
}

void BasicLookAndFeel$1::init$($BasicLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

void BasicLookAndFeel$1::propertyChange($PropertyChangeEvent* prpChg) {
	this->this$0->uninitialize();
}

BasicLookAndFeel$1::BasicLookAndFeel$1() {
}

$Class* BasicLookAndFeel$1::load$($String* name, bool initialize) {
	$loadClass(BasicLookAndFeel$1, name, initialize, &_BasicLookAndFeel$1_ClassInfo_, allocate$BasicLookAndFeel$1);
	return class$;
}

$Class* BasicLookAndFeel$1::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax