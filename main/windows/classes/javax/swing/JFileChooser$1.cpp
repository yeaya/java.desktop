#include <javax/swing/JFileChooser$1.h>

#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;

namespace javax {
	namespace swing {

$FieldInfo _JFileChooser$1_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JFileChooser;", nullptr, $FINAL | $SYNTHETIC, $field(JFileChooser$1, this$0)},
	{}
};

$MethodInfo _JFileChooser$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, 0, $method(static_cast<void(JFileChooser$1::*)($JFileChooser*)>(&JFileChooser$1::init$))},
	{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _JFileChooser$1_EnclosingMethodInfo_ = {
	"javax.swing.JFileChooser",
	"showDialog",
	"(Ljava/awt/Component;Ljava/lang/String;)I"
};

$InnerClassInfo _JFileChooser$1_InnerClassesInfo_[] = {
	{"javax.swing.JFileChooser$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _JFileChooser$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.swing.JFileChooser$1",
	"java.awt.event.WindowAdapter",
	nullptr,
	_JFileChooser$1_FieldInfo_,
	_JFileChooser$1_MethodInfo_,
	nullptr,
	&_JFileChooser$1_EnclosingMethodInfo_,
	_JFileChooser$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JFileChooser"
};

$Object* allocate$JFileChooser$1($Class* clazz) {
	return $of($alloc(JFileChooser$1));
}

void JFileChooser$1::init$($JFileChooser* this$0) {
	$set(this, this$0, this$0);
	$WindowAdapter::init$();
}

void JFileChooser$1::windowClosing($WindowEvent* e) {
	this->this$0->returnValue = 1;
}

JFileChooser$1::JFileChooser$1() {
}

$Class* JFileChooser$1::load$($String* name, bool initialize) {
	$loadClass(JFileChooser$1, name, initialize, &_JFileChooser$1_ClassInfo_, allocate$JFileChooser$1);
	return class$;
}

$Class* JFileChooser$1::class$ = nullptr;

	} // swing
} // javax