#include <JFileChooserOrientation$1$2.h>

#include <JFileChooserOrientation$1.h>
#include <JFileChooserOrientation.h>
#include <java/awt/event/ActionEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <jcpp.h>

#undef SEVERE

using $JFileChooserOrientation = ::JFileChooserOrientation;
using $JFileChooserOrientation$1 = ::JFileChooserOrientation$1;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ActionListener = ::java::awt::event::ActionListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;

$FieldInfo _JFileChooserOrientation$1$2_FieldInfo_[] = {
	{"this$0", "LJFileChooserOrientation$1;", nullptr, $FINAL | $SYNTHETIC, $field(JFileChooserOrientation$1$2, this$0)},
	{}
};

$MethodInfo _JFileChooserOrientation$1$2_MethodInfo_[] = {
	{"<init>", "(LJFileChooserOrientation$1;)V", nullptr, 0, $method(static_cast<void(JFileChooserOrientation$1$2::*)($JFileChooserOrientation$1*)>(&JFileChooserOrientation$1$2::init$))},
	{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JFileChooserOrientation$1$2_EnclosingMethodInfo_ = {
	"JFileChooserOrientation$1",
	"run",
	"()V"
};

$InnerClassInfo _JFileChooserOrientation$1$2_InnerClassesInfo_[] = {
	{"JFileChooserOrientation$1", nullptr, nullptr, 0},
	{"JFileChooserOrientation$1$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JFileChooserOrientation$1$2_ClassInfo_ = {
	$ACC_SUPER,
	"JFileChooserOrientation$1$2",
	"java.lang.Object",
	"java.awt.event.ActionListener",
	_JFileChooserOrientation$1$2_FieldInfo_,
	_JFileChooserOrientation$1$2_MethodInfo_,
	nullptr,
	&_JFileChooserOrientation$1$2_EnclosingMethodInfo_,
	_JFileChooserOrientation$1$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"JFileChooserOrientation"
};

$Object* allocate$JFileChooserOrientation$1$2($Class* clazz) {
	return $of($alloc(JFileChooserOrientation$1$2));
}

void JFileChooserOrientation$1$2::init$($JFileChooserOrientation$1* this$0) {
	$set(this, this$0, this$0);
}

void JFileChooserOrientation$1$2::actionPerformed($ActionEvent* e) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$JFileChooserOrientation::pass();
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$load($JFileChooserOrientation);
		$init($Level);
		$nc($($Logger::getLogger($($JFileChooserOrientation::class$->getName()))))->log($Level::SEVERE, ($String*)nullptr, static_cast<$Throwable*>(ex));
	}
}

JFileChooserOrientation$1$2::JFileChooserOrientation$1$2() {
}

$Class* JFileChooserOrientation$1$2::load$($String* name, bool initialize) {
	$loadClass(JFileChooserOrientation$1$2, name, initialize, &_JFileChooserOrientation$1$2_ClassInfo_, allocate$JFileChooserOrientation$1$2);
	return class$;
}

$Class* JFileChooserOrientation$1$2::class$ = nullptr;