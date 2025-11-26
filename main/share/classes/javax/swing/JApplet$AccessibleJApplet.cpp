#include <javax/swing/JApplet$AccessibleJApplet.h>

#include <java/applet/Applet$AccessibleApplet.h>
#include <java/applet/Applet.h>
#include <javax/swing/JApplet.h>
#include <jcpp.h>

using $Applet = ::java::applet::Applet;
using $Applet$AccessibleApplet = ::java::applet::Applet$AccessibleApplet;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JApplet = ::javax::swing::JApplet;

namespace javax {
	namespace swing {

$FieldInfo _JApplet$AccessibleJApplet_FieldInfo_[] = {
	{"this$0", "Ljavax/swing/JApplet;", nullptr, $FINAL | $SYNTHETIC, $field(JApplet$AccessibleJApplet, this$0)},
	{}
};

$MethodInfo _JApplet$AccessibleJApplet_MethodInfo_[] = {
	{"<init>", "(Ljavax/swing/JApplet;)V", nullptr, $PROTECTED, $method(static_cast<void(JApplet$AccessibleJApplet::*)($JApplet*)>(&JApplet$AccessibleJApplet::init$))},
	{}
};

$InnerClassInfo _JApplet$AccessibleJApplet_InnerClassesInfo_[] = {
	{"javax.swing.JApplet$AccessibleJApplet", "javax.swing.JApplet", "AccessibleJApplet", $PROTECTED},
	{"java.applet.Applet$AccessibleApplet", "java.applet.Applet", "AccessibleApplet", $PROTECTED},
	{}
};

$ClassInfo _JApplet$AccessibleJApplet_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.JApplet$AccessibleJApplet",
	"java.applet.Applet$AccessibleApplet",
	nullptr,
	_JApplet$AccessibleJApplet_FieldInfo_,
	_JApplet$AccessibleJApplet_MethodInfo_,
	nullptr,
	nullptr,
	_JApplet$AccessibleJApplet_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.swing.JApplet"
};

$Object* allocate$JApplet$AccessibleJApplet($Class* clazz) {
	return $of($alloc(JApplet$AccessibleJApplet));
}

void JApplet$AccessibleJApplet::init$($JApplet* this$0) {
	$set(this, this$0, this$0);
	$Applet$AccessibleApplet::init$(this$0);
}

JApplet$AccessibleJApplet::JApplet$AccessibleJApplet() {
}

$Class* JApplet$AccessibleJApplet::load$($String* name, bool initialize) {
	$loadClass(JApplet$AccessibleJApplet, name, initialize, &_JApplet$AccessibleJApplet_ClassInfo_, allocate$JApplet$AccessibleJApplet);
	return class$;
}

$Class* JApplet$AccessibleJApplet::class$ = nullptr;

	} // swing
} // javax